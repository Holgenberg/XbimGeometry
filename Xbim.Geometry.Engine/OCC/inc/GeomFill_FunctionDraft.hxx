// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_FunctionDraft_HeaderFile
#define _GeomFill_FunctionDraft_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
#ifndef _math_FunctionSetWithDerivatives_HeaderFile
#include <math_FunctionSetWithDerivatives.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Adaptor3d_HCurve;
class Adaptor3d_HSurface;
class math_Vector;
class math_Matrix;
class gp_Vec;
class GeomFill_Tensor;



class GeomFill_FunctionDraft  : public math_FunctionSetWithDerivatives {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   GeomFill_FunctionDraft(const Handle(Adaptor3d_HSurface)& S,const Handle(Adaptor3d_HCurve)& C);
  //! returns the number of variables of the function. <br>
  Standard_EXPORT   virtual  Standard_Integer NbVariables() const;
  //! returns the number of equations of the function. <br>
  Standard_EXPORT   virtual  Standard_Integer NbEquations() const;
  //! computes the values <F> of the Functions for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Value(const math_Vector& X,math_Vector& F) ;
  //! returns the values <D> of the derivatives for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Derivatives(const math_Vector& X,math_Matrix& D) ;
  //! returns the values <F> of the functions and the derivatives <br>
//!          <D> for the variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Values(const math_Vector& X,math_Vector& F,math_Matrix& D) ;
  //! returns the values <F> of the T derivatives for <br>
//!          the parameter Param . <br>
  Standard_EXPORT     Standard_Boolean DerivT(const Handle(Adaptor3d_HCurve)& C,const Standard_Real Param,const Standard_Real W,const gp_Vec& dN,const Standard_Real teta,math_Vector& F) ;
  //! returns the values <F> of the T2 derivatives for <br>
//!          the parameter Param . <br>
  Standard_EXPORT     Standard_Boolean Deriv2T(const Handle(Adaptor3d_HCurve)& C,const Standard_Real Param,const Standard_Real W,const gp_Vec& d2N,const Standard_Real teta,math_Vector& F) ;
  //! returns the values <D> of  the TX derivatives for <br>
//!          the parameter Param . <br>
  Standard_EXPORT     Standard_Boolean DerivTX(const gp_Vec& dN,const Standard_Real teta,math_Matrix& D) ;
  //! returns the values <T> of  the X2 derivatives for <br>
//!          the parameter Param . <br>
  Standard_EXPORT     Standard_Boolean Deriv2X(const math_Vector& X,GeomFill_Tensor& T) ;





protected:





private:



Handle_Adaptor3d_HCurve TheCurve;
Handle_Adaptor3d_HSurface TheSurface;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif