/*举一反三：单词翻转*/
void reverse_word(char *c, int n){
	reverse_string(c, 0, n-1);
	int i = 0, j=0;
	while(j <= n-1){
		if(c[j] == ' '){
			reverse_string(c, i, j-1);
			i = j+1;
		}
		++j;
	}
}

void reverse_string(char *c, int from, int to){
	while(from < to){
		char temp = c[from];
		c[from++] = c[to];
		c[to--] = temp;
	}
}
