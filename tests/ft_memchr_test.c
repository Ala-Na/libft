#include "tests.h"

static int	test_5()
{
	char	str[] = "Yololotrololololololoyolo";

	printf("Test 5 : ");
	if (memchr(str, 'y', 21) == ft_memchr(str, 'y', 21)) {
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
	char	*str = "Yolotrololo\0\0\200trololo";

	printf("Test 4 : ");
	if (memchr(str, 'a', 21) == ft_memchr(str, 'a', 21)) {
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
	char	*str = "Yolotrololo\0\0\200trololo";

	printf("Test 3 : ");
	if (memchr(str, '\0', 1) == ft_memchr(str, '\0', 1)) {
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
	char	*str = "Yolotrololo\0\0\200trololo";

	printf("Test 2 : ");
	if (memchr(str, '\0', 21) == ft_memchr(str, '\0', 21)) {
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
	char	*str = "Yolotrololo\0\0\200trololo";

	printf("Test 1 : ");
	if (memchr(str, '\200', 21) == ft_memchr(str, '\200', 21)) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}
	

int	test_memchr()
{
	int i;

	i = 0;
	printf("-------------------------\n");
	printf("	Test memchr	\n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	i += test_3();
	i += test_4();
	i += test_5();
	return (i);
}

