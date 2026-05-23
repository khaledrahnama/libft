/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 21:11:44 by krahnama          #+#    #+#             */
/*   Updated: 2026/05/23 11:33:11 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    i=0;
    if (i == n)
    return (0);
    while ( i< n
        &&s1[i] 
        && s2[i] 
        && s1[i] == s2[i] 
        )
    {
        i++;
        n--;
    }
    return((unsigned char)s1[i] - (unsigned char) s2[i]);

}

/* #include<string.h>
#include<stdio.h>
int main()
{
    printf("output: %d \n" , strncmp("something","thing",10));
        printf("output: %d\n" , ft_strncmp("something","thing",10));

} */