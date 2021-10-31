/*
Write a C program to display the contents of the file in reverse order. Also copy the contents from one file to another file. Your input and output must look something like this

Input to the reverse function: My Captain Output: niatpaC yM
*/

CODE:
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int i,pos;
    fp=fopen("mycap.txt","r");
      if(fp==NULL)
      {
            printf("File does not exist..");
      }
    fseek(fp,0,SEEK_END);
    pos=ftell(fp);

    i=0;
      while(i<pos)
       {
            i++;
            fseek(fp,-i,SEEK_END);
            ch=fgetc(fp);
            printf("%c",ch);
       }

    return 0;
}
TEXT_FILE(mycap.txt):
My Captain
