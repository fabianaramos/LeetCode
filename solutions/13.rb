# @param {String} s
# @return {Integer}
def roman_to_int(s)
  hash = {
    'I': 1,
    'IV': 4,
    'V': 5,
    'IX': 9,
    'X': 10,
    'XL': 40,
    'L': 50,
    'XC': 90,
    'C': 100,
    'CD': 400,
    'D': 500,
    'CM': 900,
    'M': 1000
  }
  s = s.split('')
  a = 0
  s.each_with_index do |char, index|
    if a != 0 && hash[(s[index - 1].to_s + char).to_sym] != nil
      a -= hash[s[index - 1].to_sym]
      a += hash[(s[index - 1].to_s + char).to_sym]
    else
      a += hash[char.to_sym]
    end
  end
  a
end
