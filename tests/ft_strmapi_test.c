#include "tests.h"

char	f_mapi(unsigned i, char c) {return (c+i);}

static int	test_2()
{
	printf("Test 2 : ");
	char	*str = "";
	char	*o_res = ft_strmapi(str, f_mapi);
	char	e_res[400];
	int 	size = strlen(str);
	for (int i = 0; i < size; i ++)
		e_res[i] = f_mapi(i, str[i]);
	e_res[size] = 0;
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
	char	*str = "Coucou";
	char	*o_res = ft_strmapi(str, f_mapi);
	char	e_res[400];
	int 	size = strlen(str);
	for (int i = 0; i < size; i ++)
		e_res[i] = f_mapi(i, str[i]);
	e_res[size] = 0;
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

int	test_strmapi()
{
	int i;

	i = 0;
	printf("-------------------------\n");
	printf(" 	Test strmapi	\n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	return (i);
}
