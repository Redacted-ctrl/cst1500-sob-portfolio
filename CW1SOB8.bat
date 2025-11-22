@echo off  

REM I first navigated to the Desktop 

cd %userprofile%\Desktop 

 

REM I then created a folder called "myBatchScript"  

mkdir myBatchScript  

 
REM I then created a .txt file called "results.txt" and wrote the text in this case knock knock joke  

echo Knock, knock. > results.txt 

echo (Who's there?) >> results.txt 

echo Recursion. >> results.txt  

echo (Recursion who?) >> results.txt  

echo Knock Knock... >> results.txt  

 

REM I then copied "results.txt" to "myBatchScript" folder  

copy results.txt myBatchScript\  

 

REM I then delete the original "results.txt" file  

del results.txt  

 

REM Print the completion message 

 echo Task Complete!  

 

REM End the script 

 pause 