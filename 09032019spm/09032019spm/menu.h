#pragma once
struct Human
{
	int age;
	char name[50];
};

bool menu();
struct Humans
{
	Human *h[10];
	int num;
};

void read_humans(Humans *hs, char *file);
