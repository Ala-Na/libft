#include "tests.h"

static int	test_5()
{
	char *str = "Vol";
	printf("Test 5 : ");
	if ((unsigned long)str & 0b111)
		str++;
	if (strlen(str) == ft_strlen(str))
	{
		printf("ok\n");
		return (0);
	}
	else
	{
		printf("ERROR !!!\n");
		return (1);
	}

}

static int	test_4()
{
	char	*str = "";

	printf("Test 4 : ");
	if (strlen(str) == ft_strlen(str))
	{
		printf("ok\n");
		return (0);
	}
	else
	{
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_3()
{
	char	*str = "♫♪.ılılıll|̲̅̅●̲̅̅|̲̅̅=̲̅̅|̲̅̅●̲̅̅|llılılı.♫♪";

	printf("Test 3 : ");
	if (strlen(str) == ft_strlen(str))
	{
		printf("ok\n");
		return (0);
	}
	else
	{
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_2()
{
	char	*str = "Test un peu plus \200 complexe \0 \0";

	printf("Test 2 : ");
	if (strlen(str) == ft_strlen(str))
	{
		printf("ok\n");
		return (0);
	}
	else
	{
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_1()
{
	char	*str = "Petit test simple";

	printf("Test 1 : ");
	if (strlen(str) == ft_strlen(str))
	{
		printf("ok\n");
		return (0);
	}
	else
	{
		printf("ERROR !!!\n");
		return (1);
	}
}
	

int	test_strlen()
{
	int i;

	i = 0;
	printf("-------------------------\n");
	printf(" 	 Test strlen	\n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	i += test_3();
	i += test_4();
	i += test_5();
	return (i);
}

