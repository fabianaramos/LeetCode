def dest_city(paths)
  path_hash = paths.to_h
  (path_hash.values - path_hash.keys)[0]
end