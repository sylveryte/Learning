#include <iostream>

using namespace std;

int main(){
	
	// ternary var=(condition)?true:false;
	int num = (7>2)?7:2;
	if(num<5){cout<<"its not that big"<<endl;}else{cout<<"big num"<<endl;}

	switch(num){
		case 6: cout<<"hello"<<endl;break;
		case 7: cout<<"man"<<endl; break;
		default: cout <<"default 404"<<endl;
	}

	//arrays
	int a[5];
	int badNums[5]={3,42,53,12,536};
	cout << badNums[2] << endl;

	char name[5][5]={{'s','l','v','e','r'},
					 {'c','o','d','l','f'}
	};
	cout << *name << endl;
	name[2][2]='x';


	//loops
	for(int i=0; i<5; i++){
		cout << i<< name[0][i]<<endl;
	}

	int r;
	while(r!=21){
		r = rand()%100;
		cout << r << '_';
	}
	cout << endl;

	do{
		cout << "man doing stuff" << endl;
	}while((rand()%40)!=7); //dont forget ; after while


	return 0;
}
