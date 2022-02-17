	while(p->next!=NULL){
		p=p->next;
	}
		p->next=ptr;
		ptr->next=NULL;