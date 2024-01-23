# @param {Integer[]} nums
# @return {Integer}
def sum_of_unique(nums)
  hash = Hash.new(0)
  nums.each { |v| hash[v] += 1 }
  hash.select { |_v, num| num == 1 }.keys.each.reduce(:+).to_i
end
