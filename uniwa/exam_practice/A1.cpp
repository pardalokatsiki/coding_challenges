#include <string>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

class moment{
	int hour, minute, second;
	public:
		moment():hour(0), minute(0), second(0){};
		moment(int h, int m, int s):hour(h), minute(m), second(s){};
		moment operator+(int s);
		moment operator+(moment op2);
		bool operator==(moment op2);
		string return_date();	
};

moment moment::operator+(int s){
	moment temp;
	temp.second=second+s;
	if(temp.second>=60)
	{
		temp.second%=60;
		temp.minute=minute+1;
		if(temp.minute>=60)
		{
			temp.minute%=60;
			temp.hour=(hour+1)%24;
		}
	}
	else
	{
	    temp.minute=minute;
	    temp.hour=hour;
	}
	return temp;
}

moment moment::operator+(moment op2){
	moment temp;
	temp.second=second+op2.second;
	if(temp.second>=60)
	{
		temp.second%=60;
		temp.minute=minute+op2.minute+1;
		if(temp.minute>=60)
		{
			temp.minute%=60;
			temp.hour=(hour+op2.hour+1)%24;
		}
	}
	else
	{
	    temp.minute=minute+op2.minute;
		if(temp.minute>=60)
		{
			temp.minute%=60;
			temp.hour=(hour+op2.hour+1)%24;
		}
		else
		{
		    temp.hour=(hour+op2.hour)%24;
		}
	}
	return temp;
}

bool moment::operator==(moment op2){
	if(second==op2.second && minute==op2.minute && hour==op2.hour)
	return true;
	return false;
}

string moment::return_date() {
    stringstream ss; 
    ss << setfill('0') << setw(2) << hour << ':'
       << setfill('0') << setw(2) << minute << ':'
       << setfill('0') << setw(2) << second;
    return ss.str();
}

int main (){
	cout << "The following text is displayed for testing the methods." << endl;
	moment m1(23,59, 59), m2(9, 9, 16);
	cout << "Moment 1: " << m1.return_date() << endl;
	cout << "Moment 2: " << m2.return_date() << endl;
	moment m3 = m1+5;
	cout << "Increasing moment 1 by 5 seconds: " << m3.return_date() << endl;
	moment m4 = m1+m2;
	cout << "Increasing moment 1 by moment 2: " << m4.return_date() << endl;
	cout << "Moment 1 and moment 2 are the same date: " << (m1==m2);
}


