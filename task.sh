#!/bin/bash
#
#creating directories and copying files
#

run()
{
   notify-send 'Copying files!'
cd ..
d=$PWD

 for var in {a..z}
 do 

    if `cd $d/myfiles/$var`
    then
        echo ""
        echo "Directory $var already exists"
        echo ""
    else
        cd $d/myfiles
        echo "creating directory $var"
        echo ""
        mkdir $var
    fi

     echo "copying files to $var"

     find ~/Downloads/u-boot -type f -iname "$var*" -exec cp {} ~/Documents/myfiles/$var \;
 done


    ##echo "The empty directories are"
    echo ""

    find . -type d -empty -delete

}



#delete function

delete()
{
   cd $d/myfiles
   for var in {a..z}
   do
      echo "deleting directory $var"
      echo ""
      rm -r $var
      
   done
   notify-send 'Deleted Directories'
}

