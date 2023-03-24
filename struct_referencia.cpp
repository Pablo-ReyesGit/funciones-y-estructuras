#include<iostream>
using namespace std;

struct Estudiante{
	int *codigo;
	string *nombre;
	int **nota;
};

int main(){
	Estudiante estudiante;
	
	int fila =0;
	int columna = 0;
	cout<<"cuantos alumnos quiere agregar"<<endl;
	cin>>fila;
	cout<<"cuantas notas de alumnos quiere agregar"<<endl;
	cin>>columna;
	
	estudiante.codigo = new int[fila];
	estudiante.nombre = new string[fila];
	estudiante.nota = new int*[fila];
	for(int i=0; i<fila; i++){
		estudiante.nota[i] = new int [columna];
	}
	cout<<"ingreso de notas________________"<<endl;
	for(int i =0; i<fila;i++){
		
		cout<<"codigo: "<<i<<endl;
		cin>>estudiante.codigo[i];
		cin.ignore();
		
		cout<<"nombre completo: "<<i<<endl;
		getline(cin,estudiante.nombre[i]);
		
		for(int j=0; j<columna; j++){
			cout<<"ingrese nota"<<j<<endl;
			cin>>*(*(estudiante.nota+i)+j);
		}
		cout<<"\n";
	}
	cout<<"__________ mostrar datos __________"<<endl;
	for(int i =0; i<fila;i++){
		
		cout<<"codigo: "<<i<<estudiante.codigo<<endl;
		
		cout<<"nombre completo: "<<i<<estudiante.nombre<<endl;
		
		for(int j=0; j<columna; j++){
			cout<<"nota: "<<j<<estudiante.nota<<endl;
		}
		cout<<"\n";
	}
	delete[] estudiante.codigo;
	delete[] estudiante.nombre;
	delete[] estudiante.nota;
	for(int i=0; i<fila; i++){
		delete[] estudiante.nota[i];
	}
	system("pause");
}
