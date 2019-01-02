#include<stdio.h>

int linearSearch(int ele,int size,int key){
	for(int i=0;i<size;i++){
		if(ele[i]==key){
			return key;}}
}


void main(){
	int ele[],size,key=-1;
	printf("\t This is the code for Linear Search. \n");
	printf("\n Enter the size of the array : \n");
	scanf("%d",&size);
	printf("Enter the elements : \n");
	for(int i=0;i<size;i++){
		scanf("%d",&ele[i]);	
	}
	printf("Enter the number for searching :");
	scanf("%d",&key);
	res=linearSearch(ele,size,key);
	if(key==-1){
		printf("Element not found!");}

	else{
		printf("Element found at position %d . ",key+1);}
}
