/*
1. Receive a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: one thousand two hundred thirty four   |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	//Your codes here
	
	int a=n%10;
	n=n/10;
	int b =n%10;
	n=n/10;
	int c=n%10;
	n=n/10;
	int d=n%10;
	n=n/10;
	switch(d){
		case 1: printf("one thousand");break;
		case 2: printf("two thousand");break;
		case 3: printf("three thousand");break;
		case 4: printf("four thousand");break;
		case 5: printf("five thousand");break;
		case 6: printf("six thousand");break;
		case 7: printf("seven thousand");break;
		case 8: printf("eight thousand");break;
		case 9: printf("nine thousand");break;
	} 
	switch(c){
		case 1: printf("one hundred");break;
		case 2: printf("two hundred");break;
		case 3: printf("three hundred");break;
		case 4: printf("four hundred");break;
		case 5: printf("five hundred");break;
		case 6: printf("six hundred");break;
		case 7: printf("senven hundred");break;
		case 8: printf("eight hundred");break;
		case 9: printf("nine hundred");break;
	}
	if(b%10==0 && a!=0){
		printf("and");
	}
	switch(b){
		case 2: printf("twenty");break;
		case 3: printf("thirty");break;
		case 4: printf("forty");break;
		case 5: printf("fifty");break;
		case 6: printf("sixty");break;
		case 7: printf("seventy");break;
		case 8: printf("eighty");break;
		case 9: printf("ninety");break;
	}
	switch(a){
		case 1: printf("one");break;
		case 2: printf("two");break;
		case 3: printf("three");break;
		case 4: printf("four");break;
		case 5: printf("five");break;
		case 6: printf("six");break;
		case 7: printf("seven");break;
		case 8: printf("eight");break;
		case 9: printf("nine");break;
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	
	return 0;
}
