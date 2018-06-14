#ifndef EmbMayor35_h
#define EmbMayor35_h
#include "Embarazadas.h"
using namespace std;

class EmbMayor35:public Embarazadas
{
protected:
	string exaAmneosentesis;
	string resultadoA;
public:
	EmbMayor35(string nombre, int nHistoria, vector<Examenes>examen, string exaAmneosentesis, string resultadoA):Embarazadas(nombre, nHistoria,examen)
	{
		this->exaAmneosentesis = exaAmneosentesis;
		this->resultadoA = resultadoA;
	}

	string getnomExamen() { return exaAmneosentesis; }
	string getResultadoA() { return resultadoA; }

	bool esRiesgo()
	{
		if (resultadoA == "positivo")
		{
			//cout << "El embarazo esta en riesgo!" << endl;
			return true;
		}
		else{
			//cout << "No hay riesgo, Mayor35" << endl;
			return false;
		}
		
	}
};

#endif /* EmbMayor35_h */