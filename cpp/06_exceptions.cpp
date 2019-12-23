#include<iostream>
#include "sylvtools.cpp"



int main(){
	
	int n = 0;

	try{
		if(n !=0){
			cout << 2/n <<endl;
		}else throw(n);
	}
	catch(int n){
		cout << n << " is not valid" << endl;
	}

	return 0;
}
