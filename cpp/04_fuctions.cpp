#include<iostream>
#include "sylvtools.cpp"


int add(int a, int b=0){
	return a+b;
}

int add(int a, int b, int c){
	return a+b+c;
}

int getFactorial(int n){
	int s;
	if(n == 1) s =1;
	else s= getFactorial((n-1)*n);
	return s;
}

int main(){
	
	cout << add(4,3) << endl;
	cout << add(4,3,9) << endl;
	cout << getFactorial(7) << endl;

	return 0;
}
