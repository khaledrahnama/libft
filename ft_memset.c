/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 19:55:36 by krahnama          #+#    #+#             */
/*   Updated: 2026/05/17 22:44:09 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <string.h>
*/

/* void	*memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (s);
} */



void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;
	i = 0;
unsigned char* ptr;
ptr = (unsigned char*)s;

	while (i < n)
	{
		ptr[i] = (unsigned char )c;
		i++;
	}
	return (s);
}

/* #include<stdio.h>

int	main(void)
{
	char test[100]={"something about somehting"};
	printf("before : %s \n",test);
	char* test2 = ft_memset(test, 60, 10);
	printf("after: %s",test2);

}
 */