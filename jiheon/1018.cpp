#include <iostream>
#include <string>

using namespace std;

int main(){
    char black[9] = "BWBWBWBW";
    char arr[51][51] = {0};

    int N;
    int M;
    int num = 8;

    cin>>N>>M;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>arr[i][j];
        }
    }
    
    int ncount = N-num+1;
    int mcount = M-num+1;
    int sum=0;
    int min=1000;
    int a=0;

    for(int j=0;j<mcount;j++){
        for(int i=0;i<ncount;i++){
            //arr[j]~arr[j+num]
            int bsum=0;
            int wsum=0;
            int count=0;

            for(int a=i;a<num+i;a++){
                int tmp = 0;
                for(int b=j;b<num+j;b++){
                    if(arr[a][b]!=black[tmp]){//다르면
                        if(count%2==0){
                            bsum++;
                        }else{
                            wsum++;
                        }
                    }else{//같으면
                        if(count%2==0){
                            wsum++;
                        }else{
                            bsum++;
                        }
                    }
                    tmp++;
                }
                count++;
            }

            if(bsum<wsum)
                sum=bsum;
            else
                sum=wsum;

            if(sum<min)
                min = sum;
        }
    }

    cout<<min<<endl;
}
