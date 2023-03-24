#include<iostream>
using namespace std;
void suma(int num1, int num2){
	int resultado;
	resultado = num1 + num2;
	cout<<resultado<<endl;
}

void resta(int num1, int num2){
	int resultado;
	resultado = num1 - num2;
	cout<<resultado<<endl;
}
int main(){
	suma(10,20);
	resta(30,18);
	system("pause");
}
