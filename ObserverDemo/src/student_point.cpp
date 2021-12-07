#include "../include/student_point.h"
#include "../include/student_observer.h"

void StudentPoint::add(StudentObserver* observer)
{
    observer->set_data(this);
    observers.push_back(observer);
}
void StudentPoint::notify()
{
    for (int i = 0; i < observers.size(); i++) //Variable initialization (phần khởi tạo biến),Condition (biểu thức điều kiện),Variable update (cập nhật biến vòng lặp)
        observers[i]->update();
}
void StudentPoint::add_student(const string &student, const int &point) //when you need to declare a variable with a constant value during program execution.khi cần khai báo một biến với giá trị không đổi trong quá trình chạy chương trình.
{
    students.push_back(student);
    points.push_back(point);
}
vector<string> StudentPoint::get_students()
{
    return students;// end function get student
}
vector<int> StudentPoint::get_points() 
{
    return points;// end function get point
}