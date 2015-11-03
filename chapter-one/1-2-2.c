/*变位词*/
bool same_characters(char *c1, int n1, char *c2, int n2){
	if(n1 != n2){
		return false;
	}
	int count1[26] = {0};
	int count2[26] = {0};
	int i;
	for(i = 0; i < n1; ++i){
		++count1[c1[i] - 'a'];
		++count2[c2[i] - 'a'];
	}
	for(i = 0; i < n1; ++i){
		if(count1[i] != count2[i]){
			return false;
		}
	}
	return true;
}