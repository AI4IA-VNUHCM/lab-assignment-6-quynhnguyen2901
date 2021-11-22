/*
5. Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid. The brackets must close in the correct order.
Ex:
 ________________________
| Input: "{([])}"        |
| Output: Valid!         |
| Input: "{[)}"          |
| Output: Invalid!       |
|________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex5(char *str, char *argv[]){
	//Your codes here
	int t=0;
	int n=strlen(*argv);
	for(int i=0;i<n/2;i++){
		if(*(str)!=*(str+n-1-i)){
			t=0;
		}
	}
	t=1;
	if(t=0){
		printf(" invalid");
	}
	else{
		printf(" valid ");
	}
}


int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex5(testcase);
	return 0;
}
