#include "Ora.h"
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

Ora::Ora()
{
	//Null
}

//Costruttore che inizializza i campi vari
Ora::Ora(int ore, int minuti, int secondi) {
	h = ore;
	m = minuti;
	s = secondi;
}

//Imposta manualmente il tempo
void Ora::set(int ore, int minuti, int secondi) {
	h = ore;

	m = minuti;

	s = secondi;
	//printf("%d:%d:%d", h, m, s);
}

//Prende l'orario dal computer
void Ora::setcurrent() {
	time_t time_in_sec = time(0);
#pragma warning (suppress : 4996)
	tm* now = localtime(&time_in_sec);
	s = now->tm_sec;
	m = now->tm_min;
	h = now->tm_hour;
#pragma warning (suppress : 4996)
	//printf("%d:%d:%d", h, m, s);
}

//Ritorna le ore
int Ora::ore() {
	return h;
}

//Ritorna i minuti
int Ora::min() {
	return m;
}

//Ritorna i secondi
int Ora::sec() {
	return s;
}

Ora Ora::operator=(const Ora& p1)
{
	return Ora();
}

char *Ora::gettime() {
	string stringa;
	char stringa1[20];
	stringa = snprintf(stringa1, 20, "%d:%d:%d", h, m, s);
	return stringa1;
}

Ora Ora::operator+(const Ora& p1)
{
	Ora temp = Ora();
	temp.h = (this->h + p1.h);
	temp.m = (this->m + p1.m);
	temp.s = (this->s + p1.s);
	return Ora((this->h + p1.h), (this->m + p1.m), (this->s + p1.s));
}

