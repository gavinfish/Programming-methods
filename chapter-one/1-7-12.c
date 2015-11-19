/*最长连续字符*/
int get_longest(const char *str, int count, int result){
	if (*str != '\0'){
		if (*str == *(str - 1)){
			result = ++count > result ? count : result;
		}
		else{
			count = 1;
		}
		return get_longest(++str, count, result);
	}
	else{
		return result;
	}
}

int longest_continuous_char(char *str, int n){
	if (n <= 0){
		return 0;
	}
	else if (n == 1){
		return 1;
	}
	return get_longest(++str, 1, 1);
}