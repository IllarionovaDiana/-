#include "Classroom.h"
#include <vector>
#include <string>
#include "Student.h"
#include "Teacher.h"
#include <iostream>
#include <sstream>
//constructors
Classroom::Classroom() {}
Classroom::Classroom(int places, std::string type) {
	this->places = places;
	this->type = type;
}

void Classroom::display() {
	int places = this->places;
}
//set/get teacher
void Classroom::setTeacher(Teacher teacher) {
	this->teacher = teacher;
}

std::string Classroom::getTeacher() {
	return this->teacher.repr();
}
//set/get students
void Classroom::setStudents(std::vector<Student> students) {
	this->students = students;
}

std::string Classroom::getStudentes() {
	std::string result_row = "";
	for (Student stud : this->students) {
		result_row += stud.repr() + "\n";
	}
	return result_row;
}
	//if no teacher in class place it
void Classroom::place_teacher(Teacher teacher) {
	if (this->teacher.age == 0 && this->teacher.height == 0) {
		this->teacher = teacher;
	}
	else {
		//std::cout << this->teacher.age << this->teacher.height << std::endl;
		std::cout << "Classroom already have teacher" << std::endl;
	}
}
//add stundets [by one or from students vector]
void Classroom::place_student(Student student) {
	if (this->students.size() < this->places) {
		this->students.push_back(student);
	}
	else {
		std::cout << "No more places" << std::endl;
	}
}

void Classroom::place_student(std::vector<Student> students) {
	for (Student stud : students) {
		if (this->students.size() < this->places) {
			this->students.push_back(stud);
		}
		else {
			std::cout << "No more places" << std::endl;
			break;
		}
	}
}
//reprezantaion of class fields
std::string Classroom::repr() {
	std::ostringstream os;
	os << "type: " << this->type << " Places: " << this->places << "\n";

	for (Student stud : this->students) {
		os << stud.repr()  << "\n";
	}
	os << this->teacher.repr() << "\n";
	return os.str();
}
