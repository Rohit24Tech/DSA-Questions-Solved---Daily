1431. Kids With the Greatest Number of Candies (LeetCode)

There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

Note that multiple kids can have the greatest number of candies.

 

Example 1:

Input: candies = [2,3,5,1,3], extraCandies = 3
Output: [true,true,true,false,true] 
Explanation: If you give all extraCandies to:
- Kid 1, they will have 2 + 3 = 5 candies, which is the greatest among the kids.
- Kid 2, they will have 3 + 3 = 6 candies, which is the greatest among the kids.
- Kid 3, they will have 5 + 3 = 8 candies, which is the greatest among the kids.
- Kid 4, they will have 1 + 3 = 4 candies, which is not the greatest among the kids.
- Kid 5, they will have 3 + 3 = 6 candies, which is the greatest among the kids.
Example 2:

Input: candies = [4,2,1,1,2], extraCandies = 1
Output: [true,false,false,false,false] 
Explanation: There is only 1 extra candy.
Kid 1 will always have the greatest number of candies, even if a different kid is given the extra candy.
Example 3:

Input: candies = [12,1,12], extraCandies = 10
Output: [true,false,true]
 

Constraints:

n == candies.length
2 <= n <= 100
1 <= candies[i] <= 100
1 <= extraCandies <= 50

Solutions:

##Mine

public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=0, n = candies.size();
        for(int i=0; i<n; i++){
            if(candies[i]>=max)
            max=candies[i];
        }
        vector<bool> result;
        for(int i=0; i<n; i++){
            if((candies[i] + extraCandies)>=max)
            result.push_back(true);
            else{result.push_back(false);}
        }
        return result;
    }

##Better

public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=*max_element(candies.begin(),candies.end());
        vector<bool>v;
        for(auto val:candies)
        {
            if(val+extraCandies>=maxi)
            {
                v.push_back(true);
            }
            else
            {
                v.push_back(false);
            }
        }
        return v;
    }


Given an integer array and another integer element. The task is to find if the given element is present in array or not.(GFG)

Example 1:

Input:
n = 4
arr[] = {1,2,3,4}
x = 3
Output: 2
Explanation: There is one test case 
with array as {1, 2, 3 4} and element 
to be searched as 3.  Since 3 is 
present at index 2, output is 2.
Example 2:

Input:
n = 5
arr[] = {1,2,3,4,5}
x = 5
Output: 4
Explanation: For array elements 
{1,2,3,4,5} element to be searched 
is 5 and it is at index 4. So, the 
output is 4.
Your Task:
The task is to complete the function search() which takes the array arr[], its size N and the element X as inputs and returns the index of first occurrence of X in the given array. If the element X does not exist in the array, the function should return -1.

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1). 

Constraints:
1 <= n <= 106
0 <= arr[i] <= 106
0 <= x <= 105

Solution:

#Me

    int search(int arr[], int N, int X)
    {
        
        // Your code here
        for (int i=0; i<N; i++)
        {
        if(arr[i]==X){return i;}
    }
    return -1;
        
    }


Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.(GFG)

Example 1:

Input:
N = 5
A[] = {1,2,3,5}
Output: 4
Example 2:

Input:
N = 10
A[] = {6,1,2,8,3,4,7,10,5}
Output: 9

Your Task :
You don't need to read input or print anything. Complete the function MissingNumber() that takes array and N as input  parameters and returns the value of the missing number.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 106
1 ≤ A[i] ≤ 106

Solution:

    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        long long int ans = n*(n+1)/2;
        long long int sum = accumulate(array.begin(),array.end(),0);
        return ans-sum;
    }

