/*字符串的匹配*/
//录匹配字符末尾位置
const char * print_end;

bool is_match(const char *str, const char *pattern){
	//一旦匹配成功，就用全局变量print_end来记录匹配字符末尾位置
	if (*pattern == NULL){
		print_end = str;
		return true;
	}
	if (*str == NULL){
		//假定同一种通配符不会连续出现
		if (*pattern == '*'&&*++pattern == NULL){
			print_end = str;
			return true;
		}
		//匹配结束
		return false;
	}
	//对有无通配符和每种通配符进行讨论
	if (*pattern != '*'&&*pattern != '?'){
		if (*str == *pattern){
			return is_match(str + 1, pattern + 1);
		}
		else{
			//从当前起始位置匹配失败，退出后从下一个位置开始
			return false;
		}
	}
	else if (*pattern == '*'){
		return is_match(str, pattern + 1) || is_match(str + 1, pattern);
	}
	else{
		return is_match(str + 1, pattern + 1);
	}
}

void str_match(const char *str, const char *pattern){
	while (*str != NULL){
		if (is_match(str, pattern)){
			while (str != print_end){
				printf("%c", *str++);
			}
			printf("\n");
		}
		else{
			++str;
		}
	}
}
