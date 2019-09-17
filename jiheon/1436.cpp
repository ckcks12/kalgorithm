#include <iostream>
#include <string>

using namespace std;

int main(){
    string N;

    cin>>N;

    int arr[1000000];
    int count = 0;

    for(int i=666;i<3000000;i++){
        string tmp = to_string(i);
        if(tmp.find("666")<1000000){
            arr[count] = i;
            count++;
        }

    }
    int result = atoi(N.c_str());
    cout<<arr[result-1]<<endl;    
}
