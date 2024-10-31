#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node * next;
};

void linked_list_traversal(struct Node *ptr){
	while(ptr != NULL){
		printf("Elements are : %d\n",ptr->data);
		ptr = ptr -> next;
	}
	printf("\n");
}
struct Node * insertion_after_node(struct Node *head,struct Node * previousNode,int data){
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr -> data = data;
	
	ptr -> next = previousNode -> next;
	previousNode -> next = ptr;
	return head;
}
int main(){
	struct Node *head;
	struct Node *second;
	struct Node *third;
	struct Node *fourth;
	
	head = (struct Node *)malloc(sizeof(struct Node));
	second = (struct Node *)malloc(sizeof(struct Node));
	third = (struct Node *)malloc(sizeof(struct Node));
	fourth = (struct Node *)malloc(sizeof(struct Node));
	
	head -> data = 69;
	head -> next = second;
	second -> data = 55;
	second -> next = third;
	third -> data = 96;
	third -> next = fourth;
	fourth -> data = 52;
	fourth -> next = NULL;
	
	printf("Elements before insertion :- \n");
	linked_list_traversal(head);
	head = insertion_after_node(head,second,699);
	printf("\nElements after insertion :- \n");
	linked_list_traversal(head);
	return 0;
}
