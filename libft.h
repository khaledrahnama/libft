/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaledrahnama <khaledrahnama@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 09:55:17 by khaledrahna       #+#    #+#             */
/*   Updated: 2026/05/20 11:55:20 by khaledrahna      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>


typedef struct s_list
{
    void			*content;
    struct s_list	*next;
}	t_list;

int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int     ft_isalnum(int c);
int     ft_isupper(int c);
int     ft_islower(int c);
size_t	ft_strlen(const char *s);
void *ft_memset(void *s, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strchr(const char *s, int c);
void ft_lstadd_front(t_list **lst, t_list *new);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strncat(char *dest, const char *src, size_t n);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strstr(const char *haystack, const char *needle);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);
int     ft_atoi(const char *str);
char    *ft_strdup(const char *s);

#endif