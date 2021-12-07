#include "Device.h"
Device::Device()
{
	id = 0;
	name = "UN";
}
Device::Device(const int &id, const string &name)
{
	this->id = id;
	this->name = name;
	
}

void Device::set_WeatherForecastCenter(WeatherForecastCenter *w)
{
	this->w = w;
}

void Device::display() 
{
	cout << "Device id : " << id << endl;
	cout << "Device name: " << name << endl;
	//
	string weather = w->show_weather();
	if (weather == "Rain")
		cout << "It's raining outside. Bring an umbrella or a raincoat when you go out!" << endl;
	else if (weather == "Sunny")
		cout << "It's sunny ouside. Bring an umbrella or a Sun protection jacket when you go out!" << endl;
	else if (weather == "Storm")
		cout << "It's storm outside. Do not go out now if not necessary! " << endl;
}

int Device::get_id()
{
	return id;
}

Device::~Device()
{
}

Smartphone::Smartphone(const int & id, const string &name) //
{
	this->id = id;
	this->name = name;
	
}

void Smartphone::update_weather()
{
	string weather = w->show_weather(); 
	cout << "What is the weather now : ";
	cin >> weather;
	w->set_weather(weather);

}

void Applewatch::update_weather()
{
	string weather = w->show_weather();
	cout << "What is the weather now : ";
	cin >> weather;
	w->set_weather(weather);
}

void Smartphone::display()
{
	Device::display();
	//show from device
}

Applewatch::Applewatch(const int & id, const string &name) //
{
	this->id = id;
	this->name = name;
	
}

void Applewatch::display()
{
	Device::display();
}