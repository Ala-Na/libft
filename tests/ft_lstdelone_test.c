#include "tests.h" 

static int	called;

static void	f_delone(void *content)
{
	free(content);
	called = 0;
}

static int	test_1()
{
	printf("Test 1 : ");
	t_list *lst;
	t_list *nex;
	called = 1;
	lst = ft_lstnew(strdup("yo"));
	nex = ft_lstnew("yo");
	lst->next = nex;
	if (!strcmp(lst->content, "yo") && !strcmp(nex->content, "yo")) {
		ft_lstdelone(lst, f_delone);
		if (!called && !strcmp(nex->content, "yo")) {
			free(nex);
			printf("ok\n");
			return (0);
		}
	}
	if (nex)
		free(nex);
	printf("ERROR !!!\n");
	return (1);
}

int	test_lstdelone()
{
	int i = 0;
	printf("-------------------------\n");
	printf("    Test lstdelone   \n");
	printf("-------------------------\n");
	i += test_1();
	return (i);
}
