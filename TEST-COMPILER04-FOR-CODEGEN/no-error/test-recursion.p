PROGRAM aa(input, output, error); 
VAR a, b: INTEGER;
VAR c: REAL;
var d :  ARRAY[3..20] of ARRAY[10..25] of INTEGER;

FUNCTION fact(x:INTEGER) : INTEGER;
BEGIN
    a := d[5][15] ;
    d[8][18] := a;
    if(x = 1) then
        fact := x
    else
        fact := x*fact(x-1)
END;

BEGIN
    c := 50.67;
    read(a);
    writeln(a);
    writeln(10);
    writeln(c);
    a := fact(3)
END.
