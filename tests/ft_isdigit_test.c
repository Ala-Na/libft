#include "tests.h"

static int	test_1()
{
	int i;
	int ret;

	i = -254;
	ret = 0;
	while (i < 2480)
	{
		if (isdigit(i) != ft_isdigit(i))
		{
			printf("ERROR !!! For %i\n", i);
			ret = 1;
		}
		i++;
	}
	if (!ret)
		printf("Tests : ok\n");
	return (ret);
}
	

int	test_isdigit()
{
	int i;

	i = 0;
	printf("-------------------------\n");
	printf("       Test isdigit	\n");
	printf("-------------------------\n");
	i += test_1();	
	return (i);
}


