#!/bin/bash

#mkdir -p .test
#cd .test

echo "****************************"
echo "start testing Python Binding"
echo "****************************"

export PYTHONPATH=`pwd`/build
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:`pwd`/build

python testBindingPython.py

echo "**************************"
echo "start testing Java Binding"
echo "**************************"

#cp ../testBindingJava.java .
#cp ../build/srcCpp/helloBinding*.java .
#cp ../build/srcCpp/HelloWorld.java .
#cp ../build/helloBindingJava.so libhelloBindingJava.so

cd build

cp ../testBindingJava.java .
javac testBindingJava.java
java testBindingJava

cd ..
