#include<iostream>
using namespace std;
int main(){
    int a[]={1,3,5,7,9,15,19};
    int l=0,r=6,m,flag=0;
    int iteam=5;

    while(l<=r){
         m=(l+r)/2;
         if(a[m]==iteam){
        cout<<"item is found in the index number: "<<m<<endl;
        flag++;
        return 0;
     }else if(a[m]>iteam){
          r=m-1;
     }else{ l=m+1;}
    }
    if(flag==0){
        cout<<" the item is not fount on the array";
    }







return 0;

}

