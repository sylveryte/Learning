#include<iostream>
#include<fstream>
#include "sylvtools.cpp"



int main(){

	//write
	string q = "A day is a 24hr long rotation of earth?? \n--Me";

	ofstream writer("quote.txt");

	if(!writer){
		cout << "Error opening file" << endl;
		return -1;
	}
	else{
		writer << q << endl;
		cout << "Sucessfully written" << endl;
		writer.close();
	}	

	ofstream writer2("quote.txt", ios::app);
	
	if(!writer2){
		cout << "Error opening file" << endl;
		return -1;
	}
	else{
		writer2 << "-Master Sylveryte" << endl;
		cout << "Sucessfully written" << endl;
		writer2.close();
	}	


	//REAd
	char letter;
	ifstream reader("quote.txt");

	if(!reader){
		cout << "Error opening file" << endl;
		return -1;
	}else{
		while(! reader.eof()){
			reader.get(letter);
			cout<< letter;
		}
	}
	return 0;
}
