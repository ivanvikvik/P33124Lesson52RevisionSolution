#include "test.h"

string convert(int* array, int size) {
	string s = "";

	for (int i = 0; i < size; i++)
	{
		s += to_string(*(array + i)) + " ";
	}
	return s;
}

void print_test(int* array, int size, int expected, string name) {
	int actual = sum_elements(array, size);

	string msg = actual == expected ? "PASS" : "FAIL";
	cout << name << " --> " << msg << endl;
}

// Negative tests
void test01() {
	int* array = nullptr;
	int size = 0;
	int expected = 0;
	print_test(array, size, expected, "test01");
	delete[] array;
}

void test02() {
	int* array = nullptr;
	int size = -5;
	int expected = 0;
	print_test(array, size, expected, "test02");
	delete[] array;
}

void test03() {
	int* array = nullptr;
	int size = 5;
	int expected = 0;
	print_test(array, size, expected, "test03");
	delete[] array;
}

void test04() {
	int size = 1;
	int* array = new int[size] { 1 };
	int expected = 0;
	print_test(array, size, expected, "test04");
	delete[] array;
}

void test05() {
	int size = 5;
	int* array = new int[size] { 1, 2, 3, 4, 5 };
	int expected = 0;
	print_test(array, size, expected, "test05");
	delete[] array;
}

void test06() {
	int size = 1;
	int* array = new int[size] { 0 };
	int expected = 0;
	print_test(array, size, expected, "test06");
	delete[] array;
}

void test07() {
	int size = 5;
	int* array = new int[size] { 1, 2, 0, 4, 5 };
	int expected = 0;
	print_test(array, size, expected, "test07");
	delete[] array;
}

// Boundet tests
void test08() {
	int size = 5;
	int* array = new int[size] { 0, 0, 0, 0, 0};
	int expected = 0;
	print_test(array, size, expected, "test08");
	delete[] array;
}

void test15() {
	int size = 5;
	int* array = new int[size] { 0, 0};
	int expected = 0;
	print_test(array, size, expected, "test15");
	delete[] array;
}

// Basic cases
void test09() {
	int size = 5;
	int* array = new int[size] { 1, 0, 2, 0, 3 };
	int expected = 2;
	print_test(array, size, expected, "test09");
	delete[] array;
}

void test10() {
	int size = 5;
	int* array = new int[size] { 0, 1, 2, 3, 0};
	int expected = 6;
	print_test(array, size, expected, "test10");
	delete[] array;
}

void test11() {
	int size = 10;
	int* array = new int[size] { 0, 2, 3, 0, 5, 6, 0, 8, 9, 0};
	int expected = 33;
	print_test(array, size, expected, "test11");
}

void test12() {
	int size = 7;
	int* array = new int[size] { 1, 0, 3, 0, 5, 0, 7};
	int expected = 8;
	print_test(array, size, expected, "test12");
}

void test13() {
	int size = 6;
	int* array = new int[size] { 0, 2, 0, 4, 0, 6};
	int expected = 6;
	print_test(array, size, expected, "test13");
}

void test14() {
	int size = 6;
	int* array = new int[size] { 1, 0, 2, 0, 4, 0};
	int expected = 6;
	print_test(array, size, expected, "test14");
}