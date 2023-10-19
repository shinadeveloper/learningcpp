#include <bits/stdc++.h>

using namespace std;

void uppertriangle(vector<vector<int>>&matrix,int n){
for (int i=0;i<n;i++){
    
    for(int x=0;x<i;x++){
        cout<<" ";
    }
    
    for(int j=i;j<n;j++){
        cout<<matrix[i][j]<<" ";
    }
    
    cout<<endl;
}
}

int main()
{
int n;cin>>n;
cout<<"enter only square matrix otherwise the output may differ"<<endl;
vector<vector<int>> matrix(n,vector<int>(n));
for(int rows=0;rows<n;rows++){
        for(int cols=0;cols<n;cols++){
            cin>>matrix[rows][cols];
        }
}

uppertriangle(matrix,n);
}
