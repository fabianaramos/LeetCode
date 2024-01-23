# @param {Integer[]} digits
# @return {Integer[]}
def plus_one(digits)
  ans = digits.join.to_i + 1
  ans.to_s.split('').map(&:to_i)
end
