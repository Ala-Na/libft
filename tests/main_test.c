#include "tests.h"

int main()
{
	int i = 4;
	int j = 0;
	t_test tests[i];

	tests[j].name = "ft_memset";
	tests[j].res = test_memset();
	j++;
	tests[j].name = "ft_bzero";
	tests[j].res = test_bzero();
	j++;
	tests[j].name = "ft_memcpy";
	tests[j].res = test_memcpy();
	j++;
	tests[j].name = "ft_memccpy";
	tests[j].res = test_memccpy();

	j = 0;
	while (j < i)
	{
		if (tests[j].res)
			printf("\n--------------\nError in %s\n", tests[j].name);
		j++;
	}
	return (0);
}
