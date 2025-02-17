#include <stdio.h>

int odd_arr(int arr[],int x){
int count=0;
if(x > 5){
return 0;
}
if(arr[x]%2 !=0){
count++;
}
return count + odd_arr(arr,x+1);
}

int even_arr(int arr[],int x){
int count=0;
if(x > 5){
return 0;
}
if(arr[x]%2 == 0){
count++;
}
return count + even_arr(arr,x+1);
}


int main(){

int arr[6]={1,2,3,4,5,6};

	printf("the number of even number is %d , the number of odd numbers is %d ",even_arr(arr,0),odd_arr(arr,0));
}
