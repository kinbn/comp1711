#!/bin/bash
 echo "                                                                           # # # # # #  # #### #  # #### #  "
 echo "                                                                          #          #     ##        ##     "
 echo "                                                                          #                ##        ##     "
 echo "                                                                          #                ##        ##     "
 echo "                                                                          #      # # #     ##        ##     "
 echo "                                                                          #          #     ##        ##     "
 echo "                                                                          #          #     ##        ##     "
 echo "                                                                          # # # # # #   # #### #     ##     "




git status

echo ""
echo ""
echo ""

 echo " Name of the file(s): "
 read  gitadd

git add $gitadd


echo ""
echo ""
echo ""

 echo "Enter a message: "

read gitcommit

echo ""
echo ""

git commit -m "$gitcommit" 

echo ""
echo ""
echo ""

 echo " Shall I push? [y/n] "

read pushquery


if [[ "$pushquery" = "y" ]]; 
then

    git push

else  

    echo " bruh "

fi