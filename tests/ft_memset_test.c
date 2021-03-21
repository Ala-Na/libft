#include "tests.h"

static int	test_4()
{
	char	e_res[42];
	char	o_res[42];

	printf("Test 4 : ");
	memset(e_res, 0 ,42);
	memset(o_res, 0, 42);
	ft_memset(o_res, '\300', 0);
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

	printf("Test 3 : ");
	memset(e_res, 0 ,42);
	ft_memset(o_res, 0, 42);
	memset(e_res, '\200' ,42);
	ft_memset(o_res, '\200', 42);
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

	printf("Test 2 : ");
	memset(e_res, 'A', 42);
	ft_memset(o_res, 'A', 42);
	memset(e_res, 'B', 10);
	ft_memset(o_res, 'B', 10); 
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

	printf("Test 1 : ");
	memset(e_res, 0 ,42);
	ft_memset(o_res, 0, 42);
	if (!memcmp(e_res, o_res, 42)) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}
	

int	test_memset()
{
	int i;

	i = 0;
	printf("-------------------------\n");
	printf("	Test memset	\n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	i += test_3();
	i += test_4();
	return (i);
}
