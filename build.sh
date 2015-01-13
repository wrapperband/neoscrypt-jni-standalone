javac NeoscryptWrapper.java
javah NeoscryptWrapper
gcc -I/usr/lib/jvm/java-8-oracle/include -I/usr/lib/jvm/java-8-oracle/include/linux -fPIC -c NeoscryptWrapper.c neoscrypt.c
gcc -shared -Wl,-soname,libneoscryptwrapper.so.1 -o libneoscryptwrapper.so.1.0 NeoscryptWrapper.o neoscrypt.o
cp libneoscryptwrapper.so.1.0 libneoscryptwrapper.so
export LD_LIBRARY_PATH=`pwd`:$LD_LIBRARY_PATH
java NeoscryptWrapper

