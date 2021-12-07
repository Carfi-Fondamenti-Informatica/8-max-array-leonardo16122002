#include <stdio.h>
#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int a;
    float j;

    cin>>a;
    float n[a];
    for(int i=0;i<a;i++){
        cin>>j;
        //j=rand();
        n[i]=j;
        //cout<<n[i]<<endl;
    }
    cout<<max(n,a);
    return 0;
}
