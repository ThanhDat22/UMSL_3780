
// This program is used to demonstrate stack usage

#include <iostream>

using namespace std;

void doOtherStuff(int c, int d) {

	int a[10];
	for(int i = 0; i < 10; i++ ) {
		a[i] = i;
	}

	char s[16] = "In doOtherStuff";
	int totalSum = c + d;

	int total = 0;
	for (int i = 0; i < 10; i++ ){
		total += a[i];	
	}
	return;
}

int doStuff(int a, int&b) {
	int sum = 17;
	char s[11] = "In doStuff";
	for (int i = 0; i < 5; i++) {
		sum += a;
	}

	int avg = sum / 5;
	b = avg;
	sum = 17;
	doOtherStuff(21,b);
}

int main() {

	char s[9] = "In Main";
	int v = 8;
	int z = 16;
	int n = 17 + 17; 
	int nn = 19+19; 

	int m;
	m = doStuff(v,z);

	return 0;
}
