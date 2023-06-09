var findMaxConsecutiveOnes = function (nums) {
  for (let i = 0; i < nums.length; i++) {
    max_sequence = 0
    count = 0

    if (nums[1] == 1) {
      count++
    }
    else {
      if (count > max_sequence) {
        max_sequence = count
        count = 0
      }
    }
  }
  return (max_sequence)
};
