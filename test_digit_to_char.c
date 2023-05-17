/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_102_git/
 * created on:  Wed May 17 18:57:32 2023
 * 1st author:  user
 * description: test_digit_to_char.c
*/

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
