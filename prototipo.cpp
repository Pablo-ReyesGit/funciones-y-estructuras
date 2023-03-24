#include<iostream>
using namespace std;
void suma(int &num1, int &num2);

int main(){
	int a, b;
	cout<<"ingrese el valor de a"<<endl;
	cin>>a;
	cout<<"ingrese el valor de b"<<endl;
	cin>>b;
	suma(a,b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	system("pause");
}

void suma(int &num1, int &num2){
	int resultado;
	num1++;
	num2++;
	resultado = num1 + num2;
	cout<<resultado<<endl;
}
