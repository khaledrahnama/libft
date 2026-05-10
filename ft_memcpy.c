/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 14:29:14 by krahnama          #+#    #+#             */
/*   Updated: 2026/05/10 18:22:48 by krahnama         ###   ########.fr       */
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
	char src[]="abcd";
	char dest1[4];
    char dest2[4];
	size_t n = 2;
    
	printf("dest before: %s \n", dest1);
	ft_memcpy(dest1,src,n);
	printf("dest after: %s \n",dest1);

	printf("dest before: %s \n", dest2);
	memcpy(dest2,src,n);
	printf("dest after: %s \n",dest2);


}
