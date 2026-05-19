/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaledrahnama <khaledrahnama@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 09:24:23 by khaledrahna       #+#    #+#             */
/*   Updated: 2026/05/19 10:19:34 by khaledrahna      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
    size_t dest_len = ft_strlen(dest);
    size_t i;

    i = 0;
    while (src[i] && i < n)
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';

    return (dest);
}

#include <stdio.h>
int main()
{
    char dest[20] = "Hello, ";
    const char *src = "world!";

    printf("Before concatenation: %s\n", dest);
    printf("Source: %s\n", src);
    
    char *result = ft_strncat(dest, src, 3);
    printf("Result: %s\n", result);
}
