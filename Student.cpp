#include "Student.h"
#include <string>
#include <vector>
#include "Person.h"
#include <sstream>

Student::Student() {

}

//reprezantaion of class fields
std::string Student::repr() {
	std::ostringstream os;
	os <<  "FIO : " << this->FIO << " AGE : " 
		<< this->age << " Grade: " << this->grade
		<< " Height : " << this->height << " Marks: ";
	for (int mark : this->marks) {
		os << mark << " ";
	}
	
	return os.str();
}
