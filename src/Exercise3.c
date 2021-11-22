/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex3(char *str){
	//Your codes here
	int argc;
	int min=strlen(*str);
	int max=strlen(*str);
	char shortest;
	char longest;
	for(int i=1;i<argc;i++){
		if(strlen(*(str+i))>max){
		   longest=*(str+i);
		}
		if(strlen(*(str+i))<min){
		   shortest=*(str+i);
		}
	}
	printf(" shortest word: %s",shortest);
	printf(" longest word: %s", longest);
}


int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
