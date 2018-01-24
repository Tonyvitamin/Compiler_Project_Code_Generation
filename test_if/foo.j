.class public foo
.super java/lang/Object

.field public static _sc Ljava/util/Scanner;
 .field public static a I
.field public static b I
.field public static c F
.field public static d [[I

.method public static vinit()V
	.limit locals 100
	.limit stack 100
	ldc 0
	putstatic foo/a I
	ldc 0
	putstatic foo/b I
	ldc 0.0
	putstatic foo/c F
	bipush 18
	bipush 16
	multianewarray [[I 2
	putstatic foo/d [[I
	return
.end method

.method public <init>()V
	aload_0
	invokenonvirtual java/lang/Object/<init>()V
	return
.end method

.method public static fact(I)I
	.limit locals 100
	.limit stack 100
	iload 0
	ldc 1
	isub
	ifeq Ltrue_0
	iconst_0
	goto Lfalse_0
Ltrue_0:
	iconst_1
Lfalse_0:
	ifeq Lfalse_1
	iload 0
	istore 1
	goto Lexit_1
Lfalse_1:
	iload 0
	iload 0
	ldc 1
	isub
	invokestatic foo/fact(I)I
	imul
	istore 1
Lexit_1:
	iload 1
	ireturn
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

	ldc 3
	invokestatic foo/fact(I)I
	putstatic foo/a I
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/a I
	invokestatic java/lang/String/valueOf(I)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	return
.end method

