#include <iostream>
#include "../include/student_observer.h"
#include "../include/student_point.h"

int main()
{
	StudentPoint* data = new StudentPoint();
	data->add_student("John", 8);
	data->add_student("Paul", 5);
	data->add_student("George", 7);
	data->add_student("Ringo", 9);

	StudentTable* table = new StudentTable();
	StudentChart* chart = new StudentChart();

	data->add(table);   // add observer
	data->add(chart);   // add observer

	data->notify();     // notify all observers (tell all observers to update)

	data->add_student("Obama", 5);
	data->add_student("Trump", 6);

	data->notify();     // new data will be updated in table and chart
}