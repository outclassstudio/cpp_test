#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int main() {
	int a = 100;
	int result = add(3, 5);
	cout << result << endl;
	cout << a << endl;
	return 0;
}