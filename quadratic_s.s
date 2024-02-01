.global quadratic_s

quadratic_s:
	mul t0, a0, a0   # t0 = x * x
	    mul t1, a1, t0   # t1 = a * (x * x)
	    mul t2, a2, a0   # t2 = b * x
	    add t2, t2, a3   # t2 = (b * x) + c
	    add a0, t1, t2   # a0 = (a * (x * x)) + ((b * x) + c)
	    ret
