# Sample makefile  
# This works only if started with the VS native Tool Command Prompt.
# Therefor the VS IDE has to be started from that Command Prompt.

all: main.exe
    
.cpp.obj:
    cl $(cppdebug) $(cppflags) $(cvars) $<  

main.exe: main.obj
    link $(ldebug) $(conflags) /out:main.exe main.obj 
