#include<iostream>
using namespace std;
void suma(int num1, int num2){
	int resultado;
	num1++;
	num2++;
	resultado = num1 + num2;
	cout<<resultado<<endl;
}

int main(){
	int a, b;
	cin>>a;
	cin>>b;
	suma(a,b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	system("pause");
}
