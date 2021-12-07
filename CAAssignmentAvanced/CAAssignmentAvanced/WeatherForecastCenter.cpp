#include "WeatherForecastCenter.h"
WeatherForecastCenter::WeatherForecastCenter(const string &name)
{
	this->name = name;
}

void WeatherForecastCenter::add_device(Device *d)
{
	d->set_WeatherForecastCenter(this);
	devices.push_back(d);
}

void WeatherForecastCenter::change_weather(const string &weather)
{
	this->weather = weather;
	for (int i = 0; i < devices.size(); i++) 
	{
		devices[i]->update_weather();
	}
	cout << endl;
}
void WeatherForecastCenter::set_weather(const string &weather)
{
	this->weather = weather;
}

void WeatherForecastCenter::remove_device(const int &id)
{
	for (int i = 0; i < devices.size(); i++)
	{
		if (devices[i]->get_id() == id)
		{
			devices.erase(devices.begin() + i);
		}
	}
}

string WeatherForecastCenter::show_weather()
{
	
	return weather;
}


void WeatherForecastCenter::display()
{
	for (int i = 0; i < devices.size() ; i++)
	{
		devices[i]->display(); 
	}
}

WeatherForecastCenter::~WeatherForecastCenter()
{
}

