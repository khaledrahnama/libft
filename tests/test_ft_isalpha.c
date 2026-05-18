#include <stdio.h>
#include "../libft.h"
#include <string.h>

//actual vs expected output

void test(char *string)
{
    size_t actual_value = ft_isalpha(string);
    size_t expected_value = isalpha(string);
    if (actual_value == expected_value)
        printf("Test passed: results are : '%s'  and  %zu\n", string, actual_value);
    else
        printf("Test failed: '%s' is not %zu, expected %zu\n", string, actual_value, expected_value);
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