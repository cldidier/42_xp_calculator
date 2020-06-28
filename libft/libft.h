/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldidier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 09:32:04 by cldidier          #+#    #+#             */
/*   Updated: 2020/06/11 15:28:48 by cldidier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>
# include <stddef.h>
# define BUFFER_SIZE 32

typedef	struct			s_list
{
	void				*content;
	struct s_list		*next;
}						t_list;

void					*ft_memset(void *s, int c, size_t n);
void					ft_bzero(void *s, size_t n);
void					*ft_memcpy(void *dest, const void *src, size_t n);
void					*ft_memccpy(void *dest, const void *src, int c,
																	size_t n);
void					*ft_memmove(void *dest, const void *src, size_t n);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *ptr1, const void *ptr2,
																size_t size);
size_t					ft_strlen(const char *str);
char					*ft_strdup(const char *s);
size_t					ft_strlcat(char *dst, const char *src, size_t size);
char					*ft_strchr(const char *str, int c);
char					*ft_strrchr(const char *str, int c);
char					*ft_strnstr(const char *haystack, const char *needle,
																size_t len);
int						ft_strncmp(const char *first, const char *second,
																size_t length);
int						ft_atoi(const char *str);
int						ft_isalpha(int c);
int						ft_isalnum(int c);
int						ft_isdigit(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
int						ft_toupper(int c);
int						ft_tolower(int c);
void					*ft_calloc(size_t nmemb, size_t size);
size_t					ft_strlcpy(char *dst, const char *src, size_t size);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_substr(const char *s, unsigned int start,
																size_t len);
char					**ft_split(char const *s, char c);
char					*ft_strtrim(char const *s, char const *set);
char					*ft_strmapi(const char *s,
												char (*f)(unsigned int, char));
char					*ft_itoa(int n);
void					ft_putchar_fd(char c, int fd);
void					ft_putnbr_fd(int n, int fd);
void					ft_putstr_fd(char *s, int fd);
void					ft_putendl_fd(char *s, int fd);
t_list					*ft_lstnew(void *content);
void					ft_lstadd_front(t_list **alst, t_list *new);
void					ft_lstclear(t_list **lst, void (*del)(void*));
void					ft_lstdelone(t_list *lst, void (*del)(void*));
void					ft_lstiter(t_list *lst, void (*f)(void *));
t_list					*ft_lstlast(t_list *lst);
t_list					*ft_lstmap(t_list *lst, void *(*f)(void *),
														void (*del)(void *));
void					ft_lstadd_back(t_list **alst, t_list *new);
int						ft_lstsize(t_list *lst);
void					ft_memdel(void **ptr);
int						get_next_line(int fd, char **line);
#endif
