//Autor: Martha Paola Loor Andrade
#include <iostream> //Llamando a la libreria para poder tener acceso a los dispositivos de entrada y/o salida
using namespace std;//Es dar acceso al espacio del nombre donde se encuentra encerrado toda la libreria
int main()//Aqui iniciamos la ejecucion del programa
{//Abrimos llave
	float MPLA_x,MPLA_pm=0;//Usamos float para representar un caracter y declaramos las variables flotantes
	int MPLA_i=0,MPLA_l;//Usamos int para ingresar los enteros y declaramos las variables
	cout<<"Ingrese l: ";cin>>MPLA_l;//Usamos cout para mostar por pantalla cualquier tipo de dato y cin para ingresar cualquier tipo de datos
	do{//Usamos do-while para repetir una instruccion
	cout<<"Ingrese x: ";cin>>MPLA_x;//Usamos cout para pedir un valor y cin para que el usuario lo ingrese
	MPLA_i=MPLA_i+1;//Aumentamos el contador
	if(MPLA_x>MPLA_pm){//Usamos if como una estructura de seleccion para tomar decisiones en base a una expresion y abrimos llave
		MPLA_pm=MPLA_x;//Igualamos la variable MPLA_pm con la variable MPLA_x
	}//Cerramos llave y la estructura del if
	
	}while(MPLA_i<MPLA_l);//Hasta que esta expresion especificada sea falsa
	cout<<"El promedio maximo del curso es: "<<MPLA_pm<<endl;//Hasta que esta expresion especificada sea falsa
	return 0;//Usamos return para terminar la ejecucion de una funcion
}//Cerramos llave
