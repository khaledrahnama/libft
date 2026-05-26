/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 15:59:49 by krahnama          #+#    #+#             */
/*   Updated: 2026/05/26 18:18:11 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const* s1,char const* s2)
{
    char *joined;

    size_t len_s1;
    size_t len_s2;
     size_t i;
    i= 0 ;
    size_t j;
    j = 0;

    if(!s1 || !s2)
    return(NULL);

    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);

    joined = malloc(len_s1 + len_s2 + 1);
    if(!joined)
    return(NULL);

   

    while(s1[i])
    {
        joined[i] = s1[i];
        i++;
    } 
    while(s2[j])
    {
        joined[i + j]= s2[j];
        j++;
    }
    joined [i + j] = '\0';
    return(joined);
    

}

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s1= "something";
    char *s2= " else";
    char *s;

    s = ft_strjoin(s1,s2);
    printf("%s", s);
    free(s);
    
}