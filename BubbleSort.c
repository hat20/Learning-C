#include <stdio.h>
void main()
{
    FILE *fp,*gp;
    int arr[10],i=0,j,k,temp;
    fp = fopen("BubbleSort.txt","w");
    gp = fopen("Numbers.txt","r+");
    if((fp || gp)== NULL)
    {
        printf("Error \n");
        return;
    }
    for(i=0;i<10;i++)
        fscanf(gp,"%d",&arr[i]);

    for(j=0;j< 10;j++)
    {
        for(k=0; k< 10-j;k++)
        {
            if(arr[k]>arr[k+1])
            {
                temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }
    for(i=0;i<10;i++)
    fprintf(fp,"%d,",arr[i]);

    fclose(fp);
    fclose(gp);

}
