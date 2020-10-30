#include <iostream>
using namespace std;
int sum(int n)
{
	int i;
	int flag=1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}
int main()
{
	int n,i;
	cout<<"Enter a positive integer:";
	cin>>n;
	int flag=0;
	for(i=2;i<=n/2;i++)
	{
		if(sum(i)==1)
		{
			if(sum(n-i)==1)
			{
				cout<<n<<"="<<i<<"+"<<n-i<<endl;
				flag=1;
			}
		}
	}
	if(flag==0)
	{
	cout<<n<<" cannot be expressed as the sum of two prime numbers\n";	
	}
	return 0;
}
