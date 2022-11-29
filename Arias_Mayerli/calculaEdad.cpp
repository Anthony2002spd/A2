//Programa creado para calcular edad 
//Creado por: Arias Tenorio Mayerli 
//Asignatura:Tics B
//Docente:Ing.Stalin Francis

#include<iostream>//permite la entrada y salida de datos en la libreria.
using namespace std;//llamada espacio de nombre para utilizar cin, cout y no estar utlizando siempre el std.
int main()//el cuerpo del programa que indica donde comienza y finaliza.

{
	int aa,ma,da,an,mn,dn,a,m,d;//declaramos los variables
	cout<<"ingrese la fecha actual: ";//muestra mensaje al usuario en pantalla para que ingrese el dato.
	cin>>aa>>ma>>da;//guarda los datos ingresado del usuario

	cout<<"ingrese la fecha de nacimiento:  ";//el usuario tiene que ingresar el dato que sale en la pantalla
	cin>>an>>mn>>dn;//guardamos el dato ingresado por el usuario
	if(da>dn){//utilizamos cuando es verdadero la condicion
		d=da-dn;//declarmos variable de dia 

	}else{//utilizamos cuando la condicion no se cumple,(si es falso)
		da=da+30;//declaramos dia actual
		ma=ma-1;//decalramos mes actual
		d=da-dn;//declaramos dia 

	}
	if(ma>mn){//utilizamos si es verdadero
		m=ma-mn;//escribimos el mes 
	}else{//utilizamos si la condicion es falso
		ma=ma+12;//escribimos mes actual para finalizar
		aa=aa-an;//escribimos año actual para finalizar
		m=ma-mn;//escribimos el mes general
	}
	a=aa-an;//escribimos el año general para fianlizar
	cout<<"usted tiene:  "<<a<<"años,"<<d<<"meses,"<<d<<"dias,"<<endl;//mostramos al usuario el mensaje en pantalla el resultado
	return 0;//finaliza la ejecucion y devuelve el control a la funcion de llamada.

} 

