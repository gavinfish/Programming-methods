/*字符串反转*/
void str_reversal(char *str, int n){
	int left = 0;
	int right = n - 1;
	while (left < right){
		int temp = str[left];
		str[left++] = str[right];
		str[right--] = temp;
	}
}