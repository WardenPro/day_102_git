#include <stdio.h>

int stu_affine_i(int a, int b, int x);
float stu_affine_f(float a, float b, float x);
 int main(void)
{
    int a;
    float b;
    a = stu_affine_i(10,5,5);
    b = stu_affine_f(1.3,5,5);
    printf("%d\n",a);
    printf("%f\n",b);
}
