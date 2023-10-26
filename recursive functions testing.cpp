#include <iostream>
using namespace std;
 
bool checkUtil(int num, int* temp)
{
 
	// Base case (needed for recursion
	// termination): This
	// statement mainly compares the
	// first digit with the
	// last digit
	if ((num >= 0 && num <=9 )){
	    int lastDigitOfTemp=(*temp)%10;
	    (*temp)/=10;
	    return (num==lastDigitOfTemp);
	}
 
   bool result = ((checkUtil(num/10,temp)) and ((num%10)==(*temp)%10));
   (*temp)/=10;
   return result;
}
 
 
 
int main()
{    
     int num ;
     cout<<"Enter number"<<endl;
     cin>>num;
     int* temp = new int(num);
	 checkUtil(num,temp) ? cout <<"Yes\n": cout <<"No" << endl;
 
}