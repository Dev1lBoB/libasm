global			_ft_list_size
section			.text

_ft_list_size:
				xor	rax, rax

.loop:
				cmp rdi, 0
				jz .goose
				mov rdi, [rdi+8]
				inc	rax
				jmp .loop
.goose:
				ret
