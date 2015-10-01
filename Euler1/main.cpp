/* 
 * File:   main.cpp
 * Author: RG026732
 *
 * Created on 01 October 2015, 15:33
 * Project Euler #1
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    long ans=0;
    for(int x=0;x<1000;x++){
        if((x%3)==0 || (x%5)==0){
            ans+=x;
        }
    }
    cout<<"Answer is:"<<ans<<endl;
    return 0;
}

