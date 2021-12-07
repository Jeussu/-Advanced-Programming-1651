#include <iostream>
#include "../include/student_observer.h"
#include "../include/student_point.h"

int main()
{
	StudentPoint* data = new StudentPoint();
	data->add_student("Vinh", 6);
	data->add_student("Quyet", 4);
	data->add_student("Tuan", 7);
	data->add_student("Cuong", 3);

	StudentTable* table = new StudentTable();
	StudentChart* chart = new StudentChart();
	Principal   * cmt   = new Principal();
	StudentRank * Rank  = new StudentRank();

	data->add(table);   // add observer
	data->add(chart);   // add observer
	data->add(cmt);     // 
	data->add(Rank);

	data->notify();     // notify all observers (tell all observers to update)

	data->add_student("Duong", 2);
	data->add_student("Tien", 6);
	data->add_student("Duong", 5);
	data->add_student("Alex", 4);

	data->notify();     // new data will be updated in table and chart
}