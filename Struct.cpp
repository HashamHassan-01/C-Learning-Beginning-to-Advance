#include<iostream>
using namespace std;
struct r {
	int srNo;
	string name;
	float marks;
	float total;
	} ;
	

int main() {
	r Hasham[10];
	
	for(int i=0; i<11; i++){
	
 

	cout<<"Enter the Sr.No of the student: "<<endl;
		cin>>Hasham[i].srNo;
			cin.ignore();
		cout<<"Enter the name of the student: "<<endl;
	
			getline(cin,Hasham[i].name);
			cout<<"Enter the marks of the student: "<<endl;
				cin>>Hasham[i].marks;
				cout<<"Enter the total marks of the student: "<<endl;
					cin>>Hasham[i].total;

	

cout<<"The Sr. No of the student is: "<<Hasham[i].srNo<<endl;

	cout<<"The Name of the student is: "<<Hasham[i].name<<endl;

	cout<<"The marks of the student is: "<<Hasham[i].marks<<endl;

	cout<<"The total marks of the student is: "<<Hasham[i].total<<endl;

}
	
	
	return 0;
	
}