#include <iostream>
using namespace std;

int main() {
    bool flag = true;
    int a[] = {2,1,3,4,5};
    for(int i=0; i<5; i++) {
        for(int j=i+1; j<5; j++)
        if(a[i] > a[j]) {
            flag = false;
        }
    }

    if(flag) {
    cout<<"Sorted"<<endl;
    }
    else {
    cout<<"Not sorted"<<endl;
    }
    return 0;
}