//اللَّهُ لَا إِلَٰهَ إِلَّا هُوَ ۚ وَعَلَى اللَّهِ فَلْيَتَوَكَّلِ الْمُؤْمِنُونَ
#include <bits/stdc++.h>
using namespace std;
void CountSort(int arr[],int b[],int k,int n)
{
    int count[k+1];
    memset(count,0,sizeof count);
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<=k;i++){
        count[i]+=count[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        b[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    //print the array
    for(int i=0;i<n;i++)cout<<b[i]<<" ";
    cout<<endl;
}
int main() {
    int arr[8]={2,5,3,0,2,3,0,3};
    int b[8];
    CountSort(arr,b,5,8);
    return 0;
}
