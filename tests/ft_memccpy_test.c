#include "tests.h"

static int	test_6()
{
	char	e_res[42];
	char	o_res[42];
	char	*src = "Ceci\0 est\0 un test";

	printf("Test 6 : ");
	memset(e_res, 'A', 42);
	memset(o_res, 'A', 42);
	memccpy(e_res, src, '\0', 9);
	ft_memccpy(o_res, src,'\0', 9);
	if (!memcmp(e_res, o_res, 42)) {
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
	char	e_res[42];
	char	o_res[42];
	char	*src = "Ceci est un test";

	printf("Test 5 : ");
	memset(e_res, 'A', 42);
	memset(o_res, 'A', 42);
	memccpy(e_res, src, 'z', 0);
	ft_memccpy(o_res, src,'z', 0);
	if (!memcmp(e_res, o_res, 42)) {
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
	char	e_res[42];
	char	o_res[42];
	char	*src = "Ceci est un test";

	printf("Test 4 : ");
	memset(e_res, 'A', 42);
	memset(o_res, 'A', 42);
	memccpy(e_res, src, 'z', 15);
	ft_memccpy(o_res, src,'z', 15);
	if (!memcmp(e_res, o_res, 42)) {
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
	char	*src = "Ceci est toujours un test";

	printf("Test 3 : ");
	memset(e_res, 'A', 42);
	memset(o_res, 'A', 42);
	memccpy(e_res, src, 0600, 26);
	ft_memccpy(o_res, src, 0600, 26);
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
	memccpy(e_res, src, '\200', 21);
	ft_memccpy(o_res, src, '\200', 21);
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
	memccpy(e_res, src, 't', 15);
	ft_memccpy(o_res, src, 't', 15);
	if (!memcmp(e_res, o_res, 42)) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}


int	test_memccpy()
{
	int i;

	i = 0;
	printf("-------------------------\n");
	printf(" 	Test memccpy	\n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	i += test_3();
	i += test_4();
	i += test_5();
	i += test_6();
	return (i);
}
