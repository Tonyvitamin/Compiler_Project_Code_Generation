.class public foo
.super java/lang/Object

.field public static _sc Ljava/util/Scanner;
 .field public static a I
.field public static b I
.field public static c I
.field public static u I
.field public static d [I
.field public static e [F
.field public static g F
.field public static h F
.field public static x F
.field public static k [[F
.field public static l [[I

.method public static vinit()V
	.limit locals 100
	.limit stack 100
	ldc 0
	putstatic foo/a I
	ldc 0
	putstatic foo/b I
	ldc 0
	putstatic foo/c I
	ldc 0
	putstatic foo/u I
	bipush 10
	multianewarray [I 1
	putstatic foo/d [I
	bipush 10
	multianewarray [F 1
	putstatic foo/e [F
	ldc 0.0
	putstatic foo/g F
	ldc 0.0
	putstatic foo/h F
	ldc 0.0
	putstatic foo/x F
	bipush 35
	bipush 35
	multianewarray [[F 2
	putstatic foo/k [[F
	bipush 35
	bipush 35
	multianewarray [[I 2
	putstatic foo/l [[I
	return
.end method

.method public <init>()V
	aload_0
	invokenonvirtual java/lang/Object/<init>()V
	return
.end method

.method public static sort([I)V
	.limit locals 100
	.limit stack 100
	ldc 0
	istore 1
	iload 1
	putstatic foo/c I
	return
.end method

.method public static addition(II)I
	.limit locals 100
	.limit stack 100
	iload 0
	iload 1
	iadd
	istore 2
	iload 2
	ireturn
.end method

.method public static ggyy(FF)F
	.limit locals 100
	.limit stack 100
	fload 0
	fload 1
	fadd
	fstore 2
	fload 2
	freturn
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

	ldc 8
	ldc 8
	invokestatic foo/addition(II)I
	putstatic foo/c I
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/c I
	invokestatic java/lang/String/valueOf(I)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	ldc -8
	ldc -8
	invokestatic foo/addition(II)I
	putstatic foo/c I
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/c I
	invokestatic java/lang/String/valueOf(I)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	ldc 3.300000
	ldc 5.500000
	invokestatic foo/ggyy(FF)F
	putstatic foo/x F
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/x F
	invokestatic java/lang/String/valueOf(F)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	ldc 0
	putstatic foo/b I
	getstatic foo/b I
	getstatic foo/a I
	isub
	ifgt Ltrue_0
	iconst_0
	goto Lfalse_0
Ltrue_0:
	iconst_1
Lfalse_0:
	ifeq Lfalse_1
	ldc 111
	putstatic foo/a I
	goto Lexit_1
Lfalse_1:
	ldc 222
	putstatic foo/a I
Lexit_1:
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/a I
	invokestatic java/lang/String/valueOf(I)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	getstatic foo/b I
	getstatic foo/a I
	isub
	iflt Ltrue_2
	iconst_0
	goto Lfalse_2
Ltrue_2:
	iconst_1
Lfalse_2:
	ifeq Lfalse_3
	ldc 111
	putstatic foo/a I
	goto Lexit_3
Lfalse_3:
	ldc 222
	putstatic foo/a I
Lexit_3:
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/a I
	invokestatic java/lang/String/valueOf(I)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	getstatic foo/b I
	getstatic foo/a I
	isub
	ifeq Ltrue_4
	iconst_0
	goto Lfalse_4
Ltrue_4:
	iconst_1
Lfalse_4:
	ifeq Lfalse_5
	ldc 111
	putstatic foo/a I
	goto Lexit_5
Lfalse_5:
	ldc 222
	putstatic foo/a I
Lexit_5:
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/a I
	invokestatic java/lang/String/valueOf(I)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	getstatic foo/b I
	getstatic foo/a I
	isub
	ifge Ltrue_6
	iconst_0
	goto Lfalse_6
Ltrue_6:
	iconst_1
Lfalse_6:
	ifeq Lfalse_7
	ldc 111
	putstatic foo/a I
	goto Lexit_7
Lfalse_7:
	ldc 222
	putstatic foo/a I
Lexit_7:
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/a I
	invokestatic java/lang/String/valueOf(I)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	getstatic foo/b I
	getstatic foo/a I
	isub
	ifle Ltrue_8
	iconst_0
	goto Lfalse_8
Ltrue_8:
	iconst_1
Lfalse_8:
	ifeq Lfalse_9
	ldc 111
	putstatic foo/a I
	goto Lexit_9
Lfalse_9:
	ldc 222
	putstatic foo/a I
Lexit_9:
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/a I
	invokestatic java/lang/String/valueOf(I)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	getstatic foo/b I
	ldc 0
	isub
	ifne Ltrue_10
	iconst_0
	goto Lfalse_10
Ltrue_10:
	iconst_1
Lfalse_10:
	ifeq Lfalse_11
	ldc 111
	putstatic foo/a I
	goto Lexit_11
Lfalse_11:
	ldc 222
	putstatic foo/a I
Lexit_11:
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/a I
	invokestatic java/lang/String/valueOf(I)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	ldc 1
	putstatic foo/a I
Lbegin_12:
	getstatic foo/a I
	ldc 5
	isub
	iflt Ltrue_13
	iconst_0
	goto Lfalse_13
Ltrue_13:
	iconst_1
Lfalse_13:
	ifeq Lexit_12
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/a I
	invokestatic java/lang/String/valueOf(I)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	getstatic foo/a I
	ldc 1
	iadd
	putstatic foo/a I
	goto Lbegin_12
Lexit_12:
	ldc 1
	putstatic foo/b I
Lbegin_14:
	getstatic foo/b I
	ldc 11
	isub
	iflt Ltrue_15
	iconst_0
	goto Lfalse_15
Ltrue_15:
	iconst_1
Lfalse_15:
	ifeq Lexit_14
	getstatic foo/d [I
	ldc 3
	ldc 1
	isub
	getstatic foo/b I
	getstatic foo/b I
	getstatic foo/b I
	ldc 3
	iadd
	imul
	iadd
	iastore
	getstatic foo/b I
	ldc 1
	iadd
	putstatic foo/b I
	goto Lbegin_14
Lexit_14:
	getstatic foo/e [F
	ldc 3
	ldc 1
	isub
	ldc 9.990000
	fastore
	getstatic foo/k [[F
	ldc 25
	ldc 23
	isub
	aaload
	ldc 26
	ldc 23
	isub
	ldc 3.140000
	fastore
	getstatic foo/l [[I
	ldc 28
	ldc 23
	isub
	aaload
	ldc 26
	ldc 23
	isub
	ldc 88
	iastore
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/a I
	invokestatic java/lang/String/valueOf(I)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	getstatic foo/d [I
	ldc 5
	ldc 1
	isub
	iaload
	putstatic foo/u I
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/u I
	invokestatic java/lang/String/valueOf(I)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	getstatic foo/e [F
	ldc 3
	ldc 1
	isub
	faload
	putstatic foo/g F
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/g F
	invokestatic java/lang/String/valueOf(F)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	getstatic foo/k [[F
	ldc 25
	ldc 23
	isub
	aaload
	ldc 26
	ldc 23
	isub
	faload
	putstatic foo/g F
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/g F
	invokestatic java/lang/String/valueOf(F)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	getstatic foo/l [[I
	ldc 28
	ldc 23
	isub
	aaload
	ldc 26
	ldc 23
	isub
	iaload
	putstatic foo/u I
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/u I
	invokestatic java/lang/String/valueOf(I)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	ldc 9
	ldc 9
	iadd
	ldc 10
	isub
	putstatic foo/u I
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/u I
	invokestatic java/lang/String/valueOf(I)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	ldc 9
	ldc 9
	iadd
	ldc 3
	idiv
	ldc 5
	ldc 2
	imul
	iadd
	ldc 1
	isub
	getstatic foo/u I
	iadd
	putstatic foo/u I
	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic foo/u I
	invokestatic java/lang/String/valueOf(I)Ljava/lang/String;
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	return
.end method

