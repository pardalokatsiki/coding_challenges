
#include <iostream>

using namespace std;

//challenge #8: celsius to fahrenheit conversion

float ctf(float celsius){
	return (celsius*9/5)+32;
}

int main(){
	cout << ctf(20)<<endl;
	return 0;
}
