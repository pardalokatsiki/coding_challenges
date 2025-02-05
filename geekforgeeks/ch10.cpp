#include <iostream>

using namespace std;

//challenge #10: sum of numbers in an array

int main(){
	int sum=0;
	int array[10] = {1, 2, 3 , 4, 5 , 6, 7, 8, 9, 10};
	for(int i=0; i<10; i++)
		sum+=array[i];
	cout << sum << endl;
	return 0;
}
