#include<iostream>
using namespace std;
	int linearSearch(int arr_ali[][2], int row, int column, int target){
	
	for(int i=0; i<row; i++){
		for(int j=0; j<column; j++){
			if (arr_ali[i][j]==target){
				return arr_ali[i][j];
			}
		
		}
	}
		return -1;
}
int main() {

int arr_ali[4][2]={1,2,3,4,5,6,7,8,};
int row=4;
int column= 2;
int target=7;
int results= linearSearch(arr_ali,row,column, target);
if(results!=-1){

	cout<<"The value is found: "<<results<<endl;
}
	
	else{
		cout<<"THE VALUE NOT FOUND"<<endl;
	}

 return 0;
}