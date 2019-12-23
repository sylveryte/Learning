#include<iostream>
#include "sylvtools.cpp"

class Animal{
	public:
		void getFamily() { cout << "We are animals" << endl;}

		virtual void getClass() { cout << "I'm an Animal" << endl;}

		virtual void makeSound() { cout << "Animal says grrr" << endl;}
};

class Dog : public Animal{
	public:
		void getClass() { cout << "I'm a Dog" << endl;
		}

		void makeSound() { cout << "Dog says Wooof!" << endl;}
};

class SuperDog: public Dog{
	public:
		void getClass(){ cout << "I'm a super DOG" << endl;
		}
};

class Cat : public Animal{
	public:
		void makeSound() { cout << "Cat says Purrrr!" << endl;}
};

void  whatClassMan(Animal* animal){
	animal-> getClass();
}

int main(){
	
	Animal* animal = new Animal;
	Dog* dog = new Dog;
	SuperDog* sdog = new SuperDog;

	animal->getClass();
	dog->getClass();
	sdog->getClass();
	sdog->getFamily();

	//try these without virtual token
	whatClassMan(animal);
	whatClassMan(dog);
	whatClassMan(sdog);

	//POlymorphism baby
	Animal* ptrSdog = sdog;
	ptrSdog-> getClass();

	Cat* cat = new Cat;
	dog-> makeSound();
	cat->makeSound();

	Animal* stray;
	stray = dog;
	stray-> makeSound();
	stray = cat;
	stray -> makeSound();

	return 0;
}
