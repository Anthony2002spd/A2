//Programa creado para contar moneda 
//Creado por: Arias Tenorio Mayerli 
//Asignatura:Tics B
//Docente:Ing.Stalin Francis

#include<iostream>//permite la entrada y salida de datos en la libreria.
using namespace std;//llamada espacio de nombre para utilizar cin, cout y no estar utlizando siempre el std.
int main()//el cuerpo del programa que indica donde comienza y finaliza.

{
	float x=0,s=0,c1=0,s5=0;//declaramos los variables de x, s, de las monedas que vamos a ingresar.
	int s1=0,l,i1=0,i5=0;//declaramos el acumulador de s1,l, i1
	cout<<"ingrese l:  "; cin>>l;//pedimos con un mensaje al usuario que ingrese un valor de l y lo guardamos.
	do{//utilizamos el do que va repetir hasta que la condicion se cumpla.
	
	cout<<" ingrese x:  "; cin>>x;//se muestra el mensaje al usuario en pantalla para que ingrese un valor de x.
	i1=i1+1;//escribimos del contador 1
	s=s+x;//escribimos el acumulador general
	if(x==1){//utilizamos si la condicion cumple si x es igual a 1.
	i1=i1+1;///contador general de i1
	s1=s1+x;//escribimos acumulador de s1
	}else{//utilizamos cuando la condicion es falsa
	i5=i5+1;//escribimos el contador i5
	s5=s5+x;//escribimos el acumolador de s5
	}
	}while(i1==l);//utilizamos hasta que la condicion finalize.
	cout<<"la cantidad de monedas fue:  " <<i1<<endl;//se muestra el mensaje al usuario del resultado en monedasde i1.
	cout<<"el valor fue:  "<<s<<endl;//se muestra al usuario el valor total de s en pantalla
	
	cout<<"la cantidad de monedas de s1 fue:  "<<i1<<endl;//se muestra el resultado de s1
	cout<<"el valor fue:  "<<s<<endl;//se muestra el valor total al usuario.

	cout<<"la cantidad de monedas s5 fue: "<<i5<<endl;//se muestra al usuario la cantidad de monedas de s5.
	cout<<"el valor fue: "<<s5<<endl;//se muestra el valor total al usuario.
	return 0;//finalizamos con la ejecucion.

} 
