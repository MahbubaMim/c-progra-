#include <stdio.h>
int main()
{
    char c;
    printf("enter the value of your first name:");
    c = getchar();//can not get multiple value at a time;
    printf("the frist letter of your name is:%c",c);
    return 0;

}