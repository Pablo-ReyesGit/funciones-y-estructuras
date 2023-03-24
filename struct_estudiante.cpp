#include<iostream>
using namespace std;

struct Estudiante{
	int codigo;
	string nombre;
	int nota;
};

int main(){
	Estudiante estudiante;
	cout<<"ingrese el codigo"<<endl;
	cin>>estudiante.codigo;
	cout<<"ingrese el nombre completo"<<endl;
	cin.ignore();
	cout<<"ingrese la nota"<<endl;
	getline(cin,estudiante.nombre);
	
	cout<<"codigo: "<<estudiante.codigo<<endl;
	cout<<"nombre: "<<estudiante.nombre<<endl;
	cout<<"nota: "<<estudiante.nota<<endl;
	system("pause");
}
