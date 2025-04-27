#include "test.h"

string convert(double* array, int size) {
	string s = "";

	for (int i = 0; i < size; i++)
	{
		s += to_string(*(array + i)) + " ";
	}
	return s;
}

void print_test(double* array, int size, int expected, string name) {
	int actual = count_zero_elements(array, size);

	string msg = actual == expected ? "PASS" : "FAIL";
	cout << name << " --> " << msg << endl;
}

// Negative tests
void test01() {
	double* array = nullptr;
	int size = 0;
	int expected = -1;
	print_test(array, size, expected, "test01");
	delete[] array;
}

void test02() {
	double* array = nullptr;
	int size = -5;
	int expected = -1;
	print_test(array, size, expected, "test02");
	delete[] array;
}

void test03() {
	double* array = nullptr;
	int size = 5;
	int expected = -1;
	print_test(array, size, expected, "test03");
	delete[] array;
}

// Boundet tests
void test04() {
	int size = 1;
	double* array = new double[size] { 1.1 };
	int expected = 0;
	print_test(array, size, expected, "test04");
	delete[] array;
}

void test05() {
	int size = 5;
	double* array = new double[size] { 1.1, 1.2, 1.3, 1.4, 1.5 };
	int expected = 0;
	print_test(array, size, expected, "test05");
	delete[] array;
}

void test06() {
	int size = 1;
	double* array = new double[size] { 0.0 };
	int expected = 1;
	print_test(array, size, expected, "test06");
	delete[] array;
}

void test07() {
	int size = 5;
	double* array = new double[size] { 0.0, 0.0, 0.0, 0.0, 0.0 };
	int expected = 5;
	print_test(array, size, expected, "test07");
	delete[] array;
}

// Basic case tests
void test08() {
	int size = 5;
	double* array = new double[size] { 1.2, 0.0, 2.3, 0.0, 3.4 };
	int expected = 2;
	print_test(array, size, expected, "test08");
	delete[] array;
}

void test09() {
	int size = 5;
	double* array = new double[size] { 0.0, 1.2, 0.0, 2.3, 0.0};
	int expected = 3;
	print_test(array, size, expected, "test09");
	delete[] array;
}


void test10() {
	int size = 3;
	double* array = new double[size] { 0.0, 1.2, 2.3};
	int expected = 1;
	print_test(array, size, expected, "test10");
}

void test11() {
	int size = 3;
	double* array = new double[size] { 1.2, 0.0, 2.3};
	int expected = 1;
	print_test(array, size, expected, "test11");
}

void test12() {
	int size = 3;
	double* array = new double[size] { 1.2, 2.3, 0.0};
	int expected = 1;
	print_test(array, size, expected, "test12");
}