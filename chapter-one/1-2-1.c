/*字符串的包含：位运算法*/
bool contain_all(char *source, int n, char *target, int m){
	int hash = 0;
	int i;
	for(i = 0; i < n; ++i){
		hash |= 1 << (source[i] - 'A');
	}
	for(i = 0; i < m; ++i){
		if((hash &(1 << (target[i] - 'A'))) == 0){
			return false;
		}
	}
	return true;
}