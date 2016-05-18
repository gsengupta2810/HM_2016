file(REMOVE_RECURSE
  "graph_separation.pdb"
  "graph_separation"
)

# Per-language clean rules from dependency scanning.
foreach(lang)
  include(CMakeFiles/graph_separation.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
