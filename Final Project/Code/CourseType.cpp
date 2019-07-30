/*
	Li, Sum
	Jiang, Karen

	CS A250
	April 19, 2017

	Project 1 (Part C)
*/

#include "CourseType.h"

CourseType::CourseType()
{
	courseName = "No name assigned";
	courseNumber = 0;
	courseUnits = 0.0;
}

CourseType::CourseType(const string& newCourseName,
	int newCourseNumber, double newCourseUnits)
{
	courseName = newCourseName;
	courseNumber = newCourseNumber;
	courseUnits = newCourseUnits;
}

string CourseType::getCourseName() const
{
	return courseName;
}

int CourseType::getCourseNumber() const
{
	return courseNumber;
}

double CourseType::getCourseUnits() const
{
	return courseUnits;
}

string CourseType::getPrefix() const
{
	return PREFIX;
}

void CourseType::setCourseName(const string& newCourseName)
{
	courseName = newCourseName;
}

void CourseType::setCourseNumber(int newCourseNumber)
{
	courseNumber = newCourseNumber;
}

void CourseType::setCourseUnits(double newCourseUnits)
{
	courseUnits = newCourseUnits;
}

void CourseType::printCourse() const
{
	cout << fixed << showpoint << setprecision(2);
	cout << PREFIX << courseNumber << " - "
		<< courseName << " (" << courseUnits << " units)";
}

CourseType::~CourseType()
{}