#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int findtimedifference(vector<string>& timepoints){
    vector<int> minutes;
     // convert time string into minutes integer values 
    for(int i=0;i<timepoints.size();i++){    // running through the timepoints array first to convert the given string i to an integer
        string curr = timepoints[i];  // now lets assume the place we are stading as current position

        int hours=stoi(curr.substr(0,2));   // lets convert hours string into int hour  
        int min =stoi(curr.substr(3,2));    // same for minutes
        int totalminutes = hours*60+min;   // now as we want to know the differnce in minutes we will convert everything into minutes
        minutes.push_back(totalminutes);   // and push it into minutes

    }
    // step-2-sort the array for decreasing the time complexty as after sorting the number of comparissions will be less as we will be able to find the lowest differnce 
    sort(minutes.begin(),minutes.end());


    //step-3 find the minutes differnce 
 int mini = INT_MAX;
 int n = minutes.size();

 for(int i=0;i<n-1;i++){
    int diff = minutes[i+1]-minutes[i];
    mini=min(mini,diff);
    int lastdiff = (minutes[0]+1440) - minutes[n-1];  // this is the important condition for which you will not be able to clear the test cases that is the one when time is exactly 11:59
    mini=min(mini,diff);   // then again compre for minimum time differnce 


    return mini;    // and then finally return the minimum time differnce 
 }
}
// int main(){

// } 