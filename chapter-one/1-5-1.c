/*回文判断*/
bool is_palindrome(const char *s, int n){
	int left = 0;
	int right = n - 1;
	while(left < right){
		if(s[left++] != s[right--]){
			return false;
		}
	}
	return true;
}