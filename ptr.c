#include<stdio.h>
int main()
{
int myAge = 21;     
int* ptr = &myAge;  


printf("%p\n", ptr);

printf("%d\n", *ptr);


}
