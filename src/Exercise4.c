/*
4. Receive a string, remove all blank spaces at begin and
end of the string and leave only one blank space between words.
Ex:
 ________________________________________________
| Input: "  this  is an   unformatted  string "  |
| Output: this is an unformatted string          |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void Ex4(char *str){
	//Your codes here
	int n=strlen(str);
	while (str[0] == ' '){
		for(int i=0;i<=n;i++){
			*(str+i)=*(str+i+1);
		}
		n--;
	}
	while (*(str+n-1) ==' '){
		for(int i=n-1;i<=n-1;i++){
			*(str+i)=*(str+i+1);
		}
		n--;
    for(int i=0;i<n;i++){
		if(*(str+i)==' ' && *(str+i+1)==' '){
			for(int i=i+1;i<=n-1;i++){
				*(str+i)=*(str+i+1);
			}
			n--;
			i--;
		}
	}
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex4(testcase);

	return 0;
}