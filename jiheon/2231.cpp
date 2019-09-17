#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int num;

    cin>>num;
    
    int sum = 0;
    int arr[100000];
    int j = 0;
    
    memset(arr,0, sizeof(arr)/sizeof(int));

    for(int i=1; i<num;i++){
        sum = i;
        int temp = i;
        
        while(temp != 0){
            sum += temp % 10;
            temp /= 10;
        }
        if(sum == num){
            arr[j] = i;
            j++;
        }
    }

    int min = arr[0];

    for(int i = 1; i < j; i++){
        if(min > arr[i])
            min = arr[i];    
    }

    printf("%d", min);
    return 0;
}
