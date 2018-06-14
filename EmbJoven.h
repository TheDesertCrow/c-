#ifndef EmbJoven_h
#define EmbJoven_h
#include "Embarazadas.h"
using namespace std;

class EmbJoven :public Embarazadas
{
protected:
	int edad;
public:
	EmbJoven(string nombre, int nHistoria, vector<Examenes>examen, int edad) :Embarazadas(nombre, nHistoria, examen)
	{
		this->edad = edad;
	}

	int getEdad() { return edad; }

	bool esRiesgo()
	{
		if (edad >=16 && edad<=18)
		{
			//cout << "El embarazo esta en riesgo, Joven!" << endl;
			return true;
		}
		else {
			//cout << "Edad mayor"<<endl;
			return false;
		}
		
	}

};

#endif /* EmbJoven_h */