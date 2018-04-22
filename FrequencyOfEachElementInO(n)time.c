//Find frequency of each element in a limited range array in less than O(n) time

#include <stdio.h>
void main()
{
 int a[]={1,1,1,2,3,3,5,5,8,8,8,9,9,10};
 int i,j=0,b=0,c=1,count=1;
 for(i=0;i<(sizeof(a)/sizeof(a[0]));i++,b++,c++)
 {
 if(a[b]==a[c])
 {
 ++count;
 }
 else
 {
     printf("Frequency of %d is %d times \n",a[i],count);
     count=1;
 }
 }
}
