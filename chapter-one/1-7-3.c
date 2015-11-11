/*字符个数的统计*/
void char_count(char *str, int n){
	int i;
	for (i = 0; i < n; ++i){
		if (str[i]>'a'){
			c[str[i] - 'a']++;
		}
		else{
			c[str[i] - 'A' + 26]++;
		}
	}
	for (i = 0; i < 26; ++i){
		printf("%c:%d\n", 'a' + i, c[i]);
	}
	for (i = 26; i < 52; ++i){
		printf("%c:%d\n", 'A' + i-26, c[i]);
	}
}