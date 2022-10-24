#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include <locale.h>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int opcion;
    void convertir(int numero, string &numeroS, string aux){
    	while(numero>0){
    		if(numero%2 == 0){
    			numeroS = numeroS + "0";
			}else{
				numeroS = numeroS + "1";
			}
    		numero = numero/2;
		}
		for(int i=numeroS.length()-1;i>=0;i--){
			aux = aux + numeroS.at(i);
		}
		numeroS = aux;
	}
void gotoxy(int x1, int y1){

		HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD dwPos;
		dwPos.X=x1;
		dwPos.Y=y1;

		SetConsoleCursorPosition(hcon,dwPos);
}		
int main(){
	
	string numeroS = " ",aux;
	string p;
	int digitoex[20];
	int unidad,decena,centena,unidadmil;
	int decimal, residuo, resultado, i=0;
	int n,n1, n2,j,sum = 0,div = 0,rest = 0,multi = 0,numero,unidades,millar;
	while (1==1){
	 cout<<"[1] Suma, Resta, multiplicacion y division"<<endl;	
	 cout<<"[2] Determinar si un numero es par o impar"<<endl;
	 cout<<"[3] Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
	 cout<<"[4] Determinar si una palabra o un numero es palindromo"<<endl;
	 cout<<"[5] Conversion de numeros arabigos a romanos"<<endl;
	 cout<<"[6] Conversion de numeros enteros a letras"<<endl;
	 cout<<"[7] Conversion de numeros enteros con decimal a letras"<<endl;
	 cout<<"[8] Una tabla de multiplicar"<<endl;
	 cout<<"[9] Todas las tablas de multiplicar del 1 al 10"<<endl;
	 cout<<"[10] Crear de forma grafica la multiplicacion manual"<<endl;
	 cout<<"[11] Conversion de numeros decimales a binario"<<endl;
	 cout<<"[12] Conversion de numeros decimales a hexadecimales"<<endl;
	 cout<<"[13] Crear Figuras Geometricas Basicas"<<endl;
	 cout<<"[14] Mover un punto en toda la pantalla"<<endl;
	 cout<<"[15] Simular un Cajero Automatico (Automata)"<<endl;
	 cout<<"[16] Calcular la hipotenusa"<<endl;
	 cout<<"[17] SALIR"<<endl;	    
	cout<<"Que desea realizar?"<<endl;	    
	cin>> opcion;

switch (opcion){
	
case 1:
	
    cout<<"Puedes realizar las operaciones"<<endl;
	cout<<"Escribe un numero: "; cin>>n1;
	cout<<"Escribe otro numero: "; cin>>n2;
	
	sum = n1 + n2;
	rest = n1 - n2;
	div = n1 / n2;
	multi = n1 * n2;
	
	cout<<"El resultado de la suma es: "<<sum<<endl;
	cout<<"El resultado de la resta es: "<<rest<<endl;
	cout<<"El resultado de la multiplicacion es: "<<multi<<endl;
	cout<<"El resultado de la division es: "<<div<<endl;
	system("pause");
	system("cls");
	break;	
	
case 2:
    cout<<"Puedes determinar si un numero es par o impar"<<endl;
	cout<<"Ingrese un numero: "; cin>>n1;
	if(n1%2==0){
		cout<<n1<<" es numero es par "<<endl;
	}else{
		cout<<n1<<" es numero es impar "<<endl;
	}
	system("pause");
	system("cls");
	break;
case 3:
	 int opcion2;
	 int n3,kilom,milla,metro,pulga,libra,kilo;
     cout<<"Puedes Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;	
	 cout<<"[1] Convertir de kilometros a millas"<<endl;
	 cout<<"[2] Convertir de metros a pulgadas"<<endl;
	 cout<<"[3] Convertir de libras a kilos"<<endl;
	 cout<<"O tambien puedes"<<endl;
	 cout<<"[4] Convertir de millas a kilometros"<<endl;	
	 cout<<"[5] Convertir de pulgadas a metros"<<endl;
	 cout<<"[6] Convertir de kilos a libras"<<endl;	 
	 cout<<"Que conversion quieres realizar?"<<endl;
	 cin>>opcion2;
	 switch (opcion2){
	 case 1:
	 	cout<<"Kilometros a millas "<<endl;
	 	cout<<"Ingrese Numero a convertir: "; cin>>n3;
	 	
	 	kilom = n3 * 0.621371;
	 	cout<<"La conversion de "<<n3<<" Kilometros a Millas es: "<<kilom<<endl;
	system("pause");
	system("cls");
	break;
	case 2:
		cout<<"Metros a pulgadas "<<endl;
	 	cout<<"Ingrese Numero a convertir: "; cin>>n3;
	 	
	 	metro = n3 * 39.37;
	 	cout<<"La conversion de "<<n3<<" Metros a pulgadas es: "<<metro<<endl;
	system("pause");
	system("cls");
	break;
	case 3:
		cout<<"Libras a kilos "<<endl;
	 	cout<<"Ingrese Numero a convertir: "; cin>>n3;
	 	
	 	libra = n3 * 0.453592;
	 	cout<<"La conversion de "<<n3<<" Libras a kilos: "<<libra<<endl;
	system("pause");
	system("cls");
	break;		 	
		 case 4:
	 	cout<<"Millas a kilometros "<<endl;
	 	cout<<"Ingrese Numero a convertir: "; cin>>n3;
	 	
	 	milla = n3 * 1.60934;
	 	cout<<"La conversion de "<<n3<<" Millas a kilometros es: "<<milla<<endl;
	system("pause");
	system("cls");
	break;
	case 5:
		cout<<"Pulgadas a metros "<<endl;
	 	cout<<"Ingrese Numero a convertir: "; cin>>n3;
	 	
	 	pulga = n3 * 0.0254;
	 	cout<<"La conversion de "<<n3<<" Pulgadas a metros es: "<<pulga<<endl;
	system("pause");
	system("cls");
	break;
	case 6:
		cout<<"Kilos a libras "<<endl;
	 	cout<<"Ingrese Numero a convertir: "; cin>>n3;
	 	
	 	kilo = n3 * 2.20462;
	 	cout<<"La conversion de "<<n3<<" Kilos a libras es: "<<kilo<<endl;
	system("pause");
	system("cls");
	break;		 	
	 }
	
case 4:

	cout<<"Escribre la palabra a comprobar: ";
	cin>>p;
	bool comprobar;
	for(int i=0;i<p.length(); i++){
		if(i==p.length()||0>p.length()-1-i){
			break;
		}if(p[i]==p [p.length()-1-i]){
			
			comprobar=true;
		}else{
			comprobar=false;
			break;
		}
	
	}if(comprobar==true){
		cout<<p<<" es una palabra Polindroma "<<endl;
	}else{
		cout<<p<<" no es una palabra Polindroma "<<endl;
	}
	
	system("pause");
	system("cls");	
	break;	

case 5:
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	unidades =  numero%10; numero /= 10;
	decena = numero%10; numero /= 10;
	centena = numero%10; numero /= 10;
	millar = numero%10; numero /= 10;
	
	switch(millar){
		case 1: cout<<"M"<<endl; break;
		case 2: cout<<"MM"<<endl; break;
		case 3: cout<<"MMM"<<endl; break;
	}
	switch(centena){
		case 1: cout<<"C"<<endl; break;
		case 2: cout<<"CC"<<endl; break;
		case 3: cout<<"CCC"<<endl; break;
		case 4: cout<<"CD"<<endl; break;
		case 5: cout<<"D"<<endl; break;
		case 6: cout<<"DC"<<endl; break;
		case 7: cout<<"DCC"<<endl; break;
		case 8: cout<<"DCCC"<<endl; break;
		case 9: cout<<"CM"<<endl; break;
	}
	switch(decena){
		case 1: cout<<"X"<<endl; break;
		case 2: cout<<"XX"<<endl; break;
		case 3: cout<<"XXX"<<endl; break;
		case 4: cout<<"XL"<<endl; break;
		case 5: cout<<"L"<<endl; break;
		case 6: cout<<"LX"<<endl; break;
		case 7: cout<<"LXX"<<endl; break;
		case 8: cout<<"LXXX"<<endl; break;
		case 9: cout<<"XC"<<endl; break;
	}
	switch(unidades){
		case 1: cout<<"I"<<endl; break;
		case 2: cout<<"II"<<endl; break;
		case 3: cout<<"III"<<endl; break;
		case 4: cout<<"IV"<<endl; break;
		case 5: cout<<"V"<<endl; break;
		case 6: cout<<"VI"<<endl; break;
		case 7: cout<<"VII"<<endl; break;
		case 8: cout<<"VIII"<<endl; break;
		case 9: cout<<"X"<<endl; break;
	}	
	system("pause");
	system("cls");	
	break;	
case 6: {
int E,D, i;
 int U,d,C;
 int d1,d2;
 double a, Q=500.00;
 
 inicio:
 	
 cout<<"Ingrese el numero que desea convertir:"<<endl;
 cin>>a;
 if(a>=0 && 0<=a)
 {
 	Q=(a);}
	 else 
	 goto intentar;
	 
	 E=a;
	
	 cout<<"El numero convertido a letras es: "<<endl;
	 U=E%10; E=E/10;
	 d=E%10;  E=E/10;
	 C=E%10;  E=E/10;
	 
	 d1=D%10;  D=D/10;
     d2=D%10;	
     
     switch(C){
     	case 0: cout<<""; break;
     	case 1: if(d==0 && U==0)
     	{cout<<"Cien ";}
     	else{cout<<"Ciento ";}break;
     	case 2: cout<<"Doscientos ";break;
     	case 3: cout<<"Trescientos";break;
     	case 4: cout<<"Cuatrocientos ";break;
     	case 5: cout<<"Quinientos ";break;
	 }
	 switch(d){
	 	case 1: switch (U){
	 	case 0: cout<<"Diez ";break;
		case 1: cout<<"Once ";break;
		case 2: cout<<"Doce ";break;
		case 3: cout<<"Trece ";break;
		case 4: cout<<"Catorce ";break;
		case 5: cout<<"Quince ";break;
		case 6: cout<<"Dieciseis ";break;
		case 7: cout<<"Diecisiete ";break;
		case 8: cout<<"Dieciocho ";break;
		case 9: cout<<"Diecinueve ";break;
			
			break;
		 } break;
		 case 2: if(U==0)
		 	{cout<<"veinte";}
		 	else
		 	{cout<<"veinti ";}break;
		 case 3: if(U==0)
		 	{cout<<"treinta ";}
		 	else
		 	{cout<<"treinta y ";}break;
		 case 4: if(U==0)
		 	{cout<<"Cuarenta ";}
		 	else
		   	{cout<<"cuarenta y ";}break;
		 case 5: if(U==0)
		 	{cout<<"cincuenta ";}
		 	else
		 	{cout<<"cincuenta y ";}break;
		 case 6: if(U==0)
		 	{cout<<"sesenta ";}
		 	else
		   	{cout<<"sesenta y ";}break;
		 case 7: if(U==0)
		 	{cout<<"setenta ";}
		 	else
		 	{cout<<"setenta y ";}break;	
		 case 8: if(U==0)
		 	{cout<<"ochenta ";}
		 	else
		   	{cout<<"ochenta y ";}break;
		 case 9: if(U==0)
		 	{cout<<"noventa ";}
		 	else
		 	{cout<<"noventa y ";}break;	
	 }
	switch(U)
	{
	case 0: if(C==0 && d==0 && d1==0 && d2==0)
		{cout<<"cero ";}
		else
		{cout<<" ";}break;
	case 1:	if(C==0 && d==0 && d1==0 && d2==0)
		{cout<<"uno ";}
		else
		if(C==0 && d>=3 && d1==0 && d2==0)
		{cout<<"uno ";}
		else
		if(C>=1 && d>=3 || d==0 && d1==0 && d2==0)
		{cout<<"uno ";}
		else
		{cout<<" ";}break;
	case 2:	if(C==0 && d==0 && d1==0 && d2==0)
		{cout<<"dos ";}
		else
		if(C==0 && d>=3 && d1==0 && d2==0)
		{cout<<"dos ";}
		else
		if(C>=1 && d>=3 || d==0 && d1==0 && d2==0)
		{cout<<"dos ";}
		else
		{cout<<" ";}break;
	case 3:	if(C==0 && d==0 && d1==0 && d2==0)
		{cout<<"tres ";}
		else
		if(C==0 && d>=3 && d1==0 && d2==0)
		{cout<<"tres ";}
		else
		if(C>=1 && d>=3 || d==0 && d1==0 && d2==0)
		{cout<<"tres ";}
		else
		{cout<<" ";}break;
	case 4:	if(C==0 && d==0 && d1==0 && d2==0)
		{cout<<"cuatro ";}
		else
		if(C==0 && d>=3 && d1==0 && d2==0)
		{cout<<"cuatro ";}
		else
		if(C>=1 && d>=3 || d==0 && d1==0 && d2==0)
		{cout<<"cuatro ";}
		else
		{cout<<" ";}break;
	case 5:	if(C==0 && d==0 && d1==0 && d2==0)
		{cout<<"cinco ";}
		else
		if(C==0 && d>=3 && d1==0 && d2==0)
		{cout<<"cinco ";}
		else
		if(C>=1 && d>=3 || d==0 && d1==0 && d2==0)
		{cout<<"cinco ";}
		else
		{cout<<" ";}break;
	case 6:	if(C==0 && d==0 && d1==0 && d2==0)
		{cout<<"seis ";}
		else
		if(C==0 && d>=3 && d1==0 && d2==0)
		{cout<<"seis ";}
		else
		if(C>=1 && d>=3 || d==0 && d1==0 && d2==0)
		{cout<<"seis ";}
		else
		{cout<<" ";}break;
	case 7:	if(C==0 && d==0 && d1==0 && d2==0)
		{cout<<"siete ";}
		else
		if(C==0 && d>=3 && d1==0 && d2==0)
		{cout<<"siete ";}
		else
		if(C>=1 && d>=3 || d==0 && d1==0 && d2==0)
		{cout<<"siete ";}
		else
		{cout<<" ";}break;
	case 8:	if(C==0 && d==0 && d1==0 && d2==0)
		{cout<<"ocho ";}
		else
		if(C==0 && d>=3 && d1==0 && d2==0)
		{cout<<"ocho ";}
		else
		if(C>=1 && d>=3 || d==0 && d1==0 && d2==0)
		{cout<<"ocho ";}
		else
		{cout<<" ";}break;	
	case 9:	if(C==0 && d==0 && d1==0 && d2==0)
		{cout<<"nueve ";}
		else
		if(C==0 && d>=3 && d1==0 && d2==0)
		{cout<<"nueve ";}
		else
		if(C>=1 && d>=3 || d==0 && d1==0 && d2==0)
		{cout<<"nueve ";}
		else
		{cout<<" ";}break;						
	}
	
cout<<" ";

cout<<""<<endl;

goto ok;
intentar:
{cout<<"El monto requerido no se encuentra"<<endl;}
cout<<"Intentar nuevamente"<<endl;
op:
cout<<"1. si"<<endl;
cout<<"2. no"<<endl;
cin>> i;

system("cls");
if (i==1)
{goto inicio;}
else
if (i==2)
{goto final;}
else
cout<<"La opcion ingresada no es valida"<<endl;
cout<<"Por favor ingrese una de las dos opciones"<<endl;
goto op;
ok:
	
op2:
cout<<""<<endl;
cout<<"Desea convertir nuevamente? "<<endl;
cout<<"[1]  SI"<<endl;
cout<<"[2]  NO"<<endl;
cout<<"Escriba la opcion: ";
cin>>i;
system("cls");
if(i==1)
{goto inicio;}
else
if(i==2)
{goto final;}

else
cout<<"la opcion ingresada no valida"<<endl;
cout<<"por favor ingrese de nuevo"<<endl;
goto op2;
final:
	{cout<<"Gracias por preferirnos, vuelva pronto";}

	system("pause");
	system("cls");	
}
case 7:

break;


case 8:

    	
       	do{
       cout<<"Escribe un numero del 1 al 10: ";
	   cin>>numero;	
		   }while((numero<1) || (numero>10));
       	for(int i=1;i<=10;i++){
       		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
		   }
       
    system("pause");
	system("cls");	
	break;
	
case 9:
    	for(i=1;i<11;i++){
    		printf("--------------------------------------------------\n\t\tTabla del %d\n",i);
    		for(j=1;j<11;j++)
		printf("%d x %d = %d \n",i,j,i*j);
		}
       	
    system("pause");
	system("cls");	
	break;
case 10:
    	cout<<"Ingrese un numero: ";
       	cin>>n1;
       	cout<<"Ingrese segundo numero: ";
       	cin>>n2;
       	multi = n1*n2;
       	cout<<"   "<<n1<<endl;
       	cout<<" x "<<n2<<endl;
       	cout<<"______"<<endl;
       	cout<<"R: "<<multi<<endl;
       	
    system("pause");
	system("cls");	
	break;
	
case 11:
	
	
	printf("Ingrese el numero: \n");
	scanf("%i", &numero);
    
    convertir(numero,numeroS,aux);
    istringstream(numeroS) >> numero;
	printf("Numero binario %i \n",numero);
	       	
    system("pause");
	system("cls");	
	break;
case 12:
	
	
	cout<<"Ingrese el numero decimal a convertir: "<<endl;
	cin>>decimal;
		
		do{
			residuo = decimal% 16;
			resultado = decimal / 16;
			digitoex[i] = residuo;
			decimal = resultado;
			i++;
		}while(resultado > 15);
		digitoex[i] = resultado;
		cout<<"El equivalente en hexadecimal es: ";
		for(int j = i; j>=0; j--){
	if(digitoex[j] == 10){
		
		cout << "A";		
		}
	else if(digitoex[j] == 11){
		cout << "B";
	}
	else if(digitoex[j] == 12){
		cout<< "C";
	}
	else if(digitoex[j] == 13){
		cout<< "D";
	}
	else if(digitoex[j] == 14){
		cout<< "E";
	}
	else if(digitoex[j] == 15){
		cout<< "F";
	}
	else {
		cout << digitoex[j];
	}
}
case 13:
	int n;
	cout<<"Ingrese el nunero de filas de la figura: ";
	cin>>n;
	cout<<"----------Cuadro----------"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"& ";
		} 
		cout<<endl;
	}

cout<<"---------Triangulo-------"<<endl<<endl;

		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
			cout<<" ";
		} 
			for(int j=0;j<=i;j++)
			{
			cout<<"& ";
		} 
		cout<<endl;
	}
