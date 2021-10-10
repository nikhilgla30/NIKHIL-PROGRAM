#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,h;
    float area;
    printf("entre the value for two bases & height of the trapezium: \n");
    scanf("%f%f%f", &a, &b, &h);
    area =0.5*(a+b)*h;
    printf("area of the trapezium is = %3f",area);
    return 0;

}