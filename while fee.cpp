#include<iostream>
using namespace std;
int main() {
	string name;
	string fee;
    int hl;
	while(hl <10){
		cout<<"The name of the student is: "<<endl;
		getline(cin, name);
		cout<<"If the fee is paid click Y and If not click N. "<<endl;
		getline(cin, fee);
		if(fee== "Y" || fee=="y"){
			cout<<"***^^^You can enter in exam.^^^^****"<<endl;
			
		}
		else if(fee== "N" || fee== "n"){
			cout<<"^^^Please! Pay the fee to enter in exam.^^^"<<endl;
		}
else{
	cout<<"~~~~Please put the correct data.~~~~";
}
	  hl++;
	  
	}
	return 0;
}