// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int t;
// cin>>t;
// while(t--){
//     int n;
//     cin>>n;
//     vector<int>A(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin>>A[i];
//     }
//     for (int i = 0; i < n-1; i++)
//     {
//         if (A[i]>A[i+1])
//         {
//             swap(A[i],A[i+1]);
//             break;
//         }

//     }
//     if (is_sorted(A.begin(),A.end()))
//     {
//         cout<<"YES"<<endl;
//     }
//     else {
//         cout<<"NO"<<endl;
//     }

// }
// return 0;
// }
#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
       int n;
       cin>>n;
       int arr[n];
       for (int i = 0; i < n; i++)
       {
           cin>>arr[i];
       }
       for (int i = 0; i < n-1; i++)
       {
           if (arr[i]>arr[i+1])
           {
               swap(arr[i],arr[i+1]);
               break;
           }
           
       }
       if (is_sorted(arr,arr+n))
       {
           cout<<"Yes"<<endl;
       }
       else{
           cout<<"No"<<endl;
       }
       
   }
   

    return 0;
}