/*栈回文(个人理解是用栈来实现回文判断)*/
bool is_palindrome_stack(char *str, int n){
	stack<char> s;
	int i;
	for(i = 0; i < n; ++i){
		s.push(str[i]);
	}
	for(i = 0; i < n; ++i){
		if(str[i] != s.top()){
			return false;
		}
		s.pop();
	}
	return true;
}