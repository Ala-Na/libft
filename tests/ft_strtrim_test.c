#include "tests.h"

static int	test_6() 
{
	char *trim = ft_strtrim("try", NULL);
	printf("Test 6 : ");
	if (!strcmp(trim, "try")) {
		free(trim);
		printf("ok\n");
		return (0);
	}
	else {
		if (trim)
			free(trim);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_5() 
{
	char *trim = ft_strtrim(NULL, "try");
	printf("Test 5 : ");
	if (!trim) {
		printf("ok\n");
		return (0);
	}
	else {
		if (trim)
			free(trim);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_4() 
{
	char *str[2] = {"trim everything", "trimevrhyng "};
	char *trim = ft_strtrim(str[0], str[1]);
	printf("Test 4 : ");
	if (!strcmp(trim, "")) {
		free(trim);
		printf("ok\n");
		return (0);
	}
	else {
		if (trim)
			free(trim);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_3() 
{
	char *str[2] = {"", "yol "};
	char *trim = ft_strtrim(str[0], str[1]);
	printf("Test 3 : ");
	if (!strcmp(trim, str[0])) {
		free(trim);
		printf("ok\n");
		return (0);
	}
	else {
		if (trim)
			free(trim);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_2() 
{
	char *str[2] = {"Nothing to trim", "yol "};
	char *trim = ft_strtrim(str[0], str[1]);
	printf("Test 2 : ");
	if (!strcmp(trim, str[0])) {
		free(trim);
		printf("ok\n");
		return (0);
	}
	else {
		if (trim)
			free(trim);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_1() 
{
	char *str[2] = {"\t\n ttttttCeci est un test !ttttttt \t\n", "\t \nt"};
	char *trim = ft_strtrim(str[0], str[1]);
	printf("Test 1 : ");
	if (!strcmp(trim, "Ceci est un test !")) {
		free(trim);
		printf("ok\n");
		return (0);
	}
	else {
		if (trim)
			free(trim);
		printf("ERROR !!!\n");
		return (1);
	}
}

int	test_strtrim() 
{
	int i = 0;
	printf("-------------------------\n");
	printf("	Test strtrim	\n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	i += test_3();
	i += test_4();
	i += test_5();
	i += test_6();
	return (i);
}

