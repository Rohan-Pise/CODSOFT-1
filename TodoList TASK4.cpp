#include<iostream>
#include <cstdlib>
using namespace std;
class Node{
public:
	string data;
	Node* next;
	
	 Node(string data){
		this->data = data;
		this->next= NULL;
	}
	
};
void add(Node* &head,string val){
 Node*n = new Node(val);
 if(head == NULL){
 	head = n;
 	return;
 }
 Node* temp= head;
 while(temp->next != NULL){
 	temp = temp->next;
 }
 temp->next = n;
}

void printLinkedList(Node* head){
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp = temp->next;
	}
}

void Delete(Node* &head , int n){
	Node* temp = head;
	if(n==1){
		Node*temp = head;
		head=head->next;
		delete temp;
	}
	
	for(int i=1 ; i<n-1;i++){
		temp = temp->next;
	}
	Node* todelete= temp->next;
	temp->next = temp->next->next;
	delete todelete;
}





int main(){
	cout<<"Welcome to Your todo List \n";
	char option;
	Node* head = NULL;
	
	
		char choice; 
      string data;
      while(true){
	  
        	cout<<"1. Add\n";
			cout<<"2. View\n";
			cout<<"3. Delete\n";
			cout<<"4. Exit \n";
			
			cout<<"Enter Your Choice : ";
			cin>>choice;
			switch(choice){
				case '1':
					 cin.ignore();
					cout<<"Enter data \n";
					 getline(cin, data);//cin>>data;
					add(head , data);
					break;
				case'2':
					printLinkedList(head);
					break;
				case'3':
				int pos;
				cout<<"Enter the Number : \n";
				cin>>pos;
				   Delete(head,pos);
				   break;
				case'4':
					exit(1);
					break;
				default:
					cout<<"Invalid Symbol\n";
			}
		}
      
			
	

	
	
}
