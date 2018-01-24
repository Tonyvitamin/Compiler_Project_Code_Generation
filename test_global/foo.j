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
	putstatic foo/a I
	ldc 4
	putstatic foo/b I
	ldc 27.890000
	putstatic foo/c F
	return
.end method

