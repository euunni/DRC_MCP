// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__rootIO
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "/u/user/haeun/DRC/Sim/DRC_KEK2025_MCP/DRC_TB2024_MCP/rootIO/include/DRsimInterface.h"
#include "/u/user/haeun/DRC/Sim/DRC_KEK2025_MCP/DRC_TB2024_MCP/rootIO/include/RootInterface.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *tuplelEfloatcOfloatcOfloatgR_Dictionary();
   static void tuplelEfloatcOfloatcOfloatgR_TClassManip(TClass*);
   static void *new_tuplelEfloatcOfloatcOfloatgR(void *p = nullptr);
   static void *newArray_tuplelEfloatcOfloatcOfloatgR(Long_t size, void *p);
   static void delete_tuplelEfloatcOfloatcOfloatgR(void *p);
   static void deleteArray_tuplelEfloatcOfloatcOfloatgR(void *p);
   static void destruct_tuplelEfloatcOfloatcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::tuple<float,float,float>*)
   {
      ::tuple<float,float,float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::tuple<float,float,float>));
      static ::ROOT::TGenericClassInfo 
         instance("tuple<float,float,float>", "tuple", 834,
                  typeid(::tuple<float,float,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &tuplelEfloatcOfloatcOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::tuple<float,float,float>) );
      instance.SetNew(&new_tuplelEfloatcOfloatcOfloatgR);
      instance.SetNewArray(&newArray_tuplelEfloatcOfloatcOfloatgR);
      instance.SetDelete(&delete_tuplelEfloatcOfloatcOfloatgR);
      instance.SetDeleteArray(&deleteArray_tuplelEfloatcOfloatcOfloatgR);
      instance.SetDestructor(&destruct_tuplelEfloatcOfloatcOfloatgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("tuple<float,float,float>","DRsimInterface::threeVector"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("tuple<float,float,float>","std::tuple<float, float, float>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::tuple<float,float,float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *tuplelEfloatcOfloatcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::tuple<float,float,float>*>(nullptr))->GetClass();
      tuplelEfloatcOfloatcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void tuplelEfloatcOfloatcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *DRsimInterfacecLcLDRsimSiPMData_Dictionary();
   static void DRsimInterfacecLcLDRsimSiPMData_TClassManip(TClass*);
   static void *new_DRsimInterfacecLcLDRsimSiPMData(void *p = nullptr);
   static void *newArray_DRsimInterfacecLcLDRsimSiPMData(Long_t size, void *p);
   static void delete_DRsimInterfacecLcLDRsimSiPMData(void *p);
   static void deleteArray_DRsimInterfacecLcLDRsimSiPMData(void *p);
   static void destruct_DRsimInterfacecLcLDRsimSiPMData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DRsimInterface::DRsimSiPMData*)
   {
      ::DRsimInterface::DRsimSiPMData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DRsimInterface::DRsimSiPMData));
      static ::ROOT::TGenericClassInfo 
         instance("DRsimInterface::DRsimSiPMData", "DRsimInterface.h", 28,
                  typeid(::DRsimInterface::DRsimSiPMData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DRsimInterfacecLcLDRsimSiPMData_Dictionary, isa_proxy, 4,
                  sizeof(::DRsimInterface::DRsimSiPMData) );
      instance.SetNew(&new_DRsimInterfacecLcLDRsimSiPMData);
      instance.SetNewArray(&newArray_DRsimInterfacecLcLDRsimSiPMData);
      instance.SetDelete(&delete_DRsimInterfacecLcLDRsimSiPMData);
      instance.SetDeleteArray(&deleteArray_DRsimInterfacecLcLDRsimSiPMData);
      instance.SetDestructor(&destruct_DRsimInterfacecLcLDRsimSiPMData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DRsimInterface::DRsimSiPMData*)
   {
      return GenerateInitInstanceLocal(static_cast<::DRsimInterface::DRsimSiPMData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::DRsimInterface::DRsimSiPMData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DRsimInterfacecLcLDRsimSiPMData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::DRsimInterface::DRsimSiPMData*>(nullptr))->GetClass();
      DRsimInterfacecLcLDRsimSiPMData_TClassManip(theClass);
   return theClass;
   }

   static void DRsimInterfacecLcLDRsimSiPMData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *DRsimInterfacecLcLDRsimTowerData_Dictionary();
   static void DRsimInterfacecLcLDRsimTowerData_TClassManip(TClass*);
   static void *new_DRsimInterfacecLcLDRsimTowerData(void *p = nullptr);
   static void *newArray_DRsimInterfacecLcLDRsimTowerData(Long_t size, void *p);
   static void delete_DRsimInterfacecLcLDRsimTowerData(void *p);
   static void deleteArray_DRsimInterfacecLcLDRsimTowerData(void *p);
   static void destruct_DRsimInterfacecLcLDRsimTowerData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DRsimInterface::DRsimTowerData*)
   {
      ::DRsimInterface::DRsimTowerData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DRsimInterface::DRsimTowerData));
      static ::ROOT::TGenericClassInfo 
         instance("DRsimInterface::DRsimTowerData", "DRsimInterface.h", 41,
                  typeid(::DRsimInterface::DRsimTowerData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DRsimInterfacecLcLDRsimTowerData_Dictionary, isa_proxy, 4,
                  sizeof(::DRsimInterface::DRsimTowerData) );
      instance.SetNew(&new_DRsimInterfacecLcLDRsimTowerData);
      instance.SetNewArray(&newArray_DRsimInterfacecLcLDRsimTowerData);
      instance.SetDelete(&delete_DRsimInterfacecLcLDRsimTowerData);
      instance.SetDeleteArray(&deleteArray_DRsimInterfacecLcLDRsimTowerData);
      instance.SetDestructor(&destruct_DRsimInterfacecLcLDRsimTowerData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DRsimInterface::DRsimTowerData*)
   {
      return GenerateInitInstanceLocal(static_cast<::DRsimInterface::DRsimTowerData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::DRsimInterface::DRsimTowerData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DRsimInterfacecLcLDRsimTowerData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::DRsimInterface::DRsimTowerData*>(nullptr))->GetClass();
      DRsimInterfacecLcLDRsimTowerData_TClassManip(theClass);
   return theClass;
   }

   static void DRsimInterfacecLcLDRsimTowerData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *DRsimInterfacecLcLDRsimEdepData_Dictionary();
   static void DRsimInterfacecLcLDRsimEdepData_TClassManip(TClass*);
   static void *new_DRsimInterfacecLcLDRsimEdepData(void *p = nullptr);
   static void *newArray_DRsimInterfacecLcLDRsimEdepData(Long_t size, void *p);
   static void delete_DRsimInterfacecLcLDRsimEdepData(void *p);
   static void deleteArray_DRsimInterfacecLcLDRsimEdepData(void *p);
   static void destruct_DRsimInterfacecLcLDRsimEdepData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DRsimInterface::DRsimEdepData*)
   {
      ::DRsimInterface::DRsimEdepData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DRsimInterface::DRsimEdepData));
      static ::ROOT::TGenericClassInfo 
         instance("DRsimInterface::DRsimEdepData", "DRsimInterface.h", 51,
                  typeid(::DRsimInterface::DRsimEdepData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DRsimInterfacecLcLDRsimEdepData_Dictionary, isa_proxy, 4,
                  sizeof(::DRsimInterface::DRsimEdepData) );
      instance.SetNew(&new_DRsimInterfacecLcLDRsimEdepData);
      instance.SetNewArray(&newArray_DRsimInterfacecLcLDRsimEdepData);
      instance.SetDelete(&delete_DRsimInterfacecLcLDRsimEdepData);
      instance.SetDeleteArray(&deleteArray_DRsimInterfacecLcLDRsimEdepData);
      instance.SetDestructor(&destruct_DRsimInterfacecLcLDRsimEdepData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DRsimInterface::DRsimEdepData*)
   {
      return GenerateInitInstanceLocal(static_cast<::DRsimInterface::DRsimEdepData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::DRsimInterface::DRsimEdepData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DRsimInterfacecLcLDRsimEdepData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::DRsimInterface::DRsimEdepData*>(nullptr))->GetClass();
      DRsimInterfacecLcLDRsimEdepData_TClassManip(theClass);
   return theClass;
   }

   static void DRsimInterfacecLcLDRsimEdepData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *DRsimInterfacecLcLDRsimLeakageData_Dictionary();
   static void DRsimInterfacecLcLDRsimLeakageData_TClassManip(TClass*);
   static void *new_DRsimInterfacecLcLDRsimLeakageData(void *p = nullptr);
   static void *newArray_DRsimInterfacecLcLDRsimLeakageData(Long_t size, void *p);
   static void delete_DRsimInterfacecLcLDRsimLeakageData(void *p);
   static void deleteArray_DRsimInterfacecLcLDRsimLeakageData(void *p);
   static void destruct_DRsimInterfacecLcLDRsimLeakageData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DRsimInterface::DRsimLeakageData*)
   {
      ::DRsimInterface::DRsimLeakageData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DRsimInterface::DRsimLeakageData));
      static ::ROOT::TGenericClassInfo 
         instance("DRsimInterface::DRsimLeakageData", "DRsimInterface.h", 62,
                  typeid(::DRsimInterface::DRsimLeakageData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DRsimInterfacecLcLDRsimLeakageData_Dictionary, isa_proxy, 4,
                  sizeof(::DRsimInterface::DRsimLeakageData) );
      instance.SetNew(&new_DRsimInterfacecLcLDRsimLeakageData);
      instance.SetNewArray(&newArray_DRsimInterfacecLcLDRsimLeakageData);
      instance.SetDelete(&delete_DRsimInterfacecLcLDRsimLeakageData);
      instance.SetDeleteArray(&deleteArray_DRsimInterfacecLcLDRsimLeakageData);
      instance.SetDestructor(&destruct_DRsimInterfacecLcLDRsimLeakageData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DRsimInterface::DRsimLeakageData*)
   {
      return GenerateInitInstanceLocal(static_cast<::DRsimInterface::DRsimLeakageData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::DRsimInterface::DRsimLeakageData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DRsimInterfacecLcLDRsimLeakageData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::DRsimInterface::DRsimLeakageData*>(nullptr))->GetClass();
      DRsimInterfacecLcLDRsimLeakageData_TClassManip(theClass);
   return theClass;
   }

   static void DRsimInterfacecLcLDRsimLeakageData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *DRsimInterfacecLcLDRsimGenData_Dictionary();
   static void DRsimInterfacecLcLDRsimGenData_TClassManip(TClass*);
   static void *new_DRsimInterfacecLcLDRsimGenData(void *p = nullptr);
   static void *newArray_DRsimInterfacecLcLDRsimGenData(Long_t size, void *p);
   static void delete_DRsimInterfacecLcLDRsimGenData(void *p);
   static void deleteArray_DRsimInterfacecLcLDRsimGenData(void *p);
   static void destruct_DRsimInterfacecLcLDRsimGenData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DRsimInterface::DRsimGenData*)
   {
      ::DRsimInterface::DRsimGenData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DRsimInterface::DRsimGenData));
      static ::ROOT::TGenericClassInfo 
         instance("DRsimInterface::DRsimGenData", "DRsimInterface.h", 77,
                  typeid(::DRsimInterface::DRsimGenData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DRsimInterfacecLcLDRsimGenData_Dictionary, isa_proxy, 4,
                  sizeof(::DRsimInterface::DRsimGenData) );
      instance.SetNew(&new_DRsimInterfacecLcLDRsimGenData);
      instance.SetNewArray(&newArray_DRsimInterfacecLcLDRsimGenData);
      instance.SetDelete(&delete_DRsimInterfacecLcLDRsimGenData);
      instance.SetDeleteArray(&deleteArray_DRsimInterfacecLcLDRsimGenData);
      instance.SetDestructor(&destruct_DRsimInterfacecLcLDRsimGenData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DRsimInterface::DRsimGenData*)
   {
      return GenerateInitInstanceLocal(static_cast<::DRsimInterface::DRsimGenData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::DRsimInterface::DRsimGenData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DRsimInterfacecLcLDRsimGenData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::DRsimInterface::DRsimGenData*>(nullptr))->GetClass();
      DRsimInterfacecLcLDRsimGenData_TClassManip(theClass);
   return theClass;
   }

   static void DRsimInterfacecLcLDRsimGenData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *DRsimInterfacecLcLDRsimEventData_Dictionary();
   static void DRsimInterfacecLcLDRsimEventData_TClassManip(TClass*);
   static void *new_DRsimInterfacecLcLDRsimEventData(void *p = nullptr);
   static void *newArray_DRsimInterfacecLcLDRsimEventData(Long_t size, void *p);
   static void delete_DRsimInterfacecLcLDRsimEventData(void *p);
   static void deleteArray_DRsimInterfacecLcLDRsimEventData(void *p);
   static void destruct_DRsimInterfacecLcLDRsimEventData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DRsimInterface::DRsimEventData*)
   {
      ::DRsimInterface::DRsimEventData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DRsimInterface::DRsimEventData));
      static ::ROOT::TGenericClassInfo 
         instance("DRsimInterface::DRsimEventData", "DRsimInterface.h", 92,
                  typeid(::DRsimInterface::DRsimEventData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DRsimInterfacecLcLDRsimEventData_Dictionary, isa_proxy, 4,
                  sizeof(::DRsimInterface::DRsimEventData) );
      instance.SetNew(&new_DRsimInterfacecLcLDRsimEventData);
      instance.SetNewArray(&newArray_DRsimInterfacecLcLDRsimEventData);
      instance.SetDelete(&delete_DRsimInterfacecLcLDRsimEventData);
      instance.SetDeleteArray(&deleteArray_DRsimInterfacecLcLDRsimEventData);
      instance.SetDestructor(&destruct_DRsimInterfacecLcLDRsimEventData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DRsimInterface::DRsimEventData*)
   {
      return GenerateInitInstanceLocal(static_cast<::DRsimInterface::DRsimEventData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::DRsimInterface::DRsimEventData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DRsimInterfacecLcLDRsimEventData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::DRsimInterface::DRsimEventData*>(nullptr))->GetClass();
      DRsimInterfacecLcLDRsimEventData_TClassManip(theClass);
   return theClass;
   }

   static void DRsimInterfacecLcLDRsimEventData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_tuplelEfloatcOfloatcOfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::tuple<float,float,float> : new ::tuple<float,float,float>;
   }
   static void *newArray_tuplelEfloatcOfloatcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::tuple<float,float,float>[nElements] : new ::tuple<float,float,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_tuplelEfloatcOfloatcOfloatgR(void *p) {
      delete (static_cast<::tuple<float,float,float>*>(p));
   }
   static void deleteArray_tuplelEfloatcOfloatcOfloatgR(void *p) {
      delete [] (static_cast<::tuple<float,float,float>*>(p));
   }
   static void destruct_tuplelEfloatcOfloatcOfloatgR(void *p) {
      typedef ::tuple<float,float,float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::tuple<float,float,float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_DRsimInterfacecLcLDRsimSiPMData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::DRsimInterface::DRsimSiPMData : new ::DRsimInterface::DRsimSiPMData;
   }
   static void *newArray_DRsimInterfacecLcLDRsimSiPMData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::DRsimInterface::DRsimSiPMData[nElements] : new ::DRsimInterface::DRsimSiPMData[nElements];
   }
   // Wrapper around operator delete
   static void delete_DRsimInterfacecLcLDRsimSiPMData(void *p) {
      delete (static_cast<::DRsimInterface::DRsimSiPMData*>(p));
   }
   static void deleteArray_DRsimInterfacecLcLDRsimSiPMData(void *p) {
      delete [] (static_cast<::DRsimInterface::DRsimSiPMData*>(p));
   }
   static void destruct_DRsimInterfacecLcLDRsimSiPMData(void *p) {
      typedef ::DRsimInterface::DRsimSiPMData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::DRsimInterface::DRsimSiPMData

namespace ROOT {
   // Wrappers around operator new
   static void *new_DRsimInterfacecLcLDRsimTowerData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::DRsimInterface::DRsimTowerData : new ::DRsimInterface::DRsimTowerData;
   }
   static void *newArray_DRsimInterfacecLcLDRsimTowerData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::DRsimInterface::DRsimTowerData[nElements] : new ::DRsimInterface::DRsimTowerData[nElements];
   }
   // Wrapper around operator delete
   static void delete_DRsimInterfacecLcLDRsimTowerData(void *p) {
      delete (static_cast<::DRsimInterface::DRsimTowerData*>(p));
   }
   static void deleteArray_DRsimInterfacecLcLDRsimTowerData(void *p) {
      delete [] (static_cast<::DRsimInterface::DRsimTowerData*>(p));
   }
   static void destruct_DRsimInterfacecLcLDRsimTowerData(void *p) {
      typedef ::DRsimInterface::DRsimTowerData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::DRsimInterface::DRsimTowerData

namespace ROOT {
   // Wrappers around operator new
   static void *new_DRsimInterfacecLcLDRsimEdepData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::DRsimInterface::DRsimEdepData : new ::DRsimInterface::DRsimEdepData;
   }
   static void *newArray_DRsimInterfacecLcLDRsimEdepData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::DRsimInterface::DRsimEdepData[nElements] : new ::DRsimInterface::DRsimEdepData[nElements];
   }
   // Wrapper around operator delete
   static void delete_DRsimInterfacecLcLDRsimEdepData(void *p) {
      delete (static_cast<::DRsimInterface::DRsimEdepData*>(p));
   }
   static void deleteArray_DRsimInterfacecLcLDRsimEdepData(void *p) {
      delete [] (static_cast<::DRsimInterface::DRsimEdepData*>(p));
   }
   static void destruct_DRsimInterfacecLcLDRsimEdepData(void *p) {
      typedef ::DRsimInterface::DRsimEdepData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::DRsimInterface::DRsimEdepData

namespace ROOT {
   // Wrappers around operator new
   static void *new_DRsimInterfacecLcLDRsimLeakageData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::DRsimInterface::DRsimLeakageData : new ::DRsimInterface::DRsimLeakageData;
   }
   static void *newArray_DRsimInterfacecLcLDRsimLeakageData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::DRsimInterface::DRsimLeakageData[nElements] : new ::DRsimInterface::DRsimLeakageData[nElements];
   }
   // Wrapper around operator delete
   static void delete_DRsimInterfacecLcLDRsimLeakageData(void *p) {
      delete (static_cast<::DRsimInterface::DRsimLeakageData*>(p));
   }
   static void deleteArray_DRsimInterfacecLcLDRsimLeakageData(void *p) {
      delete [] (static_cast<::DRsimInterface::DRsimLeakageData*>(p));
   }
   static void destruct_DRsimInterfacecLcLDRsimLeakageData(void *p) {
      typedef ::DRsimInterface::DRsimLeakageData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::DRsimInterface::DRsimLeakageData

namespace ROOT {
   // Wrappers around operator new
   static void *new_DRsimInterfacecLcLDRsimGenData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::DRsimInterface::DRsimGenData : new ::DRsimInterface::DRsimGenData;
   }
   static void *newArray_DRsimInterfacecLcLDRsimGenData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::DRsimInterface::DRsimGenData[nElements] : new ::DRsimInterface::DRsimGenData[nElements];
   }
   // Wrapper around operator delete
   static void delete_DRsimInterfacecLcLDRsimGenData(void *p) {
      delete (static_cast<::DRsimInterface::DRsimGenData*>(p));
   }
   static void deleteArray_DRsimInterfacecLcLDRsimGenData(void *p) {
      delete [] (static_cast<::DRsimInterface::DRsimGenData*>(p));
   }
   static void destruct_DRsimInterfacecLcLDRsimGenData(void *p) {
      typedef ::DRsimInterface::DRsimGenData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::DRsimInterface::DRsimGenData

namespace ROOT {
   // Wrappers around operator new
   static void *new_DRsimInterfacecLcLDRsimEventData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::DRsimInterface::DRsimEventData : new ::DRsimInterface::DRsimEventData;
   }
   static void *newArray_DRsimInterfacecLcLDRsimEventData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::DRsimInterface::DRsimEventData[nElements] : new ::DRsimInterface::DRsimEventData[nElements];
   }
   // Wrapper around operator delete
   static void delete_DRsimInterfacecLcLDRsimEventData(void *p) {
      delete (static_cast<::DRsimInterface::DRsimEventData*>(p));
   }
   static void deleteArray_DRsimInterfacecLcLDRsimEventData(void *p) {
      delete [] (static_cast<::DRsimInterface::DRsimEventData*>(p));
   }
   static void destruct_DRsimInterfacecLcLDRsimEventData(void *p) {
      typedef ::DRsimInterface::DRsimEventData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::DRsimInterface::DRsimEventData

namespace ROOT {
   static TClass *vectorlEDRsimInterfacecLcLDRsimTowerDatagR_Dictionary();
   static void vectorlEDRsimInterfacecLcLDRsimTowerDatagR_TClassManip(TClass*);
   static void *new_vectorlEDRsimInterfacecLcLDRsimTowerDatagR(void *p = nullptr);
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimTowerDatagR(Long_t size, void *p);
   static void delete_vectorlEDRsimInterfacecLcLDRsimTowerDatagR(void *p);
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimTowerDatagR(void *p);
   static void destruct_vectorlEDRsimInterfacecLcLDRsimTowerDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DRsimInterface::DRsimTowerData>*)
   {
      vector<DRsimInterface::DRsimTowerData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DRsimInterface::DRsimTowerData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DRsimInterface::DRsimTowerData>", -2, "vector", 428,
                  typeid(vector<DRsimInterface::DRsimTowerData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDRsimInterfacecLcLDRsimTowerDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DRsimInterface::DRsimTowerData>) );
      instance.SetNew(&new_vectorlEDRsimInterfacecLcLDRsimTowerDatagR);
      instance.SetNewArray(&newArray_vectorlEDRsimInterfacecLcLDRsimTowerDatagR);
      instance.SetDelete(&delete_vectorlEDRsimInterfacecLcLDRsimTowerDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEDRsimInterfacecLcLDRsimTowerDatagR);
      instance.SetDestructor(&destruct_vectorlEDRsimInterfacecLcLDRsimTowerDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DRsimInterface::DRsimTowerData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<DRsimInterface::DRsimTowerData>","std::vector<DRsimInterface::DRsimTowerData, std::allocator<DRsimInterface::DRsimTowerData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<DRsimInterface::DRsimTowerData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDRsimInterfacecLcLDRsimTowerDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<DRsimInterface::DRsimTowerData>*>(nullptr))->GetClass();
      vectorlEDRsimInterfacecLcLDRsimTowerDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDRsimInterfacecLcLDRsimTowerDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDRsimInterfacecLcLDRsimTowerDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<DRsimInterface::DRsimTowerData> : new vector<DRsimInterface::DRsimTowerData>;
   }
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimTowerDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<DRsimInterface::DRsimTowerData>[nElements] : new vector<DRsimInterface::DRsimTowerData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDRsimInterfacecLcLDRsimTowerDatagR(void *p) {
      delete (static_cast<vector<DRsimInterface::DRsimTowerData>*>(p));
   }
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimTowerDatagR(void *p) {
      delete [] (static_cast<vector<DRsimInterface::DRsimTowerData>*>(p));
   }
   static void destruct_vectorlEDRsimInterfacecLcLDRsimTowerDatagR(void *p) {
      typedef vector<DRsimInterface::DRsimTowerData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<DRsimInterface::DRsimTowerData>

namespace ROOT {
   static TClass *vectorlEDRsimInterfacecLcLDRsimSiPMDatagR_Dictionary();
   static void vectorlEDRsimInterfacecLcLDRsimSiPMDatagR_TClassManip(TClass*);
   static void *new_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR(void *p = nullptr);
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR(Long_t size, void *p);
   static void delete_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR(void *p);
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR(void *p);
   static void destruct_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DRsimInterface::DRsimSiPMData>*)
   {
      vector<DRsimInterface::DRsimSiPMData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DRsimInterface::DRsimSiPMData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DRsimInterface::DRsimSiPMData>", -2, "vector", 428,
                  typeid(vector<DRsimInterface::DRsimSiPMData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDRsimInterfacecLcLDRsimSiPMDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DRsimInterface::DRsimSiPMData>) );
      instance.SetNew(&new_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR);
      instance.SetNewArray(&newArray_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR);
      instance.SetDelete(&delete_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR);
      instance.SetDestructor(&destruct_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DRsimInterface::DRsimSiPMData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<DRsimInterface::DRsimSiPMData>","std::vector<DRsimInterface::DRsimSiPMData, std::allocator<DRsimInterface::DRsimSiPMData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<DRsimInterface::DRsimSiPMData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDRsimInterfacecLcLDRsimSiPMDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<DRsimInterface::DRsimSiPMData>*>(nullptr))->GetClass();
      vectorlEDRsimInterfacecLcLDRsimSiPMDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDRsimInterfacecLcLDRsimSiPMDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<DRsimInterface::DRsimSiPMData> : new vector<DRsimInterface::DRsimSiPMData>;
   }
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<DRsimInterface::DRsimSiPMData>[nElements] : new vector<DRsimInterface::DRsimSiPMData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR(void *p) {
      delete (static_cast<vector<DRsimInterface::DRsimSiPMData>*>(p));
   }
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR(void *p) {
      delete [] (static_cast<vector<DRsimInterface::DRsimSiPMData>*>(p));
   }
   static void destruct_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR(void *p) {
      typedef vector<DRsimInterface::DRsimSiPMData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<DRsimInterface::DRsimSiPMData>

namespace ROOT {
   static TClass *vectorlEDRsimInterfacecLcLDRsimLeakageDatagR_Dictionary();
   static void vectorlEDRsimInterfacecLcLDRsimLeakageDatagR_TClassManip(TClass*);
   static void *new_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR(void *p = nullptr);
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR(Long_t size, void *p);
   static void delete_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR(void *p);
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR(void *p);
   static void destruct_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DRsimInterface::DRsimLeakageData>*)
   {
      vector<DRsimInterface::DRsimLeakageData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DRsimInterface::DRsimLeakageData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DRsimInterface::DRsimLeakageData>", -2, "vector", 428,
                  typeid(vector<DRsimInterface::DRsimLeakageData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDRsimInterfacecLcLDRsimLeakageDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DRsimInterface::DRsimLeakageData>) );
      instance.SetNew(&new_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR);
      instance.SetNewArray(&newArray_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR);
      instance.SetDelete(&delete_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR);
      instance.SetDestructor(&destruct_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DRsimInterface::DRsimLeakageData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<DRsimInterface::DRsimLeakageData>","std::vector<DRsimInterface::DRsimLeakageData, std::allocator<DRsimInterface::DRsimLeakageData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<DRsimInterface::DRsimLeakageData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDRsimInterfacecLcLDRsimLeakageDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<DRsimInterface::DRsimLeakageData>*>(nullptr))->GetClass();
      vectorlEDRsimInterfacecLcLDRsimLeakageDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDRsimInterfacecLcLDRsimLeakageDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<DRsimInterface::DRsimLeakageData> : new vector<DRsimInterface::DRsimLeakageData>;
   }
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<DRsimInterface::DRsimLeakageData>[nElements] : new vector<DRsimInterface::DRsimLeakageData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR(void *p) {
      delete (static_cast<vector<DRsimInterface::DRsimLeakageData>*>(p));
   }
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR(void *p) {
      delete [] (static_cast<vector<DRsimInterface::DRsimLeakageData>*>(p));
   }
   static void destruct_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR(void *p) {
      typedef vector<DRsimInterface::DRsimLeakageData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<DRsimInterface::DRsimLeakageData>

namespace ROOT {
   static TClass *vectorlEDRsimInterfacecLcLDRsimGenDatagR_Dictionary();
   static void vectorlEDRsimInterfacecLcLDRsimGenDatagR_TClassManip(TClass*);
   static void *new_vectorlEDRsimInterfacecLcLDRsimGenDatagR(void *p = nullptr);
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimGenDatagR(Long_t size, void *p);
   static void delete_vectorlEDRsimInterfacecLcLDRsimGenDatagR(void *p);
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimGenDatagR(void *p);
   static void destruct_vectorlEDRsimInterfacecLcLDRsimGenDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DRsimInterface::DRsimGenData>*)
   {
      vector<DRsimInterface::DRsimGenData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DRsimInterface::DRsimGenData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DRsimInterface::DRsimGenData>", -2, "vector", 428,
                  typeid(vector<DRsimInterface::DRsimGenData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDRsimInterfacecLcLDRsimGenDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DRsimInterface::DRsimGenData>) );
      instance.SetNew(&new_vectorlEDRsimInterfacecLcLDRsimGenDatagR);
      instance.SetNewArray(&newArray_vectorlEDRsimInterfacecLcLDRsimGenDatagR);
      instance.SetDelete(&delete_vectorlEDRsimInterfacecLcLDRsimGenDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEDRsimInterfacecLcLDRsimGenDatagR);
      instance.SetDestructor(&destruct_vectorlEDRsimInterfacecLcLDRsimGenDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DRsimInterface::DRsimGenData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<DRsimInterface::DRsimGenData>","std::vector<DRsimInterface::DRsimGenData, std::allocator<DRsimInterface::DRsimGenData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<DRsimInterface::DRsimGenData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDRsimInterfacecLcLDRsimGenDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<DRsimInterface::DRsimGenData>*>(nullptr))->GetClass();
      vectorlEDRsimInterfacecLcLDRsimGenDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDRsimInterfacecLcLDRsimGenDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDRsimInterfacecLcLDRsimGenDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<DRsimInterface::DRsimGenData> : new vector<DRsimInterface::DRsimGenData>;
   }
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimGenDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<DRsimInterface::DRsimGenData>[nElements] : new vector<DRsimInterface::DRsimGenData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDRsimInterfacecLcLDRsimGenDatagR(void *p) {
      delete (static_cast<vector<DRsimInterface::DRsimGenData>*>(p));
   }
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimGenDatagR(void *p) {
      delete [] (static_cast<vector<DRsimInterface::DRsimGenData>*>(p));
   }
   static void destruct_vectorlEDRsimInterfacecLcLDRsimGenDatagR(void *p) {
      typedef vector<DRsimInterface::DRsimGenData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<DRsimInterface::DRsimGenData>

namespace ROOT {
   static TClass *vectorlEDRsimInterfacecLcLDRsimEdepDatagR_Dictionary();
   static void vectorlEDRsimInterfacecLcLDRsimEdepDatagR_TClassManip(TClass*);
   static void *new_vectorlEDRsimInterfacecLcLDRsimEdepDatagR(void *p = nullptr);
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimEdepDatagR(Long_t size, void *p);
   static void delete_vectorlEDRsimInterfacecLcLDRsimEdepDatagR(void *p);
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimEdepDatagR(void *p);
   static void destruct_vectorlEDRsimInterfacecLcLDRsimEdepDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DRsimInterface::DRsimEdepData>*)
   {
      vector<DRsimInterface::DRsimEdepData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DRsimInterface::DRsimEdepData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DRsimInterface::DRsimEdepData>", -2, "vector", 428,
                  typeid(vector<DRsimInterface::DRsimEdepData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDRsimInterfacecLcLDRsimEdepDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DRsimInterface::DRsimEdepData>) );
      instance.SetNew(&new_vectorlEDRsimInterfacecLcLDRsimEdepDatagR);
      instance.SetNewArray(&newArray_vectorlEDRsimInterfacecLcLDRsimEdepDatagR);
      instance.SetDelete(&delete_vectorlEDRsimInterfacecLcLDRsimEdepDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEDRsimInterfacecLcLDRsimEdepDatagR);
      instance.SetDestructor(&destruct_vectorlEDRsimInterfacecLcLDRsimEdepDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DRsimInterface::DRsimEdepData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<DRsimInterface::DRsimEdepData>","std::vector<DRsimInterface::DRsimEdepData, std::allocator<DRsimInterface::DRsimEdepData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<DRsimInterface::DRsimEdepData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDRsimInterfacecLcLDRsimEdepDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<DRsimInterface::DRsimEdepData>*>(nullptr))->GetClass();
      vectorlEDRsimInterfacecLcLDRsimEdepDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDRsimInterfacecLcLDRsimEdepDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDRsimInterfacecLcLDRsimEdepDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<DRsimInterface::DRsimEdepData> : new vector<DRsimInterface::DRsimEdepData>;
   }
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimEdepDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<DRsimInterface::DRsimEdepData>[nElements] : new vector<DRsimInterface::DRsimEdepData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDRsimInterfacecLcLDRsimEdepDatagR(void *p) {
      delete (static_cast<vector<DRsimInterface::DRsimEdepData>*>(p));
   }
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimEdepDatagR(void *p) {
      delete [] (static_cast<vector<DRsimInterface::DRsimEdepData>*>(p));
   }
   static void destruct_vectorlEDRsimInterfacecLcLDRsimEdepDatagR(void *p) {
      typedef vector<DRsimInterface::DRsimEdepData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<DRsimInterface::DRsimEdepData>

namespace ROOT {
   static TClass *maplEpairlEfloatcOfloatgRcOintgR_Dictionary();
   static void maplEpairlEfloatcOfloatgRcOintgR_TClassManip(TClass*);
   static void *new_maplEpairlEfloatcOfloatgRcOintgR(void *p = nullptr);
   static void *newArray_maplEpairlEfloatcOfloatgRcOintgR(Long_t size, void *p);
   static void delete_maplEpairlEfloatcOfloatgRcOintgR(void *p);
   static void deleteArray_maplEpairlEfloatcOfloatgRcOintgR(void *p);
   static void destruct_maplEpairlEfloatcOfloatgRcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<pair<float,float>,int>*)
   {
      map<pair<float,float>,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<pair<float,float>,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<pair<float,float>,int>", -2, "map", 102,
                  typeid(map<pair<float,float>,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEpairlEfloatcOfloatgRcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<pair<float,float>,int>) );
      instance.SetNew(&new_maplEpairlEfloatcOfloatgRcOintgR);
      instance.SetNewArray(&newArray_maplEpairlEfloatcOfloatgRcOintgR);
      instance.SetDelete(&delete_maplEpairlEfloatcOfloatgRcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEpairlEfloatcOfloatgRcOintgR);
      instance.SetDestructor(&destruct_maplEpairlEfloatcOfloatgRcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<pair<float,float>,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<pair<float,float>,int>","std::map<std::pair<float, float>, int, std::less<std::pair<float, float> >, std::allocator<std::pair<std::pair<float, float> const, int> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<pair<float,float>,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEpairlEfloatcOfloatgRcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<pair<float,float>,int>*>(nullptr))->GetClass();
      maplEpairlEfloatcOfloatgRcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEpairlEfloatcOfloatgRcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEpairlEfloatcOfloatgRcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<pair<float,float>,int> : new map<pair<float,float>,int>;
   }
   static void *newArray_maplEpairlEfloatcOfloatgRcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<pair<float,float>,int>[nElements] : new map<pair<float,float>,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEpairlEfloatcOfloatgRcOintgR(void *p) {
      delete (static_cast<map<pair<float,float>,int>*>(p));
   }
   static void deleteArray_maplEpairlEfloatcOfloatgRcOintgR(void *p) {
      delete [] (static_cast<map<pair<float,float>,int>*>(p));
   }
   static void destruct_maplEpairlEfloatcOfloatgRcOintgR(void *p) {
      typedef map<pair<float,float>,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<pair<float,float>,int>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_librootIO() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_librootIO) = RecordReadRules_librootIO();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_librootIO));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_librootIO_Impl() {
    static const char* headers[] = {
"/u/user/haeun/DRC/Sim/DRC_KEK2025_MCP/DRC_TB2024_MCP/rootIO/include/DRsimInterface.h",
"/u/user/haeun/DRC/Sim/DRC_KEK2025_MCP/DRC_TB2024_MCP/rootIO/include/RootInterface.h",
nullptr
    };
    static const char* includePaths[] = {
"/u/user/haeun/DRC/Sim/DRC_KEK2025_MCP/DRC_TB2024_MCP/rootIO/include",
"/cvmfs/sft.cern.ch/lcg/releases/ROOT/6.36.02-c35af/x86_64-el9-gcc14-opt/include",
"/u/user/haeun/DRC/Sim/DRC_KEK2025_MCP/DRC_TB2024_MCP/rootIO",
"/cvmfs/sft.cern.ch/lcg/releases/ROOT/6.36.02-c35af/x86_64-el9-gcc14-opt/include/",
"/u/user/haeun/DRC/Sim/DRC_KEK2025_MCP/DRC_TB2024_MCP/build/rootIO/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "librootIO dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace std{template <typename ...> class __attribute__((annotate("$clingAutoload$bits/stl_pair.h")))  __attribute__((annotate("$clingAutoload$string")))  tuple;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "librootIO dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/u/user/haeun/DRC/Sim/DRC_KEK2025_MCP/DRC_TB2024_MCP/rootIO/include/DRsimInterface.h"
#include "/u/user/haeun/DRC/Sim/DRC_KEK2025_MCP/DRC_TB2024_MCP/rootIO/include/RootInterface.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"DRsimInterface", payloadCode, "@",
"DRsimInterface::DRsimEdepData", payloadCode, "@",
"DRsimInterface::DRsimEventData", payloadCode, "@",
"DRsimInterface::DRsimGenData", payloadCode, "@",
"DRsimInterface::DRsimLeakageData", payloadCode, "@",
"DRsimInterface::DRsimSiPMData", payloadCode, "@",
"DRsimInterface::DRsimTowerData", payloadCode, "@",
"DRsimInterface::threeVector", payloadCode, "@",
"tuple<float,float,float>", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("librootIO",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_librootIO_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_librootIO_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_librootIO() {
  TriggerDictionaryInitialization_librootIO_Impl();
}
