/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 21:10:41 by krahnama          #+#    #+#             */
/*   Updated: 2026/05/11 21:53:59 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*char_ptr;
	int			i;

	char_ptr = s;
	i = 0;
	while (char_ptr[i])
	{
		if (*char_ptr == (char)c)
			return ((char *)char_ptr);
		char_ptr++;
		i++;
	}
	if (*char_ptr == (char)c)
		return ((char *)char_ptr);
	return (NULL);
}

/* #include<stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s \n", ft_strchr("something",'t'));
} */