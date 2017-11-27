#include <iostream.h>

#define A 4

#define B 4

void main()

{

	int i,j,a[A][B],sum=0;

	cout<<"Please input 16 numbers:";

	for(i=0;i<A;i++)

	{

		for(j=0;j<B;j++)

		{

			cin>>a[i][j];

			if(i==j)

		    sum=sum+a[i][j];

		}

	}

	for(i=0;i<A;i++)

	{

		for(j=0;j<B;j++)

		{

			cout<<a[i][j]<<"\t";

		}

		cout<<endl;

	}

	cout<<endl;

	cout<<"sum="<<sum<<endl<<endl;

	for(j=1;j<B;j++)

	{

		for(i=0;i<j;i++)

			a[i][j]=a[i][j]+1;

	}

	for(i=1;i<A;i++)

	{

		for(j=0;j<i;j++)

			a[i][j]=a[i][j]-1;

	}

	for(i=0;i<A;i++)

	{

		for(j=0;j<B;j++)

		{

			cout<<a[i][j]<<"\t";

		}

		cout<<endl;

	}

	cout<<endl;

}