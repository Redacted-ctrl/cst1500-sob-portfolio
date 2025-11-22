REM i Turned echo off as i only want the ouput to be displayed
@echo off 

REM i then used a for loop to go through all the files 
echo The following are C programs: 

for /r C:\Users\MD1571\Desktop\CST1500 %%f in (*.c) do echo %%f 

pause 