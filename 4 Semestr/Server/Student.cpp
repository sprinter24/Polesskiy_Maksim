#include "Student.h"

Student::Student(string name_, int group_, double rating_, string info_) :
	name(name_), group(group_), rating(rating_), info(info_)
{}

Student::Student():
	name("EmptyCell"), group(-1), rating(-1), info("Not a student, it is emty cell")
{}