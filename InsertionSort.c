#include <stdio.h>
void main()
{
    FILE *fp,*gp;
    int arr[10],i=0,j,k,temp;
    fp = fopen("InsertionSort.txt","w");
    gp = fopen("Numbers.txt","r+");
    if((fp || gp)== NULL)
    {
        printf("Error \n");
        return;
    }
    for(i=0;i<10;i++)
        fscanf(gp,"%d",&arr[i]);

    for(j=1;j< 10;j++)
    {
        k=j;
        while(k>0 && arr[k]<arr[k-1])
        {
            temp = arr[k];
            arr[k] = arr[k-1];
            arr[k-1] = temp;
            k--;
        }
    }
    for(i=0;i<10;i++)
    fprintf(fp,"%d,",arr[i]);

    fclose(fp);
    fclose(gp);

}
