/*
	Li, Sum
	Jiang, Karen

	CS A250
	March 14, 2017

	Project 1 (Part B)
*/
#ifndef COURSELIST_H
#define COURSELIST_H

#include "Course.h"
#include <list>
#include <string>
#include <vector> 
using namespace std;

class CourseList
{
public:

	// Default constructor
	CourseList();

	// Declaration function addCourse
	void addCourse(const string& courseName, int courseNum, double courseUnits,
					const vector<int>& prereq, char transferable) const;
	// Declaration function isEmpty
	bool isEmpty() const;

	// Declaration function searchCourse
	bool searchCourse(int search) const;

	// Declaration function printAllCourses
	void printAllCourses() const;

	// Declaration function printTransferCourses
	void printTransferCourses() const;

	// Declaration function printVocationalCourses
	void printVocationalCourses() const;

	// Declaration function printCourseByNumber
	void printCourseByNumber(int courseNum) const;

	// Declaration function printPrereqs
	void printPrereqs(int courseNum) const;

	// Declaration function clearList
	void clearList() const;

	// Declaration destructor
	~CourseList();

private:
	list<Course> *courseList;

	// Declaration function getCourseLocation
	list<Course>::const_iterator getCourseLocation(int courseNum) const;
};

#endif
