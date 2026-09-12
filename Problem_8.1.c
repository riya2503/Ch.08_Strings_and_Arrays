#include<stdio.h>
int main()
{
    int i;
    float x[10],sum=0.0;
    printf("----Enter any 10 numbers for their respective square summation---\n");
    i=0;
    while(i<10)
    {
        printf("x[%d]= ",i);
        scanf("%f",&x[i]);
        sum+=x[i]*x[i];
        i++;
    }
    printf("\n");
    printf("Sum of squares of 10 numbers is: %f",sum);
    return 0;
}