#include<stdio.h>
int main()
{
    //int a,b;
    float a,b;
    // printf("Please input the value of a: ");
    scanf("%f",&a);
    // printf("Please input the value of b: ");
    scanf("%f",&b);
    float div=a/b;
    printf("a+b=%0.0f\na-b=%0.0f\na*b=%0.0f\na/b=%0.2lf",a+b,a-b,a*b,div);
    return 0;
}