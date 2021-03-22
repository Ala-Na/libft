#include "tests.h"

static int	test_7()
{
	char	*str = "";

	printf("Test 7 : ");
	if (strchr(str, 'h') == ft_strchr(str, 'h')) {
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
	char	*str = "Ceci est un\0 nouveau test !";

	printf("Test 6 : ");
	if (strchr(str, '\0') == ft_strchr(str, '\0')) {
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
	char	*str = "ΐ	Α	Β	Γ	Δ	Ε	Ζ	Η	Θ";

	printf("Test 5 : ");
	if (strchr(str, 915) == ft_strchr(str, 915)) {
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
	char	*str = "Ceci est un nouveau test !";

	printf("Test 4 : ");
	if (strchr(str, 'y') == ft_strchr(str, 'y')) {
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
	char	*str = "Ceci est un nouveau test !";

	printf("Test 3 : ");
	if (strchr(str, 'C') == ft_strchr(str, 'C')) {
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
	char	*str = "Yolotrololo!";

	printf("Test 2 : ");
	if (strchr(str, '!') == ft_strchr(str, '!')) {
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
	char	*str = "Ceci est un nouveau test !";

	printf("Test 1 : ");
	if (strchr(str, 't') == ft_strchr(str, 't')) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}
	

int	test_strchr()
{
	int i;

	i = 0;
	printf("-------------------------\n");
	printf("	Test strchr	\n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	i += test_3();
	i += test_4();
	i += test_5();
	i += test_6();
	i += test_7();
	return (i);
}
