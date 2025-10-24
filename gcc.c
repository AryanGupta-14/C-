#include<stdio.h>
#include<math.h>3
int main()
{
    float a,b,c,s,area;
    printf("enter the 3 sides:");
    scanf("%f%f%f" ,&a,&b,&c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nArea of triagle=%f",area);
    return 0;
}