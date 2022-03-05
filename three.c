#include<stdio.h>
struct node 
{
   int a;
   char *name;
   struct node *remo;
};
int main()
{
   printf("extent \n ");
   printf("%d",sizeof(struct node));
   return 0;
}
