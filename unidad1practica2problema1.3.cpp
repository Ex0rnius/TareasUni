#include "iostream"
using namespace std;
int main()
{
	string NOMBRE;
	float PESOLIBRAS, LONGITUDPIES;
	float PESOKILOS, LONGITUDMETROS;
	
	//Entrada de datos
	cout << "Por favor ingrese el nombre del dinosaurio: " << "\n";
	cin >>NOMBRE;
	cout << "Por favor ingrese el peso del dinosaurio en lb: " << "\n";
	cin >>PESOLIBRAS;
	cout << "Por favor ingrese la longitud del dinosaurio en pies" << "\n";
	cin >>LONGITUDPIES;
	
	//Hacer la operacion
	PESOKILOS=PESOLIBRAS*1000;
	LONGITUDMETROS=LONGITUDPIES*0.3047;
	
	//Resultados
	cout << "El peso en kilos del dinosaurio " <<NOMBRE<< " es " <<PESOKILOS<< " y la longitud en metros es " <<LONGITUDMETROS<< "\n";
	return 0;
}
