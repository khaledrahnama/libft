/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 21:12:25 by krahnama          #+#    #+#             */
/*   Updated: 2026/05/17 15:55:28 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <bsd/bsd.h>

int main()
{
    printf("location of substring : %s" , strnstr("some strings that we search that for a substring" , "that" , 50) );
}

char * strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    i = 0;
    size_t j;
   
    if(*little == '\0')
    return((char *) big);

    while(i < len)
    {
        j=0;
        while((i+j)<len 
        && little[j] 
        && big[i+j]
        && (big[i+j]==little[j]))
        {j++;}
        if(little[j]=='\0')
        return((char*)&big[i]);
        i++;
    }
    return(NULL);
}