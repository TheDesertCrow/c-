//#pragma once
#ifndef Embarazadas_h
#define Embarazadas_h
#include <vector>
#include "Examenes.h"
#include "Excepcion.h"
using namespace std;

class Embarazadas
{
protected:
	string nombre;
	int nHistoria;
	vector<Examenes>examen;
public:
	Excepcion myex;
	Embarazadas() {}
	Embarazadas(string nombre, int nHistoria, vector<Examenes>examen)
	{
		this->nombre = nombre;
		this->nHistoria = nHistoria;
		this->examen = examen;
		
	}
	virtual bool esRiesgo() = 0;

	string getNombre() { return nombre; }
	int getNHistoria() { return nHistoria; }

	void examenes() {
		for (int i = 0; i < examen.size(); i++) {
			cout <<"\t"<< examen[i].getNombreE() << " : " << examen[i].getResultadoE()<<"\n";
		}
	}

	/*
	valor de tension y glucosa se ingresa 

	*/

};

#endif /* Embarazadas_h */
