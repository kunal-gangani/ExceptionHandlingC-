#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<" Enter Age : ";
	cin>>age;
	try{
		if(age<18){
			throw 1;
		}else{
			cout<<" You Can Vote in Elections "<<endl;
		}
	}
	catch(int x){
		cout<<" You are below 18 So You can't Vote .."<<endl;
	}
	return 0;
}
