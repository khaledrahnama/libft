/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 21:10:04 by krahnama          #+#    #+#             */
/*   Updated: 2026/05/30 11:02:21 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// this function appends the null-terminated string src to the end of dst. It will append at most dstsize - strlen(dst) - 1 bytes, null-terminating the result.
#include "libft.h"

/* char *ft_strcpy(char *dest, const char *src)
{ 
    char *ptr;
    ptr = dest;
    while(*src)
    {
        *ptr=*src;
        ptr++;
        src++;
    }
    *ptr='\0';
    return dest;
}
 */

/*  char *ft_strlcpy(char *dest, const char *src)
 {
    char *ptr;
    ptr = dest;
    while((*ptr++ = *src++ ));
    return dest;
 }
 */


/* #include<stdio.h>
int main()
{
    char dest[20] = "Hello, ";
    const char *src = "world!";
    ft_strcpy(dest, src);
    printf("%s\n", dest); // Output: "Hello, world!"
} */







 /* 

// here strncpy is written and tested 
char *ft_strncpy(char *dest, const char *src, size_t n)
{
    char *ptr;
    ptr = dest;
      
    while(*src &&  n>0)
    {
        *ptr = *src;
        ptr++;
        src++;
        n--;
        
    }
    while(n>0)
    {
        *ptr = '\0';
        ptr++;
        n--;
    }
    
    return(dest);
}

#include<stdio.h>

int main()
{
    char dest[20] = "Hello, ";
    const char *src = "world!";
     int i;
    i=0;
    
    ft_strncpy(dest, src , 20);
    printf("%s\n", dest); // Output: "Hello, world!"
   
    while(i<400)
    {
        printf("index %d : %d \n", i , dest[i]);
        i++;
    }
} */

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    char *ptr;
    const char *ptr_src;
    ptr_src = src;
    ptr = dest;
    size_t src_length;
    src_length = 0 ;

    while(*src && size >1)
    {
        *ptr = *src;
        ptr++;
        src++;
        size--;
    }
    if (size>0)
    *ptr = '\0';
    while(*ptr_src)
    {
        ptr_src++;
        src_length++;
    }
    return(src_length);
}

/* 
#include<stdio.h>

/* #include<stdio.h>

int main()
{
    char dest[20] = "Hello, ";
    const char *src = "world!";
    int i;
    i = 0;

    ft_strlcpy(dest, src , sizeof(dest));
    printf("%s\n ", dest);

    while(i<200)
    {
        printf("index %d : %d \n", i , dest[i]);
        i++;
    }
} */