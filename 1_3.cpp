#include<iostream>
#include<string.h>
using namespace std;
int main() {
	int i;
    char str[50];
    cout<<"Enter String : ";
    cin>>str;
    int size = strlen(str);

    try{
        for(i=0;i<size;i++) {
            if(str[i]>='A' && str[i]<='Z'){
                cout<<"Password is Valid.."<<endl;
            }else{
                throw 1;
            }
        }
    }catch (int x){
        cout<<"Password is Invalid.."<<endl;
    }
	return 0;
}
