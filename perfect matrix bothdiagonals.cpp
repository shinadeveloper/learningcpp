#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

bool isperfect(vector<vector<int>>& matrix,int n){
int count=0;
for(int rows=0;rows<n;rows++){
        for(int cols=0;cols<n;cols++){
            if(rows+cols==(n-1) && matrix[rows][cols]!=0){
                   count++ ;
            }
            else if(rows==cols && matrix[rows][cols]!=0){
                count++;
            }
            else if(rows+cols!=(n-1) && rows!=cols && matrix[rows][cols]==0){
                    count++;
            }
}}
if(count==(n*n)){
    return true;
}
else{
    return false;
}

}

int main()
{
int n;cin>>n;
vector<vector<int>> matrix(n,vector<int>(n));
for(int rows=0;rows<n;rows++){
        for(int cols=0;cols<n;cols++){
            cin>>matrix[rows][cols];
        }
}
int x=isperfect(matrix,n);
if (x==1){
    cout<<"true";
}
if (x==0){
    cout<<"false";
}
}
//code is complete :)
