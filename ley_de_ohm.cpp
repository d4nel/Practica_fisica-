#include <iostream>
using namespace std;
int menu (){
	int op;
	cout<<"\nEJERCICIOS CON LA LEY DE OHM \n";
	cout<<"1) calculo del voltaje \n2) calculo de la corriente \n";
	cout<<"3) calculo de la resistencia \n4) Salir.\n";
	cout<<"elija su OPCION: ";
	cin>>op;
	return op;
}
int main(){
	float v,i,r;
	int op,salir=1;
	system("color 6");
	do {
		op=menu();
		switch (op){
			case 1:
				cout<<"usted elijio calcular el voltaje\n";
				cout<<"ingrese el valor de la corriente en amperios: ";
				cin>>i;
				cout<<"ingrese el valor de la resistencia en ohmios: ";
				cin>>r;
				v=i*r;
				cout<<"el voltaje es: "<<v;
				break;
			case 2:
				cout<<"usted elijio calcular la corriente\n";
				cout<<"ingrese el valor del voltaje: ";
				cin>>v;
				cout<<"ingrese el valor de la resistencia: ";
				cin>>r;
				i=v/r;
				cout<<"la corriente es: "<<i;
				break;
			case 3:
				cout<<"usted elijio calcular la resistencia\n";
				cout<<"ingrese el valor del voltaje: ";
				cin>>v;
				cout<<"ingrese el valor de la corriente: ";
				cin>>i;
				r=v/i;
				cout<<"la resistencia es: "<<r;
				break;
			case 4:
				cout<<" Usted eligio Salir ...CHAU\n";
				salir =0;
				
			default:
			cout<<"opcion no valida";
			break;
		}
		
	}while (salir !=0);
	
	return 0;
    }