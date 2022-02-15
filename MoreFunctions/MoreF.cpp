#include <iostream>
using namespace std;

//inline int func(int num1, int num2);
//int func(int num1, int num2);
//double func(double num1, double num2);
template <typename T1, typename T2> T1 maxFunc(T1 num1, T2 num2) {
	return num1 > num2 ? num1 : num2;
}

int main() {
	setlocale(LC_ALL, "Russian");
	float n, m;
	cin >> n >> m;
	/*cout << func(n, m) << endl;
	cout << func(5.5, 9.5) << endl;*/
	cout << maxFunc(n, m) << endl;
	cout << "Топ 1!\n\n";

	return 0;
}

/*double func(double num1, double num2) {
	cout << "Дробные числа!\n";
	return num1 > num2 ? num1 : num2;
}
int func(int num1, int num2) {
	cout << "Целые числа!\n";
	return num1 > num2 ? num1 : num2;
}*/
/*inline int func(int num1, int num2) {
	return (num1 > num2 ? num1 : num2);
}*/