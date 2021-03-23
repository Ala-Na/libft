#include "tests.h"

static int	test_2()
{
	int fd = open("fichiertest", O_RDWR | O_CREAT);
	printf("Test 2 : ");
	char *str = "Coucou petit\n ㅅscarabe";
	char *exp = "Coucou petit\n ㅅscarabe\n";
	int size = strlen(exp);
	ft_putendl_fd(str, fd);
	lseek(fd, SEEK_SET, 0);
	char s[size];
	read(fd, s, size);
	if (!strncmp(exp, s, size)) {
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
	char *str = "Coucou petit scarabe";
	char *exp = "Coucou petit scarabe\n";
	int size = strlen(exp);
	ft_putendl_fd(str, fd);
	lseek(fd, SEEK_SET, 0);
	char s[size];
	read(fd, s, size);
	if (!strncmp(exp, s, size)) {
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

int	test_putendl_fd()
{
	int i = 0;
	printf("-------------------------\n");
	printf("      Test putendl_fd    \n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	return (i);
}

