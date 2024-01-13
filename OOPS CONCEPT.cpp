#include<bits/stdc++.h>
using namespace std;
class cars{
public: 
    string company_name;
    int engine_power;
    string features;
    string transmission;
};
int main(){
    cars alto800;
    alto800.company_name="Suzuki";
    alto800.engine_power=800;
    alto800.features="Mileage";
    alto800.transmission="Manual";
    cout<<alto800.company_name<<" "<<alto800.engine_power<<" "<<alto800.features<<" "<<alto800.transmission;
    cars *alto900=new cars();
    alto900->company_name="Suzuki";
    alto900->engine_power=1000;
    alto900->features="Hyper Mileage";
    alto900->transmission="Manual";
    cout<<alto900->company_name<<" "<<alto900->engine_power<<" "<<alto900->features<<" "<<alto900->transmission;
}