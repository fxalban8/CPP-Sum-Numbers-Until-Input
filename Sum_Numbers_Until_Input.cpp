#include <iostream>
using namespace std;

int sumValues(int x);

int main() {
	int n;
	cout<<"Enter the number which will be the last one to add to the sum of all numbers below it: "<<flush;		
	cin>>n;

	return 0;
}

int sumValues(int x){
	int y;
	for(int i=1;i++;i<=x){
		y+=i;
	}

	return y;
}
