#include <unistd.h>

void stu_putchar(char c)
{
    write(1,&c,1);
}
void stu_print_digit(int test)
{
    stu_putchar('0'+test);
}
