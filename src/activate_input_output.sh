#!/bin/bash

flex Scanner.l
yacc Parser.y
gcc y.tab.c lex.yy.c symtab.c node-type.c code_gen.c -ly -o My_Compiler
cp ./My_Compiler ../test_input_output
cd ../test_input_output
./My_Compiler test-input-output.p
java -jar jasmin.jar foo.j

