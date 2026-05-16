/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 21:10:41 by krahnama          #+#    #+#             */
/*   Updated: 2026/05/16 15:28:28 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/* 

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str = "something";
	char *ptr;

	printf("%s \n", ft_strchr(str, 't'));
	printf("%s \n", ft_strchr(str, 'x'));
	printf("%s \n", strchr(str, '\0'));
	printf("%s \n", ft_strchr(str, 'g'));

	ptr = ft_strchr(str, '\0');
	printf("address of end : %p \n", ptr);
	printf("character there: %d\n", *ptr);
	printf("Length using pointer math: %ld\n", ptr - str);
	if (*ptr == '\0')
		printf("found null terminator\n");

	printf("%s \n", strchr(str, 't'));
	printf("%s \n", strchr(str, 'x'));
	printf("%s \n", strchr(str, '\0'));
	printf("%s \n", strchr(str, 'g'));
	printf("address of end : %p \n", ptr);
	printf("character there: %d\n", *ptr);
	printf("Length using pointer math: %ld\n", ptr - str);
	if (*ptr == '\0')
		printf("found null terminator\n");
} */