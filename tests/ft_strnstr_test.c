#include "tests.h"

static int	test_10()
{
	char	*s1 = "This is a test !";

	printf("Test 10 : ");
	if (!strcmp(strnstr(s1, s1, strlen(s1)), ft_strnstr(s1, s1, strlen(s1)))) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_9()
{
	char	*s1 = "This is a test !";
	char	*s2 = "test !!!";

	printf("Test 9 : ");
	char *e_res = strnstr(s2, s1, 0);
	char *o_res = ft_strnstr(s2, s1, 0);
	if (o_res == e_res || !strcmp(e_res, o_res)) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_8()
{
	char	*s1 = "This is a test !";
	char	*s2 = "";

	printf("Test 8 : ");
	char *e_res = strnstr(s2, s1, strlen(s1));
	char *o_res = ft_strnstr(s2, s1, strlen(s1));
	if (o_res == e_res || !strcmp(e_res, o_res)) {
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
	char	*s1 = "";
	char	*s2 = "test !!!";

	printf("Test 7 : ");
	char *e_res = strnstr(s2, s1, strlen(s1));
	char *o_res = ft_strnstr(s2, s1, strlen(s1));
	if (o_res == e_res || !strcmp(e_res, o_res)) {
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
	char	*s1 = "This is a test !";
	char	*s2 = "testis";

	printf("Test 6 : ");
	char *e_res = strnstr(s2, s1, strlen(s1));
	char *o_res = ft_strnstr(s2, s1, strlen(s1));
	if (o_res == e_res || !strcmp(e_res, o_res)) {
		printf("ok\n");
		return (0);
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_5()
{
	char	*s1 = "This is a test !";
	char	*s2 = "!";

	printf("Test 5 : ");
	if (!strcmp(strnstr(s1, s2, strlen(s1)), ft_strnstr(s1, s2, strlen(s1)))) {
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
	char	*s1 = "This is a test !";
	char	*s2 = "This ";

	printf("Test 4 : ");
	if (!strcmp(strnstr(s1, s2, strlen(s1)), ft_strnstr(s1, s2, strlen(s1)))) {
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
	char	*s1 = "This is a test !";
	char	*s2 = "test !!!";

	printf("Test 3 : ");
	char *e_res = strnstr(s2, s1, strlen(s1));
	char *o_res = ft_strnstr(s2, s1, strlen(s1));
	if (o_res == e_res || !strcmp(e_res, o_res)) {
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
	char	*s1 = "This is a test !";
	char	*s2 = "test";

	printf("Test 2 : ");
	char *e_res = strnstr(s2, s1, strlen(s1));
	char *o_res = ft_strnstr(s2, s1, strlen(s1));
	if (o_res == e_res || !strcmp(e_res, o_res)) {
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
	char	*s1 = "This is a test !";
	char	*s2 = "test";

	printf("Test 1 : ");
	char *e_res = strnstr(s1, s2, strlen(s1));
	char *o_res = ft_strnstr(s1, s2, strlen(s1));
	if (!strcmp(e_res, o_res)) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

int	test_strnstr()
{
	int i;

	i = 0;
	printf("-------------------------\n");
	printf("	Test strnstr	\n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	i += test_3();
	i += test_4();
	i += test_5();
	i += test_6();
	i += test_7();
	i += test_8();
	i += test_9();
	i += test_10();
	return (i);
}

