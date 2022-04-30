#pragma once

#include <iostream>
#include <List>
#include "Student.h"

using namespace std;

class DataBase
{
public: 
	list<Student> studentList;

	void Load(string path);
	void Insert(Student student_);
	void Delete(Student& student_);
};

