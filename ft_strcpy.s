global			_ft_strcpy
section			.text

_ft_strcpy:
					mov rax, rdi
.loop:
					mov r9b, byte [rsi]
					mov byte [rdi], r9b
					inc rdi
					inc rsi
					cmp byte [rsi], 0
					jz .goose
					jmp .loop
.goose:
					mov byte[rdi], 0
					ret
