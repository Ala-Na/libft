#include "tests.h" 

static int	test_2()
{
	printf("Test 2 : ");
	t_list *lst = NULL;
	int i = ft_lstsize(lst);
	if (!i) {
		printf("ok\n");
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_1()
{
	printf("Test 1 : ");
	t_list *lst;
	lst = ft_lstnew("1");
	lst->next = ft_lstnew("2");
	lst->next->next = ft_lstnew("3");
	lst->next->next->next = ft_lstnew("4");
	int i = ft_lstsize(lst);
	if (i == 4) {
		printf("ok\n");
		free(lst->next->next->next);
		free(lst->next->next);
		free(lst->next);
		free(lst);
		return (0);
	}
	else {
		if (lst->next->next->next)
			free(lst->next->next->next);
		if (lst->next->next)
			free(lst->next->next);
		if (lst->next)
			free(lst->next);
		if (lst)
			free(lst);
		printf("ERROR !!!\n");
		return (1);
	}
}

int	test_lstsize()
{
	int i = 0;
	printf("-------------------------\n");
	printf("    Test lstsize   \n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	return (i);
}
