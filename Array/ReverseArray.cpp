#include <bits/stdc++.h>

#include <iostream>
using namespace std;

void print(int arr[],int size){

  for (int i = 0; i < size; ++i)
  {
    cout<<arr[i]<<" ";
  }

  cout<<endl;
}
void solve()
{
  int size;
  cin>>size;

  int arr[size];

  for (int i = 0; i < size; ++i)
  {
    cin>>arr[i];
  }

  for (int i = 0; i < (size)/2; ++i)
  {
    int temp=arr[i];
    arr[i]=arr[size-i-1];
    arr[size-i-1]=temp;
  }

  print(arr,size);

}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;

  while (t--){
    solve();
  }
}
