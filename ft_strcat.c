/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaledrahnama <khaledrahnama@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 09:09:04 by khaledrahna       #+#    #+#             */
/*   Updated: 2026/05/19 09:23:43 by khaledrahna      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
    size_t dest_len = ft_strlen(dest);
    size_t i;

    i = 0;
    while (src[i])
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

    char *result = ft_strcat(dest, src);

    printf("Result: %s\n", result);
    printf("Destination: %s\n", dest);

    return 0;
}