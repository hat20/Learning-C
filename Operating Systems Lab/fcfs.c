//First-come-first-service scheduling program with GANTT Chart
#include <stdio.h>
void main()
{
int i,j,n,temp;
printf("Enter no. of processes \n");
scanf("%d",&n);
int pid[n],burst[n],arr[n];
printf("Enter process id, arrival time, burst time");
for(i=0;i<n;i++)
{
scanf("%d %d %d",&pid[i],&arr[i],&burst[i]);
}
for(i=0;i<n;i++)
{  for(j=0;j<n-1-i;j++)
   {
    if(arr[j]>arr[j+1])
     {
      temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1] = temp;
      temp = pid[j];
      pid[j] = pid[j+1];
      pid[j+1] = temp;
      temp = burst[j];
      burst[j] = burst[j+1];
      burst[j+1] = temp;
     }
   }
}
//GANTT CHART CODE
printf("Gantt chart \n");
for(i=0;i<n;i++)
{
 printf("   P%d \t \t ",pid[i]);
}
printf("\n %d",arr[0]);
temp=arr[0];
for(i=0;i<n;i++)
{
temp = temp+burst[i];
printf("\t %d  \t      ",temp);
}
printf("\n");
}

