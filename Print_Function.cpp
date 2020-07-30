void Print(Node* A){
	if(A == NULL){
		cout<<"\n";
		return;
	}
	cout<<A->val<<" ";
	Print(A->next);
}
