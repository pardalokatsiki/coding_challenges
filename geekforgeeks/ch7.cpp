#include <iostream>

using namespace std;

//challenge #7: sum of odd numbers (10 to 30)

int main(){
	int sum=0;
	for(int i=11; i<30; i+=2)
		sum+=i;
	cout << sum << endl;
	return 0;
}


