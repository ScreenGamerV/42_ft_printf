#include "libftprintf.h"

int main()
{
    int value = 42;
    char text[] = "Helllo";
    ft_printf("Testing` %s, One more time &d, final %c", text, value, 'H');
    //printf("Testing` %s, One more time &d, final %c", text, value, 'L');
    return (0);
}