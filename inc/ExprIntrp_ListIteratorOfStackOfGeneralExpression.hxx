// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ExprIntrp_ListIteratorOfStackOfGeneralExpression_HeaderFile
#define _ExprIntrp_ListIteratorOfStackOfGeneralExpression_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Address.hxx>
#include <Handle_Expr_GeneralExpression.hxx>
#include <Handle_ExprIntrp_ListNodeOfStackOfGeneralExpression.hxx>
#include <Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class ExprIntrp_StackOfGeneralExpression;
class Expr_GeneralExpression;
class ExprIntrp_ListNodeOfStackOfGeneralExpression;



class ExprIntrp_ListIteratorOfStackOfGeneralExpression 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT ExprIntrp_ListIteratorOfStackOfGeneralExpression();
  
  Standard_EXPORT ExprIntrp_ListIteratorOfStackOfGeneralExpression(const ExprIntrp_StackOfGeneralExpression& L);
  
  Standard_EXPORT   void Initialize (const ExprIntrp_StackOfGeneralExpression& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   Handle(Expr_GeneralExpression)& Value()  const;


friend class ExprIntrp_StackOfGeneralExpression;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item Handle(Expr_GeneralExpression)
#define Item_hxx <Expr_GeneralExpression.hxx>
#define TCollection_ListNode ExprIntrp_ListNodeOfStackOfGeneralExpression
#define TCollection_ListNode_hxx <ExprIntrp_ListNodeOfStackOfGeneralExpression.hxx>
#define TCollection_ListIterator ExprIntrp_ListIteratorOfStackOfGeneralExpression
#define TCollection_ListIterator_hxx <ExprIntrp_ListIteratorOfStackOfGeneralExpression.hxx>
#define Handle_TCollection_ListNode Handle_ExprIntrp_ListNodeOfStackOfGeneralExpression
#define TCollection_ListNode_Type_() ExprIntrp_ListNodeOfStackOfGeneralExpression_Type_()
#define TCollection_List ExprIntrp_StackOfGeneralExpression
#define TCollection_List_hxx <ExprIntrp_StackOfGeneralExpression.hxx>

#include <TCollection_ListIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _ExprIntrp_ListIteratorOfStackOfGeneralExpression_HeaderFile
