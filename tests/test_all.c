//for testing isascii
#define _XOPEN_SOURCE 700
#include <stdio.h>
#include "../libft.h"
#include <string.h>
//for character functions
#include <ctype.h>

//actual vs expected output
void test(char *string)
{
    size_t actual = ft_strlen(string);
    size_t expected = strlen(string);
    
    if (actual == expected)
        printf("Test passed: '%s' has length %zu\n", string, actual);
    else
        printf("Test failed: '%s' has length %zu, expected %zu\n", string, actual, expected);
}


void test_char(const char *func_name, 
               int (*ft_func)(int), 
               int (*sys_func)(int), 
               int c)
{
    int actual = ft_func(c);
    int expected = sys_func(c);
    if(expected>=1)
    expected = 1;
    if (actual == expected)
        printf("✅ %s('%c') = %d\n", func_name, c, actual);
    else
        printf("❌ %s('%c') = %d, expected %d\n", func_name, c, actual, expected);
}

int main(void)
{
    //test strlen
    test("Hello, World!"); 
    test("");
    test("42");
    test("This is a longer string.");
    test("Special characters: !@#$%^&*()");

    //test isalnum , isalpha , isascii, isdigit , isprint
    int c=0;
    while(c <=127)
    {
        test_char("ft_isalnum", ft_isalnum, isalnum, c);
        test_char("ft_isalpha", ft_isalpha, isalpha, c);
        test_char("ft_isascii", ft_isascii, isascii, c);
        test_char("ft_isdigit", ft_isdigit, isdigit, c);
        test_char("ft_isprint", ft_isprint, isprint, c);
        test_char("ft_isupper", ft_isupper, isupper,c);
        test_char("ft_islower", ft_islower, islower,c);

        c++;
    }
  
    
     return (0);
}