#ifndef _STUDENT_OBSERVER_H_
#define _STUDENT_OBSERVER_H_

#include "student_point.h"

class StudentObserver
{
    protected:
        StudentPoint* data;
    public:
        virtual void update() = 0; // abstract method
        void set_data(StudentPoint * data);
};

class StudentChart : public StudentObserver
{
    public:
         void update();
         
    private:
        void draw_chart(vector<string> student,vector<int> students);
        void draw_bar(const int &value);
};

class StudentTable : public StudentObserver
{
    public:
        void update();
    private:
    void draw_table(vector<string> student,vector<int> students);
};
class Principal : public StudentObserver
{
    public:
        void update(); // override from StudentObserver
    private:
        void draw_table(vector<string> students, vector<int> point);
};
class StudentRank : public StudentObserver
{
    public:
        void update(); // override from StudentObserver
    private:
        void draw_table(vector<string> students, vector<int> point);
};
#endif