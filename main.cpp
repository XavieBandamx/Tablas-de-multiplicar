#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input 
Realice un programa en C++ para mostrar las tablas de multiplicar.
El programa debe de mostrar un menú con las tablas del 1 al 10,
el usuario debe de elegir cual tabla desea que se imprima en pantalla,
el usuario también puede elegir hasta qué número se va a mostrar la tabla,
por ejemplo la tabla del 5 hasta el número 20.
Al final de mostrar la tabla el usuario puede elegir si desea regresar al menú o finalizar el programa.
Se utiliza If, While o Do While y For.*/
using namespace std;
int main(int argc, char** argv) {
	int option, mult,lim;
	char var='s';
		
	do{	 
		system("cls");//limpiar pantalla
			cout<<endl<<"1.- Tabla del uno "<<endl<<"2.- Tabla del dos "<<endl<<"3.- Tabla del tres";
			cout<<endl<<"4.- Tabla del cuatro "<<endl<<"5.- Tabla del cinco "<<endl<<"6.- Tabla del seis";
			cout<<endl<<"7.- Tabla del siete "<<endl<<"8.- Tabla del ocho "<<endl<<"9.- Tabla del nueve";
			cout<<endl<<"10.- Tabla del diez "<<endl<<"11.- Salir "<<endl;
		cout<<"Introduce cual tablas de multiplicar quieres ver: "<<endl;
		cin>>option;
        if (option<1||option>10) {
            /* Volvemos a repetir el bucle */
            continue;
        }       
		switch(option){
		case 1:
			cout << "Hasta qué numero desea que se muestre la tabla?: "<<endl;
			cin >> lim;
			cout << "La tabla del " << option << " hasta el " << lim << " es: "<<endl;
				
			for (mult=1; mult<= lim; mult++) {
				cout << option << " x " << mult << " = " << option * mult << endl;
			}
					
				cout<<"Desea volver al menu ?"<<endl;
				cout<<"S/N"<<endl;
				cin>>var;
				if(var=='s'||var=='S'){
					continue;
				}else if(var=='n'|| var=='N'){
					return 0;
				}else{
					cout<<"-"<<endl;
				}
			break;
		case 2:
			cout << "Hasta qué numero desea que se muestre la tabla?: "<<endl;
			cin >> lim;
			cout << "La tabla del " << option << " hasta el " << lim << " es: "<<endl;
				
			for (mult=1; mult<= lim; mult++) {
				cout << option << " x " << mult << " = " << option * mult << endl;
			}
					
				cout<<"Desea volver al menu ?"<<endl;
				cout<<"S/N"<<endl;
				cin>>var;
				if(var=='s'||var=='S'){
					continue;
				}else if(var=='n'|| var=='N'){
					return 0;
				}else{
					cout<<"-"<<endl;
				}
			break;
		case 3:
			cout << "Hasta qué numero desea que se muestre la tabla?: "<<endl;
			cin >> lim;
			cout << "La tabla del " << option << " hasta el " << lim << " es: "<<endl;
				
			for (mult=1; mult<= lim; mult++) {
				cout << option << " x " << mult << " = " << option * mult << endl;
			}
					
				cout<<"Desea volver al menu ?"<<endl;
				cout<<"S/N"<<endl;
				cin>>var;
				if(var=='s'||var=='S'){
					continue;
				}else if(var=='n'|| var=='N'){
					return 0;
				}else{
					cout<<"-"<<endl;
				}
			break;
		case 4:
			cout << "Hasta qué numero desea que se muestre la tabla?: "<<endl;
			cin >> lim;
			cout << "La tabla del " << option << " hasta el " << lim << " es: "<<endl;
				
			for (mult=1; mult<= lim; mult++) {
				cout << option << " x " << mult << " = " << option * mult << endl;
			}
					
				cout<<"Desea volver al menu ?"<<endl;
				cout<<"S/N"<<endl;
				cin>>var;
				if(var=='s'||var=='S'){
					continue;
				}else if(var=='n'|| var=='N'){
					return 0;
				}else{
					cout<<"-"<<endl;
				}
			break;
		case 5:
			cout << "Hasta qué numero desea que se muestre la tabla?: "<<endl;
			cin >> lim;
			cout << "La tabla del " << option << " hasta el " << lim << " es: "<<endl;
				
			for (mult=1; mult<= lim; mult++) {
				cout << option << " x " << mult << " = " << option * mult << endl;
			}
					
				cout<<"Desea volver al menu ?"<<endl;
				cout<<"S/N"<<endl;
				cin>>var;
				if(var=='s'||var=='S'){
					continue;
				}else if(var=='n'|| var=='N'){
					return 0;
				}else{
					cout<<"-"<<endl;
				}
			break;
		case 6:
			cout << "Hasta qué numero desea que se muestre la tabla?: "<<endl;
			cin >> lim;
			cout << "La tabla del " << option << " hasta el " << lim << " es: "<<endl;
				
			for (mult=1; mult<= lim; mult++) {
				cout << option << " x " << mult << " = " << option * mult << endl;
			}
					
				cout<<"Desea volver al menu ?"<<endl;
				cout<<"S/N"<<endl;
				cin>>var;
				if(var=='s'||var=='S'){
					continue;
				}else if(var=='n'|| var=='N'){
					return 0;
				}else{
					cout<<"-"<<endl;
				}
			break;
		case 7:
			cout << "Hasta qué numero desea que se muestre la tabla?: "<<endl;
			cin >> lim;
			cout << "La tabla del " << option << " hasta el " << lim << " es: "<<endl;
				
			for (mult=1; mult<= lim; mult++) {
				cout << option << " x " << mult << " = " << option * mult << endl;
			}
					
				cout<<"Desea volver al menu ?"<<endl;
				cout<<"S/N"<<endl;
				cin>>var;
				if(var=='s'||var=='S'){
					continue;
				}else if(var=='n'|| var=='N'){
					return 0;
				}else{
					cout<<"-"<<endl;
				}
			break;
		case 8:
			cout << "Hasta qué numero desea que se muestre la tabla?: "<<endl;
			cin >> lim;
			cout << "La tabla del " << option << " hasta el " << lim << " es: "<<endl;
				
			for (mult=1; mult<= lim; mult++) {
				cout << option << " x " << mult << " = " << option * mult << endl;
			}
					
				cout<<"Desea volver al menu ?"<<endl;
				cout<<"S/N"<<endl;
				cin>>var;
				if(var=='s'||var=='S'){
					continue;
				}else if(var=='n'|| var=='N'){
					return 0;
				}else{
					cout<<"-"<<endl;
				}
			break;
		case 9:
			cout << "Hasta qué numero desea que se muestre la tabla?: "<<endl;
			cin >> lim;
			cout << "La tabla del " << option << " hasta el " << lim << " es: "<<endl;
				
			for (mult=1; mult<= lim; mult++) {
				cout << option << " x " << mult << " = " << option * mult << endl;
			}
					
				cout<<"Desea volver al menu ?"<<endl;
				cout<<"S/N"<<endl;
				cin>>var;
				if(var=='s'||var=='S'){
					continue;
				}else if(var=='n'|| var=='N'){
					return 0;
				}else{
					cout<<"-"<<endl;
				}
			break;
		case 10:
			cout << "Hasta qué numero desea que se muestre la tabla?: "<<endl;
			cin >> lim;
			cout << "La tabla del " << option << " hasta el " << lim << " es: "<<endl;
				
			for (mult=1; mult<= lim; mult++) {
				cout << option << " x " << mult << " = " << option * mult << endl;
			}
					
				cout<<"Desea volver al menu ?"<<endl;
				cout<<"S/N"<<endl;
				cin>>var;
				if(var=='s'||var=='S'){
					continue;
				}else if(var=='n'|| var=='N'){
					return 0;
				}else{
					cout<<"-"<<endl;
				}
			break;
		default:
			cout<<"Error"<<endl;
			break;
		}	
		
	}while(option!=11);
	return 0;
}
