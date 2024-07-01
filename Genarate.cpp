#include<bits/stdc++.h>
using namespace std;


int main() {

    srand (time(0));
    int a;
    ofstream fout ( "100.txt");
    for( int i=0; i<10000; i++) {
        a= rand()%1000+1;
        fout<<a<<endl;

    }

}
