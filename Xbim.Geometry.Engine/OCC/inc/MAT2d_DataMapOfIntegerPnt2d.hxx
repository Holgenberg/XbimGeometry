// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_DataMapOfIntegerPnt2d_HeaderFile
#define _MAT2d_DataMapOfIntegerPnt2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_MAT2d_DataMapNodeOfDataMapOfIntegerPnt2d_HeaderFile
#include <Handle_MAT2d_DataMapNodeOfDataMapOfIntegerPnt2d.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class gp_Pnt2d;
class TColStd_MapIntegerHasher;
class MAT2d_DataMapNodeOfDataMapOfIntegerPnt2d;
class MAT2d_DataMapIteratorOfDataMapOfIntegerPnt2d;



class MAT2d_DataMapOfIntegerPnt2d  : public TCollection_BasicMap {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   MAT2d_DataMapOfIntegerPnt2d(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     MAT2d_DataMapOfIntegerPnt2d& Assign(const MAT2d_DataMapOfIntegerPnt2d& Other) ;
    MAT2d_DataMapOfIntegerPnt2d& operator =(const MAT2d_DataMapOfIntegerPnt2d& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~MAT2d_DataMapOfIntegerPnt2d()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Standard_Integer& K,const gp_Pnt2d& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Standard_Integer& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Standard_Integer& K) ;
  
  Standard_EXPORT    const gp_Pnt2d& Find(const Standard_Integer& K) const;
   const gp_Pnt2d& operator()(const Standard_Integer& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     gp_Pnt2d& ChangeFind(const Standard_Integer& K) ;
    gp_Pnt2d& operator()(const Standard_Integer& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT     Standard_Address Find1(const Standard_Integer& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFind1(const Standard_Integer& K) ;





protected:





private:

  
  Standard_EXPORT   MAT2d_DataMapOfIntegerPnt2d(const MAT2d_DataMapOfIntegerPnt2d& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif