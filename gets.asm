;字符串输入  ;;;  支持 '20h~126h'
;push string  ;;;  string db 456h dup(?)  ;;;  字符串存储地址
;push 456h  ;;;  字符串存储空间string的长度
;push length  ;;;  length dw ?  ;;;  实际输入字符串长度将存入length中
;call gets

public gets
code segment
	assume cs:code
gets proc far
start:	push bp
	mov bp,sp
	push ax
	push bx
	push cx
	push dx
	push di
	pushf
	xor bx,bx
	mov cx,[bp+8]
	mov di,[bp+10]
cin:	mov ah,8
	int 21h
	cmp al,0dh
	jz _ret
	cmp al,8
	jz bs
	cmp al,20h
	jc cin
	cmp al,7fh
	jnc cin
	mov dl,al
	mov ah,2
	int 21h
	mov ds:[di],al
	inc di
	inc bx
	dec cx
	cmp cx,2
	jc _ret
	jmp cin
bs:	cmp bx,0
	jz cin
	mov dl,al
	mov ah,2
	int 21h
	mov dl,0
	int 21h
	mov dl,8
	mov ah,2
	int 21h
	dec di
	dec bx
	jmp cin
_ret:	mov byte ptr ds:[di],24h
	mov di,[bp+6]
	mov ds:[di],bx
	popf
	pop di
	pop dx
	pop cx
	pop bx
	pop ax
	pop bp
	ret 6
gets endp
code ends
	end start