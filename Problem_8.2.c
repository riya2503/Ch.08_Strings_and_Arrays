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
        /*if(marks[j]>=0 && marks[j]<=9)
        group[0]++;
        else if(marks[j]>=10 && marks[j]<=19)
        group[1]++;
        else if(marks[j]>=20 && marks[j]<=29)
        group[2]++;
        else if(marks[j]>=30 && marks[j]<=39)
        group[3]++;
        else if(marks[j]>=40 && marks[j]<=49)
        group[4]++;
        else if(marks[j]>=50 && marks[j]<=59)
        group[5]++;
        else if(marks[j]>=60 && marks[j]<=69)
        group[6]++;
        else if(marks[j]>=70 && marks[j]<=79)
        group[7]++;
        else if(marks[j]>=80 && marks[j]<=89)
        group[8]++;
        else if(marks[j]>=90 && marks[j]<=100)
        group[9]++;*/
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
    /*printf("No. of student having marks between %d to %d are : %d \n",);
    printf("No. of student having marks between 10 to 19 are : %d \n",group[1]);
    printf("No. of student having marks between 20 to 29 are : %d \n",group[2]);
    printf("No. of student having marks between 30 to 39 are : %d \n",group[3]);
    printf("No. of student having marks between 40 to 49 are : %d \n",group[4]);
    printf("No. of student having marks between 50 to 59 are : %d \n",group[5]);
    printf("No. of student having marks between 60 to 69 are : %d \n",group[6]);
    printf("No. of student having marks between 70 to 79 are : %d \n",group[7]);
    printf("No. of student having marks between 80 to 89 are : %d \n",group[8]);
    printf("No. of student having marks between 90 to 100 are : %d \n",group[9]);*/
    return 0;


}