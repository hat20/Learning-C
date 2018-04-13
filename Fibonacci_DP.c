#include <stdio.h>
#include <conio.h>
#define NIL -1
int lookup[100];

void table_initialise()
{
int i;
for(i=0;i<100;i++)
lookup[i] = NIL;

}

int fib(int n)
{
if(lookup[n]== NIL)
{
    if(n<=1)
        lookup[n]= n;
    else
        lookup[n] = (fib(n-1)+fib(n-2));
}
return lookup[n];
}

void main()
{
    table_initialise();
    int n;
    printf("Finding the nth element of Fibonacci series \n");
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("%d",fib(n));
}
