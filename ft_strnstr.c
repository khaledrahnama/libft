/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 21:12:25 by krahnama          #+#    #+#             */
/*   Updated: 2026/05/30 20:46:59 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < len)
	{
		j = 0;
		while ((i + j) < len && little[j] && big[i + j] && (big[i
				+ j] == little[j]))
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/* #include<stdio.h>
#include <bsd/bsd.h>
#include <stdio.h>

int	main(void)
{
	char *big = {"something that we need to search inside"};
	char *little={"to"};

	char *result;
	result = ft_strnstr(big, little, 30);
	printf(" the result is : %s", result);

} */
