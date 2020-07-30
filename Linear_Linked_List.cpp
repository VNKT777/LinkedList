#include<stdlib.h>
#include<iostream>
using namespace std;
struct Node{
	int val;
	Node* next;
};
int main(){
	
	Node* A = new Node();
	A->next = NULL;
	
	int choice = 1;
	cout<<"Create new Linked List(1/0) >>";
	cin>>choice;
	int opt = 1;
	int length = 0;
	
	while(choice==1){
		
		cout<<"1 - Add End | 2 - Traverse | 3 - Insert At Pos |4 - Delete at Pos >>";
		cin>>opt;
		
		//Add the node at the end of the linked list.
		if (opt == 1){
			Node* temp = A;
			while(temp->next != NULL){
				temp = temp->next;
			}
			
			Node* newtemp = new Node();
			newtemp->next = NULL;
			int x;
			cout<<"Enter Value of Node >>";
			cin>>newtemp->val;
			length++;
			//newtemp->val = x;
			
			temp->next = newtemp;
		}
		
		//Traverse through the linked list.
		else if(opt == 2){
			Node* temp = A;
			temp = temp->next;
			cout<<"Length of Linked List :"<<length<<"\n";
			while(temp->next != NULL){
				cout<<temp->val<<"	";
				temp = temp->next;
			}
			cout<<temp->val<<"	\n";
		}
		
		//Insert at the position.
		else if(opt == 3){
			int pos = length+1;
			while(pos>length){
				cout<<"Enter Postion of Insertion >>";
				cin>>pos;
			}
			
			Node* temp = A;
			temp = temp->next;
			
			int tempos = 0;
			while(tempos < pos-2 && pos!=1){
				temp = temp->next;
				tempos++;
			}
						
			Node* newtemp = new Node();
			cout<<"Enter Value of the node >>";
			cin>>newtemp->val;
			
			if (pos == 1){
				//Insert at the beginning of the list.
				newtemp->next = A->next;
				A->next = newtemp;
				length++;
			}
			else{
			newtemp->next = temp->next;
			temp->next = newtemp;
			length++;
			}
		}
		
		//Delete node at the position.
		else if(opt == 4){

			int pos;
			cout<<"Enter the position of the node to be deleted >>";
			cin>>pos;
			
			while(pos>length || pos<0){
				cout<<"INVALID POS: Re-Enter the position >>";
				cin>>pos;
			}
			
			int tempos = 0;
			Node* temp = A;
			temp = temp->next;
			
			while(tempos < pos-2 && pos!=1){
				temp = temp->next;
				tempos++;
			}
			
			if(pos==1){
				//Delete at the beginning of the list.
				length--;
				A = A->next;
				A->val = NULL;
				
			}
			else{
				length--;
				Node* x = new Node();
				x = temp->next;
				temp->next = x->next;
			}
		}
		
		
		cout<<"Do you wish to continue(1/0) ?";
		cin>>choice;
		
		

		
	}
	
	return 0;
}
