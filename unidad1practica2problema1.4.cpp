#include"iostream"
using namespace std;
int main()
{
	float GALONES,TOTAL;
	const float GALON=3.785, PRECIOLITRO=8.20;
	//Entrada de datos
	cout <<"Escribe la cantidad de galones comprados: " << "\n";
	cin >> GALONES;
	//Calculo
	TOTAL= GALONES*GALON*PRECIOLITRO;
	//Se imprime resultados
	cout <<"Hay que cobrar al cliente por " <<GALONES<< " galones, el cliente debe pagar " <<TOTAL<< " pasos " <<"\n";
	return 0;
}
