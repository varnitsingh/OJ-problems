# https://leetcode.com/problems/combination-sum/
# leetcode
class Solution(object):
    
    def combinationSum(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        def BackTr(target, curr_sol, k):  
            if target == 0:
                distinct_candidates.append(curr_sol)

            if target < 0 or k >= len(candidates):
                return

            for i in range(k, len(candidates)):
                BackTr(target - candidates[i], curr_sol + [candidates[i]], i)
        
        distinct_candidates = []
        BackTr(target, [], 0)   
        return distinct_candidates