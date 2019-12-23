#include<iostream>
#include "sylvtools.cpp"

struct twoInt{
	int a;
	int b;
};

/*
 * only difference between a class and a struct is that members 
 * and base classes are private by default in classes, 
 * whereas they are public by default in structs.
 * So structs can have constructors, and the syntax is the same as for classes.
 * And that structures will default to public when deriving from
 */

typedef struct s {
	struct s* p;
	int n;
	double* d;

	s(int a){
		this -> n = a;
		this -> d = new double[a];
	}

}da;

int main(){
	//vanilla struct
	struct twoInt ab;
	ab.a=2;
	ab.b=21;
	cout << "Two ints " << ab.a << " " << ab.b << endl;
	
	//typedef struct
	da a(4);
	a.d[0]=2;
	a.d[2]=43;
	cout << "Dynamic dobles " << a.d[2] << " " << a.d[0] << endl;
	
	
	cout << "\n\nExtras" <<endl;
	int* p=new int[5];
	for(int i=0;i<5;i++)cout<<" |"<<p[i];
	for(int i=0;i<5;i++)p[i]=30;
	cout<<endl;
	for(int i=0;i<5;i++)cout<<" |"<<p[i];
	cout<<endl;
	int ka;
	cout << ka;
	int* kk=new int[3];
	cout<<endl;
	cout << kk[2];

	return 0;
}
