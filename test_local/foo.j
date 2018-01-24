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

.method public static tt()I
	.limit locals 100
	.limit stack 100
	ldc 0
	istore 0
	ldc 0
	istore 1
	ldc 3
	istore 0
	iload 0
	ldc 4
	iadd
	istore 1
	iload 1
	istore 2
	iload 2
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

	ldc 5
	putstatic foo/a I
	ldc 4
	putstatic foo/b I
	invokestatic foo/tt()I
	putstatic foo/b I
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/b I
	invokestatic java/lang/String/valueOf(I)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	return
.end method

