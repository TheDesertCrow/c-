#ifndef ColeccionRegistro_h
#define ColeccionRegistro_h
#include "Embarazadas.h"
#include "CInterface.h"
#include <string>

using namespace std;

class ColeccionRegistro {
private:
	Embarazadas * embarazada[10];
	int cantidad;
public:
	ColeccionRegistro() {}
	ColeccionRegistro(int cantidad) { this->cantidad = cantidad; }

	int getCantidad() { return cantidad; }
	Embarazadas *getColeccionAt(int idx) { return embarazada[idx]; }
	void setColeccionAt(int idx, Embarazadas &object) { this->embarazada[idx] = &object; }

	void incisoA()
	{
		int riesgo = 0;

		for (int i = 0; i < cantidad; i++)
		{
			if (getColeccionAt(i)->esRiesgo() == true)
			{
				++riesgo;
			}
		}
		cout << "Cantidad de embarazadas en riesgo: "<<riesgo<<endl;
	}

	void incisoB()
	{
		for (int i = 0; i < cantidad; i++)
		{

			if (dynamic_cast<EmbDiabetica*>(getColeccionAt(i)) != nullptr)
			{
				cout<<"Nombre: "<<getColeccionAt(i)->getNombre(); cout << endl;
				cout <<"Historia clinica: "<< getColeccionAt(i)->getNHistoria(); cout << endl;
				cout << "Examenes: "<<endl; getColeccionAt(i)->examenes();
				cout <<"\t"<< dynamic_cast<EmbDiabetica*>(getColeccionAt(i))->getExaPTG() << ": " << dynamic_cast<EmbDiabetica*>(getColeccionAt(i))->getResultadoPTG();
				cout << "\n\n";

			}
		}
	}


	void incisoC()
	{
		int riesgo = 0;
		for (int i = 0; i < cantidad; i++)
		{
			if (dynamic_cast<EmbMayor35*>(getColeccionAt(i)) !=nullptr)
			{
				if (getColeccionAt(i)->esRiesgo() == true)
				{
					++riesgo;
				}
			}
		}
		cout << "Cantidad de embarazadas mayores de 35 anios en riesgo: " << riesgo << endl;
	}


	void incisoD() 
	{
		string nombre;
		for (int i = 0; i < cantidad; i++)
		{
			if (dynamic_cast<EmbTensionAlta*>(getColeccionAt(i)) != nullptr)
			{
				cout << "Ingresar nombre de embarazada con tension alta: ";
				cin >> nombre;
				if (dynamic_cast<EmbTensionAlta*>(getColeccionAt(i))->getNombre() == nombre)
				{
					dynamic_cast<EmbTensionAlta*>(getColeccionAt(i))->tensionMin();
				}
				else {
					cout << "No hay embaraza con tension alta con el nombre ingresado, intentelo de nuevo.";
				}
			}
			
		}
	}

	void incisoE()
	{
		float mayor = 0;
		int id = 0;

		for (int i = 0; i < cantidad; i++)
		{
			if (dynamic_cast<EmbDiabetica*>(getColeccionAt(i)) != nullptr)
			{
				 if (dynamic_cast<EmbDiabetica*>(getColeccionAt(i))->getResultadoPTG()>mayor)
				 {
					 mayor = dynamic_cast<EmbDiabetica*>(getColeccionAt(i))->getResultadoPTG();
					 id = i;
				 }
			}
		}

		cout << "\nNumero de historia clinica de embarazada con mayor PTG es: "<< dynamic_cast<Embarazadas*>(getColeccionAt(id))->getNHistoria() << endl;
	}

	void incisoF()
	{
		for (int i = 0; i < cantidad; i++)
		{
			if (dynamic_cast<CInterface*>(getColeccionAt(i)) != nullptr)
			{
				dynamic_cast<CInterface*>(getColeccionAt(i))->chequeoExtra();
			}
		}
	}


	/*
	si es diabetica, entra glucosa
	sino no,
	*/
	

};


#endif /* ColeccionRegistro_h */