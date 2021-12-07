#pragma once
#include <iostream>
#include <string>
#include "WeatherForecastCenter.h"
using namespace std;

class WeatherForecastCenter;

class Device
{
protected:
	int id;
	WeatherForecastCenter *w;
	string name;//
public:
	Device();
	Device(const int &id, const string &name);//
	virtual void update_weather() = 0;
	virtual void display();
	void set_WeatherForecastCenter(WeatherForecastCenter *w);
	int get_id();
	virtual ~Device();
};

class Smartphone : public Device
{
public:
	Smartphone(const int &id, const string &name) ;//
	void update_weather(); //override from device
	void display(); //override from device
};

class Applewatch : public Device
{
public:
	Applewatch(const int&id, const string &name);//
	void update_weather();
	void display();
};