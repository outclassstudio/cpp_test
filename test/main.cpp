#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int main() {
	int a = 100;
	int result = add(3, 5);
	int result_sub = sub(10, 20);
	int result_mul = mul(10, 2);
	cout << result << endl;
	cout << a << endl;
	cout << result_sub << endl;
	cout << result_mul << endl;
	return 0;
}