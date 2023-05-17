#include <stdio.h>
#include <unistd.h>
char stu_digit_to_char (int nb);

void stu_putchar(char c)
{
    write(1,&c,1);
}

int main(void)
{
    char tmp;
    tmp = stu_digit_to_char(5);
if (tmp == '5') {
puts("OK");
} else {
puts("not OK");
}
}
