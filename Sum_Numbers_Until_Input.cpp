#include <iostream>
using namespace std;

int sumValues(int x);
void controlInput(int& x);


int main() {
	int n;
	cout<<"Enter the number which will be the last one to add to the sum of all numbers below it: "<<flush;		
	cin>>n;
	

	cout<<"The sum of those values is :"<<sumValues(n)<<endl;
	return 0;
}

int sumValues(int x){
	int y=0;
	for(int i=1;i<=x;i++){
		y+=i;
	}

	return y;
}
