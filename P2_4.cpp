#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> vtr;
    

    for(int i=1; i<=30 ; i++){

        vtr.push_back(i);
    }

    vtr.push_back(5);
    reverse(vtr.begin(),vtr.end());

    for(auto  it=vtr.begin(); it != vtr.end();it++){

        cout<< *it <<" ";
    }
    cout<< endl;

    replace(vtr.begin(),vtr.end(),5,129);

    for(auto  it=vtr.begin(); it != vtr.end();it++){

        cout<< *it <<" ";
    }

    return 0;
}