//Trying hard is the only way to have you My Thicc lil' Monster :""
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string HQ9plus = "HQ9+";
    string test;
    long long detector = 0;

    //Creating the joke programming language.
    cin>>test;
    for(int i=0 ; i <= test.length()-1 ; i++){
        if(int(test[i]) == 72 || int(test[i]) == 81 || int(test[i]) == 57){
            detector++;
        }
    }
    if(detector >= 1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

