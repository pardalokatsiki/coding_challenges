#include <iostream>

using namespace std;

// challenge #11: average of numbers in array

int main(){
	int array[5] = {1, 2, 3, 4, 5}, i;
	int sum=0;
        for(i=0; i<5; i++)
	     sum+=array[i];
        cout << "Average of array: " << float(sum/i) << endl; 	
	return 0;
}

