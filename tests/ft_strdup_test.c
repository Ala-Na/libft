#include "tests.h"

static int	test_2()
{
	printf("Test 2 : ");
	char *o_str = ft_strdup("");
	char *e_str = strdup("");
	if (o_str && !strcmp(o_str, e_str)) {
		free(o_str);
		free(e_str);
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
	char *o_str = ft_strdup("This is a test");
	char *e_str = strdup("This is a test");
	if (o_str && !strcmp(o_str, e_str)) {
		free(o_str);
		free(e_str);
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

int	test_strdup()
{

	int i = 0;
	printf("-------------------------\n");
	printf("	Test strdup	\n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	return (i);
}

