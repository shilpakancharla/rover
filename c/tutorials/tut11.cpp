#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Animal {
	public:
		void getFamily() { cout << "We are animals" << endl; }
		
		//mark as virtual when we have a base class overwritten by subclass
		virtual void getClass() { cout << "I'm an Animal" << endl; }
};

class Dog : public Animal{
	public: 
		getClass() { cout << "I'm a Dog" << endl;
};

class GermanShepard : public Dog{
	public:
		void getClass() { cout << "I'm a German Shepard" << endl; }
		void getDerived() { cout << "I'm an Animal and Dog" << endl; }};

void whatClassAreYou(Animal *animal) {

	animal -> getClass();

}

int main() {

	Animal *animal = new Animal;
	Dog *dog = new Dog;

	animal -> getClass();
	dog -> getClass();

	whatClassAreYou(animal);
	whatClassAreYou(dog);

	Dog spot;
	GermanShepard max;

	Animal* ptrDog = &spot;
	Animal* ptrGShepard = &max;

	ptrDog -> getFamily();

	ptrDog -> getClass();

	ptrGShepard -> getFamily(0;

	ptrGShepard -> getClass();

	return 0;

}