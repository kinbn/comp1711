#!/bin/bash

echo "               %%%%%%%%%%%%%%%%%%%%%%%%% THE FILE CREATOR %%%%%%%%%%%%%%%%%%%%%%%%%%%%% "

echo " Here in filectr we provide services like creating and naming a file as well as help you write information in those files."

echo "Lets start!!"

echo "What would you like to name your first file? { include file extension with the name }"
read F1
echo "$F1 is created, you can start typing below. Once completed press ctrl+c to save the file."
cat >> $F1 
