#include<stdio.h>
#include<conio.h>

void makeKeyMatrix(char keyMatrix[5][5],char key[50]){
	//printf("%s",key);
}

void main(){
	char key[] = "PASSWORD";
	char keyMatrix[5][5] = {
		{'\n','\n','\n','\n','\n'},
		{'\n','\n','\n','\n','\n'},
		{'\n','\n','\n','\n','\n'},
		{'\n','\n','\n','\n','\n'},
		{'\n','\n','\n','\n','\n'}
	};
	printf("%s",key);



	printf("\nInput : ");
	scanf("%s",&key);
	makeKeyMatrix(keyMatrix,key);
}
