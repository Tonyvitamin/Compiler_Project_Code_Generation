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

.method public static fact()V
	.limit locals 100
	.limit stack 100
	getstatic foo/_sc Ljava/util/Scanner;
	invokevirtual java/util/Scanner/nextInt()I
	putstatic foo/b I
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/b I
	invokestatic java/lang/String/valueOf(I)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
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

	getstatic foo/_sc Ljava/util/Scanner;
	invokevirtual java/util/Scanner/nextInt()I
	putstatic foo/a I
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/a I
	invokestatic java/lang/String/valueOf(I)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	getstatic java/lang/System/out Ljava/io/PrintStream;
	ldc 10
	invokestatic java/lang/String/valueOf(I)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	ldc 50.670000
	putstatic foo/c F
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/c F
	invokestatic java/lang/String/valueOf(F)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	getstatic foo/_sc Ljava/util/Scanner;
	invokevirtual java/util/Scanner/nextFloat()F
	putstatic foo/c F
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/c F
	invokestatic java/lang/String/valueOf(F)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	invokestatic foo/fact()V
	return
.end method

