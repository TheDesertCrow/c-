
#ifndef Expecion_
#define Expecion_

#include <iostream>
#include <exception>
using namespace std;

class Excepcion:public exception 
{
public:
	virtual const char* what(int nError) const throw() 
	{
		switch (nError)
		{
		case 0:
			return "ERROR: No tiene examenes, ingrese alguno";
		case 1:
			return "ERROR:  ";
		default:
			break;
		}
	}
};

#endif /* Expecion_ */