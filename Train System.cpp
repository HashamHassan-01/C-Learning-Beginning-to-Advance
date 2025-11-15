#include<iostream>
using namespace std;
int main(){
	cout<<"---^^Seat Reservation System. ^^---"<<endl;
	int arr[8][4]={
    {0 ,0 ,0 ,0 },
	{0,1,0,0},
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0},
	{1,1,1,1},
	{1,1,1,1},
};
	for(int i=0; i<8; i++){
		for(int j=0; j<4; j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
	int seats=0;
cout<<"The number of seats you want to book is: "<<endl;
cin>>seats;
for(int i=0; i<seats; i++){
int row; 

cout<<"The row of the seat is: "<<endl;
cin>>row;

int col;
cout<<"The column of the seat is: "<<endl;
cin>>col;

	if(row<0 || row>=8 || col<0 || col>=4){
		cout<<"Invalid Input."<<endl;
		
	}
else if(arr [row][col]==0){

	cout<<"This seat is Vacant."<<endl;
    cout<<"Your Seat is booked.  "<<endl;
}

else {
		cout<<"This seat is already booked."<<endl;
}    
}
return 0;
}