#pragma once

#ifndef Punto_h
#define Punto_h

#include <stdio.h>
#include <string>
#include <math.h>

class Punto
{
private:
	double x, y;

public:
	// M�todos constructores
	Punto();
	Punto(double _x, double _y);

	// M�todos de acceso
	double getX();
	double getY();

	// M�todos modificadores
	void setX(double _x);
	void setY(double _y);

	// Otros m�todos
	double calculaDistancia(Punto p2);
	std::string str();
};

#endif