#include<iostream>
#include<vector>
#include "sylvtools.cpp"

using namespace std;

int main(){
	vector<int> v(10);

	int a[5] = {4,12,43,45,23};

	for(int i=0;i<10;i++)cout << " | " << v.at(i); cout << endl;

	v.insert(v.begin(), a, a+3);
	printl("v.insert(v.begin(), a, a+3);");
	for(int i=0;i<v.size();i++)cout << " | " << v.at(i); cout << endl;

	v.insert(v.begin()+5, 21);
	printl("v.insert(v.begin()+5, 21);");
	for(int i=0;i<v.size();i++)cout << " | " << v.at(i); cout << endl;

	//cout << v << endl;
	//cout << a << endl;
	//cout << a+3 <<endl;
	//
	
	// add value at end
	v.push_back(56);
	printl("v.push_back(56);");
	for(int i=0;i<v.size();i++)cout << " | " << v.at(i); cout << endl;

	cout << "v.front() first value " << v.front() <<endl;
	cout << "v.back() last value " << v.back() <<endl;



	//just look at docs man
	return 0;
}
