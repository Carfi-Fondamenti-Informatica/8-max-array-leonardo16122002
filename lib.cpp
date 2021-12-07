//
// Created by leona on 07/12/2021.
//

#include "lib.h"

float max(float n[],int d){
    float m=n[0];
    int i;

    for(i=1;i<d;i++){
        if(n[i]>m){
            m=n[i];
        }
    }
    return m;
}
