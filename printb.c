/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_102_git/
 * created on:  Wed May 17 18:57:32 2023
 * 1st author:  user
 * description: printb.c
*/

#include <unistd.h>
void stu_putchar(char c)
{
    write(1,&c,1);
}
int main(void)
{
    stu_putchar('b');
    stu_putchar('\n');
    return (0);
}
