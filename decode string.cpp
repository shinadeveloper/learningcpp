#include<bits/stdc++.h>
using namespace std;
 
string decodedString(string s) {
    string result = "";
    for(int i=0;i<s.size();i++){
        if(s[i]==']'){
            string str = "";
 
            while(!result.empty() and result.back() != '['){    //extracting the string that needs to be repeated
                str += result.back();
                result.pop_back();
            }
            result.pop_back();  //removing the '[' bracket
 
            string integer = "";
 
            while(!result.empty() and (result.back() >= '0' and result.back() <= '9')){     //extracting the number denoting the number of times the string 'result' will be repeated.
                integer += result.back();
                result.pop_back();
            }
 
            reverse(integer.begin() , integer.end()); //reversing because we are currently moving in the opposite fashion 
            int number = stoi(integer);    //converting string to integer using the stoi() method
 
            while(number--){
                for(int j=str.size()-1;j>=0;j--){
                    result.push_back(str[j]);       //repeatedly filling the string till 'number' times
                }
            }
        }
        else result.push_back(s[i]); 
    }
 
    return result;
}
 
int main()
{
	string str;
    cout<<"Enter the string : ";
    cin>>str;
 
    cout<<"Desired output is: ";
	cout<<decodedString(str);
	return 0;
}