int main()
{
	char word[20] = "Array";
	int n = 0, j = 0, i;
	for (i = 0; i < 20; ++i){
		if(word[i] == "\i")
		n++;
	}
	j = n/2;
	for (i = 20; i >= 0; i--){
		word [i+j] = word[i];
		word [i] = '_';
	}
	for (i = 0; i < 20; i++){
		if (word[i] == '\0')
		word[i] = '_';
	}
}
