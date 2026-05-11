/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:43:10 by krahnama          #+#    #+#             */
/*   Updated: 2026/05/11 19:43:16 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* NAME
		memmove - copy memory area

SYNOPSIS
		#include <string.h>

		void *memmove(void *dest, const void *src, size_t n);

DESCRIPTION
		The  memmove()  function  copies n bytes from memory
		area src to memory area dest.
		The memory areas may overlap: copying takes place as
		though the bytes in src are
		first copied into a temporary array that does
			not overlap src or dest,
		and the bytes are then copied from the
		temporary array to dest.

RETURN VALUE
		The memmove() function returns a pointer to dest.

// prevent overwriting when dest > src
 #include<stdio.h>
 */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = dest;
	s = src;
	if (d > s)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	else
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	return (dest);
}

/* int main()
{
	char str[20] = "abcdef";
	printf("source string: %s \n",str);
ft_memmove(str + 2, str, 4);
	printf("destination string: %s",str);

} */