@echo off

for %%I in (.) do set out=%%~nxI

echo.
echo.   Automated makefile (with nxlink) by Waifro
echo.
make
echo.
echo.   Prompting to send nro to NetLoader
echo.
C://users/catnick/Desktop/nXDownload/nxlink.exe -a 10.0.0.187 %out%.nro
echo.
echo.           ### ATTENTION ###
echo.      unused files will be deleted
echo.

rmdir build /s