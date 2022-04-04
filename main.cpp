#include <iostream>
#include <windows.h>
using namespace std;

void function_macdonald_farm(){
    string text;
    cout<<"Please enter text RUN"<<endl;
    cin>>text;
    if(text == "RUN"){
        system("cls");
        int fence;
        cout<<"Please enter how much do you have meters of your fence (only integer numbers)"<<endl;
        cin>>fence;
        if(fence % 2 == 0){
            int a = fence/4;
            int b = fence/2;
            cout<<"Maximum square footage for macdonald farm: "<<a*b<<" m2"<<endl;
            cout<<"This is how much A: "<<a<<endl;
            cout<<"This is how much B: "<<b<<endl;
            cout<<"You must to use max "<<a*2+b<<endl;
        }
        else{
            int a = fence/4;
            cout<<a<<endl;
            int b = fence/2;
            int c = fence/3;
            if(c*c >= a*(b+1)){
                cout<<"Maximum square footage for macdonald farm: "<<c*c<<" m2"<<endl;
                cout<<"This is how much A: "<<c<<endl;
                cout<<"This is how much B: "<<c<<endl;
                cout<<"You must to use max "<<c*3<<" meters of fence"<<endl;
            }
            else{
                cout<<"Maximum square footage for macdonald farm: "<<a*(b+1)<<" m2"<<endl;
                cout<<"This is how much A: "<<a<<endl;
                cout<<"This is how much B: "<<b+1<<endl;
                cout<<"You must to use max "<<a*2+(b+1)<<" meters of fence"<<endl;
            }

            //
        }
    }
    else{
        system("cls");
        cout<<"Sorry but you enter a wrong text"<<endl;
        function_macdonald_farm();
    }

}


int main()
{
function_macdonald_farm();

return 0;
}
