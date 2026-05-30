/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 14:49:25 by krahnama          #+#    #+#             */
/*   Updated: 2026/05/30 11:02:33 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t count_word(char const* s, char c)
{
    size_t counter;
    size_t i;
    i=0;
    counter=0;
    while(s[i])
    {
        while(s[i] == c)
        i++;

        if (s[i])
        counter++;

        while(s[i] && s[i] != c)
        {
            i++;
        }
    }
    return (counter);
}


size_t word_length(char const* s, char c)
{
    
}
char **ft_split(char const* s, char c)
{
    size_t counter = count_word(s,c);
    char **result;
    size_t i;
    i = 0 ; 

    char *word_start;
    while(s[i])
    {
        if(s[i]!= c)
        
    }
   
    while(s[i])
    {
        if (s[i] != c)
        {
        while(s[i] != c)
        {
            result[counter][i] = s[i];
            i++;
        }
        }
        i++;

    }
}


#include <stdio.h>
#include<string.h>
int main()
{

}