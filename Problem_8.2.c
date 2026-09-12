#include<stdio.h>
int main()
{
    int marks[50],group[10]={0};
    int i,j;
    i=0;
    while(i<50)
    {
        printf("Enter marks of student %d (NOTE: Marks should be less than or equal to 100): ",i+1);
        scanf("%d",&marks[i]);
        i++;
    }
    j=0;
    while(j<10)
    {
        if(marks[j]==100)
        group[9]++;
        else
        group[marks[j]/10]++;
        j++;
    }
    for(i=0;i<10;i++)
    {
        if(i==9)
        printf("No. of student having marks between 90 to 100 are : %d \n",group[9]);
        else
        printf("No. of student having marks between %d to %d are : %d \n",i*10,(i*10)+9,group[i]);
    }
    return 0;


}