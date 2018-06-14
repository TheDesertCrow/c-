#ifndef EmbDiabetica_h
#define EmbDiabetica_h
#include "Embarazadas.h"
#include "CInterface.h"
using namespace std;

class EmbDiabetica :public Embarazadas, public CInterface
{
protected:
	//
	string exaPTG;
	float resultadoPTG;
	float glucosa;
public:
	EmbDiabetica(string nombre, int nHistoria, vector<Examenes>examen, string exaPTG, float resultadoPTG) :Embarazadas(nombre, nHistoria, examen)
	{
		this->exaPTG = exaPTG;
		this->resultadoPTG = resultadoPTG;
	}

	string getExaPTG() { return exaPTG; }
	float getResultadoPTG() { return resultadoPTG; }

	bool esRiesgo()
	{
	
		if (resultadoPTG >= 4.41)
		{
			//cout << "El embarazo esta en riesgo, Diabetica!" << endl;
			return true;
		}
		else {
			//cout << "El embarazo no esta en riesgo, D!" << endl;
			return false;
		}
		
	}

	void chequeoExtra(float pglucosa )
	{

		cout << "Valor de glucosa " <<resultadoPTG<<", con diabetes."<< endl;
	}

	

};

#endif /* EmbDiabetica_h */
