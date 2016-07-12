//AAKASH SHRIVASTAVA
//24423
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
int search[50],n,start,end,num,mid,flag=0;
printf("enter the nos on list\n");
scanf("%d",&n);
printf("enter the numbers of your list\n");
for(int i=0;i<n;i++)
{printf("enter number ");
scanf("%d",&search[i]);
}
end=n-1;
start=0;
printf("enter the number to be searched ");
scanf("%d",&num);
while((start<=end)&&(search[mid]!=num))
 { mid=(start+end)/2;
   if(search[mid]==num)
     { printf("number is found at %d position",mid+1);
	   flag=1;

     }
   else if(num>search[mid])
      {
	start=mid+1;
      }
   else{
	end=mid-1;
       }

 }
if(flag==0)
{
printf("number not found");
}
getch();
}