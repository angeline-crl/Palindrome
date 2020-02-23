//code by angeline-crl
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
char str1[50], word[50], word2[50];
int i, len;
int main(){
	cout << "- - - - - - - - - - - - - - - - - - - -\n"
		 << "              PALINDROME\n"
		 << "- - - - - - - - - - - - - - - - - - - -\n\n";
	cout << " > Enter a String: ";
	gets(str1);
	
	//length of characters in string
	len = strlen(str1);
	
	//loop to turn all char into lowercase
	for(i=0; i<len; i++)
		word[i] = tolower(str1[i]);
	
	//copy lowercased string to word2
	strcpy(word2,word);
	
	//loop to reverse the string
	for(i=0; i<strlen(str1)/2; i++){
		 char temp=word2[i];
		 word2[i]=word2[strlen(word2)-i-1];
		 word2[strlen(word2)-i-1]=temp;
	}
	
	cout << "\n ";
	
	//word = initial string input
	//word2 = reversed string
	
	//compare word and word2
	//if similar, value = 0
	//else, string is not a palindrome
	if((strcmp(word,word2)) == 0)
		cout << str1 << " is a Palindrome";
	else
		cout << str1 << " is NOT a Palindrome";
		
	return 0;
}
