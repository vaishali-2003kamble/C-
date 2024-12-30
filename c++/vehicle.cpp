#include<iostream>
using namespace std;
class vehicle
{
	private:
		int maxspeed,maxgear,numwheel,speed,gear;
		bool stared();
		string colour;
		
	public:
	vehicle();
	void start();
	void stop();
	void getcolour();
	void setcolour();
	void increasespeed();
	void decresasespeed();
	void maxgear();
		
};
vehicle::vehicle()
{
	maxspeed=180;
	maxgear=4;
	numwheel=4;
	speed=0;
	gear=0;
	started=false;
	colour="black";
}
void vehicle::start()
{
	if(started==false)
	{
		started=true;
		speed=0;
		gear=0;
	}
	else
	{
		cout<<"vehicle is already started \n";
	}
}

void vehicle::stop()
{
	if(started==ture)
	{
		started=false;
		speed=0;
		gear=0;
	}
	else
	{
		cout<<"vehicle is already stopped \n";
	}
}
void vehicle::increasespeed()
{
	if(started==true && speed<=maxspeed-5)
	{
		speed=speed+5;
	}
}
void vehicle::decreasespeed()
{
	if(started==true && speed-5>=0)
	{
		speed=speed-5;
	}
}
void vehicle::maxgear()
{
	if(started==true && gear<maxgear)
	{
		gear=gear+1;
	}
}

void vehicle::pervgear()
{
	if(started==true && gear>=0)
	{
		gear=gear-1;
	}
}
void vehicle::getcolour()
{
	
}
int main()
{
	vehicle c;
	c.colour();
	c.decresasespeed();
	c.increasespeed();
	c.maxgear();
	c.pervgear();
}



