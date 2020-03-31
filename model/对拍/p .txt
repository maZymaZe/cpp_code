@echo off
:loop
r.exe
s.exe
bs.exe
fc bs.out s.out
if not errorlevel 1 goto loop
pause
:end