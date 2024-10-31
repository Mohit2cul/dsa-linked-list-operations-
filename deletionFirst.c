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

struct Node * deleteFirst(struct Node * head){
    struct Node * ptr = head;
    head = head -> next;
    free(ptr);
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
    head = deleteFirst(head);
    printf("\nElements after deletion : \n");
    linkedlisttraversal(head);
    return 0;
}

