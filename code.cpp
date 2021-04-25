#include <iostream>
using namespace std;

int main() {
	cout << "Number of employees: ";
	int n;
	cin >> n;
	cout << "\n\n";
	if(n>10) {
		cout << "Number of Gifts is less than number of employees entered\n";
	} 
	int val[10];
	string name[10];
	name[0] = "Macbook Pro"; val[0] = 229900;
	name[1] = "IPods"; val[1] = 22349;
	name[2] = "Digital Camera"; val[2] = 11101;
	name[3] = "Alexa"; val[3] = 9999;
	name[4] = "Microwave Oven"; val[4] = 9800;
	name[5] = "Fitbit Plus"; val[5] = 7980;
	name[6] = "Scale"; val[6] = 4999;
	name[7] = "Cult Pass"; val[7] = 2799;
	name[8] = "Sandwich Toaster"; val[8] = 2195;
	name[9] = "MI Band"; val[9] = 999;
	
	
	int diff = 99999999, i=0;
	
	if(n==1) {
		i = 9;
		diff = val[9];	
	}
	else {
		for(int j=0; j<10-n; j++) {
			if(val[j]-val[j+n-1]<diff) {
				diff = val[j]-val[j+n-1];
				i = j;
			}
		}
	}
	cout << "The goodies selected for distribution are:\n\n";

	for(int j=0; j<n; j++) {
		cout << name[n+i-j-1] << ": " << val[n+i-j-1] << "\n";	
	}

cout << "\n\nAnd the difference between the chosen goodie with highest price and the lowest price is " << diff ;

	return 0;
}
