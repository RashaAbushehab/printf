#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void print(char *placeholder, ...) {
    va_list args;
    int len = strlen(placeholder);

    va_start(args, placeholder);
    int i = 0;

    while (i < len) {
        if (placeholder[i] == 'd') {
            int x = va_arg(args, int);
            printf("%d\n", x);
        } else if (placeholder[i] == 'f') {
            double x = va_arg(args, double);
            printf("%f\n", x);
        }
        i++;  // Increment by 1 for any character in the placeholder
    }

    va_end(args);
}

int main() {
    print("ddfd", 1, 2, 10.5, 3);
    return 0;
}



// int sumfunction(int num, ...)
// {
//     va_list args;
//     int i;
//     int x;

//     x = 0;
//     i = 0;
//     va_start(args, num);

//     while(i < num)
//     {
//         x += va_arg(args, int);
//         printf("%d\n", x);
//         i++;
//     }
//     va_end(args);
//     return (x);
// }


// int main()
// {
//    int sum = sumfunction(5, 1, 2, 3, 4, 5);
//     printf("the sum is %d\n", sum);
//     return (0);
// }


// int max(int n, ...)
// {
//     va_list args;
//     int max;
//     max = 0;
//     int i;
//     i = 0;

//     va_start(args, n);
//     while(i < n)
//     {
//         int x = va_arg(args, int);
//         if(i == 0)
//         {
//             max = x;
//         }
//         else if (x > max)
//             max = x;
//         i++;    

//     }
//     va_end(args);
//     return (max);
// }

// int main()
// {
//     int n = max(4, 1, 2, 3 ,4);
//     printf("the max is %d", n);
// }