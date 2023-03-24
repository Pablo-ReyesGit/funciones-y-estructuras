#include<iostream>
using namespace std;
int suma(int num1, int num2){
	int resultado;
	resultado = num1 + num2;
	return resultado;
}

int resta(int num1, int num2){
	int resultado;
	resultado = num1 - num2;
	return resultado;
}
int main(){
	cout<<suma(10,20)<<endl;
	cout<<resta(30,18)<<endl;
	system("pause");
}
