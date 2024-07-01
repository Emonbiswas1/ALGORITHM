#include<bits/stdc++.h>
using namespace std;


int main() {

 srand (time(0));
 int a;

    ofstream fout ( "40.txt");
     for( int i=0; i<40; i++) {
        a= rand()%100+1;
        fout<<a<<endl;
     }
}
