#pragma once
#ifndef STRUCTS_H
#define STRUCTS_H

struct Boilers
{
private:
	struct Boiler
	{

		char vender[20];//name of producer
		int power;// watt
		int weight;
		int litresInSecond;//heat litres in second
	public:
		Boiler();
	};
	
	Boiler *blr[20];
	int realCountBoilers=-1;
	
public:
	void addBoiler();
	void showAll();
	void delAll();
	void del();
	
	~Boilers();
};
#endif STRUCTS_H
