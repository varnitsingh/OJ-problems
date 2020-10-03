# https://leetcode.com/problems/number-of-recent-calls/
# leetcode
class RecentCounter(object):

    def __init__(self):
        self.counter = []

    def ping(self, t):
        """
        :type t: int
        :rtype: int
        """
        self.counter.append(t)
        count = 0
        length = len(self.counter)-1
        while length > -1:
            if t - self.counter[length] <= 3000:
                count += 1
            else:
                break
            length -= 1
        if count != 0:
            return count


# Your RecentCounter object will be instantiated and called as such:
# obj = RecentCounter()
# param_1 = obj.ping(t)