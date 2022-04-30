#pragma once

#include <string>

using namespace std;

struct Student{
public:
	string name;
	int group;
	double rating;
	string info;

	Student();
	Student(string name_, int group_, double rating_, string info_);
	~Student();
};

