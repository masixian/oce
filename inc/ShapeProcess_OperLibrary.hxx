// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeProcess_OperLibrary_HeaderFile
#define _ShapeProcess_OperLibrary_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_ShapeProcess_ShapeContext_HeaderFile
#include <Handle_ShapeProcess_ShapeContext.hxx>
#endif
#ifndef _Handle_BRepTools_Modification_HeaderFile
#include <Handle_BRepTools_Modification.hxx>
#endif
class TopoDS_Shape;
class ShapeProcess_ShapeContext;
class BRepTools_Modification;
class TopTools_DataMapOfShapeShape;


//! Provides a set of following operators <br>
class ShapeProcess_OperLibrary  {
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

  //! Registers all the operators <br>
  Standard_EXPORT   static  void Init() ;
  //! Applies BRepTools_Modification to a shape, <br>
//!          taking into account sharing of components of compounds. <br>
  Standard_EXPORT   static  TopoDS_Shape ApplyModifier(const TopoDS_Shape& S,const Handle(ShapeProcess_ShapeContext)& context,const Handle(BRepTools_Modification)& M,TopTools_DataMapOfShapeShape& map) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif