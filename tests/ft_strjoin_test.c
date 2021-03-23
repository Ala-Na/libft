#include "tests.h"


static int	test_6() 
{
	char *join = ft_strjoin(NULL, NULL);
	printf("Test 6 : ");
	if (!join) {
		printf("ok\n");
		return (0);
	}
	else {
		if (join)
			free(join);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_5() 
{
	char *join = ft_strjoin("salut", NULL);
	printf("Test 5 : ");
	if (!strcmp(join, "salut")) {
		free(join);
		printf("ok\n");
		return (0);
	}
	else {
		if (join)
			free(join);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_4() 
{
	char *join = ft_strjoin(NULL, "salut");
	printf("Test 4 : ");
	if (!strcmp(join, "salut")) {
		free(join);
		printf("ok\n");
		return (0);
	}
	else {
		if (join)
			free(join);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_3() 
{
	char	*str1 = "my favorite animal is ";
	char	*str2 = str1 + 20;
	char *join = ft_strjoin(str1, str2);
	printf("Test 3 : ");
	if (!strcmp(join, "my favorite animal is s ")) {
		free(join);
		printf("ok\n");
		return (0);
	}
	else {
		if (join)
			free(join);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_2() 
{
	char *str[3] = {"Ceci est", " un test ", "dans un test !!!"};
	char *tmp;
	char *join = ft_strjoin((tmp = ft_strjoin(str[0], str[1])), str[2]);
	printf("Test 2 : ");
	if (!strcmp(join, "Ceci est un test dans un test !!!")) {
		free(tmp);
		free(join);
		printf("ok\n");
		return (0);
	}
	else {
		if (tmp)
			free(tmp);
		if (join)
			free(join);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_1() 
{
	char *str[2] = {"Ceci est", " un test !"};
	char *join = ft_strjoin(str[0], str[1]);
	printf("Test 1 : ");
	if (!strcmp(join, "Ceci est un test !")) {
		free(join);
		printf("ok\n");
		return (0);
	}
	else {
		if (join)
			free(join);
		printf("ERROR !!!\n");
		return (1);
	}
}

int	test_strjoin() 
{
	int i = 0;
	printf("-------------------------\n");
	printf("	Test strjoin	\n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	i += test_3();
	i += test_4();
	i += test_5();
	i += test_6();
	return (i);
}
