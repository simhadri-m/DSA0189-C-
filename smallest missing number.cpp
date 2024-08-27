// Program to find the smallest missing number in an array using Linear search
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter array length: ";
  cin>>n;
  cout<<"\nEnter array elements:\n";
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"\nThe required smallest number is ";
  for(int i=0;i<n-1;i++)
  {
    if(arr[i+1]-arr[i]>1)
    {
      cout<<arr[i]+1<<"\n";
      break;
    }
  }
  return 0;
}