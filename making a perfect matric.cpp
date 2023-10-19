#include <iostream>
#include <math.h>
#include <vector>
#include <bits.h>
using namespace std;

// bool perfectmatrixformula(vector<vector<int>>){
//      int m,n;
//      vector<vector<int>> a[m][n];
//      int checker=a[0][0];
//     int misbig=0;int nisbig=0;int same=0;
//      for(int rows=0;rows<m;rows++){
//         for(int cols=0;cols<n;cols++){
//             if(m>n){
//             if (a[rows][cols]==checker){
//                 misbig++;
//             }
//             }
//             else if(n>m){
//                 if (a[rows][cols]==checker){
//                 nisbig++;}
//             }
//             else if(m==n){
//                 if (a[rows][cols]==checker){
//                 same++;}
//             }

//      }}
//     if(m>n &&m==misbig){cout<< true;}
//     else if(m<n && n==nisbig){cout<< true;}
//     else if(m==n && same == m ){cout<< true;}
//     else {
//         cout<< false;
//     }
// }

int main()
{

    
int m,n;
cin>>m>>n;
vector<vector<int>> a[m][n];
 for(int rows=0;rows<m;rows++){
        for(int cols=0;cols<n;cols++){
            cin>>a[rows][cols];
        }
        }
 int checker=a[0][0];
    int misbig=0;int nisbig=0;int same=0;
     for(int rows=0;rows<m;rows++){
        for(int cols=0;cols<n;cols++){
            if(m>n){
            if (a[rows][cols]==checker){
                misbig++;
            }
            }
            else if(n>m){
                if (a[rows][cols]==checker){
                nisbig++;}
            }
            else if(m==n){
                if (a[rows][cols]==checker){
                same++;}
            }

     }}
    if(m>n &&m==misbig){cout<< true;}
    else if(m<n && n==nisbig){cout<< true;}
    else if(m==n && same == m ){cout<< true;}
    else {
        cout<< false;
 //this code is totally wrong but logic is ok       

}
}