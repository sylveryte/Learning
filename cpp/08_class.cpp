#include<iostream>
#include "sylvtools.cpp"


class Animal{
	private:
		int height;
		int weight;
		string name;

		static int numOfAnimals;
	
	public:
		int getHeight(){return height;}
		int getWeight(){return weight;}
		string getName(){return name;}
		void setHeight(int cm){height = cm;}
		void setWeight(int kg){weight = kg;}
		void setName(string newName){ 
			cout << this -> name << " changed it's name to "<< newName << endl;
			name = newName; 
		}

		void setAll(int, int, string);

		//constructor
		Animal(int, int, string);
		Animal();

		//destructor
		~Animal();

		void toString();

		static int getCount() { return numOfAnimals;}

} boi(10,7,"Boi");

int Animal::numOfAnimals = 0;

void Animal::setAll(int height, int weight, string name){
	this -> name = name;
	this -> height = height;
	this -> weight = weight;
	Animal::numOfAnimals++;
}

Animal:: Animal(int height, int weight, string name){
	this -> name = name;
	this -> height = height;
	this -> weight = weight;
	Animal::numOfAnimals++;
}

Animal::~Animal(){
	cout << "Bad news :  \"" << this -> name << "\" died!! " << endl;
}

Animal::Animal(){ 
	Animal::numOfAnimals++;
}

void Animal::toString(){
	cout << this -> name << " is " << this -> height << " cms tall and " << this -> weight << " kgs in weight" << endl;
}



class Dog : public Animal{
	private:
		string sound = "Woof";

	public:
		Dog(int height, int weight, string name, string bark)
			:Animal(height, weight, name){
			this -> sound = bark;

		}

		Dog() : Animal(){};

		~Dog(){
			cout << this -> sound << " !! \n\t-" << this-> getName() << " : I'was just a dog, man." << endl;
		}

		void toString(){
			cout << this -> sound << " " << this -> sound << 
				" \n  -"<< this -> getName() << endl;
		}

};


int main(){
	
	Dog dog = Dog(32,15,"Pooch", "Bhoww");
	dog.toString();
	dog.Animal::toString();
	dog.setName("Munchi");

	cout << "\n------------------now the cat " << endl;

	Animal cat = Animal();
	cat.setName("Rosy");
	cat.setHeight(23);
	cat.setWeight(12);
	cat.toString();

	cout << "\n------------------bizzaros turn ! " << endl;

	Animal biz = Dog(22,19,"Bizzaro", "Mooo");
	biz.toString();

	cout << "\n------------------everyone is done! " << endl;

	cout << "TOTAL animals are : " << Animal::getCount() << endl;



	return 0;
}
