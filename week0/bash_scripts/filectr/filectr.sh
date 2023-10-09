#!/bin/bash

echo "               %%%%%%%%%%%%%%%%%%%%%%%%% THE FILE CREATOR %%%%%%%%%%%%%%%%%%%%%%%%%%%%% "

echo " Here in filectr we provide services like creating and naming a file as well as help you write information in those files."

echo "Lets start!!"

echo "What would you like to name your first file? { include file extension with the name }"
read F1
echo "$F1 is created, you can start typing below. Once completed press ctrl+d to save the file."
cat >> $F1 
echo "The file is saved."

echo "Moving on the next file, what would you like to call your second file as?"
read F2
echo "Start writing below"
cat >> $F2
echo "we have created $F2 for you."

echo "For your third file, what name do you have in mind?"
read F3
echo "Please enter your information:"
cat >> $F3
echo "File $F3 is created"

echo "To create more file, checkout our premium services by clicking **here** "
echo " Also tryout our Password generating and Directory creator services" 