#https://leetcode.com/problems/remove-covered-intervals/
#leetcode
class Solution(object):
    def removeCoveredIntervals(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: int
        """
        count = 0
        for i in range(len(intervals)):
            for j in range(len(intervals)):
                if i == j:
                    continue
                if intervals[i][0] >= intervals[j][0] and intervals[i][1] <= intervals[j][1]:
                    count += 1
                    break
        
        return len(intervals) - count