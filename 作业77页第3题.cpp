#include<iostream.h>
void main()
{
	int x,y;
	cout<<"Please input x:"<<endl;
	cin>>x;
    if(x%3==0||x%7==0)
		y=1;
	else
		y=0;
	if(y==1)
		cout<<"YES";
	else
		cout<<x<<"NO";
}

