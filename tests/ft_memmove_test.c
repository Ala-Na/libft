#include "tests.h"

static int	test_7()
{
	char	e_res[] = "Encore un test";
	char	o_res[] = "Encore un test";

	printf("Test 7 : ");
	memmove(e_res, e_res, 14);
	ft_memmove(o_res, o_res, 14);
	if (!memcmp(e_res, o_res, 14)) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_6()
{
	char	e_res[240];
	char	o_res[240];
	char	*src = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
	int	size = 240 - 15;

	printf("Test 6 : ");
	memset(e_res, 'A', sizeof(e_res));
	memset(o_res, 'A', sizeof(o_res));
	memcpy(e_res, src, strlen(src));
	memcpy(o_res, src, strlen(src));
	memmove(e_res + 3, e_res, size);
	ft_memmove(o_res + 3, o_res, size);
	if (!memcmp(e_res, o_res, size)) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_5()
{
	char	e_res[0xF0];
	char	o_res[0xF0];
	char	*src = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
	int	size = 0xF0 - 0xF;

	printf("Test 5 : ");
	memset(e_res, 'A', sizeof(e_res));
	memset(o_res, 'A', sizeof(o_res));
	memcpy(e_res, src, strlen(src));
	memcpy(o_res, src, strlen(src));
	memmove(e_res, e_res + 3, size);
	ft_memmove(o_res, o_res + 3, size);
	if (!memcmp(e_res, o_res, size)) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_4()
{
	unsigned long	e_res;
	unsigned long	o_res;
	unsigned long	src = 0xdeadbeef;

	printf("Test 4 : ");
	memmove(&e_res, &src, sizeof(src));
	ft_memmove(&o_res, &src,sizeof(src));
	if (!memcmp(&e_res, &o_res, sizeof(src))) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_3()
{
	char	e_res[42];
	char	o_res[42];
	char	*src = "Ceci est toujours\0 un test";

	printf("Test 3 : ");
	memset(e_res, 'A', 42);
	memset(o_res, 'A', 42);
	memmove(e_res, src, 23);
	ft_memmove(o_res, src, 23);
	if (!memcmp(e_res, o_res, 42)) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_2()
{
	char	e_res[42];
	char	o_res[42];
	char	*src = "Ceci est un autre \200 test";

	printf("Test 2 : ");
	memset(e_res, 'A', 42);
	memset(o_res, 'A', 42);
	memmove(e_res, src, strlen(src));
	ft_memmove(o_res, src, strlen(src));
	if (!memcmp(e_res, o_res, 42)) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_1()
{
	char	e_res[42];
	char	o_res[42];
	char	*src = "Ceci est un test";

	printf("Test 1 : ");
	memset(e_res, 'A', 42);
	memset(o_res, 'A', 42);
	memmove(e_res, src, strlen(src));
	ft_memmove(o_res, src, strlen(src));
	if (!memcmp(e_res, o_res, 42)) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}


int	test_memmove()
{
	int i;

	i = 0;
	printf("-------------------------\n");
	printf(" 	Test memmove	\n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	i += test_3();
	i += test_4();
	i += test_5();
	i += test_6();
	i += test_7();
	return (i);
}

