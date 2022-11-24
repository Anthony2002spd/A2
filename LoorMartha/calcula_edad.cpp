//Autor: Martha Paola Loor Andrade
#include <iostream> //Llamando a la libreria para poder tener acceso a los dispositivos de entrada y/o salida
using namespace std;//Es dar acceso al espacio del nombre donde se encuentra encerrado toda la libreria
int main()//Aqui iniciamos la ejecucion del programa
{//Abrimos llave
	int MPLA_aa,MPLA_ma,MPLA_da,MPLA_an,MPLA_mn,MPLA_dn,MPLA_a,MPLA_m,MPLA_d;//Usamos int para ingresar los enteros y declaramos las variables
	cout<<"Ingrese la fecha actual :";cin>>MPLA_aa>>MPLA_ma>>MPLA_da;//Usamos cout para pedir un valor y cin para que el usuario lo ingrese
	cout<<"Ingrese la fecha de nacimiento: ";cin>>MPLA_an>>MPLA_mn>>MPLA_dn;//Usamos cout para pedir un valor y cin para que el usuario lo ingrese

      	if(MPLA_da>MPLA_dn){//Usamos la estructura if para tomar una decision en base a una expresion especificada

		MPLA_d=MPLA_da-MPLA_dn;//Si se cumple la expresion entonces la variable MPLA_d es igual a la variable MPLA_da menos MPLA_dn

	}else{//Si no se cumple la expresion cerramos y  usamos  else 
		MPLA_da=MPLA_da+30;//La avariable MPLA_da es igual a MPLA_da mas 30
		MPLA_ma=MPLA_ma-1;//La variable MPLA_ma es igual a MPLA_ma menos 1
		MPLA_d=MPLA_da-MPLA_dn;//La variable MPLA_d es igual a MPLA_da menos MPLA_dn
	}//Cerramos llave y la estructura del if

      	if(MPLA_ma>MPLA_mn){//Usamos la estructura if para tomar una decision en base a una expresion especificada
	
		MPLA_m=MPLA_ma-MPLA_mn;//Si se cumple entonces MPLA_m es igual a MPLA_ma menos MPLA_mn

	}else{//Si no se cumple la expresion cerramos y usamos else

		MPLA_ma=MPLA_ma+12;//La variable MPLA_ma es igual a la variable  MPLA_ma mas 12
		MPLA_aa=MPLA_aa-1;//La variable MPLA_aa es  igual a la variable  MPLA_aa menos 1
		MPLA_m=MPLA_ma-MPLA_mn;//La variable MPLA_m es igual a la variable MPLA_ma menos la variable MPLA_mn
	}//Cerramos llave y la estructura del if
                MPLA_a=MPLA_aa-MPLA_an;//La variable MPLA_a es igual a MPLA_aa menos la variable MPLA_an

	cout<<"Usted tiene "<<MPLA_a<<" años, "<<MPLA_m<<" meses,"<<MPLA_d<<" dias"<<endl;//Presentamos el resultado por pantalla y usamos endl para un salto de linea
	return 0;//Usamos return para terminar la ejecucion de una funcion
	
}//Cerramos llave
