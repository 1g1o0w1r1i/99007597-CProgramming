#include<stdio.h>
int prime(int num)
{
   while(num>0)
      {
	int r=num%10;
	int sum=sum*10+r;
	return sum;
       }
}
int main()
{
  int num,sum=0;
  printf("enter number:");
  scanf("%d",&num);
  if(sum>1)
	{
	   printf("prime");
	}
  else
	{
           printf("not prime");
        }
	return 0;
}
