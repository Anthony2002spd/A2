//Autor: Martha Paola Loor Andrade
#include <iostream> //Llamando a la libreria para poder tener acceso a los dispositivos de entrada y/o salida
using namespace std;//Es dar acceso al espacio del nombre donde se encuentra encerrado toda la libreria
int main()//Aqui iniciamos la ejecucion del programa
{//Abrimos llave
	float MPLA_x,MPLA_s=0,MPLA_vb,MPLA_piva=12,MPLA_viva,MPLA_pdesc=10,MPLA_vdesc,MPLA_vn;//Usamos float para representar un caracter y declaramos las variables flotantes
	int MPLA_i=0,MPLA_l;//Usamos int para ingresar los enteros y declaramos las variables
	cout<<"Ingrese l: ";cin>>MPLA_l;//Usamos cout para mostar por pantalla cualquier tipo de dato y cin para ingresar cualquier tipo de datos
	do{//Usamos do-while para repetir una instruccion
		cout<<"Ingrese x: ";cin>>MPLA_x;//Usamos cout para pedir un valor y cin para que el usuario lo ingrese
		MPLA_i=MPLA_i+1;//Aumentamos el contador
		MPLA_s=MPLA_s+MPLA_x;//Aumentamos el acumulador
	}while(MPLA_i<MPLA_l);//Hasta que esta expresion especificada sea falsa
	MPLA_vb=MPLA_s;////La variable MPLA_vb es igual a la variable MPLA_s
	MPLA_viva=MPLA_vb*MPLA_piva/100;//La variable MPLA_viva es igual a la variable MPLA_vb por la variable MPLA_piva dividido entre 100
	MPLA_vdesc=MPLA_vb*MPLA_pdesc/100;//La variable MPLA_vdesc es igual a la variable MPLA_vb por la variable MPLA_pdesc divido entre 100
	MPLA_vn=MPLA_vb+MPLA_viva-MPLA_vdesc;//La variable MPLA_vn es igual a la variable MPLA_vb mas la variable MPLA_viva menos MPLA_vdesc
	cout<<"El valor a pagar es de: "<<MPLA_vn<<endl;//Usamos cout para mostrar un mensaje y usamos endl para un salto de linea
	return 0;//Usamos return para terminar la ejecucion de una funcion
}//Cerramos llave
