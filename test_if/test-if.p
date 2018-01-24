PROGRAM aa(input, output, error); 
VAR a, b: INTEGER;
VAR c: REAL;
var d :  ARRAY[3..20] of ARRAY[10..25] of INTEGER;

FUNCTION fact(x:INTEGER) : INTEGER;
BEGIN
    if(x = 1) then
        fact := x
    else
        fact := x*fact(x-1)
END;

BEGIN
    a := fact(3);
    writeln(a)
END.
