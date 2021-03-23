#include "tests.h"

static int	test_4()
{
	char	*s1 = "Yolotrololo\0\200trololo";
	char	*s2 = "Yolotrololo\0\0\200trololo";

	printf("Test 4 : ");
	if (memcmp(s1, s2, 0) == ft_memcmp(s1, s2, 0)) {
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
	char	*s1 = "Yolotrololo\0\200trololo";
	char	*s2 = "Yolotrololo\0\0\200trololo";

	printf("Test 3 : ");
	if (memcmp(s1, s2, 21) == ft_memcmp(s1, s2, 21)) {
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
	char	*s1 = "Yolotrololo\0\0\200trololo";
	char	*s2 = "Yolotralolo\0\0\200trololo";

	printf("Test 2 : ");
	if (memcmp(s1, s2, 21) == ft_memcmp(s1, s2, 21)) {
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
	char	*s1 = "Yolotrololo\0\0\200trololo";
	char	*s2 = "Yolotrololo\0\0\200trololo";

	printf("Test 1 : ");
	if (memcmp(s1, s2, 21) == ft_memcmp(s1, s2, 21)) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

int	test_memcmp()
{
	int i;

	i = 0;
	printf("-------------------------\n");
	printf("	Test memcmp	\n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	i += test_3();
	i += test_4();
	return (i);
}
