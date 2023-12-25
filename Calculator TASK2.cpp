#include<iostream>
using namespace std;

int main(){
	cout<<"Welcome to CPP Calculator Program\n";
	char option;
	do{
		cout<<"Enter any two Numbers : \n";
	float a ,b;
	char token;
	cin>> a >> b;
	cout<<"Select operation you want to perform:\n";
	cout<<" + , - , * , / \n";
	cin>> token;
	switch(token){
		case '+':
			cout<<"Addition of two numbers is: "<<a+b<<endl;
			break;
		case'-':
			cout<< "Substraction of two numbers is: "<<a - b<<endl;
			break;
		case'*':
			cout<< "Multiplication of two numbers is: "<<a * b<<endl;
			break;
		case'/':
			cout<< "Division of two numbers is: "<<a/b<<endl;
			break;
		default :
			cout<<"Invalid Input \n";
	}
	cout<<"Do You want to continue: Yes -> y , No -> n \n";
	cin>>option;
	
	}
	while(option == 'y');
	
}
