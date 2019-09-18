#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

int N=0,M=0;
    cin>>N>>M;

vector<int> v;
vector<int>::iterator iter=v.begin();

int temp=0;
int sumtemp=0;
int best=0;
if (M<6){
    return 0;
}
for(int i=0;i<N;i++){
    
    cin>>temp;
    v.push_back(temp);
    //cout<<v[i]<<endl;
}

for(int i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
        for(int k=j+1;k<N;k++){
            sumtemp=v[i]+v[j]+v[k];
            if(sumtemp>M)
                continue;
            
            if((M-best)>(M-sumtemp)){
                best=sumtemp;
            }
        }
    }
}

cout<<best<<endl;

    //iter를 통해서 다 돈다음 일일이 더한것들중 M에 가까운것을 뽑아내면됨
    //

}
