
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicSplitPaneUI$BasicHorizontalLayoutManager__
#define __javax_swing_plaf_basic_BasicSplitPaneUI$BasicHorizontalLayoutManager__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
        class Container;
        class Dimension;
        class Insets;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace basic
        {
            class BasicSplitPaneUI;
            class BasicSplitPaneUI$BasicHorizontalLayoutManager;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicSplitPaneUI$BasicHorizontalLayoutManager : public ::java::lang::Object
{

public: // actually package-private
  BasicSplitPaneUI$BasicHorizontalLayoutManager(::javax::swing::plaf::basic::BasicSplitPaneUI *);
  BasicSplitPaneUI$BasicHorizontalLayoutManager(::javax::swing::plaf::basic::BasicSplitPaneUI *, jint);
public:
  virtual void addLayoutComponent(::java::awt::Component *, ::java::lang::Object *);
  virtual void addLayoutComponent(::java::lang::String *, ::java::awt::Component *);
public: // actually protected
  virtual jint getAvailableSize(::java::awt::Dimension *, ::java::awt::Insets *);
  virtual jint getInitialLocation(::java::awt::Insets *);
public:
  virtual jfloat getLayoutAlignmentX(::java::awt::Container *);
  virtual jfloat getLayoutAlignmentY(::java::awt::Container *);
public: // actually protected
  virtual jint getPreferredSizeOfComponent(::java::awt::Component *);
  virtual jint getSizeOfComponent(::java::awt::Component *);
  virtual JArray< jint > * getSizes();
public:
  virtual void invalidateLayout(::java::awt::Container *);
  virtual void layoutContainer(::java::awt::Container *);
  virtual ::java::awt::Dimension * maximumLayoutSize(::java::awt::Container *);
  virtual ::java::awt::Dimension * minimumLayoutSize(::java::awt::Container *);
  virtual ::java::awt::Dimension * preferredLayoutSize(::java::awt::Container *);
  virtual void removeLayoutComponent(::java::awt::Component *);
public: // actually protected
  virtual void resetSizeAt(jint);
public:
  virtual void resetToPreferredSizes();
public: // actually protected
  virtual void setComponentToSize(::java::awt::Component *, jint, jint, ::java::awt::Insets *, ::java::awt::Dimension *);
  virtual void setSizes(JArray< jint > *);
  virtual void updateComponents();
public: // actually package-private
  virtual void distributeExtraSpace();
  virtual jint minimumSizeOfComponent(jint);
public: // actually protected
  JArray< ::java::awt::Component * > * __attribute__((aligned(__alignof__( ::java::lang::Object)))) components;
  JArray< jint > * sizes;
private:
  jint axis;
public: // actually package-private
  ::javax::swing::plaf::basic::BasicSplitPaneUI * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicSplitPaneUI$BasicHorizontalLayoutManager__