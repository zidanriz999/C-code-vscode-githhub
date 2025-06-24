#include<stdio.h>
int main(){
	char str[10]= {"HELLO"};
	
	int i, vowel = 0;
	for(i=0; i<5; i++){
		if(str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u'
		|| str[i] == 'A' ||str[i] == 'E' ||str[i] == 'I' ||str[i] == 'O' ||str[i] == 'U'){
			vowel++;
		}
	}
	int size = sizeof(str) - vowel;
	
	printf("Number of vowels : %d", vowel);	
	printf("\n Number of consonants : %d", size);
	
	
	
	
	return 0;
}