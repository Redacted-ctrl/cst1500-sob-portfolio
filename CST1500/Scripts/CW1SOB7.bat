@echo off 

:: Turned echo off 

  

echo The following are C programs: 

for /r C:\Users\MD1571\Desktop\CST1500 %%f in (*.c) do echo %%f 

:: i then used a for loop to go through all the files 

  

pause 