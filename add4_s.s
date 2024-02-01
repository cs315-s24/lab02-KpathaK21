.global add4_s


add4_s:
	add a0, a0, a1  # a0 = a + b
	add a0, a0, a2  # a0 = (a + b) + c
	add a0, a0, a3  # a0 = ((a + b) + c) + d
	ret
