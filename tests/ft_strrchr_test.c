#include "tests.h"

static int	test_7()
{
	char	*str = "";

	printf("Test 7 : ");
	if (strrchr(str, 'h') == ft_strrchr(str, 'h')) {
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
	if (strrchr(str, '\0') == ft_strrchr(str, '\0')) {
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
	if (strrchr(str, 915) == ft_strrchr(str, 915)) {
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
	if (strrchr(str, 'y') == ft_strrchr(str, 'y')) {
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
	if (strrchr(str, '!') == ft_strrchr(str, '!')) {
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
	if (strrchr(str, 't') == ft_strrchr(str, 't')) {
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
	if (strrchr(str, 'C') == ft_strrchr(str, 'C')) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}
	

int	test_strrchr()
{
	int i;

	i = 0;
	printf("-------------------------\n");
	printf("	Test strrchr	\n");
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

