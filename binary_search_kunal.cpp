#include<bits/stdc++.h>
using namespace std;
int bineary_search(int arr[],int n,int target){
       int low=0;
       int high=n-1;
      while(low<=high){
       int mid=(low+high)/2;
       if(target<arr[mid]){
          high=mid-1;
       }
       else if(target > arr[mid]){
              low=mid+1;
       }
       else
       return mid;
      }
return -1;

}

int main(){
      int arr[100],n,i,target;
      cin>>n;
      for(i=0;i<n;i++){
          cin>>arr[i];
      }
      cin>>target;
 cout<<"searched element is in : "<<bineary_search(arr, n,target)<<" "<<"index position "<<endl;

return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int search(int arr[],int n,int t){
//        int l=0;
//        int h=n-1;
//         // int m=(l+h)/2;         when we use this then output is wrong ???? NO reason
//        while(l<=h){
//               int m=(l+h)/2;
//               if(arr[m]<t){
//                      l=m+1;
//               }
//               else if(arr[m]>t){
//                      h=m-1;
//               }
//               else{
//                      return m;
//               }
//        }
//        return -1;
// }


// int main(){
//        int t,i,n=10,arr[]={2,3,5,6,7,8,9,12,15,19};
//        cin>>t;
//        cout<<search(arr,n,t);



// return 0;
// }

