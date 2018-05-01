#include<stdio.h>
void main()
{
 struct scooter
 { int dd,mm,yy;
   char seri[3];
   char col[20];
   int hp;
  };
  struct scooter x[100];
 int i,j,t,u;
 for(i=0;i<100;i++)
 {
   printf("Enter date of manufacture \n");
   scanf(" %d %d %d",&x[i].dd,&x[i].mm,&x[i].yy);
   printf("Enter Colour of Scooter");
   gets(x[i].col);
   printf("Enter Serial No.");
   gets(x[i].seri);
   printf("Enter Horsepower");
   gets(x[i].hp);
  }
  for(j=0;j<100;j++)
  { t = strcmp("BB0",x[j].seri);
    u = strcmp("FF9",x[j].seri);
    if(t<=0 && u>=0)
    { puts(x[j].seri);
      printf(" %d %d %d",x[j].dd,x[j].mm,x[j].yy);
      puts(x[j].col);
      printf("%d",x[j].hp);
    }
    break;
    }
    }

