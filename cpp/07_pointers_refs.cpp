#include<iostream>
#include "sylvtools.cpp"


void doubleit(int* a){*a*=2;}

void doubleitRef(int& a){a/=2;}

int main(){
	
	int age = 22;
	char grade = 'A';

	cout << "size of int " << sizeof(age) << endl;
	cout << "size of char " << sizeof(grade) << endl; 

	cout << "age is located at " << &age << endl;

	int* page = &age;
	*page=21;

	cout << "age is " << age << endl;


	doubleit(&age);
	cout << "age is " << age << endl;

	//array man
	int a[] = {12,23,523,4};
	int* ap=a;
	cout << "ap addres " << ap << " ap value "<< *ap << endl;
	ap++;
	cout << "ap addres " << ap << " ap value "<< *ap << endl;

	cout << "a addres " << a << " a value "<< *a << endl;


	//refrences
	int& ar=age;
	cout << "age is " << age << endl;
	ar++;
	cout << "age is " << age << endl;
	doubleitRef(age);
	cout << "age is " << age << endl;

	return 0;
}
