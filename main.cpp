#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
static int k;
int* fun(){
    int i,j;
    cout<<"fun"<<endl;
    return &i;
}
int main(int argc, char const *argv[])
{
    
    fun();
    vector<int> arr;
    arr.push_back(1);
    cout<<"hello"<<endl;
    
    return 0;
}
