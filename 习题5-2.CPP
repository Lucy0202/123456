#include<iostream.h>
int fun(int n)
{
    double f;
     if(n==1)
      f=1;
else
    f=fun(n-1)/n*fun(n-1)+1;
  return(f);
}
 void main()
{
   long s;
    int n;
    int fun(int n);
   cin>>n;
   s=fun(n);
cout<<s<<endl;
}