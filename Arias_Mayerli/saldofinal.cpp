//Programa para saber el mayor promedio
//Creado por: Arias Tenorio Mayerli 
//Asignatura:Tics B
//Docente:Ing.Stalin Francis

#include<iostream>//permite la entrada y salida de datos en la libreria.
using namespace std;//llamada espacio de nombre para utilizar cin, cout y no estar utlizando siempre el std.
int main()//el cuerpo del programa que indica donde comienza y finaliza.


{
	float x,s=0;//declaramos variables de x y s, utilizando float (numeros en decimales) 
	int i=0,l;//utilizamos el i como el contador utilizando int (numeros en entero)
	cout<<"ingrese cantidad de egreso (l):  ";//se muestra un mensaje al asuario en pantalla para que ingrese una cantidad de l.
		cin>>l;//guardamos la cantidad ingresado por el usuario de l
        cout<<"ingrese saldo inicial (s):  ";//pedimos al usuario que ingrese un valor para s, que se muestra en pantalla el mensaje.
	cin>>s;//guardamos el valor ingresado con el cin
	do{//utilizamos para hacer repeticiones, hasta que cumpla la condicion.
	
	cout<<"ingrese egreso (x):  ";//utilizamos cout y entre comillas para que el usuaria pueda ver el mensaje. 
	cin>>x;//guardamos valor ingresado de x
	i=i+1;//escribimos el contador general (i) para finalizar 
	s=s+x;//escribimos el acumulador general del valor de s
	}while(i<l);//utilizamos para ejecutar elementos hasta que la condicion finalize
	cout<<"el saldo final es:  "<<s<<endl;//se muestra el mensaje al usuario del resultado utilizando el cout y entre comillas
	return 0;//finaliza el programa o la ejecucion

}
