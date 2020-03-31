@echo off
:loop
r.exe
a.exe
b.exe
fc a.out b.out
if not errorlevel 1 goto loop
pause
:end