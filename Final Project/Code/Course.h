/*
	Li, Sum
	Jiang, Karen

	CS A250
	April 19, 2017

	Project 1 (Part C)
*/

#ifndef COURSE_H
#define COURSE_H

#include "CourseType.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Course : public CourseType
{
public:
	Course();
	Course(const string& newCourseName, int newCourseNumber,
		double newCourseUnits, const vector<int>& newPrerequisites,
		char newTransferable);

	bool isTransferable() const;

	void setTransfer(char newTransferable);
	void setPrereqs(const int newPrerequisites[], int numOfElem);

	void printCourse() const;
	void printPrereqs() const;

	~Course();

private:
	vector<int> prerequisites;
	char transferable;
};

#endif
