#include "tests.h"

static int	split_cmp(char **split, char **exp)
{
	while (*split && *exp) {
		if (!strcmp(*split, *exp)) {
			split++;
			exp++;
		}
		else
			return (1);
	}
	if (*split && !exp)
		return (1);
	if (*exp && !split)
		return (1);
	return (0);
}

static void	free_split(char **split)
{
	int i = 0;
	while (split[i]) {
		free (split[i]);
		i++;
	}
	free(split);
}


static int	test_9() 
{
	char **split = ft_split(NULL, 'y');
	char *exp[1] = {NULL};
	printf("Test 9 : ");
	if (!split_cmp(split, exp)) {
		free_split(split);
		printf("ok\n");
		return (0);
	}
	else {
		if (split)
			free_split(split);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_8() 
{
	char *str = {"full"};
	char **split = ft_split(str, 'y');
	char *exp[2] = {"full", NULL};
	printf("Test 8 : ");
	if (!split_cmp(split, exp)) {
		free_split(split);
		printf("ok\n");
		return (0);
	}
	else {
		if (split)
			free_split(split);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_7() 
{
	char *str = {""};
	char **split = ft_split(str, '\65');
	char *exp[2] = {"", NULL};
	printf("Test 7 : ");
	if (!split_cmp(split, exp)) {
		free_split(split);
		printf("ok\n");
		return (0);
	}
	else {
		if (split)
			free_split(split);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_6() 
{
	char *str = {"             yo        lo         "};
	char **split = ft_split(str, ' ');
	char *exp[3] = {"yo", "lo", NULL};
	printf("Test 6 : ");
	if (!split_cmp(split, exp)) {
		free_split(split);
		printf("ok\n");
		return (0);
	}
	else {
		if (split)
			free_split(split);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_5() 
{
	char *str = {"             yolo"};
	char **split = ft_split(str, ' ');
	char *exp[2] = {"yolo", NULL};
	printf("Test 5 : ");
	if (!split_cmp(split, exp)) {
		free_split(split);
		printf("ok\n");
		return (0);
	}
	else {
		if (split)
			free_split(split);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_4() 
{
	char *str = {"             yolo             "};
	char **split = ft_split(str, ' ');
	char *exp[2] = {"yolo", NULL};
	printf("Test 4 : ");
	if (!split_cmp(split, exp)) {
		free_split(split);
		printf("ok\n");
		return (0);
	}
	else {
		if (split)
			free_split(split);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_3() 
{
	char *str = {"yolo             "};
	char **split = ft_split(str, ' ');
	char *exp[2] = {"yolo", NULL};
	printf("Test 3 : ");
	if (!split_cmp(split, exp)) {
		free_split(split);
		printf("ok\n");
		return (0);
	}
	else {
		if (split)
			free_split(split);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_2() 
{
	char *str = {"             "};
	char **split = ft_split(str, ' ');
	char *exp[1] = {NULL};
	printf("Test 2 : ");
	if (!split_cmp(split, exp)) {
		free_split(split);
		printf("ok\n");
		return (0);
	}
	else {
		if (split)
			free_split(split);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_1() 
{
	char *str = {"Ceci est un test avec peu de caractères delimitants"};
	char **split = ft_split(str, ' ');
	char *exp[10] = {"Ceci", "est", "un", "test", "avec", "peu", "de", "caractères", "delimitants", NULL};
	printf("Test 1 : ");
	if (!split_cmp(split, exp)) {
		free_split(split);
		printf("ok\n");
		return (0);
	}
	else {
		if (split)
			free_split(split);
		printf("ERROR !!!\n");
		return (1);
	}
}

int	test_split() 
{
	int i = 0;
	printf("-------------------------\n");
	printf("	Test split	\n");
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
	return (i);
}

