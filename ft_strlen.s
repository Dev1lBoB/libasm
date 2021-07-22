global			_ft_strlen
section			.text

_ft_strlen:
						mov rax, 0
						push rdi
.loop:
						cmp byte [rdi + rax], 0
						jz .goose
						inc rax
						jmp .loop
.goose:
						pop rdi
						ret
