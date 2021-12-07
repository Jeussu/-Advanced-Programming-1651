#include "../include/student_observer.h"
#include "../include/student_point.h"

void StudentPoint::add(StudentObserver* observer)
{
    observer->set_data(this);
    observers.push_back(observer);
}
void StudentPoint::notify()
{
    for (int i = 0; i < observers.size(); i++)
        observers[i]->update();
}
void StudentPoint::add_student(const string &students, const int &student)
{
    students.push_back(student);
    point.push_back(student);
}
vector<string> StudentPoint::get_students()
{
    return students;
}
vector<int> StudentPoint::get_point()
{
    return point;
}
