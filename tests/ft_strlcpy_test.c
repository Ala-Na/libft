#include "tests.h"

static int	test_4()
{
	char	s1[42];
	char	s2[42];
	char	*str = "Strlcpy is less prone error";

	printf("Test 4 : ");
	int i = strlcpy(s1, str, 0);
	int j = ft_strlcpy(s2, str, 0);
	if (!strcmp(s1, s2) && i == j) {
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
	char	s1[42];
	char	s2[42];
	char	*str = "";

	printf("Test 3 : ");
	int i = strlcpy(s1, str, 42);
	int j = ft_strlcpy(s2, str, 42);
	if (!strcmp(s1, s2) && i == j) {
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
	char	s1[42];
	char	s2[42];
	char	*str = "Strlcpy is less prone error than strcpy";

	printf("Test 2 : ");
	int i = strlcpy(s1, str, 2);
	int j = ft_strlcpy(s2, str, 2);
	if (!strcmp(s1, s2) && i == j) {
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
	char	s1[42];
	char	s2[42];
	char	*str = "Strlcpy is less prone error than strcpy";

	printf("Test 1 : ");
	int i = strlcpy(s1, str, 42);
	int j = ft_strlcpy(s2, str, 42);
	if (!strcmp(s1, s2) && i == j) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

int	test_strlcpy()
{
	int i;

	i = 0;
	printf("-------------------------\n");
	printf("	Test strlcpy	\n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	i += test_3();
	i += test_4();
	return (i);
}

