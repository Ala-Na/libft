#include "tests.h"

static int	test_3()
{
	printf("Test 3 : ");
	char *o_ptr = ft_calloc (90000000000000, 450);
	char *e_ptr = calloc (90000000000000, 450);
	if (!o_ptr && !e_ptr) {
		printf("ok\n");
		return (0);
	}
	else {
		if (o_ptr)
			free(o_ptr);
		if (e_ptr)
			free(e_ptr);
		printf("ERROR !!!\n");
		return (1);
	}
}


static int	test_2()
{
	printf("Test 2 : ");
	char *o_ptr = ft_calloc (0, 0);
	char *e_ptr = calloc(0, 0);
	if (o_ptr && !o_ptr[0] && !memcmp(o_ptr, e_ptr, 0)) {
		free(e_ptr);
		free(o_ptr);
		printf("ok\n");
		return (0);
	}
	else {
		if (o_ptr)
			free(o_ptr);
		if (e_ptr)
			free(e_ptr);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_1()
{
	printf("Test 1 : ");
	char *o_ptr = ft_calloc(42, sizeof(char));
	char *e_ptr = calloc(42, sizeof(char));
	if (o_ptr && !memcmp(o_ptr, e_ptr, 42)) {
		free(o_ptr);
		free(e_ptr);
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

int	test_calloc()
{

	int i = 0;
	printf("-------------------------\n");
	printf("	Test calloc	\n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	i += test_3();
	return (i);
}
