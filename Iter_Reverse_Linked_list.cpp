		//Update to the Linked List Condition based interface code.
    
    else if(opt == 5){
			Node* temp = A;
			temp = temp->next;
			
			Node* prev = temp;
			temp = temp->next;
			prev->next = NULL;
			
			Node* aftr = temp;
			aftr = aftr->next;
			
			
			while(temp->next != NULL){
				temp->next = prev;
				prev = temp;
				temp = aftr;
				aftr = aftr->next;
			}
			temp->next = prev;
			A->next = temp;
		}
