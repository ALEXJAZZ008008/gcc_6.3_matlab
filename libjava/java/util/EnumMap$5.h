
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_EnumMap$5__
#define __java_util_EnumMap$5__

#pragma interface

#include <java/util/AbstractSet.h>

class java::util::EnumMap$5 : public ::java::util::AbstractSet
{

public: // actually package-private
  EnumMap$5(::java::util::EnumMap *);
public:
  virtual jint size();
  virtual ::java::util::Iterator * iterator();
  virtual void clear();
  virtual jboolean contains(::java::lang::Object *);
  virtual jboolean remove(::java::lang::Object *);
public: // actually package-private
  static ::java::util::EnumMap * access$0(::java::util::EnumMap$5 *);
  ::java::util::EnumMap * __attribute__((aligned(__alignof__( ::java::util::AbstractSet)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_EnumMap$5__
