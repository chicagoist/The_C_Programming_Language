#The C Programming Language.

#ANSI C

:~$gcc -ansi ansi.c

:~$ls

:~$a.out

:~$ ./a.out

Hello, world!

:~$


////////////////////////////////////////////////////////////////////////////


:~$ gcc ansi.c

ansi.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]

 main ()
 
 ^~~~


:~$ gcc -std=c99 ansi.c

ansi.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]

 main ()
 
 ^~~~


:~$ gcc -std=c11 ansi.c

ansi.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]

 main ()
 
 ^~~~


:~$ gcc -std=gnu99 ansi.c

ansi.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]

 main ()
 
 ^~~~
