#include <stdio.h>
void main()
{
    FILE *fp,*gp;
    char str[100],ch;
    fp = fopen("filehandling.txt","w+");
    if(fp==NULL)
    {
        printf("File could not be made \n");
        return;
    }
    printf("Enter the string you want to write in the file \n");
    gets(str);
    fprintf(fp,"%s",str);
    fclose(fp);
    gp = fopen("filehandling.txt","r+");
    if(gp == NULL)
    {
        printf("File could not be loaded \n");
        return;
    }
    ch = getc(gp);
    while(ch!= EOF)
    {
        printf("%c",ch);
        ch = getc(gp);
    }
    fclose(gp);
}
