#include<stdio.h>
int main()
{
    //Readng a character
    // FILE *ptr=NULL;
    // ptr=fopen("myfile.txt","r");
    // char c=fgetc(ptr);
    // printf("The character i read was %c\n",c);
    // c=fgetc(ptr);
    // printf("The chracter i read was %c\n",c);
    // fclose(ptr);

//Reading a string
    // FILE *ptr=NULL;
    // ptr=fopen("myfile.txt","r");
    // char str[7];
    // fgets(str,8,ptr);
    // printf("The string is %s\n",str);
    // fclose(ptr);


 // writing a char
 FILE *ptr=NULL;
 ptr=fopen("myfile.txt","w");
 fputc('T',ptr);
 fputs("his is souvik",ptr);
 fclose(ptr);
 return 0;
    return 0;
}