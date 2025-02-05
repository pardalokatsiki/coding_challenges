#include <iostream>

using namespace std;

//challenge #9: fahrenheit to celsius convertion

float ftc(float fahrenheit){
	return (fahrenheit-32)*(9/5);
}

int main(){
	cout << ftc(13)<<endl;
	return 0;
}
