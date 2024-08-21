#include<stdio.h>
int main()
{
     int n;
     unsigned long long factorial =1;
     printf("enter the value of n");
     scanf("%d",&n);
     int i=n;
     while (i > 1) {
        factorial *= i;
        i--;}
     return 0;
}