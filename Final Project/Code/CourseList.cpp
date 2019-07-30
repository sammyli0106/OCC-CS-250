/*
	Li, Sum
	Jiang, Karen

	CS A250
	March 14, 2017

	Project 1 (Part B)
*/

#include "CourseList.h"

// Default constructor
CourseList::CourseList()
{
	courseList = new list<Course>;
}

// Declaration function addCourse
void CourseList::addCourse(const string& courseName, 
	int courseNum, double courseUnits,
		const vector<int>& prereq, char transferable) const
{
	Course course(courseName, courseNum, courseUnits, 
		prereq, transferable);

	courseList->push_back(course);
}

// Declaration function isEmpty
bool CourseList::isEmpty() const
{
	return (courseList->empty());
}

// Declaration function searchCourse
bool CourseList::searchCourse(int search) const
{
	return(getCourseLocation(search) != courseList->end());
}

// Declaration function printAllCourses
void CourseList::printAllCourses() const
{
	list<Course>::const_iterator iter = courseList->cbegin();
	list<Course>::const_iterator iterEnd = courseList->cend();

	while (iter != iterEnd)
	{
		cout << fixed << showpoint << setprecision(2);
		cout << PREFIX << iter->getCourseNumber()
		<< " - " << iter->getCourseName() << endl;

		++iter;
	}
}

// Declaration function printTransferCourses
void CourseList::printTransferCourses() const
{
	list<Course>::const_iterator iter = courseList->cbegin();
	list<Course>::const_iterator iterEnd = courseList->cend();

	while (iter != iterEnd)
	{
		if (iter->isTransferable())
		{
			cout << fixed << showpoint << setprecision(2);
			cout << PREFIX << iter->getCourseNumber() 
				<< " - " << iter->getCourseName() 
				<< endl;
		}
		++iter;
	}
}

// Declaration function printVocationalCourses
void CourseList::printVocationalCourses() const
{
	list<Course>::const_iterator iter = courseList->cbegin();
	list<Course>::const_iterator iterEnd = courseList->cend();

	while (iter != iterEnd)
	{
		if (!(iter->isTransferable()))
		{
			cout << fixed << showpoint << setprecision(2);
			cout << PREFIX << iter->getCourseNumber()
				<< " - " << iter->getCourseName()
				<< endl;
		}
		++iter;
	}
}

// Declaration function printCourseByNumber
void CourseList::printCourseByNumber(int courseNum) const
{
	(getCourseLocation(courseNum))->printCourse();
}

// Declaration function printPrereqs
void CourseList::printPrereqs(int courseNum) const
{
	(getCourseLocation(courseNum))->printPrereqs();
}

// Declaration function clearList
void CourseList::clearList() const
{
	courseList->clear();
}

// Declaration destructor
CourseList::~CourseList() 
{
	delete courseList;
	courseList = nullptr;
}

// Definition function getCourseLocation
list<Course>::const_iterator CourseList::getCourseLocation(int courseNum) const
{
	list<Course>::const_iterator iter = courseList->cbegin();
	list<Course>::const_iterator iterEnd = courseList->cend();

	while (iter != iterEnd)
	{
		if (iter->getCourseNumber() == courseNum)
		{
			return iter;
		}
		++iter;
	}

	return(iterEnd);
}

