#pragma once
#ifndef ORA_H
#define ORA_H
#include <string>

class Ora
{

private:
	int h = 0;
	int m = 0;
	int s = 0;
	double re, im;

public:
	//Costruttori
	Ora();
	Ora(int ore, int minuti, int secondi);
	//Funzioni della classe
	void set(int ore, int minuti, int secondi);
	void setcurrent();
	char *gettime();
	int ore();
	int min();
	int sec();

	//Operatori
	friend Ora operator+(Ora& p1, Ora& p2);
	Ora operator=(const Ora& p1);
};

#endif // !ORA_H
