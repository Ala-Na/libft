#include "tests.h" 

static int	called;

static void	f_del(void *content)
{
	free(content);
	called -= 1;
}

static int	test_1()
{
	printf("Test 1 : ");
	t_list *lst;
	called = 3;
	lst = ft_lstnew(strdup("1"));
	lst->next = ft_lstnew(strdup("2"));
	lst->next->next = ft_lstnew(strdup("3"));
	if (!strcmp(lst->content, "1") && !strcmp(lst->next->content, "2") && !strcmp(lst->next->next->content, "3")) {
		ft_lstclear(&lst, f_del);
		if (!called && !lst) {
			printf("ok\n");
			return (0);
		}
	}
	if (lst->next->next) {
		free(lst->next->next->content);
		free(lst->next->next);
	}
	if (lst->next) {
		free(lst->next->content);
		free(lst->next);
	}
	if (lst) {
		free(lst->content);
		free(lst);
	}
	printf("ERROR !!!\n");
	return (1);
}

int	test_lstclear()
{
	int i = 0;
	printf("-------------------------\n");
	printf("    Test lstclear  \n");
	printf("-------------------------\n");
	i += test_1();
	return (i);
}
