#include <iostream>
using namespace std;

int ClimbS(int n){
    if (n == 1){
        return 1;
    }
    if (n == 2){
        return 2;
    }
    int first = 1;
    int second = 2;
    int res = 0;

    for(int i = 2; i < n; i++){
        res = first + second;
        first = second;
        second = res;
    }
    return res;
}

int main(){
    cout<<ClimbS(5);
}