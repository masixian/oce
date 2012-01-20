// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeSweptSurface_HeaderFile
#define _GeomToStep_MakeSweptSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StepGeom_SweptSurface_HeaderFile
#include <Handle_StepGeom_SweptSurface.hxx>
#endif
#ifndef _GeomToStep_Root_HeaderFile
#include <GeomToStep_Root.hxx>
#endif
#ifndef _Handle_Geom_SweptSurface_HeaderFile
#include <Handle_Geom_SweptSurface.hxx>
#endif
class StepGeom_SweptSurface;
class StdFail_NotDone;
class Geom_SweptSurface;


//! This class implements the mapping between classes <br>
//!          SweptSurface from Geom and the class SweptSurface from <br>
//!          StepGeom which describes a SweptSurface from prostep. <br>
//!          As SweptSurface is an abstract SweptSurface this class <br>
//!          is an access to the sub-class required. <br>
class GeomToStep_MakeSweptSurface  : public GeomToStep_Root {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   GeomToStep_MakeSweptSurface(const Handle(Geom_SweptSurface)& S);
  
  Standard_EXPORT    const Handle_StepGeom_SweptSurface& Value() const;





protected:





private:



Handle_StepGeom_SweptSurface theSweptSurface;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif