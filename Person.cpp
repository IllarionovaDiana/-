#include "Person.h"
#include <string>

Person::Person() {}
Person::Person(int age, int height, std::string FIO){
	this->age = age;
	this->height = height;
	this->FIO = FIO;
}
//reprezantaion of class fields
std::string Person::repr() {
	return "i'm base";
}
