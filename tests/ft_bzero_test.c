#include "tests.h"

static int	test_3()
{
	char	e_res[42];
	char	o_res[42];

	printf("Test 3 : ");
	memset(e_res, 'A', 42);
	memset(o_res, 'A', 42);
	bzero(e_res, 0);
	ft_bzero(o_res, 0);
	if (!memcmp(e_res, o_res, 42))
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

static int	test_2()
{
	char	e_res[42];
	char	o_res[42];

	printf("Test 2 : ");
	memset(e_res, 'A', 42);
	memset(o_res, 'A', 42);
	bzero(e_res, 10);
	ft_bzero(o_res, 10);
	if (!memcmp(e_res, o_res, 42))
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
static int	test_1()
{
	char	e_res[42];
	char	o_res[42];

	printf("Test 1 : ");
	memset(e_res, 'A', 42);
	memset(o_res, 'A', 42);
	bzero(e_res, 42);
	ft_bzero(o_res, 42);
	if (!memcmp(e_res, o_res, 42))
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
	

int	test_bzero()
{
	int i;

	i = 0;
	printf("-------------------------\n");
	printf(" 	 Test bzero	\n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	i += test_3();
	return (i);
}

