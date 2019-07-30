/*
	Li, Sum
	Jiang, Karen

	CS A250
	April 19, 2017

	Project 1 (Part C)
*/

#include "Course.h"

Course::Course()
{
	transferable = 'N';
}

Course::Course
	(const string& newCourseName, 
		int newCourseNumber, double newCourseUnits, 
		const vector<int>& newPrerequisites, char newTransferable) 
	: CourseType(newCourseName, newCourseNumber, newCourseUnits)
{
	prerequisites = newPrerequisites;
	transferable = newTransferable;
}

bool Course::isTransferable() const
{
	return (transferable == 'Y');
}

void Course::setTransfer(char newTransferable)
{
	transferable = newTransferable;
}

void Course::setPrereqs(const int newPrerequisites[], 
	int numOfElem)
{
	for (int i = 0; i < numOfElem; i++)
	{
		prerequisites.push_back(newPrerequisites[i]);
	}
}

void Course::printCourse() const
{
	 string answer = (transferable == 'Y') ? "transferable" : "not transferable";

	 cout << getPrefix() << getCourseNumber() << " - " << getCourseName()
		 << " (" << getCourseUnits() << " units, "
		 << answer << ")" << endl;
}

void Course::printPrereqs() const
{
	cout << PREFIX << getCourseNumber() << " - Prerequisites: ";

	int size = static_cast<int>(prerequisites.size());

	if (size == 0)
	{
		cout << "None" << endl;
	}
	else
	{
		size--;
		for (int i = 0; i < size; i++)
		{
			cout << PREFIX << prerequisites[i] << " or ";
		}

		cout << PREFIX << prerequisites[size];
		cout << endl;
	}
}

Course::~Course()
{}