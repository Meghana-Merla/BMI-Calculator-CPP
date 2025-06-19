#include<bits/stdc++.h>
#include<iomanip>
#include <iostream>
using namespace std;

void run_bmi(void){
        while(1){
                float h,w;
                cout<<"Enter Weight in Kilograms:";
                cin>>w;
                cout<<"Enter Height in Meters:";
                cin>>h;
                float ans=w/(h*h);
                cout<<"Your Body Mass Index is "<<fixed<<setprecision(2)<<ans<<endl;
                if(ans<18.5){
                        cout<<"You are Underweight.."<<endl;
                }else if(ans<25){
                        cout<<"You are Normal Weight.."<<endl;
                }else if(ans<30){
                        cout<<"You are Overweight.."<<endl;
                }else{
                        cout<<"You are Obese.."<<endl;
                }
                char ch;
                cout<<"Do you want to continue..?? (Y or N):";
                cin>>ch;
                if(ch=='N'||ch=='n')   break;
        }
}

int main(){
        run_bmi();
        return 0;
}
