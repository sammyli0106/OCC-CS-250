/*
	Li, Sum
	Jiang, Karen

	CS A250
	April 19, 2017

	Project 1 (Part C)
*/

#ifndef COURSETYPE_H
#define COURSETYPE_H

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const string PREFIX = "CS A";

class CourseType 
{
public:
	CourseType();
	CourseType(const string& newCourseName,
		int newCourseNumber, double newCourseUnits);

	string getCourseName() const;
	int getCourseNumber() const;
	double getCourseUnits() const;
	string getPrefix() const;

	void setCourseName(const string& newCourseName);
	void setCourseNumber(int newCourseNumber);
	void setCourseUnits(double newCourseUnits);

	void printCourse() const;

	~CourseType();

private:
	string courseName;
	int courseNumber;
	double courseUnits;
};

#endif
