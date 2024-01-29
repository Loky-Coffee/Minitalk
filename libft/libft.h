/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:32:21 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/29 07:56:56 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdint.h>
# include <string.h>
# include <stdarg.h>
#include <signal.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_counter
{
	int	counter;
}		t_counter;

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char				*get_next_line(int fd);
void				*ft_memmove1(void *dst, const void *src, size_t len);
void				*ft_calloc1(size_t count, size_t size);
size_t				ft_strlen1(const char *s);
char				*updateeverline(char *everline);
char				*cutline(char *everline, char *newline);
char				*greateline(int fd, char *everline);
char				*ft_strchr1(const char *s, int c);
char				*ft_strjoin1(char const *s1, char const *s2);
size_t				ft_strlcat1(char *dst, const char *src, size_t dstsize);
void				ft_bzero(void *s, size_t n);
int					ft_isalnum(int c);
char				ft_isalpha(int c);
int					ft_isascii(int c);
char				ft_isdigit(int c);
int					ft_isprint(int c);
void				*ft_memset(void *b, int c, size_t len);
size_t				ft_strlen(const char *s);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strnstr(const char *haystack, const char *needle, \
	size_t len);
int					ft_atoi(const char *str);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s1);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void*));
void				ft_lstclear(t_list **lst, void (*del)(void*));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *), \
	void(*del)(void *));
int					ft_lstsize(t_list *lst);
void				free_split(char **split_array);
void				ft_error(char *str, int exit_code);
int					ft_is_min_nbr(int *arg);
int					ft_is_max_nbr(int *arg);
char				ft_bits_to_char(char *bits);
void				ft_char_to_bits(char ch, char *bits);
int					ft_printf(const char *input, ...);
int					ft_putnbr_fd_printf(long int n, int fd, \
	t_counter *data, char *basestr);
size_t				ft_strlen_printf(const char *s);
int					ft_putchar_fd_printf(int c, int fd, t_counter *data);
int					ft_putstr_fd_printf(char *s, int fd, t_counter *data);
int					ft_putptr_printf(unsigned long n, int fd, \
	t_counter *data, char *basestr);

#endif