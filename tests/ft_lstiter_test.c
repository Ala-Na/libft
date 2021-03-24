#include "tests.h" 

static void	f_iter(void *content)
{
	char str[] = "Done\0";
	memcpy(content, str, 5);
}

static void	f_del(void *content)
{
	free(content);
}

static int	test_2()
{
	printf("Test 2 : ");
	t_list *lst = NULL;
	ft_lstiter(lst, f_iter);
	if (!lst) {
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
	lst = ft_lstnew(strdup("Nope"));
	lst->next = ft_lstnew(strdup("Nope"));
	lst->next->next = ft_lstnew(strdup("Nope"));
	ft_lstiter(lst, f_iter);
	if (!strcmp(lst->content, "Done") && !strcmp(lst->next->content, "Done") && !strcmp(lst->next->next->content, "Done")) {
		printf("ok\n");
		ft_lstclear(&lst, &f_del);
		return (0);
	}
	if (lst)
		ft_lstclear(&lst, &f_del);
	printf("ERROR !!!\n");
	return (1);
}

int	test_lstiter()
{
	int i = 0;
	printf("-------------------------\n");
	printf("    Test lstiter  \n");
	printf("-------------------------\n");
	i += test_1();
	i += test_2();
	return (i);
}

