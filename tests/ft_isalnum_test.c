#include "tests.h"

static int	test_1()
{
	unsigned char i;
	int ret;

	i = 0;
	ret = 0;
	while (i < (unsigned char)262)
	{
		if (isalnum(i) != ft_isalnum(i))
		{
			printf("ERROR !!! For %i == %c with expected result %i and obtained %i\n", i, (unsigned char)i, isalnum(i), ft_isalnum(i));
			ret = 1;
		}
		i++;
	}
	if (!ret)
		printf("Tests : ok\n");
	return (ret);
}
	

int	test_isalnum()
{
	int i;

	i = 0;
	printf("-------------------------\n");
	printf(" 	Test isalnum     \n");
	printf("-------------------------\n");
	i += test_1();	
	return (i);
}


