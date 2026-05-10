/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 17:54:36 by krahnama          #+#    #+#             */
/*   Updated: 2026/05/10 18:07:37 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char* d;
	const unsigned char *s;
	d=dest;
	s=src;
	while(n>0)
	{
		*d=*s;
		d++;
		s++;
		n--;
	}
	return (dest);
}

int main()
{
	char src = "abcd";
	char dest[4];
	size_t n = 2;
	printf("dest before: %s \n", dest);
	ft_memcpy(dest,src,n);
	printf("dest after: %s \n",dest);
	printf("dest before: %s \n", dest);
	memcpy(dest,src,n);
	printf("dest after: %s \n",dest);


}
