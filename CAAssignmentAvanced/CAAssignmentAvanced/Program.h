#pragma once
#include <iostream>
#include <string>
#include "WeatherForecastCenter.h"
#include "Device.h"

using namespace std;
class Program 
{
protected: 
	int Exit = 0;
private:
	WeatherForecastCenter *w;
public:
	Program();
	void run();
	int get_choice() const;
	void do_task(const int &choice);
	void print_menu() const;
	~Program();
private:
	void add_device();
	void display() const ;
	string get_weather() const;
	void change_weather(const string &weather);
	void remove_device();
};

