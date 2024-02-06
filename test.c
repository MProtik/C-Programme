#include<stdio.h>
#include<conio.h>
void main()
{
 int data[30],ptr,n,k,i,a;
 printf("|| B U B B L E  S H O R T ||");
 printf("\n");
 printf("How many number you want to find out by the prosses of Bubble sort: ");
 scanf("%d",&n);
 printf("Please enter your number:");
 for(i=1;i<=n;i++)
 scanf("%d",&data[i]);
for(k=1;k<=n-1;k++)
 {
  ptr=1;
  while(ptr<=n-k)
  {
   if(data[ptr]>data[ptr+1])
   {
    a=data[ptr];
    data[ptr]=data[ptr+1];
    data[ptr+1]=a;
   }ptr++;
  }
 }
 for(i=1;i<=n;i++)
 printf(" %d",data[i]);
 getch();
 }
