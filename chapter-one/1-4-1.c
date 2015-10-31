/*字符串转换成整数*/
int str_to_int(char const *str){
	//判断正负
	int flag = 1;
	if(*str == '+'){
		++str;
	}
	if(*str == '-'){
		++str;
		flag = -1;
	}

	unsigned int n = 0;
	while(*str != '\0'){
		int i = *str - '0';
		//处理溢出
		if(flag > 0 && ((n > INT_MAX/10) || (n == INT_MAX/10 && i > INT_MAX%10))){
			n = INT_MAX;
			break;
		}
		if(flag < 0 && (n > (unsigned)INT_MIN/10) || (n == (unsigned)INT_MIN && i > (unsigned)INT_MIN%10)){
			n = INT_MIN;
			break;
		}
		n = 10 * n +i;
		++str;
	}
	return flag > 0 ? n : -n;
}