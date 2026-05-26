/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 14:49:25 by krahnama          #+#    #+#             */
/*   Updated: 2026/05/24 13:10:41 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t count_word(char const* s, char c)
{
    size_t counter;
    size_t i;
    while(s[i] && s[i]!= c)
    {i++;
    if(s[i]==c)
    counter++;
    }
    return (counter);
}

char **ft_split(char const* s, char c)
{
    size_t l;
    l = 0;

    size_t count_word;
    count_word =0;

    size_t w;
    w=0;

    char const* ptr;
    ptr = s;

    if(!s)
    return (NULL);

    while(s[l] && s[l] != c)
    {
        if(s[l]== c && )
        l++;

    }
    l=0;

    char **answer;
    answer = malloc(strlen(s)+count);
    if(!answer)
    return(NULL);
      
        while(s[l] && w < ount )
        {
            answer[w][l] = s[l];    
        if(s[l] != c)
            {
                w++;
            }
            l++;       
        }          
return(answer);
}


#include <stdio.h>
#include<string.h>
int main()
{

}