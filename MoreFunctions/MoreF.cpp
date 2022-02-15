#include <iostream>
using namespace std;

//inline int func(int num1, int num2);
//int func(int num1, int num2);
//double func(double num1, double num2);
template <typename T> T mean(T array[], int length) {
	T sum = 0;
	for (int i = 0; i < length; i++)
		sum += array[i];
	return sum / length;
}

int main() {
	setlocale(LC_ALL, "Russian");
	float n, m;
	//cin >> n >> m;
	/*cout << func(n, m) << endl;
	cout << func(5.5, 9.5) << endl;*/
	cout << "Топ 1!\n\n";

	//Задача 1
	cout << "Задача 1\nИзначальный массив:\n";
	float z1[5] = { 4.1, 4.9, 2.02, 0.101, 1.2 };
	for (int i = 0; i < 5; i++)
		cout << z1[i] << " ";
	cout << "\nСреднее арифметическое элементов массива = " << mean(z1, 5) << endl;

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