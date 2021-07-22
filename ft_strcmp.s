global		_ft_strcmp
section		.text

_ft_strcmp:
				push r8
				push r9
				mov r8, 0
				mov r9, 0
.loop:
				mov r9b, byte [rsi]
				mov r8b, byte [rdi]
				cmp byte [rdi], 0
				jz .goose
				cmp byte [rsi], 0
				jz .goose
				cmp  r8b, r9b
				jnz .goose
				inc rdi
				inc rsi
				jmp .loop
.goose:
				sub r8, r9
				mov rax, r8
				pop r8
				pop r9
				ret
