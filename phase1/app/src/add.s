	.file	"add.c"
	.text
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC0:
	.string	"Ajout par fonctions de librairie standard"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC1:
	.string	"a"
.LC2:
	.string	"Ouverture du fichier \302\253 %s \302\273"
.LC3:
	.string	"Erreur sur putc"
	.section	.rodata.str1.8
	.align 8
.LC4:
	.string	"Ajout de << %s >> dans le fichier << %s >>\n"
	.text
	.globl	append_to_file
	.type	append_to_file, @function
append_to_file: # debut de la fonction append_to_file
.LFB63:
	.cfi_startproc
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	subq	$104, %rsp
	.cfi_def_cfa_offset 160
	movq	%rsi, %r14
	movq	%rdx, %rbp
	movq	%fs:40, %rax
	movq	%rax, 88(%rsp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	leaq	.LC1(%rip), %rsi
	movq	%r14, %rdi
	call	fopen@PLT
	movq	%rax, %r12
	testq	%rax, %rax
	je	.L8
.L2:
	movl	$0, %ebx
	movq	$-1, %r13
	jmp	.L3
.L8:
	movq	%rsp, %rbx
	movq	%r14, %r8
	leaq	.LC2(%rip), %rcx
	movl	$80, %edx
	movl	$1, %esi
	movq	%rbx, %rdi
	movl	$0, %eax
	call	__sprintf_chk@PLT
	movq	%rbx, %rdi
	movl	$0, %eax
	call	exit_error@PLT
	jmp	.L2
.L4:
	addl	$1, %ebx
.L3:
	movslq	%ebx, %rdx
	movl	$0, %eax
	movq	%r13, %rcx
	movq	%rbp, %rdi
	repnz scasb
	movq	%rcx, %rax
	notq	%rax
	subq	$1, %rax
	cmpq	%rax, %rdx
	jnb	.L9
	leaq	0(%rbp,%rdx), %r15
	movsbl	(%r15), %edi
	movq	%r12, %rsi
	call	_IO_putc@PLT
	movsbl	(%r15), %edx
	cmpl	%edx, %eax
	je	.L4
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	exit_error@PLT
	jmp	.L4
.L9:
	movq	%r14, %rcx
	movq	%rbp, %rdx
	leaq	.LC4(%rip), %rsi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk@PLT
	movq	%r12, %rdi
	call	fclose@PLT
	movq	88(%rsp), %rax
	xorq	%fs:40, %rax
	jne	.L10
	addq	$104, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
.L10:
	.cfi_restore_state
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE63:
	.size	append_to_file, .-append_to_file
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
