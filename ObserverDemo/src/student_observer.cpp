#include "../include/student_observer.h"
#include "../include/student_point.h"

/// Implement StudentObserver
void StudentObserver::set_data(StudentPoint *data)
{
    this->data = data;
}

/// Implement StudentTable
void StudentTable::update()
{
    cout << "Student Table" << endl;
    vector<string> students = data->get_students();
    vector<int> point = data->get_points();
    draw_table(students, point);
}

void StudentTable::draw_table(vector<string> students, vector<int> point)
{
    printf("+----------+----------+\n");
    printf("|%10s|%10s|\n", "Student", "Point");
    printf("+----------+----------+\n");
    for (int i = 0; i < students.size(); i++)
    {
        printf("|%10s|%10d|\n", students[i].c_str(), point[i]);   
    }
    printf("+----------+----------+\n");
}

/// Implement StudentTable
void StudentChart::update()
{
    cout << "Student Chart" << endl;
    vector<string> students = data->get_students();
    vector<int> point = data->get_points();
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
    int length = value / 1;
    cout << "[";
    for (int i = 0; i < length; i++) cout << "=";
    cout << "]";
}
void Principal::update()
{
    cout << "Principal" << endl;
    vector<string> students = data->get_students();
    vector<int> point = data->get_points();
    draw_table(students, point);
}

void Principal::draw_table(vector<string> students, vector<int> point)
{
    printf("+----------+----------+\n");
    printf("|%10s|%10s|\n", "If over 5 points will have a compliment", "if less than 5 points will be disapproved");
    printf("+----------+----------+\n");
    for (int i = 0; i < students.size(); i++)
    {
        printf("|%10s|%10d|\n", students[i].c_str(), point[i]);   
    }
    printf("+----------+----------+\n");
}

void StudentRank::update()
{
    cout << "Student Rank" << endl;
    vector<string> students = data->get_students();
    vector<int> point = data->get_points();
    draw_table(students, point);
}

void StudentRank::draw_table(vector<string> students, vector<int> point)
{
    printf("+----------+----------+\n");
    printf("|%10s|%10s|\n", "Status Student", "Rank");
    printf("+----------+----------+\n");
    for (int i = 0; i < students.size(); i++)
    {
        string rank = "";
        if (point[i] > 5)
        {
            rank = "Pass";
        }
        else
        {
            rank = "Fail";
        }

        //printf ("%d",point[i]);
        printf("|%10s|%10s|\n", students[i].c_str(), rank.c_str());   
    }
    printf("+----------+----------+\n");
}