#include "iostream"
using namespace std;
int main()
{
	int DIAS;
	float SEGUNDOS;
	
	//Entrada de datos
	cout << "Escribe el numero de dias para poder calcular los segundos: " << "\n";
	cin >> DIAS;
	
	//Calculo
	SEGUNDOS=DIAS*24*60*60;
	
	//Resultados
	cout <<"En " <<DIAS<< " dias, hay " <<SEGUNDOS<< " segundos" << "\n";
	return 0;
}
