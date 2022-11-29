//Programa suma de varios numeros
//Creado por: Arias Tenorio Mayerli 
//Asignatura:Tics B
//Docente:Ing.Stalin Francis

#include<iostream>//permite la entrada y salida de datos en la libreria.
using namespace std;//llamada espacio de nombre para utilizar cin, cout y no estar utlizando siempre el std.
int main()//el cuerpo del programa que indica donde comienza y finaliza.
{

	float x=0,s=0;//utilizamos float para declarar variables x, s  en numeros decimales.
	int i=0,l;//para declarar variables en numeros enteros, que el i es el contador.
	cout<<"ingrese eo valor de l:  ";//muestra en pantalla al usuario un mensaje para que ingrese un valor de ly utilizamos entre comillas q permite que vea el usuario.
	cin>>l;//guardamos con el cin el valor ingresado por el usuario.
	do{//utilizamos para hacer repeticiones, hasta que cumpla la condicion.

	cout<<"ingrese el valor de x:  ";//muestra el mensaje al usuario que ingrese valor de x
	cin>>x;//guardamos el variable x
	i=i+1;//utilizamos el contadorgeneral para poder finalizar el programa. 
	s=s+x;//el acumulador general del variable s para finalizar.
	 
	}while(i<l);//utilizamos para ejecutar elementos hasta que la condicion finalize
	cout<<"la suma de los numeros fue:  "<<s<<endl;//muestra el mensaje  en pantalla al usuario del resultado
	return 0;//finaliza la ejecucion y devuelve el control a la funcion de llamada. 

}

