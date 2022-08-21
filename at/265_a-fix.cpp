#include <iostream>
using namespace std;
int main () {
    int X, Y , N;
    cin>>X>>Y>>N;
    cout<<N%3*X+N/3*min(3*X,Y)<<endl;
}