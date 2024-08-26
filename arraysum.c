#include<stdio.h>
int main()
{
   
   int array1[] = {1,2,3,4,5};
   int array2[] = {6,7,8,9,10};
   int length = sizeof(array1)/sizeof(array1[0]);
   int arraysum[length];

    for(int i=0;i<length;i++){
        arraysum[i]=array1[i] + array2[i];
    }

printf("sum of two arrays:");
for(int i=0;i<length;i++){
    printf("%d ", arraysum[i]);
    
}

printf("\n");

return 0;

}