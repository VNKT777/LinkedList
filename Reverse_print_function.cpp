void RevPrint(Node* A){
	if(A == NULL){
		return;
	}
	RevPrint(A->next);
	cout<<A->val<<" ";
}
