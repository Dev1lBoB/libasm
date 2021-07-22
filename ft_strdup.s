global		_ft_strdup
section		.text
extern		_ft_strlen
extern		_ft_strcpy
extern		_malloc

_ft_strdup:
			mov rax, 0
			cmp rdi, 0
			jz .goose
			push rdi
			call _ft_strlen
			inc rax
			mov rdi, rax
			call _malloc
			cmp rax, 0
			jz .goose
			mov rdi, rax
			pop rsi
			call _ft_strcpy
			ret
.goose:
			ret
