#include<iostream>
using namespace std;
int main(){
string s;
getline(cin,s);
int n=s.length();
for(int i=0;i<n-1;i++){
if(s[n-3]=='s' && s[n-2]=='a' && s[n-1]=='n'){
cout<<"yes";
break;
}
else{
    cout<<"no";
    break;
}
}


}