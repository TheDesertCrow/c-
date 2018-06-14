#include <iostream>
#include "Embarazadas.h"
#include "Examenes.h"
#include "EmbMayor35.h"
#include "EmbJoven.h"
#include "EmbDiabetica.h"
#include "EmbTensionAlta.h"
#include "CInterface.h"
#include "ColeccionRegistro.h"
#include <vector>
using namespace std;

int main()
{
	vector<Examenes> examenes;
	examenes.push_back(Examenes("Anemia", "negativo"));
	examenes.push_back(Examenes("Sangre", "O+"));

	vector<Examenes> examenes2;

	vector<int> tensiones{90,90,95,90,90 };

	EmbMayor35 embMayor35("Karen", 107, examenes2, "Examen Amneosentesis", "positivo");
	EmbJoven embJoven("Paulina", 108, examenes, 19);
	EmbJoven embJoven2("Paulina", 108, examenes, 18);
	EmbDiabetica embDiabetica1("Sara", 109, examenes, "Examen PTG", 4.4);
	EmbDiabetica embDiabetica2("Cloe", 111, examenes, "Examen PTG", 4.6);
	EmbTensionAlta embTensionA1("Cristina", 1010, examenes, tensiones);

	Embarazadas *pEmbMayor35 = &embMayor35;
	Embarazadas *pEmbJoven = &embJoven;
	Embarazadas *pEmbJoven2 = &embJoven2;
	Embarazadas *pEmbDiabetica1 = &embDiabetica1;
	Embarazadas *pEmbDiabetica2 = &embDiabetica2;
	Embarazadas *pEmbTemsionA1 = &embTensionA1;

	ColeccionRegistro regEmbarazadas(6);
	regEmbarazadas.setColeccionAt(0, *pEmbMayor35);
	regEmbarazadas.setColeccionAt(1, *pEmbJoven);
	regEmbarazadas.setColeccionAt(2, *pEmbJoven2);
	regEmbarazadas.setColeccionAt(3, *pEmbDiabetica1);
	regEmbarazadas.setColeccionAt(4, *pEmbDiabetica2);
	regEmbarazadas.setColeccionAt(5, *pEmbTemsionA1);

	cout << "********INCISO A: \n";
	regEmbarazadas.incisoA();
	cout << "\n********INCISO B: \n";
	regEmbarazadas.incisoB();
	cout << "\n********INCISO C: \n";
	regEmbarazadas.incisoC();
	cout << "\n********INCISO D: \n";
	regEmbarazadas.incisoD();
	cout << "\n********INCISO E: \n";
	regEmbarazadas.incisoE();
	cout << "\n********INCISO F: \n";
	regEmbarazadas.incisoF();

	system("pause");
	return 0;
}
