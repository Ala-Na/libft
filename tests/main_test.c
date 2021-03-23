#include "tests.h"

/*Macro du nombre de test et arrays avec noms des functions et functions appelées par le main*/
#define I 24

typedef int	(*f)(void);

f test_fun[I] = {&test_memset, &test_bzero,
&test_memcpy, & test_memccpy, &test_memmove, &test_memchr,
&test_memcmp, &test_strlen, &test_isalpha, &test_isdigit, 
&test_isalnum, &test_isascii, &test_isprint, &test_toupper,
&test_tolower, &test_strchr, &test_strrchr, &test_strncmp,
&test_strlcpy, &test_strlcat, &test_strnstr, &test_atoi,
&test_calloc, &test_strdup};

char	*names_fun[I] = {"ft_memset", "ft_bzero", "ft_memcpy", "ft_memccpy",
"ft_memmove", "ft_memchr", "ft_memcmp", "ft_strlen", "ft_isalpha", "ft_isdigit",
"ft_isalnum", "ft_isascii", "ft_isprint", "ft_toupper", "ft_tolower", "ft_strchr",
"ft_strrchr", "ft_strncmp", "ft_strlcpy", "ft_strlcat", "ft_strnstr", "ft_atoi",
"ft_calloc", "ft_strdup"};
int main(int argc, char **argv)
{
	int i;
	if (argc == 2 && !strcmp(argv[1], "all")) {
		printf("Lauching mandatory and bonus tests...\n");
		sleep(2);
		i = I;
	}
	else if (argc == 2 && strcmp(argv[1], "all")) {
		printf("Argument non valid.\n");
		printf("Only argument taken in account is \"all\" for ");
		printf("lauching mandatory and bonus tests.\n");
		return (1);
	}
	else if (argc > 2) {
		printf("Too many arhuments.\ni");
		printf("Only argument taken in account is \"all\" for ");
		printf("lauching mandatory and bonus tests.\n");
	}
	else {
		printf("Lauching only mandatory tests...\n");
		sleep(1);
		i = I;
	}
	int j = 0;
	t_test tests[i];
	while (j < i) {
		tests[j].name = names_fun[j];
		tests[j].res = test_fun[j]();
		j++;
	}
	j = 0;
	while (j < i)
	{
		if (tests[j].res)
			printf("\n--------------\nError in %s\n", tests[j].name);
		j++;
	}
	return (0);
}
