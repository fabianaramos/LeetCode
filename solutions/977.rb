# @param {Integer[]} nums
# @return {Integer[]}
def sorted_squares(nums)
  nums.map do |num|
    num * num
  end.sort
end
