//This is a Program to create a text file containing data about employs
//
#include<stdio.h>
#include<stdlib.h>

int main()
{ 
   
    FILE *fp;
    char ch,another;
    int n,i;
    struct emp
      {
         char name[40];
         int age;
         float sal;
      };
    struct emp e;
    
    fp=fopen("Emp_details.txt","a+");//a+ indicates read and append

    if(fp==NULL)
      {
        printf("File does not exist");
        exit(1);
      }
  /*  else
         printf("Contents in file are:\n");*/
      

    while(1)   
      {
          ch=fgetc(fp);
          if(ch==EOF)
          break;
    
          printf("%c",ch);
      }          

     printf("\nenter no. of employs to be added:");
     scanf("%d",&n);

     for(i=0;i<n;i++)
       
      {
            printf("\nAdding %d record",i+1);
            printf("\nEnter name,age and salary:\n");
            scanf("%s %d %f",e.name,&e.age,&e.sal);
            fprintf(fp,"Name:%s\nAge:%d\nSal:%f\n\n",e.name,e.age,e.sal);
            fprintf(fp,"\n");
      }
            
         
      fclose(fp);
      return 0;
}

