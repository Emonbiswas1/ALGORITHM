#include<bits/stdc++.h>
using namespace std;


int main() {

    srand (time(0));

    ofstream fout ( "BigShift.txt");
    for( int i=0; i<10000; i++) {
        int a;
        a= rand()%100;
        fout<<a<<endl;

    }

}
