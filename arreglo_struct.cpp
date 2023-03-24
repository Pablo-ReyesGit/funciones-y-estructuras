#include<iostream>
using namespace std;

struct Estudiante{
	int codigo[4];
	string nombre[4];
	int nota[4];
};

int main(){
	Estudiante estudiante;
	
	for(int i=0; i<4; i++){
	cout<<"ingrese el codigo"<<endl;
	cin>>estudiante.codigo[i];
	}
	cin.ignore();
	for(int i=0; i<4; i++){
	cout<<"ingrese el nombre completo"<<endl;
	getline(cin,estudiante.nombre[i]);
	}
	for(int i=0; i<4; i++){
	cout<<"ingrese el codigo"<<endl;
	cin>>estudiante.nota[i];
	}
	for(int i=0; i<4;i++){
	cout<<"codigo: "<<estudiante.codigo[i]<<endl;
	cout<<"nombre: "<<estudiante.nombre[i]<<endl;
	cout<<"nota: "<<estudiante.nota[i]<<endl;
	}
	cout<<"codigo: "<<estudiante.codigo<<endl;
	cout<<"nombre: "<<estudiante.nombre<<endl;
	cout<<"nota: "<<estudiante.nota<<endl;
	system("pause");
}
