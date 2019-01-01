#include <stdio.h>

int binarySearch(int ele[],int low,int high,int key){
    float mid;
    
    if(high>low){
        mid=(low+high)/2;
        if(mid==key){
            return mid;
        }
        
        else if(key>mid){
            low=mid+1;
        }
        
        else{
            high=mid-1;
        }
        
    }
    
    else{
        return -1;
    }
}


int main(void) {
    int size,ele[50],key,low,high,res;
	printf("\t This is the code for Binary Search : \n");
	printf("Enter the size of array:\n");
	scanf("%d",&size);
	printf("Enter the elements (in asc. order):\n");
	for(int i=0;i<size;i++){
	    scanf("%d",&ele[i]);
	}
	printf("Enter the number for searching :\n");
	scanf("%d",&key);
	low=ele[0];
	high=ele[size-1];
	res=binarySearch(ele,low,high,key); 
	if(res==-1){
	    printf("Number not found in the array !!");
	}
	
	else{
	    printf("Number found at position %d",res+1);
	}
	
	
}

