#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int n;
    int m;
    int arr[100];

    memset(arr, 0, sizeof(arr)/sizeof(int));

    cin>>n>>m;
    
    for(int i=0;i<n;i++)
        cin>>arr[i];       

    int a = 0;
    int b = 0;
    int c = 0;
    int sum = 0;
    int max = 0;

    for(a;a<n-2;a++){
        b = a + 1;
        for(b;b<n-1;b++){
            c = b + 1;
            for(c;c<n;c++){
                sum =  arr[a] + arr[b] + arr[c];
                if(sum <= m && max < sum)
                    max = sum;
            }
        }
    }

    printf("%d\n", max);
    return 0;    
}
