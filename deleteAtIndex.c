# include <stdio.h>
# include <stdlib.h>

struct Node{
	int data;
	struct Node * next;
};

void linkedlisttraversal(struct Node *ptr){
	while(ptr != NULL){
		printf("Elements are : %d\n",ptr->data);
		ptr = ptr->next;
	}
}

struct Node * deleteAtIndex(struct Node * head,int index){
    struct Node *p = head;
    struct Node *q = head -> next;
    for(int i = 0; i < index-1; i++){
        p = p -> next;
        q = q -> next; 
    }
    p -> next = q -> next;
    free(q);    
    return head;
}
    int main()
{
	struct Node *head;
	struct Node *second;
	struct Node *third;
	struct Node *fourth;
	head = (struct Node *)malloc(sizeof(struct Node));   
	second = (struct Node *)malloc(sizeof(struct Node)); 
	third = (struct Node *)malloc(sizeof(struct Node)); 
	fourth = (struct Node *)malloc(sizeof(struct Node));
	
	head -> data = 7;
	head -> next = second;
	second -> data = 8;
	second -> next = third;
	third -> data = 9;
	third -> next = fourth;
	fourth -> data = 6;
	fourth -> next = NULL;

    printf("Elements before deletion : \n");
	linkedlisttraversal(head);
    head = deleteAtIndex(head, 2);
    printf("\nElements after deletion : \n");
    linkedlisttraversal(head);
    return 0;
}

