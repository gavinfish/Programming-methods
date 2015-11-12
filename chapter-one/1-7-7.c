/*第一个只出现一次的字符*/
//原题没有什么限制，用比较常见的空间换时间
//假设字符只有小写字母，可自行扩展
char first_once(char *str, int n){
	int count[26] = {0};
	int i = 0;
	for (i = 0; i < n; ++i){
		++count[str[i] - 'a'];
	}
	for (i = 0; i < n; ++i){
		if (count[str[i] - 'a'] == 1){
			return str[i];
		}
	}
	return NULL;
}