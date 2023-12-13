def find_words_containing(words, x)
  arr = []
  words.each_with_index do |word, index|
    arr << index if word.include?(x)
  end
  arr
end
