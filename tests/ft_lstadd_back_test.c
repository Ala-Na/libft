#include "tests.h" 

static int	test_2()
{
	printf("Test 1 : ");
	char	*cont2 = "Comment c'est le confinement ?";
	t_list	*o_lst = NULL;
	t_list  *n_lst;
	n_lst = ft_lstnew(cont2);
	ft_lstadd_back(&o_lst, n_lst);
	if (n_lst == o_lst && !strcmp(cont2, o_lst->content) && !o_lst->next) {
		printf("ok\n");
		free(n_lst);
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		if (n_lst)
			free(n_lst);
		return (1);
	}
}

static int	test_1()
{
	printf("Test 1 : ");
	char	*cont1 = "Coucou les gens";
	char	*cont2 = "Comment c'est le confinement ?";
	t_list	*o_lst;
	t_list  *n_lst;
	o_lst = ft_lstnew(cont1);
	n_lst = ft_lstnew(cont2);
	ft_lstadd_back(&o_lst, n_lst);
	if (!strcmp(cont2, o_lst->next->content) && !strcmp(cont1,o_lst->content)) {
		printf("ok\n");
		free(o_lst->next);
		free(o_lst);
		return (0);
	}
	else {
		printf("ERROR !!!\n");
		if (o_lst)
			free(o_lst);
		if (n_lst)
			free(n_lst);
		return (1);
	}
}

int	test_lstadd_back()
{
	int i = 0;
	printf("-------------------------\n");
	printf("    Test lstadd_back   \n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	return (i);
}

