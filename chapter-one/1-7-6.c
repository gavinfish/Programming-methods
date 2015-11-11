/*重复字符的压缩*/
void str_compress(char *str, int n) {
	if (*str == NULL || n < 1) {
		return;
	}
	//当前重复的字符
	char c = str[0];
	int count = 1;
	int i;
	int index = 0;
	for (i = 1; i < n; ++i) {
		if (str[i] == c) {
			++count;
		}
		else {
			//有重复的字符需要额外输出数字
			if (count > 1) {
				str[index++] = '0' + count;
			}
			str[index++] = c;
			//更新重复的字符
			c = str[i];
			count = 1;
		}
	}
	//补足最后一种字符
	if (count > 1) {
		str[index++] = '0' + count;
	}
	str[index++] = c;
	str[index] = '\0';
}