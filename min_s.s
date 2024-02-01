.global min_s

min_s:
    bge a0, a1, else_branch  # Branch if a0 >= a1
    ret                      # If a0 < a1, return a0

else_branch:
    mv a0, a1               # If a0 >= a1, set a0 = a1
    ret
