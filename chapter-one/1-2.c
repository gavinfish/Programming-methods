/*字符的左右移动*/
char* str_move(char *str, int n){
	if (str == NULL){
		return str;
	}
	int last = n - 1, i;
	//先找到最后一个*
	while (str[last] != '*'&&last >= 0){
		--last;
	}
	i = last;
	while (last >= 0 && i >= 0){
		//找到*前第一个出现的字母
		while (str[i] == '*'&&i >= 0){
			--i;
		}
		//将字母复制到*处，字母指针向前移
		if (i >= 0 && last >= 0){
			str[last] = str[i--];
		}
		//更新最后一个*位置
		while (str[last] != '*'&&last >= 0){
			--last;
		}
	}
	//将剩下的位置补为*
	while (--last >= 0){
		str[last] = '*';
	}
	return str;
}