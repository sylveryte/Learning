#include<iostream>

using namespace std;

void print(const char* input){
	cout << input;
}

void printl(const char* input){
	cout << input << endl;
}

void printa(const char* label, int *a, int n){
	cout << label << " : ";
	for(int i=0;i<n;i++){
		cout << '|' << a[i] ;
	}
	cout << '|' << endl;
}

void printia(const char* label, int *a, int s, int n){
	cout << label << " : ";
	for(int i=s;i<=n;i++){
		cout << '|' << a[i] ;
	}
	cout << '|' << endl;
}
