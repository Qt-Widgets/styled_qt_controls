@echo off
setlocal
if "%IBJOM_NUMBEROFJOBS%" == "" set IBJOM_NUMBEROFJOBS=20
BuildConsole /command="jom -j%IBJOM_NUMBEROFJOBS% %*"
endlocal
