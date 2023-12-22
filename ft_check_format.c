#include "ft_printf.h"

int ft_check_format(va_list args, const char *format)
{
    int c;
    int i = 0; // Initialize i to 0
    int count = 0;

    while (format[i])
    {
        if (format[i] == 'c')
        {
            c = va_arg(args, int);
            count += write(1, &c, 1);
        }
        else if (format[i] == 's')
        {
            char *str = va_arg(args, char *);
            if (!str)
                str = "(null)";
            ft_putstr_fd(str, 1);
            count += ft_strlen(str);
        }
        i++;
    }

    return count;
}
