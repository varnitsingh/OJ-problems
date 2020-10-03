# https://leetcode.com/problems/k-diff-pairs-in-an-array/
# leetcode
class Solution(object):
    def findPairs(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        def binarySearch(arr, l, r, x):
            while l <= r: 
                mid = l + (r - l) // 2; 

                # Check if x is present at mid 
                if arr[mid] == x: 
                    return mid 
                # If x is greater, ignore left half 
                elif arr[mid] < x: 
                    l = mid + 1
                # If x is smaller, ignore right half 
                else: 
                    r = mid - 1
            # If we reach here, then the element 
            # was not present 
            return -1
        
        
        #[0,1,2,2,3,3,3,4,4,9]
        nums.sort()
        data = []
        for i in range(len(nums)-1):
            find = binarySearch(nums,i+1,len(nums)-1,k + nums[i])
            if find != -1:
                t = (nums[i],nums[find])
                data.append(t)
            find = binarySearch(nums,i+1,len(nums)-1,nums[i] - k)
            if find != -1:
                t = (nums[find],nums[i])
                data.append(t)
            
        return len(list(set(data)))