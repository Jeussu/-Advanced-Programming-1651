#include "Program.h"

Program::Program()
{
	w = new WeatherForecastCenter();
}

Program::~Program()
{
	//nothing to do
}

void Program::add_device()
{
	Device *d;
	int id;
	string name;
	cout << "Enter Device id: " ; 
	cin >> id;
	//Device *d = new Applewatch(id);
	if (id == 1 )
		d = new Smartphone(1,"SmartPhone"); //
	else 
		d = new Applewatch(2,"AppleWatch"); //
	//cout << d->get_id() << endl;
	w->add_device(d);
}

void Program::display() const
{
	w->display();
}

string Program::get_weather() const
{
	return w->show_weather();
	
}

void Program::change_weather(const string &weather)
{
	w->change_weather(weather);	
}

void Program::remove_device()
{
	int id;
	cout << " Enter ID to delete Device: ";
	cin >> id;
	w->remove_device(id);
}

void Program::run()
{
	bool running = true;
	while (running)
	{
		print_menu();
		int choice = get_choice();
		do_task(choice);
		if (choice == 0) running = false;
	}
}

int Program::get_choice() const
{
	cout << "Your choice: ";
	int choice;
	cin >> choice;

	return choice;
}

void Program::do_task(const int &choice) 
{
	switch (choice)
	{
	case 1: 
		add_device();		
		break;
	case 2: 
		display();			
		break;
	case 3: 
		cout << "Weather now is: " << get_weather() << endl;
		break;
	case 4:	
		change_weather("Nice");	
		break;
	case 5: 
		remove_device();	
		break;
	case 0:
		break;
	default: 
		cout << "Invalid choice" << endl; 
		break;
	}
}

void Program::print_menu() const 
{
	cout << "Menu" << endl;
	cout << "1. Add Device" << endl;
	cout << "2. Display Devices and Notifications" << endl;
	cout << "3. Show Weather" << endl;
	cout << "4. Change Weather" << endl;
	cout << "5. Remove Device" << endl;
	cout << "0. Exit" << endl;
}
