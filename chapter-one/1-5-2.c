/*链表回文*/

typedef struct node{
	char c;
	struct node *next;
} node;

void reverse_list(node *head){
	node *cur, *p;
	if(head == NULL){
		return;
	}
	cur = head->next;
	while(cur->next != NULL){
		p = cur->next;
		cur->next = p->next;
		p->next = head->next;
		head->next = p;
	}
}

bool is_palindrome_list(node *head){
	if(head == NULL || head->next == NULL){
		return true;
	}
	node *cur = head;
	node *fast = cur;
	node *slow = cur;
	while(fast != NULL && fast->next != NULL){
		fast = fast->next->next;
		slow = slow->next;
	}
	reverse_list(slow);
	slow = slow->next;
	cur = cur->next;
	while(slow != NULL){
		if(slow->c != cur->c){
			return false;
		}
		slow = slow->next;
		cur = cur->next;
	}
	return true;
}