#ifndef _STUDENT_POINT_H_
#define _STUDENT_POINT_H_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class StudentObserver;

class StudentPoint{
    private:
    vector<string>students;
    vector<int>point;
    vector<StudentObserver*> observers;
    public:
    void add(StudentObserver* observer);
    void notify();
    void add_student(const string &students, const int &student);
    vector<string> get_students();
    vector<int> get_point;
};

#endif
