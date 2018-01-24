#!/bin/bash

flex Scanner.l
yacc Parser.y
gcc y.tab.c lex.yy.c symtab.c node-type.c code_gen.c -ly -o My_Compiler
cp ./My_Compiler ../test_function
cd ../test_function
./My_Compiler test-function.p
java -jar jasmin.jar foo.j

