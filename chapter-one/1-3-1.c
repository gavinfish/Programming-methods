/*全排列*/
void swap(char *c1, char *c2){
	char t = *c1;
	*c1 = *c2;
	*c2 = t;
}

void recursion_sort(char *c, int from, int to){
	if (from == to)
	{
		printf("%s\n", c);
	}
	int i;
	for(i = from; i <= to; ++i){
		swap(&c[i], &c[from]);
		recursion_sort(c, from+1, to);
		swap(&c[i], &c[from]);
	}
}

void all_sort(char *c, int n){
	recursion_sort(c, 0, n - 1);
}