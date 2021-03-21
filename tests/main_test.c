#include "tests.h"

int main()
{
	int i = 15;
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
	j++;
	tests[j].name = "ft_memmove";
	tests[j].res = test_memmove();
	j++;
	tests[j].name = "ft_memchr";
	tests[j].res = test_memchr();
	j++;
	tests[j].name = "ft_memcmp";
	tests[j].res = test_memcmp();
	j++;
	tests[j].name = "ft_strlen";
	tests[j].res = test_strlen();
	j++;
	tests[j].name = "ft_isalpha";
	tests[j].res = test_isalpha();
	j++;
	tests[j].name = "ft_isdigit";
	tests[j].res = test_isdigit();
	j++;
	tests[j].name = "ft_isalnum";
	tests[j].res = test_isalnum();
	j++;
	tests[j].name = "ft_isascii";
	tests[j].res = test_isascii();
	j++;
	tests[j].name = "ft_isprint";
	tests[j].res = test_isprint();
	j++;
	tests[j].name = "ft_toupper",
	tests[j].res = test_toupper();
	j++;
	tests[j].name = "ft_tolower";
	tests[j].res = test_tolower();

	j = 0;
	while (j < i)
	{
		if (tests[j].res)
			printf("\n--------------\nError in %s\n", tests[j].name);
		j++;
	}
	return (0);
}
