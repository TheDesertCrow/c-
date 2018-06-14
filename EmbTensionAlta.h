#ifndef EmbTensionAlta_h
#define EmbTensionAlta_h
#include "Embarazadas.h"
#include "CInterface.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class EmbTensionAlta : public Embarazadas, public CInterface{
protected:
	vector<int>regTensiones;
	
public:
	EmbTensionAlta(string nombre, int nHistoria, vector<Examenes>examen, vector<int>regTensiones) :Embarazadas(nombre, nHistoria, examen)
	{
		this->regTensiones = regTensiones;
	}

	bool esRiesgo()
	{
		int aux=0;

		for (vector<int>::iterator i = regTensiones.begin(); i != regTensiones.end(); ++i)
		{
			if (*i>90)
			{
				++aux;
			}
			
		}
		if (aux > 1)
		{
			//cout << "El embarazo esta en riesgo, Tension!" << endl;
			return true;
		}
		else{
			//cout << "No hay riesgo, Tension"<<endl;
			return false;
		}
		
	}

	void chequeoExtra() 
	{
		cout << "Pulsasiones: ";
		for (vector<int>::iterator j = regTensiones.begin(); j != regTensiones.end(); ++j)
		{
			cout << *j << " | ";

		}
		cout << endl;
		
	}

	void tensionMin()
	{
		sort(regTensiones.begin(), regTensiones.begin()+ regTensiones.size());
	
		cout << "Tension minima es: " <<regTensiones.front()<< endl;
	}
};

#endif /* EmbTensionAlta_h */
