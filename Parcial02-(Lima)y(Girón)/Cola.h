#pragma once
#include "NodoNumero.h"
class Cola
{
public:
	//creación de nodos
	NodoNumero* Primernumero;	//primer numero de la lista
	NodoNumero* Ultimonumero;	//Ultimo numero de la lista

	int cantidad;	//Tamño de nuestra cola
	int* puntero = &cantidad;


	//Métodos a utilizar------->
	void AgregarNumero(NodoNumero&);//Metodo agregar 
	int lenght();	//Tamño de la cola

	NodoNumero* ObtenerNumero(int);//Metodo obtener valor
	NodoNumero* Eliminarnumero();//Método Eliminar 
	Cola();

};

