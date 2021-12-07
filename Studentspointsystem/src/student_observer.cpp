#include "../include/student_observer.h"
#include "../include/student_point.h"


void StudentObserver::set_data(StudentPoint *data)
{
    this->data = data;
}

void StudentTable::update()
{
    cout << "Student Table" << endl;
    vector<string> students = data->get_students();
    vector<int> point = data->get_point();
    draw_table(students, point);
}
void StudentTable::draw_table(vector<string> students, vector<int> point)
{
    printf("+----------+----------+\n");
    printf("|%10s|%10s|\n", "Students", "Student");
    printf("+----------+----------+\n");
    for (int i = 0; i < students.size(); i++)
    {
        printf("|%10s|%10d|\n", students[i].c_str(), point[i]);   
    }
    printf("+----------+----------+\n");
}

/// Implement SaleTable
void StudentChart::update()
{
    cout << "Student Chart" << endl;
    vector<string> students = data->get_students();
    vector<int> point = data->get_point();
    draw_chart(students, point);
}

void StudentChart::draw_chart(vector<string> students, vector<int> point)
{
    for (int i = 0; i < students.size(); i++)
    {
        printf("%10s:", students[i].c_str());
        draw_bar(point[i]);
        printf("\n");
    }
}

void StudentChart::draw_bar(const int &value)
{
    int length = value / 10;
    cout << "[";
    for (int i = 0; i < length; i++) cout << "=";
    cout << "]";
}
