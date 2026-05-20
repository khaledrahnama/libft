/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaledrahnama <khaledrahnama@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 21:13:06 by krahnama          #+#    #+#             */
/*   Updated: 2026/05/20 12:00:41 by khaledrahna      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
/* char	*ft_strdup(char *src)
{
	char	*copy;
	char	*original_source;
	char	*start_copy;

	original_source = src;
	while (*src)
	{
		src++;
	}
	copy = (char *)malloc(((src - original_source) + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	start_copy = copy;
	src = original_source;
	while (*src)
	{
		*copy++ = *src++;
	}
	*copy = '\0';
	return (start_copy);
}
 */

 char *ft_strdup(const char *s)
 {
    char * new_string;
    char *start;
    new_string = malloc(sizeof(char) * ft_strlen(s) + 1);

if (!new_string)
return (NULL);

start = new_string;

while(*s)
{
    *new_string = *s;
    s++;
    new_string++;
}
*new_string = '\0';

    return(start);
 }

/* #include <stdio.h>
int main()
{
	const char *original = "Hello, world!";
	char *copy = ft_strdup(original);

	if (copy)
	{
		printf("Original: %s\n", original);
		printf("Copy: %s\n", copy);
		free(copy); // Don't forget to free the allocated memory
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return 0;
} */