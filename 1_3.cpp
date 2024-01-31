#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int i;
	char str[50];
	cout<<"Enter String : ";
	cin>>str;
	int size = strlen(str);
	for(i=1;i<size;i++){
		try{
			if(str[i]>65 && str[i]<92){
				cout<<" Password is Valid.."<<endl;
			}else{
				throw 1;
			}
		}
		catch(int x){
			cout<<"Password is Invalid..";
		}
	}
	return 0;
}
