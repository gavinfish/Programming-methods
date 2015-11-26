/*五笔编码*/
/*感觉这道题就是一道找规律的题目*/
//各位每改变一下字母下标的变化情况
int factor[] = { 25 * 25 * 25 + 25 * 25 + 25 + 1, 25 * 25 + 25 + 1, 25 + 1, 1 };

//获取下标
int get_index(char *str){
	int index = 0;
	int len = 0;
	while (*str != '\0'){
		index += (*str++ - 'a')*factor[len++];
	}
	return index + len - 1;
}

//获取编码
char* get_code(int index){
	static char str[5] = "";
	int i = 0;
	while (index >= 0){
		str[i] = 'a' + index / factor[i];
		index %= factor[i++];
		--index;
	}
	str[i] = '\0';
	return str;
}	

/*	
 *	c语言返回字符串的四种实现
 *	1.使用堆空间，返回申请的堆地址，注意释放
 *	2.函数参数传递指针，返回该指针
 *	3.返回函数内定义的静态变量s
 *	4.返回全局变量
 */