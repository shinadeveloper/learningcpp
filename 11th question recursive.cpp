#include <iostream>
#include <vector>
using namespace std;

void getnumber(int array[], int idx, vector<int> numbers, int norequired) {
    if (idx == 6) 
    {
        return;
        }
    if (array[idx] == norequired) {
        numbers.push_back(idx);
    }
    getnumber(array, idx + 1, numbers, norequired);
}

int main(){
    int array[6]={1,2,9,2,2,9};
    
    vector<int> numbers;
    getnumber(array,0,numbers,2);
    for(int i=0;i<numbers.size();i++){
        cout<<numbers[i];
    }
    
}