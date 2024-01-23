# @param {Integer[]} nums
# @return {Integer}
def single_number(nums)
  nums.uniq.select { |n| nums.count(n) == 1 }.first
end
