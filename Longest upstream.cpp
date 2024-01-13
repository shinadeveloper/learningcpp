#include<bits/stdc++.h>
using namespace std;

int longest(string string,int flipped){
    int pt1,pt2;
    pt1=0;
    pt2=0;
    int n=string.length();
    int zeros=0;
    int maxlen=0;
    for(pt2;pt2<n;pt2++){
        if (string[pt2]=='0'){
                zeros++;
            }
        
        while(zeros>flipped){
            
            if (string[pt1]=='0'){
                 zeros--;
                
            }
            pt1++;
            
         }
        maxlen=max(maxlen,pt2-pt1+1);
    }
    return maxlen;
}
//00101001

int main(){
    string n;
    cin>>n;
    cout<<longest(n,2);
}