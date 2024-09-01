#include<stdio.h>
int main()
{
 long long  myid[] = {21225103505ll};
 long long* ptr = myid;

 printf("%lld\n", myid[0]);
 printf("%p\n", &myid);
 printf("%p\n",ptr);
 return 0;
}

