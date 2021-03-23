#include "tests.h"

static int	test_4() 
{
	char *str = "Ceci est Un test !";
	char *sub = ft_substr(str, 9, strlen(str) - 9);
	printf("Test 4 : ");
	if (!memcmp(sub, str + 9, strlen(str) - 8)) {
		free(sub);
		printf("ok\n");
		ft_substr(NULL, 0, 2);
		return (0);
	}
	else {
		if (sub)
			free(sub);
		printf("ERROR !!!\n");
		return (1);
	}
}


static int	test_3()
{
	char *str = "";
	char *sub = ft_substr(str, 2, 0);
	printf("Test 3 : ");
	if (!strncmp(sub, str + 2, 0)) {
		free(sub);
		printf("ok\n");
		return (0);
	}
	else {
		if (sub)
			free(sub);
		printf("ERROR !!!\n");
		return (1);
	}
}


static int	test_2() 
{
	char *str = "Ceci est Un test !";
	char *sub = ft_substr(str, 9, strlen(str) - 9);
	printf("Test 2 : ");
	if (!strcmp(sub, "Un test !")) {
		free(sub);
		printf("ok\n");
		return (0);
	}
	else {
		if (sub)
			free(sub);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_1() 
{
	char *str = "Ceci est Un test !";
	char *sub = ft_substr(str, 0, strlen(str));
	printf("Test 1 : ");
	if (!strcmp(sub, str)) {
		free(sub);
		printf("ok\n");
		return (0);
	}
	else {
		if (sub)
			free(sub);
		printf("ERROR !!!\n");
		return (1);
	}
}

int	test_substr() 
{
	int i = 0;
	printf("-------------------------\n");
	printf("	Test substr	\n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	i += test_3();
	i += test_4();
	return (i);
}
