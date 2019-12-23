#include<iostream>
#include "sylvtools.cpp"

using namespace std;

int main(){

	string man = "im socked!";
	//cout << man << endl << "enter a num:";

	//getline(cin, man);
	//cin >> man;
	//
	//*********CONVERTING STRING TO INT
	//int toInt = stoi(man); //stod for double
	//cout << --toInt << endl;

	//***********INPUT
	//cout << "your name ";
	//getline(cin, man);


	cout << "string : " << man << endl; 
	cout << "SIze of string : " << man.size() << endl;
	cout << "is string empty : " << man.empty() << endl;

	string dog = "dog";
	string cat = "cat";

	cout << dog.compare(cat) << endl;
	cout << dog.compare(dog) << endl;
	cout << cat.compare(dog) << endl;

	string name = "Sylveryte";

	string wholename = name.assign(name);
	cout << wholename << endl;
	//SUB STRING
	string fname = wholename.assign(wholename, 0, 5);
	cout << fname << endl;
	cout<< "jhi";

	//SEARCHING for index
	int ytIndex = name.find("yt",0);
	cout << ytIndex << endl;

	name.insert(2,"21");
	cout << name << endl;

	name.erase(2,4);
	cout << name << endl;

	name.replace(3,6, "MAX");
	cout << name << endl;

	name = "012345678";
	cout << name << endl;
	name.erase(2,4);
	cout << name << endl;



	return 0;
}
