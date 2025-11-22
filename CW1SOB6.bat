REM I Disabled command echo to keep the script output clean 

@echo off  

 

REM I Created "The_Bag" directory using make new directory  

mkdir The_Bag  

 

REM I Navigated into "The_Bag" directory  

cd The_Bag  

 

REM I Created 3 empty text files using nul 

type nul > file1.txt 

 type nul > file2.txt  

type nul > file3.txt 

 

REM I Created 3 folders using make new directory   

mkdir Folder1  

mkdir Folder2  

mkdir Folder3  

 

REM I moved each text file into a folder using move 

move file1.txt Folder1\  

move file2.txt Folder2\  

move file3.txt Folder3\ 

 
REM Here i displayed the message using echo  

echo The 6 items are in The Bag!  

 

REM Pause allows the user to see the output before the window closes 

 pause 