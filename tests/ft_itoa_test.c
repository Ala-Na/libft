#include "tests.h"

static int	test_5()
{
	printf("Test 5 : ");
	char	*e_res = "0";
	char	*o_res = ft_itoa(0);
	if (!strcmp(e_res, o_res)) {
		free(o_res);
		printf("ok\n");
		return (0);
	}
	else {
		if (o_res)
			free(o_res);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_4()
{
	printf("Test 4 : ");
	char	*e_res = "2147483647";
	char	*o_res = ft_itoa(2147483647);
	if (!strcmp(e_res, o_res)) {
		free(o_res);
		printf("ok\n");
		return (0);
	}
	else {
		if (o_res)
			free(o_res);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_3()
{
	printf("Test 3 : ");
	char	*e_res = "-2147483648";
	char	*o_res = ft_itoa(-2147483648);
	if (!strcmp(e_res, o_res)) {
		free(o_res);
		printf("ok\n");
		return (0);
	}
	else {
		if (o_res)
			free(o_res);
		printf("ERROR !!!\n");
		return (1);
	}
}


static int	test_2()
{
	printf("Test 2 : ");
	char	*e_res = "-42";
	char	*o_res = ft_itoa(-42);
	if (!strcmp(e_res, o_res)) {
		free(o_res);
		printf("ok\n");
		return (0);
	}
	else {
		if (o_res)
			free(o_res);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_1()
{
	printf("Test 1 : ");
	char	*e_res = "42";
	char	*o_res = ft_itoa(42);
	if (!strcmp(e_res, o_res)) {
		free(o_res);
		printf("ok\n");
		return (0);
	}
	else {
		if (o_res)
			free(o_res);
		printf("ERROR !!!\n");
		return (1);
	}
}

int	test_itoa()
{
	int i;

	i = 0;
	printf("-------------------------\n");
	printf(" 	 Test itoa	\n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	i += test_3();
	i += test_4();
	i += test_5();
	return (i);
}

