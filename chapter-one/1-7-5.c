/*字符串空格的压缩*/
//将字符串翻转并前移
//l:要翻转的起始位置，r:结束位置，移动后的起始位置
void str_reverse(char *str, int l, int r, int start) {
	//翻转字符串长度
	int n = r - l + 1;
	int end = start + n - 1;
	//可以直接翻转前移的长度
	int len = l - start > n ? n : l - start;
	int i;
	for (i = 0; i < len; ++i) {
		str[start++] = str[r - i];
	}
	//需要在原地翻转的部分
	while (start < end) {
		int t = str[start];
		str[start++] = str[end];
		str[end--] = t;
	}
}

char* space_compress(char *str, int n) {
	int i;
	int l = 0;
	int r = 0;
	int start = 0;
	bool last_is_space = false;
	for (i = 0; i <= n; ++i) {
		if (last_is_space) {
			if (str[i] == ' ') {
				//重复的空格
			}
			else {//从空格转为字符串
				l = i;
				last_is_space = false;
			}
		}
		else {
			if (str[i] == ' ' || str[i] == '\0') {//从字符串转为空格或转换结束
				r = i - 1;
				str_reverse(str, l, r, start);
				//遍历完原字符串直接退出
				if (str[i] == '\0') {
					str[start += r - l + 1] = '\0';
					return str;
				}
				//更新start指针位置
				start += r - l + 2;
				str[start - 1] = ' ';
				last_is_space = true;
			}
			else {

			}
		}
	}
	return str;
}