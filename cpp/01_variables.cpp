#include<iostream>

using namespace std;

int main(){
	cout << "hello world" << endl;

	const double PI = 3.1415926535;
	char myGrade = 'A';
	bool isHappy = true;
	int myAge = 22;
	float favNum = 3.141592;
	double otherfavNum = 1.8172648712648;

	cout << "Fav num" << favNum << endl;

	/*
	 * other types include 
	 * short int : at least 16 bits
	 * long int : at least 32 bits
	 * long long int : at least 64 bits
	 * unsigned int : same size as signed version
	 * long duble : not less than double
	 */

	cout << "size of int " << sizeof(myAge) << endl;
	cout << "size of double " << sizeof(otherfavNum) << endl;
	cout << "size of char " << sizeof(myGrade) << endl;
	cout << "size of bool " << sizeof(isHappy) << endl;
	cout << "size of float " << sizeof(favNum) << endl;


	int largestInt = 2147483647;

	cout << "largestInt " << largestInt << endl;

	/*
	 * arithmetic
	 *  + - * / % 
	 *  ++ -- 
	 *  += 
	 */

	cout << "4/5=" << 4/5 << " //????? cast!" << endl;
	cout << "4/5=" << (float)4/5 <<endl;


	return 0;
}
