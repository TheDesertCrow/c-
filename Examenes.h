
#ifndef Examenes_h
#define Examenes_h
#include <string>
using namespace std;

class Examenes
{
protected:
	string nombreE;
	string resultadoE;
public:
	Examenes() {}
	Examenes(string nombreE, string resultadoE)
	{
		this->nombreE = nombreE;
		this->resultadoE = resultadoE;
	}
	string getNombreE() { return nombreE; }
	string getResultadoE() { return resultadoE; }
	void setNombreE(string pNombreE) { nombreE = pNombreE; }
	void setResultadoE(string pResultadoE) { resultadoE = pResultadoE; }


};

#endif /* Examenes_h */
