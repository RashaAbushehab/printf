#include "ft_printf.h"

static int count(unsigned int n)
{
    int count;

    count = 0;
    while(n != 0)
    {
        n /= 16;
        count++;
    }
    return (count);
}

int ft_puthex(unsigned int n, const char *str)
{
    if (n == 0)
        return(ft_putchar('0')); 
    if(n >= 16)
    {
       ft_puthex((n / 16), str);
       ft_puthex((n % 16), str);
    }
    else
    {
        if (n < 10)
            (ft_putchar(n + '0'));
        else  
        {  
            if(*str == 'x')
                (ft_putchar(n - 10 + 'a')); 
            else if(*str == 'X')
                (ft_putchar(n - 10 + 'A'));
        }        
    }
    return (count(n));             
}