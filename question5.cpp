#include <iostream>
using namespace std;

int main() {
    int a[] = {2,1,3,4,5};
    for(int i=0; i<5; i++) {
        if(i%2 == 0) {
            a[i] += 10;
        }
        else {
            a[i] *= 2;
        }
        cout<<a[i]<<endl;
    }


}