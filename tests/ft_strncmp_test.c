#include "tests.h"

static int	test_10()
{
	char	*s1 = "Yolo";
	char	*s2 = "Yolo\x12tralolo";

	printf("Test 10 : ");
	if (strncmp(s1, s2, 7) == ft_strncmp(s1, s2, 7)) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_9()
{
	char	*s1 = "Yolo\x12trololo";
	char	*s2 = "Yolo\x12tralolo";

	printf("Test 9 : ");
	if (strncmp(s1, s2, 7) == ft_strncmp(s1, s2, 7)) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_8()
{
	char	*s1 = "Yolo\0trololo";
	char	*s2 = "Yolo\0tralolo";

	printf("Test 8 : ");
	if (strncmp(s1, s2, 7) == ft_strncmp(s1, s2, 7)) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_7()
{
	char	*s1 = "\25";
	char	*s2 = "\200";

	printf("Test 7 : ");
	if (strncmp(s1, s2, 400) == ft_strncmp(s1, s2, 400)) {
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
	char	*s1 = "\25";
	char	*s2 = "\200";

	printf("Test 6 : ");
	if (strncmp(s1, s2, 1) == ft_strncmp(s1, s2, 1)) {
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
	char	*s1 = "";
	char	*s2 = "Yolotrololo";

	printf("Test 5 : ");
	if (strncmp(s1, s2, 7) == ft_strncmp(s1, s2, 7)) {
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
	char	*s1 = "Yolo";
	char	*s2 = "";

	printf("Test 4 : ");
	int i = strncmp(s1, s2, 4);
	int j = ft_strncmp(s1, s2, 4);
	if (i == j) {
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
	char	*s1 = "";
	char	*s2 = "";

	printf("Test 3 : ");
	int i = strncmp(s1, s2, strlen(s1));
	int j = ft_strncmp(s1, s2, strlen(s1));
	if (i == j) {
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
	char	*s1 = "Yolotrololo1";
	char	*s2 = "Yolotrololo2";

	printf("Test 2 : ");
	int i = strncmp(s1, s2, strlen(s1));
	int j = ft_strncmp(s1, s2, strlen(s1));
	if (i == j) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!%i %i\n", memcmp(s1, s2, 21), ft_memcmp(s1,s2,21));
		return (1);
	}
}

static int	test_1()
{
	char	*s1 = "Yolotrolola";
	char	*s2 = "Yolotralola";

	printf("Test 1 : ");
	int i = strncmp(s1, s2, strlen(s1));
	int j = ft_strncmp(s1, s2, strlen(s1));
	if (i == j) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

int	test_strncmp()
{
	int i;

	i = 0;
	printf("-------------------------\n");
	printf("	Test strncmp	\n");
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
	i += test_10();
	return (i);
}
