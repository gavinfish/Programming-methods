/*集合的差集*/
struct node{
	int v;
	node *next;
};

node* set_diff(node *a, node *b){
	node *pa = a;
	node *pb = NULL;
	node *prev = NULL;

	while (pa != NULL){
		pb = b;
		//在链表b中查找该元素
		while (pb != NULL&&pb->v != pa->v){
			pb = pb->next;
		}
		//如果链表b中存在该元素
		if (pb != NULL){
			//如果是a中的第一个元素
			if (prev == NULL){
				a = a->next;
			}
			else{
				prev->next = pa->next;
			}
			pa = pa->next;
		}
		else{
			prev = pa;
			pa = pa->next;
		}
	}
	return a;
}