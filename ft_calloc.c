/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 21:12:51 by krahnama          #+#    #+#             */
/*   Updated: 2026/05/25 20:36:54 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void* ptr;
    
    if(size !=0 && nmemb > SIZE_MAX/size)
    return (NULL);

    ptr = malloc( nmemb * size);
    if(!ptr)
    return (NULL);

    ft_bzero(ptr, nmemb*size);
    return(ptr);
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

      int *arr = ft_calloc(5, sizeof(int));

    if (!arr)
    {
        printf("Allocation failed\n");
        return (1);
    }

    printf("Normal calloc test:\n");
    i = 0;
    while (i < 5)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    free(arr);

}