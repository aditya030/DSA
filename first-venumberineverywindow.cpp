#include<iostream>
#include<deque>
using namespace std;

void adityasolve(int arr[],int n, int k){
     deque<int> q;


     // process first of window size k
     for(int i =0;i<k;i++){
     if(arr[i]<0){
         q.push_back(i);
       }
     }

     // remaining window processing
     for(int i =k;i<n;i++){
         //purani window ka answer dedo

         if(q.empty()){
             cout<< 0<<" ";
         }else{
             cout<< arr[q.front()]<<" ";
         }

         //out of window element ko remove krduo
          while (!q.empty() && (i - q.front() >= k)) {
            q.pop_front();
        }

         // check current element for insertion

         if(arr[i]<0){
             q.push_back(i);

         }

         // answer print
          if(q.empty()){
             cout<< 0<<" ";
         }else{
             cout<< arr[q.front()]<<" ";
         }
     }
}

int main(){
    int arr[]={12,-1,-7,8,-15,30,16,28};
    int size = 8;
    int k =3;
 adityasolve(arr,size,k);
}