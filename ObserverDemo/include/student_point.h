#ifndef _STUDENT_POINT_H
#define _STUDENT_POINT_H

#include <iostream>//sử dụng thư viện
#include <string>
#include <vector>
using namespace std;

class StudentObserver;   

class StudentPoint
{
    private:
        vector<string> students;
        vector<int> points;
        vector<StudentObserver*> observers;
    public:
        void add(StudentObserver* observer);
        void notify();
        void add_student(const string &student, const int &point);
        vector<string> get_students();
        vector<int> get_points();
};

#endif