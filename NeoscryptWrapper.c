#include "NeoscryptWrapper.h"
#include "neoscrypt.h"
#include <stdint.h>


JNIEXPORT void JNICALL Java_NeoscryptWrapper_printText(JNIEnv *env, jobject obj)
{
   puts ("Hello World :) !!!!");
}

JNIEXPORT void JNICALL Java_NeoscryptWrapper_neoscrypt(JNIEnv *env, jobject obj, jbyteArray inputArray, jbyteArray outputArray)
{
  puts("Called Neoscrypt function .....");
  jbyte *input = (*env)->GetByteArrayElements(env,inputArray,NULL);
  jbyte *output = (*env)->GetByteArrayElements(env,outputArray,NULL);
  neoscrypt((const uint8_t*)input,(uint8_t*)output,0x80000620);
  return;
}

