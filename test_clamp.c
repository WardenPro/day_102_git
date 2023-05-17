/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_102_git/
 * created on:  Wed May 17 18:57:32 2023
 * 1st author:  user
 * description: test_clamp.c
*/

#include <stdio.h>

int stu_clamp(int low, int high, int nmb );

int main(void)
{
int res;
res = stu_clamp(5, 10, 4);
printf("%d\n", res);
res = stu_clamp(10, 10, 11);
printf("%d\n", res);
res = stu_clamp(10, 10, 10);
printf("%d\n", res);
res = stu_clamp(0, 10, 4);
printf("%d\n", res);
 return (0);
}
