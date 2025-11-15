#include<iostream>
using namespace std;
int getMaxSum( int mat[][4],int row, int col ){
	int maxSumRow= INT_MAX;
	for(int i=0; i<row; i++){
		int rowSum =0;
		for(int j=0; j<col; j++){
			rowSum+= mat [i][j];
			
		}
		maxSumRow=max(rowSum, maxSumRow);
	}
	return maxSumRow;
}
int main() {
	int row = 4;
	int col = 4;
	int mat={{1,2,3,4},
	        {5,6,7,8}
	     	{9,10,11,12}}
	cout<<maxSumRow(mat[i][j], row, col)<<endl;		
		return 0;
		
				}
	
	
	
	
	
	
	
	
	
	
	
