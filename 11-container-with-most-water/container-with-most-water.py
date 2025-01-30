class Solution:
    def maxArea(self, height: List[int]) -> int:
        left, right = 0, len(height) - 1
        max_water = 0
        while left < right:
            area = min(height[left], height[right]) * (right - left)
            max_water = max(max_water, area)
            if height[left] < height[right]:
                left += 1
            else:
                right -= 1

        return max_water
height = [1,8,6,2,5,4,8,3,7]
solution = Solution()
print(solution.maxArea(height))