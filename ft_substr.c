/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaledrahnama <khaledrahnama@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 10:39:48 by khaledrahna       #+#    #+#             */
/*   Updated: 2026/05/20 12:14:56 by khaledrahna      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*substr;
	size_t	j;
	char	*substr;
	size_t	s_len;

	if(!s)
	return(NULL);
	if(start>=ft_strlen(s))
	return(ft_strdup(""));
	if(len > ft_strlen(s + start))
	len = ft_strlen(s + start);
	substr = malloc(len + 1);
	j = 0;
	while(j< len)
	{
		substr[j] = s[start+j];
		j++;
	}
	substr[j] = '\0';
	return (substr);
} */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

#include <stdio.h>

int	main(void)
{
	const char *str = "Hello, world!";
	unsigned int start = 7;
	size_t len = 5;

	char *result = ft_substr(str, start, len);
	if (result)
	{
		printf("Substring: %s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return (0);
}