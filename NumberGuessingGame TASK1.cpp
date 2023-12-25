#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	cout<< "Welcome to the Number Guessing Game\n";
	cout<<"You have to guess the correct number ranging between 1 to 10\n";
	
	int correct ;//taken to illustrate the proper working of program
	
	int guess;
	char option;
 do{
 	    srand(time(0));
 	    correct  = (rand()%10)+1;
 	    cout<<correct<<endl;
 		while(true){
 			    cout<<"Enter Your guess:\n";
				cin>>guess;
				if(guess > correct){
					cout<<"Your guess is high\n";
				}
				else if(guess== correct){
					cout<<"You Guessed it Right\n";
					break;
				}
				
				else{
					cout<<"Your guess is low \n";
				}
			}
			cout<<"------------x------------x-----------x-------------\n";
			cout<<"Do You want to play again : Yes = y , No = n\n";
			cin>>option;
 }
 while(option == 'y');
		
	

}
