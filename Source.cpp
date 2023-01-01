#include<iostream>
using namespace std;
int max(int x, int y);
int main() {
	int a, b;
	cout << "enter 1th number ";
	cin >> a ;
	cout << "enter 2th number ";
	cin >> b;
	cout << "max = " << max(a, b);
	return 0;
}
int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}
