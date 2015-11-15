/*删除特定的字符*/
char* delete_chars(char* str, int n, char *dest, int m){
	//每一个字符用一位表示，256种字符只需长度为32的整形数组
	int flag[32] = { 0 };
	int i;
	for (i = 0; i < m; ++i){
		flag[(dest[i] - NULL) / 8] |= 1 << (dest[i] - NULL) % 8;
	}
	int p = 0;
	for (i = 0; i < n; ++i){
		//没有出现过的字符依次前移
		if ((flag[(str[i] - NULL) / 8] >> ((str[i] - NULL) % 8) & 1) == 0){
			str[p++] = str[i];
		}
	}
	str[p] = '\0';
	return str;
}