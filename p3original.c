#include<stdio.h>
int input_n_and_r(int *n,int *r)
{
  printf("Enter the values of n and r\n");
  scanf("%d%d",n,r);
}
int ncr(int n,int r)
{
  int x =1,y=1,z=1,result;
 for(int i=2;i<=n;i++) 
   {
     x =x *i;
   }
  for(int i=2;i<=(n-r);i++)
    {
      y= y * i;
    }
  for(int i=2;i<=r;i++)
    {
      z=z*i;
    }
  
 result= x/(y*z);
  return result;
}
void output(int n,int r,int  result)
{
  printf("The nCr of %dC%d is %d\n",n,r,result);
  
}
int main()
{
int a,b,result,c;
  input_n_and_r(&a,&b);
  c=ncr(a,b);
  output(a,b,c);
}