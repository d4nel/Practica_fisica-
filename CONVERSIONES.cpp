#include <iostream>
using namespace std;

int main() {
double MEDIDA,CANTIDAD,CONVERSION;
double RESPUESTA;
char MENSAJE;
cout << "SELECCIONE LA UNIDAD A CONVERTIR" << endl<<"1. AMPERAJE(A) " << endl<<"2. VOLTAJE(V)"<<endl<<"3.  RESISTENCIA(O)"<<endl;
cin >> MEDIDA;
while((MEDIDA<=0)||(MEDIDA>3))
{
cout << "INGRESE UNA OPCION VALIDA" << endl;
cin >> MEDIDA;
}
cout << "SELECCIONE LA CONVERSION" << endl<<"1. MILI A BASE " << endl<<"2. MICRO A BASE"<<endl<<"3. BASE A MILI"<<endl<<"4. BASE A MICRO"<<endl<<"5. BASE A KILO"<<endl<<"6. KILO A BASE"<<endl;
cin >> CONVERSION;
while((CONVERSION<=0)||(CONVERSION>6))
{
cout << "INGRESE UNA OPCION VALIDA" << endl;
cin >> CONVERSION;
}
cout << "INGRESE LA CANTIDAD A CONVERTIR" << endl;
cin >> CANTIDAD;
while((CANTIDAD<=0))
{
cout << "INGRESE NUMERO POSITIVO" << endl;
cin >> CANTIDAD;
}
if(MEDIDA==1){
MENSAJE='A';
}
if(MEDIDA==2){
MENSAJE='V';
}
if(MEDIDA==3){
MENSAJE='O';
}
if(CONVERSION==1){
RESPUESTA=CANTIDAD/1000;
cout << CANTIDAD <<" mili "<<MENSAJE<<" es igual a "<<RESPUESTA<<" "<<MENSAJE<<endl;
}
if(CONVERSION==2){
RESPUESTA=CANTIDAD/1000000;
cout << CANTIDAD <<" micro "<<MENSAJE<<" es igual a "<<RESPUESTA<<" "<<MENSAJE<<endl;
}
if(CONVERSION==3){
RESPUESTA=CANTIDAD*1000;
cout << CANTIDAD <<" "<<MENSAJE<<" es igual a "<<RESPUESTA<<" mili "<<MENSAJE<<endl;
}
if(CONVERSION==4){
RESPUESTA=CANTIDAD*1000000;
cout << CANTIDAD <<" "<<MENSAJE<<" es igual a "<<RESPUESTA<<" micro "<<MENSAJE<<endl;
}
if(CONVERSION==5){
RESPUESTA=CANTIDAD/1000;
cout << CANTIDAD <<MENSAJE<<" es igual a "<<RESPUESTA<<" kilo "<<MENSAJE<<endl;
}
if(CONVERSION==6){
RESPUESTA=CANTIDAD*1000;
cout << CANTIDAD <<" kilo "<<MENSAJE<<" es igual a "<<RESPUESTA<<" "<<MENSAJE<<endl;
}
    return 0;}
