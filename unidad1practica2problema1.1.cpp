#include "iostream"
using namespace std;
int main()
{
	float PRECIOPRODUCTO, DEVOLUCION;
	float PAGO;
	
	//Entrada de datos
	cout << "Por favor escriba el precio del articulo" << "\n";
	cin >>PRECIOPRODUCTO;
	
	cout << "Por favor escriba cuanto fue el pago del articulo" << "\n";
	cin >>PAGO;
	
	//Calculo de la devolucion
	DEVOLUCION=PAGO-PRECIOPRODUCTO;
	
	//Mostrar los resultados
	cout << "El cambio del cliente es: " <<DEVOLUCION;
	return 0;
}
