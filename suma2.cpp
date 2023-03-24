#include<iostream>
using namespace std;
int suma(int num1, int num2){
	int resultado;
	resultado = num1 + num2;
	return resultado;
}

int suma(int num1, int num2, int num3){
	int resultado;
	resultado = num1 + num2 + num3;
	return resultado;
}

int main(){
	cout<<suma(10,20)<<endl;
	cout<<suma(30,18,22)<<endl;
	system("pause");
}
