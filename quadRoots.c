#include<stdio.h>
#include<math.h>
int main()
{
    int a , b , c;
    printf("Enter the coefficient of quadratic equation: ");
    scanf("%d %d %d" , &a , &b , &c);
    printf("Quadratic equation is (%d)x^2 + (%d)x + (%d)",a,b,c);
    float d = b*b-4*a*c;
    if(d>0)
    {
        printf("Roots are real and distinct:\n");
        float r1 ,r2;
        r1=((-b)+sqrt(d))/(2*a);
        r2=((-b)-sqrt(d))/(2*a);
        printf("Roots are: %.2f and %.2f" , r1 ,r2);
    }
    else if(d=0)
    {
        printf("Roots are real and equal:\n");
        float r1;
        r1=((-b)+sqrt(d))/(2*a);
        printf("Roots are: %.2f and %.2f",r1,r1);
    }
    else{
        printf("Roots are imaginary:\n");
        float real ,imag;
        real = (-b)/(2*a);
        imag = sqrt(-d)/(2*a);
        printf("Roots are: %.2f + %.2f i and %.2f - %.2f i", real ,imag, real ,imag);
    }
}
