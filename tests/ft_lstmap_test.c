#include "tests.h" 

static void	*f_iter(void *content)
{
	(void)content;
	return (strdup("Done"));
}

static void	f_del(void *content)
{
	free(content);
}

static int	test_2()
{
	printf("Test 2 : ");
	t_list *lst = NULL;
	t_list *new;
	new = ft_lstmap(lst, &f_iter, &f_del);
	if (!new) {
		printf("ok\n");
		return (0);
	}
	else {
		ft_lstclear(&new, f_del);
		printf("ERROR !!!\n");
		return (1);
	}
}

static int	test_1()
{
	printf("Test 1 : ");
	t_list *lst;
	lst = ft_lstnew(strdup("Nope"));
	lst->next = ft_lstnew(strdup("Nope"));
	t_list *new;
	new = ft_lstmap(lst, &f_iter, &f_del);
	if (!strcmp(new->content, "Done") && !strcmp(new->next->content, "Done")) {
		printf("ok\n");
		ft_lstclear(&lst, &f_del);
		ft_lstclear(&new, &f_del);
		return (0);
	}
	if (lst)
		ft_lstclear(&lst, &f_del);
	if (new)
		ft_lstclear(&new, &f_del);
	printf("ERROR !!!\n");
	return (1);
}

int	test_lstmap()
{
	int i = 0;
	printf("-------------------------\n");
	printf("    Test lstmap  \n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	return (i);
}
