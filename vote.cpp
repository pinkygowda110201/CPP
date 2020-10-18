#include <iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age : ";
	cin>>age;
	cout<<endl;
	age>=18 ? cout<<"You are eligible to vote" : cout<<"You are not eligible vote"<<endl<<"Come back in "<<18-age<<" year(s)" ;
	return 0;
}
