global			_ft_list_push_front
section			.text

extern			_malloc

_ft_list_push_front:
						push r10
						push rdi
						push rsi
						;xor rax, rax
						mov rdi, 16
						call _malloc
						pop rsi
						pop rdi
						cmp rax, 0
						jz .goose
						mov [rax], rsi
						mov r9, [rdi]
						mov [rax+8], r9
						mov [rdi], rax
.goose:
						pop r10
						ret
