#include <iostream>

using namespace std;

// challenge #12: positive numbers in array

int main(){
	int count=0;
	int array[10]={1, -2, -6, 7, -9, 2, 1, 7, 9, 10};
	for(int i=0; i<10; i++){
		if(array[i]>0)
			count++;
	}
	cout << "Number of positive numbers in array: " << count << endl;
	return 0;
}
