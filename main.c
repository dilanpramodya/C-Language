#include<stdio.h>

int main()
{
	float mark;
	
	 printf("Enter Student Marks : ");
	 scanf("%f",&mark);
	 
	 if(mark>100 || mark<0){
	 	printf("Enter valid Mark");
	 }else if(mark>=75){
	 	printf("A");
	 }else if(mark>=65){
	 	printf("B");
	 }else if(mark>=55){
	 	printf("C");
	 }else if(mark>=45){
	 	printf("S");
	 }else("fail");
}