/*最长回文子串*/
int longest_palindrome(char *str, int n){
	if (str == NULL){
		return 0;
	}
	int i, j, max = 0, c;
	for (i = 0; i < n; ++i){
		for (j = 0; (j <= i) && (j + i < n); ++j){
			if (str[i - j] != str[i + j]){
				break;
			}
			else{
				c = 2 * j + 1;
			}
		}
		if (c > max){
			max = c;
		}
		for (j = 0; (j <= i) && (j + i + 1 < n); ++j){
			if (str[i - j] != str[j + i + 1]){
				break;
			}

			else{
				c = 2 * j + 2;
			}
		}
		if (c > max){
			max = c;
		}
	}
	return max;
}