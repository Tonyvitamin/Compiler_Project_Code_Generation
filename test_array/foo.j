.class public foo
.super java/lang/Object

.field public static _sc Ljava/util/Scanner;
 .field public static a [I
.field public static b I
.field public static c [[I

.method public static vinit()V
	.limit locals 100
	.limit stack 100
	bipush 2
	multianewarray [I 1
	putstatic foo/a [I
	ldc 0
	putstatic foo/b I
	bipush 2
	bipush 2
	multianewarray [[I 2
	putstatic foo/c [[I
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

	getstatic foo/a [I
	ldc 1
	ldc 1
	isub
	ldc 1
	iastore
	getstatic foo/a [I
	ldc 2
	ldc 1
	isub
	ldc 1
	iastore
	getstatic foo/c [[I
	ldc 1
	ldc 1
	isub
	aaload
	ldc 1
	ldc 1
	isub
	ldc 1
	iastore
	getstatic foo/c [[I
	ldc 1
	ldc 1
	isub
	aaload
	ldc 2
	ldc 1
	isub
	ldc 1
	iastore
	getstatic foo/c [[I
	ldc 2
	ldc 1
	isub
	aaload
	ldc 1
	ldc 1
	isub
	ldc 1
	iastore
	getstatic foo/c [[I
	ldc 2
	ldc 1
	isub
	aaload
	ldc 2
	ldc 1
	isub
	ldc 1
	iastore
	return
.end method

