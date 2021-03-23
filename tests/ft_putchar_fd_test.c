#include "tests.h"

static int	test_2()
{
	int fd = open("fichiertest", O_RDWR | O_CREAT);
	printf("Test 2 : ");
	ft_putchar_fd('\200', fd);
	lseek(fd, SEEK_SET, 0);
	char s[1];
	read(fd, s, 1);
	if (s[0] == '\200') {
		printf("ok\n");
		unlink("./fichiertest");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		unlink("./fichiertest");
		return (1);
	}
}

static int	test_1()
{
	int fd = open("fichiertest", O_RDWR | O_CREAT);
	printf("Test 1 : ");
	ft_putchar_fd('4', fd);
	lseek(fd, SEEK_SET, 0);
	char s[1];
	read(fd, s, 1);
	if (s[0] == '4') {
		printf("ok\n");
		unlink("./fichiertest");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		unlink("./fichiertest");
		return (1);
	}
}

int	test_putchar_fd()
{
	int i = 0;
	printf("-------------------------\n");
	printf("      Test putchar_fd    \n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	return (i);
}
