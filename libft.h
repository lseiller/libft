/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiller <lseiller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:48:41 by lseiller          #+#    #+#             */
/*   Updated: 2021/12/17 16:21:20 by lseiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <string.h>
# include <errno.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *nptr);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strrchr(const char *s, int c);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_toupper(int c);
void	ft_putendl_fd(char *s, int fd);
int		ft_isdigit(int c);
char	*ft_strtrim(char const *s1, char const *set);
size_t	ft_strlen(const char *s);
int		ft_isprint(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strmapi(char const *s, char (*f) (unsigned int, char));
int		ft_tolower(int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
void	ft_putstr_fd(char *s, int fd);
void	ft_bzero(void *s, size_t n);
void	ft_striteri(char *s, void (*f) (unsigned int, char*));
int		ft_isalnum(int c);
int		ft_isalpha(int c);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_isascii(int c);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **alst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
