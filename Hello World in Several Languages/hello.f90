PROGRAM HELLO
CHARACTER :: ARG*32

PRINT *, 'Hello Fortran!'
DO I = 1, IARGC()
CALL GETARG(I, ARG)
CALL GREET(ARG)
END DO
END

SUBROUTINE GREET(s)
CHARACTER :: S*32
PRINT *, 'Hello ' // s
END
