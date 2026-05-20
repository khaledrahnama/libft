/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaledrahnama <khaledrahnama@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 10:39:48 by khaledrahna       #+#    #+#             */
/*   Updated: 2026/05/20 11:59:13 by khaledrahna      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t j;
    char *substr;
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
}

#include <stdio.h>
int main()
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

     return 0;
    
}