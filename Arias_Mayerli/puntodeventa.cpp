//programa punto de venta 
//Creado por:Arias Tenorio Mayerli 
//Asignatura:Tics B
//Docente:Ing.Stalin Francis
 
#include<iostream>//pone a su disposicion los objetos cin, cout, clog y cerr en el ambito estandar (std)
using namespace std;//llamada espacio de nombre para utilizar cin, cout y no estar utlizando siempre el std.
int main()//el cuerpo del programa que indica donde comienza y finaliza.

{      

	float x,s=0,vb,piva=12,viva,pdesc=10,vdesc,vn;//declaramos los variables de x, s, vb, piva,viva, pdesc,vdesc,vn
	int i=0,l;//variable del contador
	cout<<"ingrese l:  ";cin>>l;//se muestar en pantalla al usuario para que ingrese un valor
	do{//hacer, mientras que la condicion cumpla 
	
	cout<<"ingrese x:  ";cin>>x;//se muestra en pantalla al usuario
	i=i+1;//contador general 
	s=s+x;//acumulador general
	
	}while(i<l);//ejecuta hasta que la condicion finalize
	vb=s;//variable del vb
	viva=vb*piva/100;//variable del viva
	vdesc=vb*pdesc/100;//variable del vdesc
	vn=vb+viva-vdesc;//variable del vn
	cout<<"el valor a pagar es de:  "<<vn<<endl<<endl;//se muestra al usuario el resultado final en pantalla
	return 0;//finaliza la ejecucion 

}
