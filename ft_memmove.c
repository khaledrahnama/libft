/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:43:10 by krahnama          #+#    #+#             */
/*   Updated: 2026/05/19 21:20:41 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/* int main()
{
	char str[20] = "abcdef";
	printf("source string: %s \n",str);
ft_memmove(str + 2, str, 4);
	printf("destination string: %s",str);

} */