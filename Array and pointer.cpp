#include<iostream>
using namespace std;
main()
{
	int arr[5], *p;
	cout<<"Enter elements:"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
		p=arr;
	}
	cout<<"You entered:\n";
	for(int i=0;i<5;i++)
	{
		cout<<*p<<endl;
		p++;
	}
}
