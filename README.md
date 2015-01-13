### Standalone JNI Implementation of a Java Wrapper over ghostlanders Neoscrypt Algorythm ###
##### Author:Kris Davison #####
##### Date:13/01/2015 #####

Assumptions
----------- 

1). Java JDK is installed ( tested with java 8 but 6+ should be fine)
2). $JAVA_HOME environment variable is setup (my ubuntu install was set to /usr/lib/jvm/java-8-oracle/)

How to run
----------

Type the following into a linux terminal when inside the folder containing all of the files in this git repo

	./build.sh

It will compile the NeoscryptWrapper.java file then create the NeoscryptWrapper.h header 
file from the method signiture in the NeoscryptWrapper.java class.

Then it will compile the NeoscryptWrapper.c file and create a shared object ibrary than can be used by java jni to run the neoscrypt code.

if you want to re-run the java application after it is build type the following into the linux terminal

	java NeoscryptWrapper

the output should be as follows (which shows that the output has been mondified by the C neoscrypt function)

	Hello World :) !!!!
	input-[B@15db9742
	Called Neoscrypt function .....
	input-[B@15db9742
	output-[B@6d06d69c



