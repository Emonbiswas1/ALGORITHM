#include<bits/stdc++.h>
using namespace std;

void averageMarks(int *p, int n){
int sum =0;
 for( int i=0; i<n; i++) {
    sum+=p[i];
}
cout<< "The average is : "<< sum/40 <<endl;
}
int main() {

int n=40;
int *a=new int [ n];
ifstream fin ("40.txt");
for( int i=0; i<n; i++) {
    fin>> a[i];

}
for( int i=0; i<n; i++) {
    cout<<a[i]<< " "<<endl;
}


 averageMarks(a,n);

}
