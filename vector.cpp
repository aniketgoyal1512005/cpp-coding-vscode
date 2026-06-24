#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int sum =1;
     int sqr = 1;
    vector<int> vec = {1,2,3,4,5};
    for(int i : vec){
     
      sum =sum*i;
      sqr = sum*sum;     
        cout<<sum<<","<<sqr<<endl;
    }
    return 0;
}