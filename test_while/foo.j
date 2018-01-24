.class public foo
.super java/lang/Object

.field public static _sc Ljava/util/Scanner;
 .field public static a I

.method public static vinit()V
	.limit locals 100
	.limit stack 100
	ldc 0
	putstatic foo/a I
	return
.end method

.method public <init>()V
	aload_0
	invokenonvirtual java/lang/Object/<init>()V
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

	ldc 1
	putstatic foo/a I
Lbegin_0:
	getstatic foo/a I
	ldc 5
	isub
	iflt Ltrue_1
	iconst_0
	goto Lfalse_1
Ltrue_1:
	iconst_1
Lfalse_1:
	ifeq Lexit_0
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/a I
	invokestatic java/lang/String/valueOf(I)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	getstatic foo/a I
	ldc 1
	iadd
	putstatic foo/a I
	goto Lbegin_0
Lexit_0:
	return
.end method

