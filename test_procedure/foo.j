.class public foo
.super java/lang/Object

.field public static _sc Ljava/util/Scanner;
 .field public static a I
.field public static b I
.field public static c F

.method public static vinit()V
	.limit locals 100
	.limit stack 100
	ldc 0
	putstatic foo/a I
	ldc 0
	putstatic foo/b I
	ldc 0.0
	putstatic foo/c F
	return
.end method

.method public <init>()V
	aload_0
	invokenonvirtual java/lang/Object/<init>()V
	return
.end method

.method public static ss()I
	.limit locals 100
	.limit stack 100
	ldc 3
	ldc 4
	ldc 5
	imul
	iadd
	istore 0
	iload 0
	ireturn
.end method

.method public static tt()V
	.limit locals 100
	.limit stack 100
	invokestatic foo/ss()I
	ldc 33
	invokestatic foo/ss()I
	imul
	iadd
	putstatic foo/a I
	ldc 0.500000
	putstatic foo/c F
	return
.end method

.method public static main([Ljava/lang/String;)V
	.limit locals 100
	.limit stack 100
	invokestatic foo/vinit()V
	new java/util/Scanner
	dup
	getstatic java/lang/System/in Ljava/io/InputStream;
	invokespecial java/util/Scanner/<init>(Ljava/io/InputStream;)V
	putstatic foo/_sc Ljava/util/Scanner;

	invokestatic foo/ss()I
	invokestatic foo/ss()I
	imul
	invokestatic foo/ss()I
	iadd
	putstatic foo/a I
	invokestatic foo/tt()V
	invokestatic foo/tt()V
	invokestatic foo/tt()V
	return
.end method

