/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:43:10 by krahnama          #+#    #+#             */
/*   Updated: 2026/05/23 11:50:39 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest,const void *src, size_t n)
{
	size_t i;
	i=0;
	unsigned char* temp;
	unsigned char* dest_ptr;
	unsigned char* src_ptr;
	temp = malloc( n * sizeof(src_ptr));
	ft_memcpy(temp , src , n);
	while(temp[i] && i < n)
	{
		dest_ptr[i] = temp[i];
		i++;
	}
	return(dest);
}

/* 
// works as it is memcpy because temp is pointing to the src and same memory just a different name, it is not a variable that occupy a new address statically 
void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char* temp;
	temp = (unsigned char*) src;
	unsigned char* dest_ptr;
	dest_ptr = dest; 
	size_t i;
	i=0;
	while(temp[i] && i< n )
	{
	    dest_ptr[i] = temp[i];
		i++;
	}
	return (dest);
}
 */

/* 
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t i;
	i = 0;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char*)dest;
	s = (const unsigned char*)src;
	
	if (d > s)
	{
		i = n;
		while (i > 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
 */

 #include<stdio.h>
 
int main()
{
	char str[20] = "abcdef";
	printf("source string: %s \n",str);
    ft_memmove(str + 2, str, 4);
	printf("destination string: %s",str);

} 