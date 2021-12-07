#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Device.h"
using namespace std;

class Device;
class WeatherForecastCenter
{
private:
	string name;
	string weather = "Nice\n";
	vector<Device*> devices;
	
public:
	WeatherForecastCenter() {};
	WeatherForecastCenter(const string &name);
	void add_device(Device *d);
	void remove_device(const int &id);
	void change_weather(const string &weather);
	void set_weather(const string &weather);
	string show_weather();
	void display();
	~WeatherForecastCenter();

};