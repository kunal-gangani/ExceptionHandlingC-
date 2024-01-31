#include<iostream>
using namespace std;
int main(){
	int num1;
	int num2;
	cout<<"Enter Number 1 : ";
	cin>>num1;
	cout<<"Enter Number 2 : ";
	cin>>num2;
	int div;
	try{
		if(num2==0){
			throw 1;
		}else{
			div=num1/num2;
			cout<<" Division of "<<num1<<" & "<<num2<<" is : "<<div<<endl;
		}
	}
	catch(int x){
		cout<<"Num 1 can not be Divided By Zero ."<<endl;
	}
	return 0;
}
