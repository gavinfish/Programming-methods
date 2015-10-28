/*字符串旋转之三步旋转法*/
//n是字符串长度，m是需要移动的位数
void left_to_right(char *c, int n, int m){
	m = m % n;
	reverse_string(c, 0, m-1);
	reverse_string(c, m, n-1);
	reverse_string(c, 0, n-1);
}

void reverse_string(char *c, int from, int to){
	while(from < to){
		char temp = c[from];
		c[from++] = c[to];
		c[to--] = temp;
	}
}
