#include<stdio.h>

int main()
{
    //reading in a file
    //  FILE*ptr=NULL;
    //  char string[34];
    //  ptr=fopen("myfile.txt","r");
    //  fscanf(ptr,"%s",string);
    //  printf(" %s\n",string);

    // //writing in a file
    // FILE *ptr=NULL;
    // char string [64]="This content is produced by souvik shit.";
    // ptr=fopen("myfile.txt","w");
    // fprintf(ptr,"%s",string);


///  appending in a file

    FILE *ptr=NULL;
    char string [64]="This content is produced by souvik shit.";
    ptr=fopen("myfile.txt","a");
    fprintf(ptr,"%s",string);
    fclose(ptr);
    return 0;
}