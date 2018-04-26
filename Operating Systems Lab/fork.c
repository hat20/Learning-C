/* ----------------------------------------------------------------- */
/* PROGRAM fork-02.c                                                 */
/*   This program runs two processes, a parent and a child.  Both of */
/* them run the same loop printing some messages.  Note that printf()*/
/* is used in this program.                                          */
/* ----------------------------------------------------------------- */

#include  <stdio.h>
#include  <sys/types.h>
#include <unistd.h>

#define   MAX_COUNT  200

void  ChildProcess(void);                /* child process prototype  */
void  ParentProcess(void);               /* parent process prototype */
char a[10] = "gjhfgagkjh";
void  main(void)
{    
     
     pid_t  pid;

     pid = fork();
     if (pid == 0) 
          ChildProcess();
     else 
          ParentProcess();
}

void  ChildProcess(void)
{
     int   i,vowel=0;

     for (i = 1; i <= 10; i++)
          if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
             vowel++;
     printf("No. of vowels %d \n",vowel);
}

void  ParentProcess(void)
{
     int   i,vowel=0;

     for (i = 1; i <= 10; i++)
          if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
             vowel++;
     printf("No. of consonants %d \n",(10-vowel));

}

