#include<stdio.h>
#include<conio.h>

void makeKeyMatrix(char keyMatrix[5][5],char key[50]){
	printf("%s",key);
}

void main(){
	printf("\n");
	
	char key[] = "PASSWORD";
	char keyMatrix[5][5] = {
		{'\n','\n','\n','\n','\n'},
		{'\n','\n','\n','\n','\n'},
		{'\n','\n','\n','\n','\n'},
		{'\n','\n','\n','\n','\n'},
		{'\n','\n','\n','\n','\n'}
	};
	
	 makeKeyMatrix(keyMatrix,key);
	
	printf("\n\n");
}