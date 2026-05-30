/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 09:55:17 by khaledrahna       #+#    #+#             */
/*   Updated: 2026/05/30 17:41:38 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int     ft_isalnum(int c);
int     ft_isupper(int c);
int     ft_islower(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char *ft_strdup(const char *s);

void    *ft_calloc(size_t nmemb, size_t size);
char *ft_strstr(const char *haystack, const char *needle);
char * ft_strnstr(const char *big, const char *little, size_t len);
void ft_bzero(void *s, size_t n);
char *ft_strcat(char *dest, const char *src);

char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const* s1,char const* s2);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));


t_list	*ft_lstnew(void *content);
void	ft_lstclear(t_list **lst, void (*del)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void(*del)(void *));
void ft_lstadd_front(t_list **lst, t_list *new);
void ft_lstadd_back(t_list **lst, t_list *new);




#endif