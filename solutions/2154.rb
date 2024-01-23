# @param {Integer[]} nums
# @param {Integer} original
# @return {Integer}
def find_final_value(nums, original)
  if nums.include?(original)
    find_final_value(nums, original *= 2)
  else
    original
  end
end
