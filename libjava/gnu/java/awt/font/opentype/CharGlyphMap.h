
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_font_opentype_CharGlyphMap__
#define __gnu_java_awt_font_opentype_CharGlyphMap__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace font
        {
          namespace opentype
          {
              class CharGlyphMap;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace nio
    {
        class ByteBuffer;
    }
  }
}

class gnu::java::awt::font::opentype::CharGlyphMap : public ::java::lang::Object
{

public:
  CharGlyphMap();
  virtual jint getGlyph(jint) = 0;
  static ::gnu::java::awt::font::opentype::CharGlyphMap * forTable(::java::nio::ByteBuffer *);
private:
  static const jint PLATFORM_UNICODE = 0;
  static const jint PLATFORM_MACINTOSH = 1;
  static const jint PLATFORM_MICROSOFT = 3;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_font_opentype_CharGlyphMap__
