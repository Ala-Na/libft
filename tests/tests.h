#ifndef TEST_H
#define TEST_H

#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <fcntl.h>

/* Si architecture linux et pas MAC */
#ifdef linux
#include <bsd/string.h>
#endif

/* Structure nécessaire aux fonctions sur listes chainées */
typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/* Prototypes des fonctions à tester disponibles dans libft*/
void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
size_t			ft_strlen(const char *s);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_atoi(const char *nptr);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_strdup(const char *s);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **alst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/* Prototypes des fonctions de testes */
int	test_memset();
int	test_bzero();
int	test_memcpy();
int	test_memccpy();
int	test_memmove();
int	test_memchr();
int	test_memcmp();
int	test_strlen();
int	test_isalpha();
int	test_isdigit();
int	test_isalnum();
int	test_isascii();
int	test_isprint();
int	test_toupper();
int	test_tolower();
int	test_strchr();
int	test_strrchr();
int	test_strncmp();
int	test_strlcpy();
int	test_strlcat();
int	test_strnstr();
int	test_atoi();
int	test_calloc();
int	test_strdup();
int	test_substr();
int	test_strjoin();
int	test_strtrim();
int	test_split();
int	test_itoa();
int	test_strmapi();
int	test_putchar_fd();
int	test_putstr_fd();
int	test_putendl_fd();
int	test_putnbr_fd();
int	test_lstnew();
int	test_lstadd_front();
int	test_lstsize();
int	test_lstlast();
int	test_lstadd_back();
int	test_lstdelone();
int	test_lstclear();
int	test_lstiter();
int	test_lstmap();

/* Structure avec les succès/échecs des tests */
typedef struct s_test
{
	char	*name;
	int	res;
}		t_test;	

#endif
