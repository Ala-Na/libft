#include "tests.h"

static int	test_8()
{
	printf("Test 8 : ");
	char	*str = "-0";
	int	i = atoi(str);
	int	j = ft_atoi(str);
	if (i == j) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_7()
{
	printf("Test 7 : ");
	char	*str = "+2147483647";
	int	i = atoi(str);
	int	j = ft_atoi(str);
	if (i == j) {
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
	printf("Test 6 : ");
	char	*str = "-2147483648";
	int	i = atoi(str);
	int	j = ft_atoi(str);
	if (i == j) {
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
	printf("Test 5 : ");
	char	*str = "\20042hello";
	int	i = atoi(str);
	int	j = ft_atoi(str);
	if (i == j) {
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
	printf("Test 4 : ");
	char	*str = "	42";
	int	i = atoi(str);
	int	j = ft_atoi(str);
	if (i == j) {
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
	printf("Test 3 : ");
	char	*str = "      42";
	int	i = atoi(str);
	int	j = ft_atoi(str);
	if (i == j) {
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
	printf("Test 2 : ");
	char	*str = "-042";
	int	i = atoi(str);
	int	j = ft_atoi(str);
	if (i == j) {
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
	printf("Test 1 : ");
	char	*str = "42";
	int	i = atoi(str);
	int	j = ft_atoi(str);
	if (i == j) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

int	test_atoi()
{
	int i;

	i = 0;
	printf("-------------------------\n");
	printf(" 	 Test atoi	\n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	i += test_3();
	i += test_4();
	i += test_5();
	i += test_6();
	i += test_7();
	i += test_8();
	return (i);
}
