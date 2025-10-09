#include "iostream"
#include <stdio.h>
using namespace std;
int main ()
{
	float ALTURA,BASE;
	float SUPERFICIE, PERIMETRO;
	//Mensaje de bienvenida
	cout << "¡Hola! Este programa 1.10 Calcula la superficie y el perimetro de un rectangulo" << "\n";
	//Se declaran los numeros (pueden ser decimales)
	//Se pide el primer numero
	cout << "Por favor ingrese el valor de la Base: " << "\n";
	//Se asigna el primer valor a BASE
		cin >>BASE;
	//Se pide el segundo numero
	cout << "Por favor ingrese el valor de la Altura: " << "\n";
	//Se asigna el segundo valor a ALTURA
		cin >>ALTURA;
	
	SUPERFICIE= BASE*ALTURA;
	PERIMETRO=2*(BASE+ALTURA);
	
	//Se muestra el resultado
	cout << "La superficie del rectangulo es: " <<SUPERFICIE<< " el perimetro del rectangulo es: " <<PERIMETRO<< endl;
	return 0;
}
