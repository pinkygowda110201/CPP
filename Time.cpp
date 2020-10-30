#include <iostream>
 using namespace std;
 class Time
{
    private:
        int seconds;
        int hh,mm,ss;
    public:
        void getTime(void);
	void display(void);
}; 
void Time::getTime(void)
{
    cout << "Enter time:" << endl;
    cout << "Hours?   ";
	cin >> hh;
    cout << "Minutes? ";          
	cin >> mm;
    cout << "Seconds? ";          
	cin >> ss;
} 
void Time::display(void)
{
    cout << "The time is = "<<hh<<":"<<mm<<":"<<ss<<endl; 
    cout << "Time in total seconds: " <<hh*3600+mm*60+ss;
} 
int main()
{
    Time T;
    T.getTime();
    T.display();
    return 0;
}
