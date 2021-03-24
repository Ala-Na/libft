#include "tests.h"

static int	test_2()
{
	printf("Test 2 : ");
	t_list	*lst;
	lst = ft_lstnew(NULL);
	if (!lst->content && !lst->next) {
		printf("ok\n");
		free(lst);
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		if (lst)
			free(lst);
		return (1);
	}
}

static int	test_1()
{
	printf("Test 1 : ");
	char	*cont = "Coucou les gens";
	t_list	*lst;
	lst = ft_lstnew(cont);
	if (!strcmp(cont, lst->content) && !lst->next) {
		printf("ok\n");
		free(lst);
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		if (lst)
			free(lst);
		return (1);
	}
}

int	test_lstnew()
{
	int i = 0;
	printf("-------------------------\n");
	printf("      Test lstnew   \n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	return (i);
}
