#include <iostream>
using namespace std;

int main() {
    int a[] = {2,1,3,4,5}, sum =0, sum1=0;
    for(int i=0; i<5; i++) {
        if(i%2 == 0) {
            sum = sum + a[i];
        }
        else {
            sum1 = sum1 + a[i];
        }
    }

    cout<<sum-sum1<<endl;
}