#include<iostream>
using namespace std;
void  storeAnimeData () {
	string anime_Name[100];
	int ep;
	int total;
	string type;
	
	for(int i=10 ; i<total ; i++){
	
	cout<<"THE NAME OF ANIME IS: "<<endl;
	getline(cin, anime_Name[i]);

    cout<<"Total Numbers of Episodes are: "<<endl;
	cin>>ep;
	cin.ignore();
	cout<<"The type of Anime is: "<<endl;
	getline(cin, type);
}
	//Data
	cout<<"\n\n\n*******^^^^^^********(The Most Famous Anime is)*********^^^^^^*******\n"<<anime_Name<<endl;
	cout<<"Episodes= "<<ep<<endl;
	cout<<"Type: "<<type;
	cout<<endl;
}
int main(){
	storeAnimeData ();

	return 0;
}