// beats 32.2%
// error faced - i was not using the sum variable data type as double. Instead I was using int. thus it was giving me all zeros after decimal places.

// Time complexity: O( Nlog(N)) - because I have used the STL sort function, otherwise the time complexity of the remaining part of the code is O(N)

class Solution {
public:
    double average(vector<int>& salary) {
       sort(salary.begin(), salary.end());
       double sum=0;
       for(int i=1; i<salary.size()-1; i++)
       {
           sum+=salary[i];
       } 
       int size=salary.size();
       double avg =sum/(size-2);
       return avg;
    }
};


// beats 100% of solutions

// Time complexity - O(N)

// learning: don't use the sort function always

class Solution {
public:
    double average(vector<int>& salary) {
       double ans;
       int n=salary.size();
       int maxi=salary[0];
       int mini=salary[0];
       for(int i=0; i<n; i++)
       {
           maxi=max(maxi,salary[i]);
           mini=min(mini,salary[i]);
           ans+=salary[i];
       } 
       ans-=maxi;
       ans-=mini;
       ans/=n-2;
       return ans;
    }
};
