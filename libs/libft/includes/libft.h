/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:52:24 by lbrangie          #+#    #+#             */
/*   Updated: 2019/02/28 14:22:02 by xmazella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <limits.h>
# include <fcntl.h>
# include "get_next_line.h"
# include "libft_defines.h"
# include "libft_typedefs.h"

char			*ft_itoa(int n);
char			*ft_itoa_base(int n, int base);
char			*ft_str_tolower(char *str);
char			*ft_str_toupper(char *str);
char			*ft_strcapitalize(char *str);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strchr(const char *s, int c);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strdup(const char *s1);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strmap(const char*s, char (*f)(char));
char			*ft_strmapi(const char*s, char (*f)(unsigned int, char));
char			*ft_strncat(char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_strndup(const char *s1, size_t n);
char			*ft_strnew(size_t size);
char			*ft_strnstr(const char *haystack, const char *needle, size_t n);
char			*ft_strpbrk(const char *s1, const char *s2);
char			*ft_strrchr(const char *s, int c);
char			*ft_strrev(char *str);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strsub(const char *s, unsigned int start, size_t len);
char			*ft_strtok(char *str, const char *charset);
char			*ft_strtok_r(char *str, const char *charset, char **old);
char			*ft_strtrim(const char *s);
char			**ft_strsplit(const char *s, char c);
char			**ft_strusplit(const char *s, char *charset);
int				ft_atoi(const char *str);
int				ft_factorial(int nb);
int				ft_fibonacci(int nb);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isblank(int c);
int				ft_ischarset(char c, char *charset);
int				ft_iscntrl(int c);
int				ft_isdigit(int c);
int				ft_isgraph(int c);
int				ft_islower(int c);
int				ft_isneg(long long n);
int				ft_isprime(int n);
int				ft_isprint(int c);
int				ft_ispunct(int c);
int				ft_isspace(int c);
int				ft_isupper(int c);
int				ft_isxdigit(int c);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_nextprime(int n);
int				ft_pgcd(int a, int b);
int				ft_pow(int n, int exp);
int				ft_ppcm(int a, int b);
int				ft_putchar(char c);
int				ft_putchar_endl(char c);
int				ft_putchar_endl_fd(char c, int fd);
int				ft_putchar_fd(char c, int fd);
int				ft_putfile(const char *file_name);
int				ft_putfile_fd(const char *file_name, int fd);
int				ft_putnbr(int n);
int				ft_putnbr_endl(int n);
int				ft_putnbr_endl_fd(int n, int fd);
int				ft_putnbr_fd(int n, int fd);
int				ft_putstr(const char *s);
int				ft_putstr_endl(const char *s);
int				ft_putstr_endl_fd(const char *s, int fd);
int				ft_putstr_fd(const char *s, int fd);
int				ft_sqrt(int nb);
int				ft_str_isalnum(char *str);
int				ft_str_isalpha(char *str);
int				ft_str_isascii(char *str);
int				ft_str_isblank(char *str);
int				ft_str_iscntrl(char *str);
int				ft_str_isdigit(char *str);
int				ft_str_isgraph(char *str);
int				ft_str_islower(char *str);
int				ft_str_isprint(char *str);
int				ft_str_ispunct(char *str);
int				ft_str_isspace(char *str);
int				ft_str_isupper(char *str);
int				ft_str_isxdigit(char *str);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strcprg(char *str, const char *charset, size_t n);
int				ft_strequ(const char*s1, const char*s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strnequ(const char *s1, const char *s2, size_t n);
int				ft_strprg(char *str, char c, size_t n);
int				ft_tolower(int c);
int				ft_toupper(int c);
long			ft_atol(const char *str);
long long		ft_atoll(const char *str);
long long		ft_abs(long long n);
size_t			ft_numlen(intmax_t n);
size_t			ft_numlen_base(intmax_t n, int base);
size_t			ft_strcspn(const char *s, const char *charset);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *s);
size_t			ft_strnlen(const char *s, size_t maxlen);
size_t			ft_strspn(const char *s, const char *charset);
size_t			ft_tablen(char **tab);
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list			*ft_lstnew(const void *content, size_t content_size);
void			ft_bzero(void *s, size_t n);
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void			ft_memdel(void **ap);
void			ft_memprnt(void *addr, unsigned int size);
void			ft_puttab(char **tab);
void			ft_puttab_fd(char **tab, int fd);
void			ft_strclr(char *s);
void			ft_strdel(char **as);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_tabdel(void **tab);
void			*ft_memalloc(size_t size);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *b, int c, size_t len);

#endif
