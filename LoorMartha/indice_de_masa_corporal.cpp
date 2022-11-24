//Autor: Martha Paola Loor Andrade
#include <iostream> //Llamando a la libreria para poder tener acceso a los dispositivos de entrada y/o salida
using namespace std;//Es dar acceso al espacio del nombre donde se encuentra encerrado toda la libreria
int main()//Aqui iniciamos la ejecucion del programa
{//Abrimos llave
	float MPLA_imc,MPLA_peso,MPLA_altura;//Usamos float para representar un caracter y declaramos las variables flotantes
	cout<<"Ingrese el peso (kg): ";cin>>MPLA_peso;//Usamos cout para pedir un valor y cin para que el usuario lo ingrese
	cout<<"Ingrese la altura (metros): ";cin>>MPLA_altura;//Usamos cout para pedir un valor y cin para que el usuario lo ingrese
	MPLA_imc=MPLA_peso/(MPLA_altura*MPLA_altura);//Le damos la orden al computador de que el valor del imc es igual a el peso por altura al cuadrado
		
	if(MPLA_imc<18.5){//Usamos la estructura if para tomar una decision en base a una expresion especificada
		cout<<"Usted tiene bajo peso"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea
	}//Cerramos la estructura
	if(MPLA_imc>=18.5 && MPLA_imc<24.9){//Usamos la estructura if para tomar una decision en base a una expresion especificada
		cout<<"Usted tiene peso normal"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea
	}//Cerramos la estructura

	if(MPLA_imc>=25 && MPLA_imc<26.9){//Usamos la estructura if para tomar una decision en base a una expresion especificada
		cout<<"Usted tiene sobrepeso grado I"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea
	}//Cerramos la estructura

	if(MPLA_imc>=27 && MPLA_imc<29.9){//Usamos la estructura if para tomar una decision en base a una expresion especificada
		cout<<"Usted tiene sobrepeso grado II"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea
	}//Cerramos la estructura

	if(MPLA_imc>=30 && MPLA_imc<34.9){//Usamos la estructura if para tomar una decision en base a una expresion especificada
		cout<<"Usted tiene obesidad tipo I"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea
	}//Cerramos la estructura

	if(MPLA_imc>=35 && MPLA_imc<39.9){//Usamos la estructura if para tomar una decision en base a una expresion especificada
		cout<<"Usted tiene obesidad tipo II"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea
	}//Cerramos la estructura

	if(MPLA_imc>=40 && MPLA_imc<49.9){//Usamos la estructura if para tomar una decision en base a una expresion especificada
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea
	}//Cerramos la estructura

	if(MPLA_imc>=50){//Usamos la estructura if para tomar una decision en base a una expresion especificada
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea
	}//Cerramos la estructura
	return 0;//Usamos return para terminar la ejecucion de una funcion
}//Cerramos llave