cout<<"---------Rombo-------"<<endl<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
			cout<<" ";
		} 
			for(int j=0;j<=i;j++)
			{
			cout<<"& ";
		} 
		cout<<endl;
	}
			for(int i=0;i<n;i++)
		{
		 
			for(int j=0;j<=i;j++)
			{
			cout<<" ";
		} 
			for(int j=i;j<n;j++)
			{
			cout<<"& ";
		}
		cout<<endl;
	}

    system("pause");
	system("cls");	
	break;	
case 14:{
	char oppcion;
	int x=10, y=10;
		while(oppcion!='z'){
			system("cls");
		gotoxy(x,y); cout<<"*";
		oppcion=getch();
		switch(oppcion)
		{
			case 'w': y--; break;
			case 's': y++; break;
			case 'a': x--; break;
			case 'd': x++; break;
			}	

}
	
		break;
}
case 15:{

	
	
	int saldo_inicial = 1000,opc;
	float extra,saldo = 0,retiro; 
	
	cout<<"\t-----Bienvenido al cajero automatico-----"<<endl;
	cout<<"Opciones a elegir: "<<endl;
	cout<<"[1]Ingresar dinero a la  cuenta"<<endl;
	cout<<"[2]Retirar dinero de la cuenta"<<endl;
	cout<<"[3]Salir"<<endl;
	cout<<"Escriba la opcion a elegir: ";
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Escriba la cantidad de dinero que desea ingresar a la cuenta: ";
			cin>>extra;
			saldo = saldo_inicial + extra;
			cout<<"Dinero disponible en la cuenta: "<<saldo<<endl;break;
		case 2:
			cout<<"Escriba la cantidad de dinero a retirar: ";
			cin>>retiro;
			if(retiro>saldo_inicial){
				cout<<"No posee ese saldo en tu cuenta";
			}else{
				saldo = saldo_inicial - retiro;
				cout<<"Dinero que poseee actualmente en su cuenta: "<<saldo<<endl;
			}
		case 3:
	system("pause");
	system("cls");	
	break;
	}
	system("cls");
		break;
}
case 16: {
	
	float a,o;
	cout<< "Ingrese el lado adyacente del triangulo: ";
	cin>>a;
	cout<< "Ingrese el lado opuesto del triangulo: ";
	cin>>o;
	
	cout<<"El valor de la hipotenusa es "<<sqrt(a*a + o*o)<<endl;
	
       	
    system("pause");
	system("cls");	
	break;
}
case 17:
	
	cout<<"Gracias por ingresar al menu"<<endl;
    system("pause");
	system("cls");	
	break;
	exit(0);
}
break;
exit(0);
}
exit(0);
}


