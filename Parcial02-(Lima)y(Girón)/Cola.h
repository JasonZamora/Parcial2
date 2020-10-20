#pragma once
#include "NodoNumero.h"
class Cola
{
public:
	//creaci�n de nodos
	NodoNumero* Primernumero;	//primer numero de la lista
	NodoNumero* Ultimonumero;	//Ultimo numero de la lista

	int cantidad;	//Tam�o de nuestra cola
	int* puntero = &cantidad;


	//M�todos a utilizar------->
	void AgregarNumero(NodoNumero&);//Metodo agregar 
	int lenght();	//Tam�o de la cola

	NodoNumero* ObtenerNumero(int);//Metodo obtener valor
	NodoNumero* Eliminarnumero();//M�todo Eliminar 
	Cola();

};

