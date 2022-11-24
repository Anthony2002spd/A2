//Autor: Martha Paola Loor Andrade
#include <iostream> //Llamando a la libreria para poder tener acceso a los dispositivos de entrada y/o salida
using namespace std;//Es dar acceso al espacio del nombre donde se encuentra encerrado toda la libreria
int main()//Aqui iniciamos la ejecucion del programa
{//Abrimos llave
	float MPLA_x,MPLA_s=0,MPLA_s1=0,MPLA_s5=0;//Usamos float para representar un caracter y declaramos las variables flotantes
	int MPLA_i=0,MPLA_l,MPLA_i1=0,MPLA_i5=0;//Usamos int para ingresar los enteros y declaramos las variables
	cout<<"Ingrese l: ";cin>>MPLA_l;//Usamos cout para pedir un valor y cin para que el usuario lo ingrese
	do{//Usamos do-while para repetir una instruccion

	cout<<"Ingrese x: ";cin>>MPLA_x;//Usamos cout para pedir un valor y cin para que el usuario lo ingrese
	MPLA_i=MPLA_i+1;//Aumentamos el contador
	MPLA_s=MPLA_s+MPLA_x;//Aumentamos el acumulador
	if(MPLA_x==1){//Usamos la estructura if para tomar una decision en base a una expresion
		MPLA_i1=MPLA_i1+1;//Aumentamos el contador de las monedas de 1 dolar
		MPLA_s1=MPLA_s1+MPLA_x;//Aumentamos el acumulador de las monedas de 1 dolar
	}else{//Cerramos llave y usamos else en caso de que no se cumpla con la expresion especificada

		MPLA_i5=MPLA_i5+1;//Aumentamos el contador de las monedas de 50 centavos
		MPLA_s5=MPLA_s5+MPLA_x;//Aumentamos el acumulador de las monedas de 50 centavos
	}//Cerramos llave y la estructura del if

	}while(MPLA_i<MPLA_l);//Hasta que esta expresion especificada sea falsa
	cout<<"La cantidad de monedas es: "<<MPLA_i<<endl;//Presentamos por pantalla la cantidad total de monedas
	cout<<"El valor es: "<<MPLA_s<<endl;//Presentamos por pantalla el valor total de las monedas


	cout<<"La cantidad de monedas de 1$ es: "<<MPLA_i1<<endl;//Presentamos por pantalla la cantidad total de las monedas de 1 dolar
	cout<<"El valor es: "<<MPLA_s1<<endl;//Presentamos por pantalla el valor total de las monedas de 1 dolar

	cout<<"La cantidad de monedas de 50ctvs es: "<<MPLA_i5<<endl;//Presentamos por pantalla la cantidad total de las monedas de 50 centavos
	cout<<"La cantidad de moneda es: "<<MPLA_s5<<endl;//Presentamos por pantalla el valor total de las monedas de 50 centavos
	return 0;//Usamos return para terminar la ejecucion de una funcion
}//Cerramos llavee
