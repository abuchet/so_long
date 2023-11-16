/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:53:29 by tblaase           #+#    #+#             */
/*   Updated: 2023/05/01 16:51:30 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_atoi(const char *str);
void	*ft_calloc(size_t nelem, size_t elsize);
int		ft_count_c(char *s, char c);
int		ft_count_lines(int fd, int line_length, int img_w);
int		ft_line_length(int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, const char *s2);
size_t	ft_strlen(const char *s);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

void	ft_free_gnl(char **p);
int		ft_strlen_gnl(char *s);
int		ft_strchr_gnl(char *s, int c, int flag);
char	*ft_strnjoin_gnl(char *s1, char *s2, int n);
char	*ft_strndup_gnl(char *str, int n);
void	*ft_calloc_gnl(size_t nelem, size_t elsize);
char	*ft_update_nl_gnl(char **next_line, int position);
char	*ft_output_gnl(char **next_line, int position, int bytes);
char	*get_next_line(int fd);

int		ft_printchar(int c);
int		ft_formats(va_list args, const char format);
int		ft_printf(const char *str, ...);
int		ft_hexlen(unsigned	int num);
void	ft_puthex(unsigned int num, const char format);
int		ft_printhex(unsigned int num, const char format);
int		ft_ptrlen(unsigned long long num);
void	ft_putptr(unsigned long long num);
int		ft_printptr(unsigned long long ptr);
int		ft_uilen(unsigned	int num);
char	*ft_uitoa(unsigned int n);
int		ft_printui(unsigned int n);
void	ft_putstr(char *str);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printpercent(void);

#endif
