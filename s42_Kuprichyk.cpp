#include <iostream>
using namespace std;

int sort(int massive[]){
    for (int i=0;i<10;i++){
        for (int j=0;j<10-1-i;j++){
            if(massive[j]< massive[j+1]){
            swap(massive[j],massive[j+1]);
            }
        }
    }
    for (int i=0;i<10;i++){
        cout<<massive[i]<<" ";
    }
return 0;}
int main(){
    int massive[10]={1, 8, 3, 6, 5, 4, 9, 2, 8, 12};
    sort(massive);
    return 0;
}
