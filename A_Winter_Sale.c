#include<stdio.h>

int main()
{
    float x, p;
    scanf("%f %f", &x, &p);
    float result;
    result = (100 * p) / (100-x);
    // result = p*(100/(100-x));
    printf("%.2f", result);
    return 0;
}