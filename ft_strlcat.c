/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 21:10:21 by krahnama          #+#    #+#             */
/*   Updated: 2026/05/19 21:20:55 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{

    size_t i;
    i=0;
  

    size_t dst_len;
    dst_len = ft_strlen(dst_len);
    size_t src_len;
    src_len = ft_strlen(src_len);


    while(src[i] && (dst_len + i)< size)
    {
        dst[dst_len + i]= src[i];
        i++;
    }
    dst[dst_len+i]='\0';

    return (dst_len + src_len);
}

#include<stdio.h>

int main()
{
    printf("%s", ft_strlcat("something", " more", 30));
}

