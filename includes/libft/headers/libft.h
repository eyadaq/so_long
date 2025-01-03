/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaqrabaw <eaqrabaw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:23:35 by eaqrabaw          #+#    #+#             */
/*   Updated: 2024/12/28 00:00:55 by eaqrabaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <ctype.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef enum e_bool
{
	false,
	true
}					t_bool;

size_t				ft_strlen(const char *s);

size_t				ft_strlcat(char *dst, const char *src, size_t size);

size_t				ft_strlcpy(char *dst, const char *src, size_t size);

int					ft_strncmp(const char *s1, const char *s2, size_t n);

long				ft_atol(const char *nptr);

int					ft_atoi(const char *nptr);

char				*ft_itoa(int n);

int					ft_putchar_fd(char c, int fd);

int					ft_putendl_fd(char *s, int fd);

int					ft_putnbr_fd(int n, int fd);

int					ft_putstr_fd(char *s, int fd);

void				ft_striteri(char *s, void (*f)(unsigned int, char *));

char				**ft_split(char const *s, char c);

char				*ft_strjoin(char const *s1, char const *s2);

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char				*ft_strtrim(char const *s1, char const *set);

char				*ft_substr(char const *s, unsigned int start, size_t len);

void				ft_bzero(void *s, size_t n);

void				*ft_calloc(size_t nmemb, size_t size);

int					ft_isalnum(int c);

int					ft_isalpha(int c);

int					ft_isascii(int c);

int					ft_isdigit(int c);

int					ft_isprint(int c);

void				*ft_memccpy(void *dest, const void *src, int c, size_t n);

void				*ft_memchr(const void *s, int c, size_t n);

int					ft_memcmp(const void *s1, const void *s2, size_t n);

void				*ft_memcpy(void *dest, const void *src, size_t n);

void				*ft_memmove(void *dest, const void *src, size_t n);

void				*ft_memset(void *s, int c, size_t n);

char				*ft_strchr(const char *s, int c);

char				*ft_strrchr(const char *s, int c);

char				*ft_strdup(const char *s);

char				*ft_strnstr(const char *big, const char *little,
						size_t len);

int					ft_tolower(int c);

int					ft_toupper(int c);

void				ft_lstadd_back(t_list **lst, t_list *newnode);

void				ft_lstadd_front(t_list **lst, t_list *newnode);

void				ft_lstclear(t_list **lst, void (*del)(void *));

void				ft_lstdelone(t_list *lst, void (*del)(void *));

void				ft_lstiter(t_list *lst, void (*f)(void *));

t_list				*ft_lstlast(t_list *lst);

t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

t_list				*ft_lstnew(void *content);

int					ft_lstsize(t_list *lst);

char				*get_next_line(int fd);

int					ft_printf(const char *var, ...);

int					ft_putunsigned(unsigned int digit);

int					ft_putstr_printf(char *ptr);

int					ft_putptr(void *ptr);

int					ft_puthexa(unsigned int hexa, char x);

void				ft_free_double(char **a);
#endif
