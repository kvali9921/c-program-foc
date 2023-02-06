!/usr/bin/env bash
 FRUIT_NAME=Olive
 if [ "$FRUIT_NAME" = "Olive" ]; then
   echo "The fruit name is Olive"
 else
   echo "The fruit is not Olive"
 fi

 # Example with if elif else
 AGE=10
 if [ $AGE -lt 13 ]; then
   echo "You're a child"
 elif [ $AGE -ge 13 ] && [ $AGE -lt 19 ]; then
   echo "You're a teenager"
 else
   echo "You're a perfect fit!"
 fi
