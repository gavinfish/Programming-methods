/*字典序的全排列*/
void dic_all_sort(char *str, char *dest, int size, int cur){
	//先将字符串排序
	sort(str);
	
	if(cur == size){
		printf("%s\n", dest);
		return;
	}
	int i;
	for(i = 0; i < size; ++i){
		dest[cur] = str[i];
		dic_all_sort(str, dest, size, cur+1);
	}
}