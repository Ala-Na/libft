#include "tests.h"

static int	test_4()
{
	char	e_res[1];
	char	o_res[1];
	char	src[140];

	printf("Test 4 : ");
	memset(e_res, 'A', 1);
	memset(o_res, 'A', 1);
	memset(src, 'B', 140);
	memcpy(e_res, src, 0);
	ft_memcpy(o_res, src, 0);
	if (!memcmp(e_res, o_res, 1))
	{
		printf("ok\n");
		return (0);
	}
	else
	{
		printf("ERROR !!!\n");
		return (1);
	}
}


static int	test_3()
{
	char	e_res[42];
	char	o_res[42];
	char	src[140];

	printf("Test 3 : ");
	memset(e_res, 'A', 42);
	memset(o_res, 'A', 42);
	memset(src, 'B', 140);
	memcpy(e_res, src, 142);
	ft_memcpy(o_res, src, 142);
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
	char	src[140];

	printf("Test 2 : ");
	memset(e_res, 'A', 42);
	memset(o_res, 'A', 42);
	memset(src, 'B', 140);
	memcpy(e_res, src, 10);
	ft_memcpy(o_res, src, 10);
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
	char	src[140];

	printf("Test 1 : ");
	memset(e_res, 'A', 42);
	memset(o_res, 'A', 42);
	memset(src, 'B', 140);
	memcpy(e_res, src, 42);
	ft_memcpy(o_res, src, 42);
	if (!memcmp(e_res, o_res, 42)) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}


int	test_memcpy()
{
	int i;

	i = 0;
	printf("-------------------------\n");
	printf(" 	Test memcpy	\n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	i += test_3();
	i += test_4();
	return (i);
}
