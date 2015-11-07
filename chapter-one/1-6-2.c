/*输入最长回文子串*/

//获取最长子回文串的位置
int longest_palindrome(char *str, int &start, int &end){
	if (str == NULL){
		return 0;
	}
	int i, j;
	int	max = 0, c = 0;
	int nstart = 0;
	for (i = start; i <= end; ++i){
		for (j = 0; (i - j >= start) && (j + i <= end); ++j){
			if (str[i - j] != str[i + j]){
				break;
			}
			else{
				c = 2 * j + 1;
			}
		}
		if (c > max){
			max = c;
			nstart = i -j + 1;
		}
		for (j = 0; (i - j >= start) && (j + i + 1 <= end); ++j){
			if (str[i - j] != str[j + i + 1]){
				break;
			}

			else{
				c = 2 * j + 2;
			}
		}
		if (c > max){
			max = c;
			nstart = i - j + 1;
		}
	}
	start = nstart;
	end = start + max - 1;
	return max;
}

bool is_head = true;
//打印子回文串
void print_palindrome(char *str, int &start, int &end){
	int lstart = start;
	int rend = end;
	longest_palindrome(str, start, end);
	int lend = start - 1;
	int rstart = end + 1;
	if (lstart <= lend){
		print_palindrome(str, lstart, lend);
	}
	int i;	
	if (is_head){
		is_head = false;
	}
	else{
		printf(",");
	}
	for (i = start; i <= end; ++i){
		printf("%c", str[i]);
	}
	if (rstart <= rend){
		print_palindrome(str, rstart, rend);
	}
}