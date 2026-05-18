#include <stdio.h>
#include "../libft.h"
#include <string.h>

//actual vs expected output

void test(char *string)
{
    size_t actual_len = ft_strlen(string);
    size_t expected_len = strlen(string);
    if (actual_len == expected_len)
        printf("Test passed: '%s' has length %zu\n", string, actual_len);
    else
        printf("Test failed: '%s' has length %zu, expected %zu\n", string, actual_len, expected_len);
}
int main(void)
{
    test("Hello, World!"); 
    test("");
    test("   ");
    test("42");
    test("This is a longer string.");
    test("Special characters: !@#$%^&*()");
     return (0);
}