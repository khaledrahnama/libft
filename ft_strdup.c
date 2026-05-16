/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 21:13:06 by krahnama          #+#    #+#             */
/*   Updated: 2026/05/16 17:47:23 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

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

 char *strdup(const char *s)
 {
    char * new_string;
    char *start;
    new_string = malloc(sizeof(char) * strlen(s) + 1);

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
