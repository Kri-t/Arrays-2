#include <iostream>
using namespace std;

int main() {
    int a[] = {2,4,6,8,10};
    int max = a[0]; 
    int max1 = a[0];
    int max2 = a[0];

    for(int i=0; i<5; i++) {
        if(a[i] > max) {
            max2 = max1;
            max1= max;
            max =  a[i];
        }
        else if(a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2) {
            max2 = a[i];
        }
    }
    cout<<"The three largest elements are: "<<max<<" "<<max1<<" "<<max2<<endl;
}