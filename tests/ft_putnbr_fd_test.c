#include "tests.h"

static int	test_5()
{
	int fd = open("fichiertest", O_RDWR | O_CREAT);
	printf("Test 5 : ");
	char *str = "-2147483648";
	int size = strlen(str);
	ft_putnbr_fd(-2147483648, fd);
	lseek(fd, SEEK_SET, 0);
	char s[size];
	read(fd, s, size);
	if (!strncmp(str, s, size)) {
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


static int	test_4()
{
	int fd = open("fichiertest", O_RDWR | O_CREAT);
	printf("Test 4 : ");
	char *str = "2147483647";
	int size = strlen(str);
	ft_putnbr_fd(2147483647, fd);
	lseek(fd, SEEK_SET, 0);
	char s[size];
	read(fd, s, size);
	if (!strncmp(str, s, size)) {
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


static int	test_3()
{
	int fd = open("fichiertest", O_RDWR | O_CREAT);
	printf("Test 3 : ");
	char *str = "-42";
	int size = strlen(str);
	ft_putnbr_fd(-42, fd);
	lseek(fd, SEEK_SET, 0);
	char s[size];
	read(fd, s, size);
	if (!strncmp(str, s, size)) {
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


static int	test_2()
{
	int fd = open("fichiertest", O_RDWR | O_CREAT);
	printf("Test 2 : ");
	char *str = "0";
	int size = strlen(str);
	ft_putnbr_fd(0, fd);
	lseek(fd, SEEK_SET, 0);
	char s[size];
	read(fd, s, size);
	if (!strncmp(str, s, size)) {
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
	char *str = "42";
	int size = strlen(str);
	ft_putnbr_fd(42, fd);
	lseek(fd, SEEK_SET, 0);
	char s[size];
	read(fd, s, size);
	if (!strncmp(str, s, size)) {
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

int	test_putnbr_fd()
{
	int i = 0;
	printf("-------------------------\n");
	printf("      Test putnbr_fd    \n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	i += test_3();
	i += test_4();
	i += test_5();
	return (i);
}
