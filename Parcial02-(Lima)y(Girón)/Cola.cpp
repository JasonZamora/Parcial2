#include "Cola.h"
Cola::Cola()
{
	Primernumero = nullptr;
	Ultimonumero = nullptr;
	cantidad = 0;
}

//Método agregar
void Cola::AgregarNumero(NodoNumero&Num)
{
	if (cantidad==0)	//Si es nuestro primer dato, ese sera el primero y el ultimo
	{
		Primernumero = &Num;
		Ultimonumero = &Num;
	}
	else
	{
		NodoNumero* Agregar = &Num;
		Ultimonumero->siguiente = Agregar;
		Ultimonumero = Agregar;
	}
	cantidad++;
}


//Metodo Obtener carta
NodoNumero* Cola::ObtenerNumero(int pos)
{
	if (cantidad == 0 || pos == 0)
	{
		return	Primernumero;
	}
	else
	{
		if (pos >= cantidad)
		{
			return Ultimonumero;
		}
		else
		{
			NodoNumero* temp = Primernumero; //guarda el primer nodo e ira avanzando para encontrar la posición 
			int cont = 0;//contador para buscar

			while ((temp->siguiente) && cont < pos)
			{
				temp = temp->siguiente;
				cont++;
			}
			return temp;
		}
	}
}

//Método eliminar carta

NodoNumero* Cola::Eliminarnumero()
{
	if (cantidad<=0)
	{
		NodoNumero* Resultado;
		Resultado = nullptr;
		return Resultado;
	}
	else
	{
		NodoNumero* Head = Primernumero; //me guarda el numero a eliminar
		//Obtener elemento a Retornar
		NodoNumero* Resultado = Primernumero;
		NodoNumero* Auxiliar = Primernumero->siguiente;
		//Actualizar Cima
		Primernumero = Auxiliar;
		cantidad--;
		return Resultado;
	}		
}

int Cola::lenght()
{
	return cantidad;
}

