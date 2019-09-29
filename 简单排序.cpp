#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin>>n;
    int* p=new int[n];
    for(int i=0;i<n;i++)
        cin>>p[i]; 
    int t=0;
    for(int i=1;i<n;i++)      //Ã°ÅÝÅÅÐò
        for(int j=0;j<i;j++){
            if(p[j]<p[j+1]){
               t=p[j];p[j]=p[j+1];p[j+1]=t;
               }
        }
        for(int i=0;i<n;i++)
        cout<<p[i]; 
    return 0;
}