#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
char s[30],k[27],c[30];
int i,j=0;
printf("Enter plaintext");
gets(s);
printf("Enter keyvalue");
gets(k);
for(i=0;i<strlen(s);i++)
{
c[i]= s[i]+(k[j]-97);
j++;
if(j== strlen(k))
j=0;
}
printf("Your cipher text is %s",c);
getch();
}
