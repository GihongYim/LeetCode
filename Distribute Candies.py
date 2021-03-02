class Solution:
    def distributeCandies(self, candyType: List[int]) -> int:
        count = dict()
        for x in candyType:
            if x not in count.keys():
                count[x] = 0
            count[x] += 1
        
        if len(count) < len(candyType)/2:
            return len(count)
        else:
            return int(len(candyType)/2)
