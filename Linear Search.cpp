#include<iostream>
using namespace std;
int main(){
    int a[]={1,3,5,7,9,15,19};
    int i,flag=0,iteam=19;
    for(i=0;i <(sizeof(a)/sizeof(int));i++){

     if(a[i]==iteam){
        cout<<"index number of : "<<i;
        flag++;
     }



    }
    if(flag==0){
        cout<<"Not finding the number";
    }










return 0;

}

