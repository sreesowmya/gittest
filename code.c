#include<stdio.h>
#include<string.h>
void basic();
void ed();
void un();
//void loop();
int strt();
int main()
{

  int strt()
  {
  struct books { 
             char title[10];
             char author[10];
             int pages;
         } book1;
//struct books book1;
  strcpy(book1.title,"C pgm");
  strcpy(book1.author, "bala");
  book1.pages = 450;
  printf("book1 title:%s\n",book1.title);
  printf("book1 author:%s\n",book1.author);
  printf("book1 pages:%d\n",book1.pages);
  printf("size of struct is:%ld\n",sizeof(book1));
  return 0;
   }


   void basic()
   {
   printf("the size of char:%ldbytes\n", sizeof(char));
   printf("the size of short:%ldbytes\n", sizeof(short));
   printf("the size of int:%ldbytes\n", sizeof(int));
   printf("the size of long:%ldbytes\n", sizeof(long));
   printf("the size of float:%ldbytes\n", sizeof(float));
   printf("the size of double:%ldbytes\n", sizeof(double));
   printf("the size of long double:%ldbytes\n", sizeof(long double));
   printf("the size of long long:%ldbytes\n", sizeof(long long));

   }
    
   void ed()
   {
   enum day {mon,tue,wed,thr,fri,sat,sun};
   enum day today;
   today = mon;
   printf("today is %dst day of the week\n",today+1);
   }

   void un()
   {
   union books { 
        char title[10];
        char author[10];
        int pages;
   } book1;
   printf("the size of union is:%ld\n",sizeof(book1));
   }
   
char ch;
printf("enter any char b/w A-D\n");
scanf("%c",&ch); 
  if (ch>='A' && ch<='D')
 
   switch (ch)
  {
     case 'A':
          basic();
          break;
     case 'B':
          ed();
          break;
     case 'C':
          un();
          break;
 /* case 'D':
        loop();
        break;*/
     case 'D':
          strt();
          break;
     default : printf("enter character b/w A-D\n");
   }
    else
   
      printf("not a valid i/p\n"); 
   

}

