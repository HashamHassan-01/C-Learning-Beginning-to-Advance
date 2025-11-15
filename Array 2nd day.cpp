#include<iostream>
using namespace std;

void linearsearch(int arr[], int size, int target){
	int position1= -1; int position2=-1;
	for(int i=0; i<size; i++){
if(arr[i]==target){
	if(position1==-1){
		position1 = i;
	}
	position2 =i;
}
	}
if(position1==-1){
	cout<<"We are not able to find the index of value. "<<endl;
	
}
else{
	
cout<<"The Value of first occurance is: "<<position1<<endl;
		cout<<"The Value of second occurance is: "<<position2<<endl;
	}
}
int main(){
	int arr[]={1,2,3,4,5,6,5};
	int size = 7;
	int target =5;
	linearsearch(arr, size, target);
	
}	
