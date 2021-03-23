#include "tests.h"

static int	test_8()
{
	char	s1[42] = "Il\0etait une fois";
	char	s2[42] = "Il\0etait une fois";
	char	*str = "Lol\0ilol";

	printf("Test 8 : ");
	strlcat(s1, str, 12);
	strlcat(s1, str, 12);
	int i = strlcat(s1, str, 12);
	ft_strlcat(s2, str, 12);
	ft_strlcat(s2, str, 12);
	int j = ft_strlcat(s2, str, 12);
	if (!strcmp(s1, s2) && i == j) {
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
	char	s1[45] = "Il\0etait une fois";
	char	s2[45] = "Il\0etait une fois";
	char	*str = "Lol\0ilol";

	printf("Test 7 : ");
	int i = strlcat(s1, str, 12);
	int j = ft_strlcat(s2, str, 12);
	if (!strcmp(s1, s2) && i == j) {
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
	char	s1[10] = "";
	char	s2[10] = "";
	char	*str = "Lol";

	printf("Test 6 : ");
	int i = strlcat(s1, str, 3);
	int j = ft_strlcat(s2, str, 3);
	if (!strcmp(s1, s2) && i == j) {
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
	char	s1[42] = "AAAAAAAAAAAAAAAAAAAAAAAAAAA";
	char	s2[42] = "AAAAAAAAAAAAAAAAAAAAAAAAAAA";
	char	*str = "";

	printf("Test 5 : ");
	int i = strlcat(s1, str, 42);
	int j = ft_strlcat(s2, str, 42);
	if (!strcmp(s1, s2) && i == j) {
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
	char	s1[42] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
	char	s2[42] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
	char	*str = "Strlcat is less prone error than strcat";

	printf("Test 4 : ");
	int i = strlcat(s1, str, 0);
	int j = ft_strlcat(s2, str, 0);
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
	char	s1[500] = "test";
	char	s2[500] = "test";
	char	*str = "Strlcat is less prone error than strcat";

	printf("Test 3 : ");
	int i = strlcat(s1, str, 142);
	int j = ft_strlcat(s2, str, 142);
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
	char	s1[11] = "0123456789";
	char	s2[11] = "0123456789";
	char	*str = "Strlcat is less prone error than strcat";

	printf("Test 2 : ");
	int i = strlcat(s1, str, 8);
	int j = ft_strlcat(s2, str, 8);
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
	char	s1[200] = "test";
	char	s2[200] = "test";
	char	*str = "Strlcat is less prone error than strcat";

	printf("Test 1 : ");
	int i = strlcat(s1, str, 8);
	int j = ft_strlcat(s2, str, 8);
	if (!strcmp(s1, s2) && i == j) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

int	test_strlcat()
{
	int i;

	i = 0;
	printf("-------------------------\n");
	printf("	Test strlcat	\n");
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

