#include <stdio.h>

int odd_arr(int arr[],int x,int size){
int count=0;
if(x >size){
return 0;
}
if(arr[x]%2 !=0){
count++;
}
return count + odd_arr(arr,x+1,size);
}

int even_arr(int arr[],int x,int size){
int count=0;
if(x > size){
return 0;
}
if(arr[x]%2 == 0){
count++;
}
return count + even_arr(arr,x+1,size);
}


int main(){

int arr[6]={1,2,3,4,5,6};
int size =5;
	printf("the number of even number is %d , the number of odd numbers is %d ",even_arr(arr,0,5),odd_arr(arr,0,5));
}
