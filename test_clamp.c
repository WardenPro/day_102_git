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
