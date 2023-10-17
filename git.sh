#!/bin/bash
 echo "                                                                           # # # # # #  # #### #  # #### #  "
 echo "                                                                          #          #     ##        ##     "
 echo "                                                                          #                ##        ##     "
 echo "                                                                          #                ##        ##     "
 echo "                                                                          #      # # #     ##        ##     "
 echo "                                                                          #          #     ##        ##     "
 echo "                                                                          #          #     ##        ##     "
 echo "                                                                          # # # # # #   # #### #     ##     "



 echo " Name of the file(s): "
 read  gitadd

git add $gitadd

git status


echo "Enter a message: "

read gitcommit

git commit -m "$gitcommit" 


echo " Shall I push? [y/n] "

read pushquery

if [ $(pushquery) = 'y']; then
    git push

fi

if [ $(pushquery) = 'n']; then 
    echo " bruh "

fi