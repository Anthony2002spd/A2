//Autor: Martha Paola Loor Andrade
#include <iostream> //Llamando a la libreria para poder tener acceso a los dispositivos de entrada y/o salida
using namespace std;//Es dar acceso al espacio del nombre donde se encuentra encerrado toda la libreria
int main()//Aqui iniciamos la ejecucion del programa
{//Abrimos llave
	float MPLA_x,MPLA_s=0.0;//Usamos float para representar un caracter y declaramos las variables flotantes x y s
	int MPLA_i=0,MPLA_l;//Usamos int para ingresar los enteros y declaramos las variables i y l
	cout<<"Ingrese el valor de l: ";cin>>MPLA_l;//Usamos cout para mostar por pantalla cualquier tipo de dato y cin para ingresar cualquier tipo de datos
	do{//Usamos do-while para repetir una instruccion
		cout<<"Ingrese el valor de _x: ";cin>>MPLA_x;//Usamos cout para pedir un valor y cin para que el usuario lo ingrese
		MPLA_i=MPLA_i+1;//Aumentamos el contador
		MPLA_s=MPLA_s+MPLA_x;//Aumentamos el acumulador
	}while(MPLA_i<MPLA_l);//Hasta que esta expresion especificada sea falsa
	cout<<"La suma de los numeros es: "<<MPLA_s<<endl;//Usamos cout para mostrar un mensaje y usamos endl para un salto de linea
	return 0;//Usamos return para terminar la ejecucion de una funcion
}//Cerramos llave
