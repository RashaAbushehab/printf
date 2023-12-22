#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"
#include <unistd.h>


int ft_printf(const char *format, ...)
{
    va_list args;
    int count;
    int i = 0;

    count = 0;
    va_start(args, format);
    while (format[i])
    {
        if (format[i] != '%')
        {
            count += write(1, &format[i], 1);
            i++;
        }
        else if (format[i] == '%' && format[i + 1] != '%')
        {
            count += ft_check_format(args, &format[i + 1]); 
            i += 2;
        }
        else if (format[i] == '%' && format[i + 1] == '%')
        {
            count += write(1, "%", 1);
            i += 2;
        }
    }
    va_end(args);
    return (count);
}

int main()
{
	char *str = "hello";
	ft_printf("%d\n", str);
	printf("%s\n", str);

}
