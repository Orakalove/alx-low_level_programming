SECTION .data
hello	db "Hello, Holberton", 0
format	db "%s", 0
newline	db 10, 0

	SECTION .text
	extern printf
	global main
main:
	; call printf with the hello string
	mov esi, hello
	mov edi, format
	mov eax, 0
	call printf

	; Call printf with the newline string
	mov edi, format
	mov esi, newline
	xor eax, eax
	call printf
	
	mov eax, 0
	ret
