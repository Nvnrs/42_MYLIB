/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylib42.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:32:04 by nveneros          #+#    #+#             */
/*   Updated: 2025/04/08 11:54:44 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYLIB42_H
# define MYLIB42_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

enum e_bool
{
	FALSE = 0,
	TRUE = 1
};

typedef enum e_bool	t_bool;

/* PRINTF */
# define CONFIG_UPPER	'u'
# define CONFIG_LOWER	'l'
# define FORMAT_C		"c"
# define FORMAT_S		"s"
# define FORMAT_POINTER	"p"
# define FORMATS_INT	"di"
# define FORMATS_UINT	"uxX"
# define FORMAT_PERCENT	"%"
# define LST_FORMATS	"cspdiuxX%"

int				ft_printf(const char *format, ...);
int				check_format(const char *str, char *group_formats);
int				treatment_int(va_list *ap);
int				treatment_unsigned_int(va_list *ap, char format);
int				treatment_pointer(va_list *ap);
int				treatment_char(va_list *ap);
int				treatment_str(va_list *ap);
int				treatment_percent(void);

/* GNL */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char			*get_next_line(int fd);
int				ft_strlen_at_c(char *str, char c);
void			ft_strcat_gnl(char *dest, char *src);
char			*ft_strdup_gnl(char *str);

/* LIBFT */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
size_t			ft_strlen(const char *str);
int				ft_atoi(const char *nptr);
void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t len);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			**ft_split(char const *s, char c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_itoa(int n);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_strdup(const char *s);
void			*ft_calloc(size_t nmemb, size_t size);
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

/* LIBFT CUSTOM */
unsigned int	cft_length_nbr(long nb);
void			cft_putnbr_ui_fd(unsigned int nb, int fd);
char			*cft_dec_to_hex(unsigned long nb, char config);
void			ft_strcpy(char *dest, char *src);
char			*cft_strcat_realloc(char *s1, char *s2);
t_bool			str_contain_c(char *str, char c);
t_bool			c_is_in_charset(char c, char *charset);
void			print_black(void);
void			print_white(void);
void			print_green(void);
void			print_red(void);
void			print_blue(void);
void			print_cyan(void);
void			print_purple(void);
void			print_yellow(void);
void			print_reset(void);

#endif
