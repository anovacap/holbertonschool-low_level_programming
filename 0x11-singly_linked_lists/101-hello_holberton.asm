	extern 	printf
	
	section	.text
	global  main
	
main:
	push 	rbp
	mov	rbp, rsp
	
	mov 	rdi, msg
	call 	printf
	
	leave
	ret
msg:
	db 	"Hello, Holberton", 14, 10
