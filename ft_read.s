global		_ft_read
section		.text
extern		___error

_ft_read:
				mov rax, 0x2000003
				syscall
				jc .goose
				ret
.goose:
				push rax
				call ___error
				pop r9
				mov [rax], r9
				mov rax, -1
				ret
