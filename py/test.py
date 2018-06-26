def zhihu(a):
	def wrapper():
		print('谢邀')
		a()
		print('以上')
	return wrapper

@zhihu
def answer1():
	print(222222222)

answer1()