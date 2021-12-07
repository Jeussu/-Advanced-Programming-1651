#include <iostream>
#include "../include/sale_observer.h"
#include "../include/sale_data.h"

int main(int argc, char *argv[])
{
	SaleData* data = new SaleData();
	data->add_sale("John", 80);
	data->add_sale("Paul", 50);
	data->add_sale("George", 70);
	data->add_sale("Ringo", 120);

	SaleTable* table = new SaleTable();
	SaleChart* chart = new SaleChart();

	data->add(table);   // add observer
	data->add(chart);   // add observer

	data->notify();     // notify all observers (tell all observers to update)

	data->add_sale("Obama", 50);
	data->add_sale("Trump", 60);

	data->notify();     // new data will be updated in table and chart
}