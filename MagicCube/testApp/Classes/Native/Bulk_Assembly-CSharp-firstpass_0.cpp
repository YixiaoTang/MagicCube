#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey>
struct List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Analytics.DriveableProperty
struct DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D;
// UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey
struct FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54;
// UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey[]
struct FieldWithRemoteSettingsKeyU5BU5D_t0A97B5CED309A6A9973E44ED75C0A9E595815CBC;
// UnityEngine.Analytics.RemoteSettings
struct RemoteSettings_t22B238E4CC6786349CA5436F5416C62AADF4758A;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F;

extern RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral46F8AB7C0CFF9DF7CD124852E26022A6BF89E315;
extern String_t* _stringLiteral5039D155A71C0A5F7A2B2654AD49CB7EE47A8980;
extern String_t* _stringLiteral5AD30B93FD7E1CF514DB20C2EDCF8DB62EB65A43;
extern String_t* _stringLiteral685E80366130387CB75C055248326976D16FDF8D;
extern String_t* _stringLiteral69503FCF13B6CA8B11B580F2DAB8C39426C351FC;
extern String_t* _stringLiteralD3E71422A01E472DE33A41CFE2E0214A9F4BA2B3;
extern String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
extern String_t* _stringLiteralECB252044B5EA0F679EE78EC1A12904739E2904D;
extern const RuntimeMethod* FieldWithRemoteSettingsKey_SetValueRecursive_m603639F32E24779A529B2CEDA53F2F85D80C21BA_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m52E62E3EFB54E9B8B9A28E96DB41DE829D0CA284_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m9C209EDBF3C1EC4579A78E7B07E01BB7C1F3F6B6_RuntimeMethod_var;
extern const RuntimeMethod* RemoteSettings_RemoteSettingsUpdated_mADF8FD1ED668D3DC32D78E31442FB592E9247E17_RuntimeMethod_var;
extern const RuntimeType* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var;
extern const uint32_t FieldWithRemoteSettingsKey_SetValueRecursive_m603639F32E24779A529B2CEDA53F2F85D80C21BA_MetadataUsageId;
extern const uint32_t RemoteSettings_RemoteSettingsUpdated_mADF8FD1ED668D3DC32D78E31442FB592E9247E17_MetadataUsageId;
extern const uint32_t RemoteSettings_Start_mA37A3CCBE0D5FE3E4B3363B0A41C8EC664235248_MetadataUsageId;
extern const uint32_t RemoteSettings__ctor_m2E9A4F8AAE3E79203B35CFBEA4574C5BAF330BF9_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;


#ifndef U3CMODULEU3E_TF157A75827DFDE1F9E89CA3CBB54B07FA9E227FC_H
#define U3CMODULEU3E_TF157A75827DFDE1F9E89CA3CBB54B07FA9E227FC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tF157A75827DFDE1F9E89CA3CBB54B07FA9E227FC 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_TF157A75827DFDE1F9E89CA3CBB54B07FA9E227FC_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T369B5F88B31214ECF949397A6F62A8D986191A3C_H
#define LIST_1_T369B5F88B31214ECF949397A6F62A8D986191A3C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey>
struct  List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FieldWithRemoteSettingsKeyU5BU5D_t0A97B5CED309A6A9973E44ED75C0A9E595815CBC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C, ____items_1)); }
	inline FieldWithRemoteSettingsKeyU5BU5D_t0A97B5CED309A6A9973E44ED75C0A9E595815CBC* get__items_1() const { return ____items_1; }
	inline FieldWithRemoteSettingsKeyU5BU5D_t0A97B5CED309A6A9973E44ED75C0A9E595815CBC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FieldWithRemoteSettingsKeyU5BU5D_t0A97B5CED309A6A9973E44ED75C0A9E595815CBC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FieldWithRemoteSettingsKeyU5BU5D_t0A97B5CED309A6A9973E44ED75C0A9E595815CBC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C_StaticFields, ____emptyArray_5)); }
	inline FieldWithRemoteSettingsKeyU5BU5D_t0A97B5CED309A6A9973E44ED75C0A9E595815CBC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FieldWithRemoteSettingsKeyU5BU5D_t0A97B5CED309A6A9973E44ED75C0A9E595815CBC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FieldWithRemoteSettingsKeyU5BU5D_t0A97B5CED309A6A9973E44ED75C0A9E595815CBC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T369B5F88B31214ECF949397A6F62A8D986191A3C_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef DRIVEABLEPROPERTY_TDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D_H
#define DRIVEABLEPROPERTY_TDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.DriveableProperty
struct  DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey> UnityEngine.Analytics.DriveableProperty::m_Fields
	List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C * ___m_Fields_0;

public:
	inline static int32_t get_offset_of_m_Fields_0() { return static_cast<int32_t>(offsetof(DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D, ___m_Fields_0)); }
	inline List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C * get_m_Fields_0() const { return ___m_Fields_0; }
	inline List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C ** get_address_of_m_Fields_0() { return &___m_Fields_0; }
	inline void set_m_Fields_0(List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C * value)
	{
		___m_Fields_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Fields_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVEABLEPROPERTY_TDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D_H
#ifndef FIELDWITHREMOTESETTINGSKEY_T913904D23F41776BDD82A34276C7C2E60389AB54_H
#define FIELDWITHREMOTESETTINGSKEY_T913904D23F41776BDD82A34276C7C2E60389AB54_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey
struct  FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::m_Target
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___m_Target_0;
	// System.String UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::m_FieldPath
	String_t* ___m_FieldPath_1;
	// System.String UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::m_RSKeyName
	String_t* ___m_RSKeyName_2;
	// System.String UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::m_Type
	String_t* ___m_Type_3;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54, ___m_Target_0)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_FieldPath_1() { return static_cast<int32_t>(offsetof(FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54, ___m_FieldPath_1)); }
	inline String_t* get_m_FieldPath_1() const { return ___m_FieldPath_1; }
	inline String_t** get_address_of_m_FieldPath_1() { return &___m_FieldPath_1; }
	inline void set_m_FieldPath_1(String_t* value)
	{
		___m_FieldPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_FieldPath_1), value);
	}

	inline static int32_t get_offset_of_m_RSKeyName_2() { return static_cast<int32_t>(offsetof(FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54, ___m_RSKeyName_2)); }
	inline String_t* get_m_RSKeyName_2() const { return ___m_RSKeyName_2; }
	inline String_t** get_address_of_m_RSKeyName_2() { return &___m_RSKeyName_2; }
	inline void set_m_RSKeyName_2(String_t* value)
	{
		___m_RSKeyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_RSKeyName_2), value);
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54, ___m_Type_3)); }
	inline String_t* get_m_Type_3() const { return ___m_Type_3; }
	inline String_t** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(String_t* value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDWITHREMOTESETTINGSKEY_T913904D23F41776BDD82A34276C7C2E60389AB54_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#define CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#define INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef PARAMETERATTRIBUTES_TF9962395513C2A48CF5AF2F371C66DD52789F110_H
#define PARAMETERATTRIBUTES_TF9962395513C2A48CF5AF2F371C66DD52789F110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_tF9962395513C2A48CF5AF2F371C66DD52789F110 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_tF9962395513C2A48CF5AF2F371C66DD52789F110, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERATTRIBUTES_TF9962395513C2A48CF5AF2F371C66DD52789F110_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef PARAMETERINFO_T37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_H
#define PARAMETERINFO_T37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * ___marshalAs_6;
};
#endif // PARAMETERINFO_T37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef UPDATEDEVENTHANDLER_TB0230BC83686D7126AB4D3800A66351028CA514F_H
#define UPDATEDEVENTHANDLER_TB0230BC83686D7126AB4D3800A66351028CA514F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings_UpdatedEventHandler
struct  UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEDEVENTHANDLER_TB0230BC83686D7126AB4D3800A66351028CA514F_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef REMOTESETTINGS_T22B238E4CC6786349CA5436F5416C62AADF4758A_H
#define REMOTESETTINGS_T22B238E4CC6786349CA5436F5416C62AADF4758A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.RemoteSettings
struct  RemoteSettings_t22B238E4CC6786349CA5436F5416C62AADF4758A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Analytics.DriveableProperty UnityEngine.Analytics.RemoteSettings::m_DriveableProperty
	DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D * ___m_DriveableProperty_4;

public:
	inline static int32_t get_offset_of_m_DriveableProperty_4() { return static_cast<int32_t>(offsetof(RemoteSettings_t22B238E4CC6786349CA5436F5416C62AADF4758A, ___m_DriveableProperty_4)); }
	inline DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D * get_m_DriveableProperty_4() const { return ___m_DriveableProperty_4; }
	inline DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D ** get_address_of_m_DriveableProperty_4() { return &___m_DriveableProperty_4; }
	inline void set_m_DriveableProperty_4(DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D * value)
	{
		___m_DriveableProperty_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_DriveableProperty_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTESETTINGS_T22B238E4CC6786349CA5436F5416C62AADF4758A_H
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * m_Items[1];

public:
	inline ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018 (String_t* __this, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* String_Split_m7F837958EF6FF0B15DE9B946AA1E8F95FC5EFF3F (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* p0, int32_t p1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Reflection.FieldInfo System.Type::GetField(System.String)
extern "C" IL2CPP_METHOD_ATTR FieldInfo_t * Type_GetField_m564F7686385A6EA8C30F81C939250D5010DC0CA5 (Type_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
extern "C" IL2CPP_METHOD_ATTR PropertyInfo_t * Type_GetProperty_m309A76AAAFC344BA5EB24ACD874400F90B6E877E (Type_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::op_Inequality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR bool FieldInfo_op_Inequality_mB88B704E9238C7A9FD42274FCFEFA7CFABBF16EE (FieldInfo_t * p0, FieldInfo_t * p1, const RuntimeMethod* method);
// System.Boolean System.Reflection.PropertyInfo::op_Inequality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR bool PropertyInfo_op_Inequality_m72FFC34F4BEFB4F18155B0E97F8616597AE9A782 (PropertyInfo_t * p0, PropertyInfo_t * p1, const RuntimeMethod* method);
// System.Int32 System.Array::GetLength(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_GetLength_m318900B10C3A93A30ABDC67DE161C8F6ABA4D359 (RuntimeArray * __this, int32_t p0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * p0, Type_t * p1, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00 (String_t* p0, int32_t* p1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* p0, const RuntimeMethod* method);
// System.Object UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey::SetValueRecursive(System.Object,System.Object,System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * FieldWithRemoteSettingsKey_SetValueRecursive_m603639F32E24779A529B2CEDA53F2F85D80C21BA (FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * __this, RuntimeObject * ___val0, RuntimeObject * ___target1, String_t* ___path2, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsInitOnly()
extern "C" IL2CPP_METHOD_ATTR bool FieldInfo_get_IsInitOnly_m55ECD5C1B5F908CC9D10FDA743C9014CDB45E044 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41 (FieldInfo_t * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsValueType_mDDCCBAE9B59A483CBC3E5C02E3D68CEBEB2E41A8 (Type_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.RemoteSettings::RemoteSettingsUpdated()
extern "C" IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsUpdated_mADF8FD1ED668D3DC32D78E31442FB592E9247E17 (RemoteSettings_t22B238E4CC6786349CA5436F5416C62AADF4758A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UpdatedEventHandler__ctor_mB0CFE6A3B394C3858502E54A9CBEE97B40690DE7 (UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.RemoteSettings::add_Updated(UnityEngine.RemoteSettings/UpdatedEventHandler)
extern "C" IL2CPP_METHOD_ATTR void RemoteSettings_add_Updated_m2FAF58066058C3B004F597B2FC251416A42E1426 (UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey> UnityEngine.Analytics.DriveableProperty::get_fields()
extern "C" IL2CPP_METHOD_ATTR List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C * DriveableProperty_get_fields_m4C768C1A819DFD877B6CBD64EC90CD0FFAFE13AB (DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey>::get_Item(System.Int32)
inline FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * List_1_get_Item_m9C209EDBF3C1EC4579A78E7B07E01BB7C1F3F6B6 (List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * (*) (List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.String UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey::get_rsKeyName()
extern "C" IL2CPP_METHOD_ATTR String_t* FieldWithRemoteSettingsKey_get_rsKeyName_m28E722837D46BB69E300E597AD7EB4D911636F42 (FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.RemoteSettings::HasKey(System.String)
extern "C" IL2CPP_METHOD_ATTR bool RemoteSettings_HasKey_m311F538D819F4D51F75504722E5C1FEE07FC681D (String_t* p0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey::get_target()
extern "C" IL2CPP_METHOD_ATTR Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * FieldWithRemoteSettingsKey_get_target_m96B4E26CBCDC762568031D26FBF45B455962D112 (FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.String UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey::get_fieldPath()
extern "C" IL2CPP_METHOD_ATTR String_t* FieldWithRemoteSettingsKey_get_fieldPath_mB8C5A88E66335D809C7C8600C2FC2F84C15D76D2 (FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey::get_type()
extern "C" IL2CPP_METHOD_ATTR String_t* FieldWithRemoteSettingsKey_get_type_mBEC66BFF50B5D9EB27C7A0D7F409E9E18B3149C4 (FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.RemoteSettings::GetBool(System.String)
extern "C" IL2CPP_METHOD_ATTR bool RemoteSettings_GetBool_mE9DF175D4FD141EF73B6FD24AAEE1E6C73FC66B8 (String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey::SetValue(System.Object)
extern "C" IL2CPP_METHOD_ATTR void FieldWithRemoteSettingsKey_SetValue_m5F6C33A1B1DD2A65D1815E1963A69B7C59AE7922 (FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * __this, RuntimeObject * ___val0, const RuntimeMethod* method);
// System.Single UnityEngine.RemoteSettings::GetFloat(System.String)
extern "C" IL2CPP_METHOD_ATTR float RemoteSettings_GetFloat_m47DC1C19C08782839F15F8930B5624C4CF8C8EC3 (String_t* p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.RemoteSettings::GetInt(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t RemoteSettings_GetInt_mBFB4FD4F8BA949BA10C5FB6B266837CCD2849F83 (String_t* p0, const RuntimeMethod* method);
// System.String UnityEngine.RemoteSettings::GetString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* RemoteSettings_GetString_mAB61849D20D62068B8771CBDE8BBA9918B62BF80 (String_t* p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey>::get_Count()
inline int32_t List_1_get_Count_m52E62E3EFB54E9B8B9A28E96DB41DE829D0CA284 (List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Void UnityEngine.Analytics.DriveableProperty::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DriveableProperty__ctor_m8C4B348FA8A7355489FDB3DE7D9B50D581865B6B (DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey> UnityEngine.Analytics.DriveableProperty::get_fields()
extern "C" IL2CPP_METHOD_ATTR List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C * DriveableProperty_get_fields_m4C768C1A819DFD877B6CBD64EC90CD0FFAFE13AB (DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D * __this, const RuntimeMethod* method)
{
	{
		List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C * L_0 = __this->get_m_Fields_0();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.DriveableProperty::set_fields(System.Collections.Generic.List`1<UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey>)
extern "C" IL2CPP_METHOD_ATTR void DriveableProperty_set_fields_mE8AFD9C8681E0FF3EBDDEDFEE65AD00EC84EC2D0 (DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D * __this, List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C * L_0 = ___value0;
		__this->set_m_Fields_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Analytics.DriveableProperty::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DriveableProperty__ctor_m8C4B348FA8A7355489FDB3DE7D9B50D581865B6B (DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Object UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::get_target()
extern "C" IL2CPP_METHOD_ATTR Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * FieldWithRemoteSettingsKey_get_target_m96B4E26CBCDC762568031D26FBF45B455962D112 (FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * __this, const RuntimeMethod* method)
{
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = __this->get_m_Target_0();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::set_target(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void FieldWithRemoteSettingsKey_set_target_m9E89199929A867296A8A9E87D1565C005EFADE31 (FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * __this, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___value0, const RuntimeMethod* method)
{
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = ___value0;
		__this->set_m_Target_0(L_0);
		return;
	}
}
// System.String UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::get_fieldPath()
extern "C" IL2CPP_METHOD_ATTR String_t* FieldWithRemoteSettingsKey_get_fieldPath_mB8C5A88E66335D809C7C8600C2FC2F84C15D76D2 (FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_FieldPath_1();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::set_fieldPath(System.String)
extern "C" IL2CPP_METHOD_ATTR void FieldWithRemoteSettingsKey_set_fieldPath_mB7065B31A8E2DDF45D58011AA59CBA1E7EA15C5D (FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_FieldPath_1(L_0);
		return;
	}
}
// System.String UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::get_rsKeyName()
extern "C" IL2CPP_METHOD_ATTR String_t* FieldWithRemoteSettingsKey_get_rsKeyName_m28E722837D46BB69E300E597AD7EB4D911636F42 (FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_RSKeyName_2();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::set_rsKeyName(System.String)
extern "C" IL2CPP_METHOD_ATTR void FieldWithRemoteSettingsKey_set_rsKeyName_mB6A20DCD2FB76468D004A1ACE267C726042ADDD3 (FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_RSKeyName_2(L_0);
		return;
	}
}
// System.String UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::get_type()
extern "C" IL2CPP_METHOD_ATTR String_t* FieldWithRemoteSettingsKey_get_type_mBEC66BFF50B5D9EB27C7A0D7F409E9E18B3149C4 (FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_Type_3();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::set_type(System.String)
extern "C" IL2CPP_METHOD_ATTR void FieldWithRemoteSettingsKey_set_type_m95DA7455EC911FA3D8CADD87A878AA54706C14D8 (FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_Type_3(L_0);
		return;
	}
}
// System.Object UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::SetValueRecursive(System.Object,System.Object,System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * FieldWithRemoteSettingsKey_SetValueRecursive_m603639F32E24779A529B2CEDA53F2F85D80C21BA (FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * __this, RuntimeObject * ___val0, RuntimeObject * ___target1, String_t* ___path2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FieldWithRemoteSettingsKey_SetValueRecursive_m603639F32E24779A529B2CEDA53F2F85D80C21BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	FieldInfo_t * V_3 = NULL;
	PropertyInfo_t * V_4 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	RuntimeObject * V_7 = NULL;
	ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* V_8 = NULL;
	int32_t V_9 = 0;
	String_t* G_B5_0 = NULL;
	String_t* G_B15_0 = NULL;
	{
		String_t* L_0 = ___path2;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject * L_2 = ___val0;
		return L_2;
	}

IL_000a:
	{
		String_t* L_3 = ___path2;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_4 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = String_Split_m7F837958EF6FF0B15DE9B946AA1E8F95FC5EFF3F(L_3, L_5, 2, /*hidden argument*/NULL);
		V_0 = L_6;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = 0;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length))))) > ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0031;
	}

IL_002e:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = 1;
		String_t* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		G_B5_0 = L_13;
	}

IL_0031:
	{
		V_2 = G_B5_0;
		RuntimeObject * L_14 = ___target1;
		NullCheck(L_14);
		Type_t * L_15 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_14, /*hidden argument*/NULL);
		Type_t * L_16 = L_15;
		String_t* L_17 = V_1;
		NullCheck(L_16);
		FieldInfo_t * L_18 = Type_GetField_m564F7686385A6EA8C30F81C939250D5010DC0CA5(L_16, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		String_t* L_19 = V_1;
		NullCheck(L_16);
		PropertyInfo_t * L_20 = Type_GetProperty_m309A76AAAFC344BA5EB24ACD874400F90B6E877E(L_16, L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		V_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL;
		FieldInfo_t * L_21 = V_3;
		bool L_22 = FieldInfo_op_Inequality_mB88B704E9238C7A9FD42274FCFEFA7CFABBF16EE(L_21, (FieldInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0062;
		}
	}
	{
		FieldInfo_t * L_23 = V_3;
		RuntimeObject * L_24 = ___target1;
		NullCheck(L_23);
		RuntimeObject * L_25 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_23, L_24);
		V_6 = L_25;
		goto IL_0104;
	}

IL_0062:
	{
		PropertyInfo_t * L_26 = V_4;
		bool L_27 = PropertyInfo_op_Inequality_m72FFC34F4BEFB4F18155B0E97F8616597AE9A782(L_26, (PropertyInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00f2;
		}
	}
	{
		PropertyInfo_t * L_28 = V_4;
		NullCheck(L_28);
		ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* L_29 = VirtFuncInvoker0< ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* >::Invoke(23 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_28);
		V_8 = L_29;
		ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* L_30 = V_8;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_30);
		int32_t L_31 = Array_GetLength_m318900B10C3A93A30ABDC67DE161C8F6ABA4D359((RuntimeArray *)(RuntimeArray *)L_30, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_31) == ((uint32_t)1))))
		{
			goto IL_00e4;
		}
	}
	{
		ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* L_32 = V_8;
		NullCheck(L_32);
		int32_t L_33 = 0;
		ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		Type_t * L_35 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_34);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_36 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_37 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_36, /*hidden argument*/NULL);
		bool L_38 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_35, L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00e4;
		}
	}
	{
		String_t* L_39 = V_2;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_40 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_41 = L_40;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_39);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_42 = String_Split_m7F837958EF6FF0B15DE9B946AA1E8F95FC5EFF3F(L_39, L_41, 2, /*hidden argument*/NULL);
		V_0 = L_42;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_43 = V_0;
		NullCheck(L_43);
		int32_t L_44 = 0;
		String_t* L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		if (!L_45)
		{
			goto IL_00e4;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_46 = V_0;
		NullCheck(L_46);
		int32_t L_47 = 0;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49 = Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00(L_48, (int32_t*)(&V_9), /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_00e4;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_50 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_51 = L_50;
		int32_t L_52 = V_9;
		int32_t L_53 = L_52;
		RuntimeObject * L_54 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_53);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_54);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_54);
		V_5 = L_51;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_55 = V_0;
		NullCheck(L_55);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_55)->max_length))))) > ((int32_t)1)))
		{
			goto IL_00e0;
		}
	}
	{
		G_B15_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_00e3;
	}

IL_00e0:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_56 = V_0;
		NullCheck(L_56);
		int32_t L_57 = 1;
		String_t* L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		G_B15_0 = L_58;
	}

IL_00e3:
	{
		V_2 = G_B15_0;
	}

IL_00e4:
	{
		PropertyInfo_t * L_59 = V_4;
		RuntimeObject * L_60 = ___target1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_61 = V_5;
		NullCheck(L_59);
		RuntimeObject * L_62 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_59, L_60, L_61);
		V_6 = L_62;
		goto IL_0104;
	}

IL_00f2:
	{
		String_t* L_63 = V_1;
		RuntimeObject * L_64 = ___target1;
		String_t* L_65 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral69503FCF13B6CA8B11B580F2DAB8C39426C351FC, L_63, L_64, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_66 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_66, L_65, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_66, NULL, FieldWithRemoteSettingsKey_SetValueRecursive_m603639F32E24779A529B2CEDA53F2F85D80C21BA_RuntimeMethod_var);
	}

IL_0104:
	{
		RuntimeObject * L_67 = ___val0;
		RuntimeObject * L_68 = V_6;
		String_t* L_69 = V_2;
		RuntimeObject * L_70 = FieldWithRemoteSettingsKey_SetValueRecursive_m603639F32E24779A529B2CEDA53F2F85D80C21BA(__this, L_67, L_68, L_69, /*hidden argument*/NULL);
		V_7 = L_70;
		RuntimeObject * L_71 = V_7;
		if (!L_71)
		{
			goto IL_0170;
		}
	}
	{
		FieldInfo_t * L_72 = V_3;
		bool L_73 = FieldInfo_op_Inequality_mB88B704E9238C7A9FD42274FCFEFA7CFABBF16EE(L_72, (FieldInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_0147;
		}
	}
	{
		FieldInfo_t * L_74 = V_3;
		NullCheck(L_74);
		bool L_75 = FieldInfo_get_IsInitOnly_m55ECD5C1B5F908CC9D10FDA743C9014CDB45E044(L_74, /*hidden argument*/NULL);
		if (!L_75)
		{
			goto IL_012f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralD3E71422A01E472DE33A41CFE2E0214A9F4BA2B3, /*hidden argument*/NULL);
	}

IL_012f:
	{
		FieldInfo_t * L_76 = V_3;
		RuntimeObject * L_77 = ___target1;
		RuntimeObject * L_78 = V_7;
		NullCheck(L_76);
		FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41(L_76, L_77, L_78, /*hidden argument*/NULL);
		RuntimeObject * L_79 = ___target1;
		NullCheck(L_79);
		Type_t * L_80 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_79, /*hidden argument*/NULL);
		NullCheck(L_80);
		bool L_81 = Type_get_IsValueType_mDDCCBAE9B59A483CBC3E5C02E3D68CEBEB2E41A8(L_80, /*hidden argument*/NULL);
		if (!L_81)
		{
			goto IL_0170;
		}
	}
	{
		RuntimeObject * L_82 = ___target1;
		return L_82;
	}

IL_0147:
	{
		PropertyInfo_t * L_83 = V_4;
		NullCheck(L_83);
		bool L_84 = VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_83);
		if (!L_84)
		{
			goto IL_015e;
		}
	}
	{
		PropertyInfo_t * L_85 = V_4;
		RuntimeObject * L_86 = ___target1;
		RuntimeObject * L_87 = V_7;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_88 = V_5;
		NullCheck(L_85);
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(27 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_85, L_86, L_87, L_88);
		goto IL_0170;
	}

IL_015e:
	{
		String_t* L_89 = V_1;
		RuntimeObject * L_90 = ___target1;
		String_t* L_91 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral5AD30B93FD7E1CF514DB20C2EDCF8DB62EB65A43, L_89, L_90, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_92 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_92, L_91, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_92, NULL, FieldWithRemoteSettingsKey_SetValueRecursive_m603639F32E24779A529B2CEDA53F2F85D80C21BA_RuntimeMethod_var);
	}

IL_0170:
	{
		return NULL;
	}
}
// System.Void UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::SetValue(System.Object)
extern "C" IL2CPP_METHOD_ATTR void FieldWithRemoteSettingsKey_SetValue_m5F6C33A1B1DD2A65D1815E1963A69B7C59AE7922 (FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * __this, RuntimeObject * ___val0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___val0;
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_1 = __this->get_m_Target_0();
		String_t* L_2 = __this->get_m_FieldPath_1();
		FieldWithRemoteSettingsKey_SetValueRecursive_m603639F32E24779A529B2CEDA53F2F85D80C21BA(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FieldWithRemoteSettingsKey__ctor_m0681E7CD038D6C2AC632A7E64863C4CCF7AC2594 (FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Analytics.DriveableProperty UnityEngine.Analytics.RemoteSettings::get_driveableProperty()
extern "C" IL2CPP_METHOD_ATTR DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D * RemoteSettings_get_driveableProperty_m796BF59BFBAFFF772C6046FBE1D8608999658FE9 (RemoteSettings_t22B238E4CC6786349CA5436F5416C62AADF4758A * __this, const RuntimeMethod* method)
{
	{
		DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D * L_0 = __this->get_m_DriveableProperty_4();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.RemoteSettings::set_driveableProperty(UnityEngine.Analytics.DriveableProperty)
extern "C" IL2CPP_METHOD_ATTR void RemoteSettings_set_driveableProperty_mA6E436B618667C773E2F91378E4D550BB5A7EFF6 (RemoteSettings_t22B238E4CC6786349CA5436F5416C62AADF4758A * __this, DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D * ___value0, const RuntimeMethod* method)
{
	{
		DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D * L_0 = ___value0;
		__this->set_m_DriveableProperty_4(L_0);
		return;
	}
}
// System.Void UnityEngine.Analytics.RemoteSettings::Start()
extern "C" IL2CPP_METHOD_ATTR void RemoteSettings_Start_mA37A3CCBE0D5FE3E4B3363B0A41C8EC664235248 (RemoteSettings_t22B238E4CC6786349CA5436F5416C62AADF4758A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_Start_mA37A3CCBE0D5FE3E4B3363B0A41C8EC664235248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RemoteSettings_RemoteSettingsUpdated_mADF8FD1ED668D3DC32D78E31442FB592E9247E17(__this, /*hidden argument*/NULL);
		UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F * L_0 = (UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F *)il2cpp_codegen_object_new(UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F_il2cpp_TypeInfo_var);
		UpdatedEventHandler__ctor_mB0CFE6A3B394C3858502E54A9CBEE97B40690DE7(L_0, __this, (intptr_t)((intptr_t)RemoteSettings_RemoteSettingsUpdated_mADF8FD1ED668D3DC32D78E31442FB592E9247E17_RuntimeMethod_var), /*hidden argument*/NULL);
		RemoteSettings_add_Updated_m2FAF58066058C3B004F597B2FC251416A42E1426(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Analytics.RemoteSettings::RemoteSettingsUpdated()
extern "C" IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsUpdated_mADF8FD1ED668D3DC32D78E31442FB592E9247E17 (RemoteSettings_t22B238E4CC6786349CA5436F5416C62AADF4758A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_RemoteSettingsUpdated_mADF8FD1ED668D3DC32D78E31442FB592E9247E17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * V_1 = NULL;
	{
		V_0 = 0;
		goto IL_00ff;
	}

IL_0007:
	{
		DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D * L_0 = __this->get_m_DriveableProperty_4();
		NullCheck(L_0);
		List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C * L_1 = DriveableProperty_get_fields_m4C768C1A819DFD877B6CBD64EC90CD0FFAFE13AB(L_0, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * L_3 = List_1_get_Item_m9C209EDBF3C1EC4579A78E7B07E01BB7C1F3F6B6(L_1, L_2, /*hidden argument*/List_1_get_Item_m9C209EDBF3C1EC4579A78E7B07E01BB7C1F3F6B6_RuntimeMethod_var);
		V_1 = L_3;
		FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = FieldWithRemoteSettingsKey_get_rsKeyName_m28E722837D46BB69E300E597AD7EB4D911636F42(L_4, /*hidden argument*/NULL);
		bool L_6 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_00fb;
		}
	}
	{
		FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8 = FieldWithRemoteSettingsKey_get_rsKeyName_m28E722837D46BB69E300E597AD7EB4D911636F42(L_7, /*hidden argument*/NULL);
		bool L_9 = RemoteSettings_HasKey_m311F538D819F4D51F75504722E5C1FEE07FC681D(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00fb;
		}
	}
	{
		FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * L_10 = V_1;
		NullCheck(L_10);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_11 = FieldWithRemoteSettingsKey_get_target_m96B4E26CBCDC762568031D26FBF45B455962D112(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00fb;
		}
	}
	{
		FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14 = FieldWithRemoteSettingsKey_get_fieldPath_mB8C5A88E66335D809C7C8600C2FC2F84C15D76D2(L_13, /*hidden argument*/NULL);
		bool L_15 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_00fb;
		}
	}
	{
		FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * L_16 = V_1;
		NullCheck(L_16);
		String_t* L_17 = FieldWithRemoteSettingsKey_get_type_mBEC66BFF50B5D9EB27C7A0D7F409E9E18B3149C4(L_16, /*hidden argument*/NULL);
		bool L_18 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_17, _stringLiteral5039D155A71C0A5F7A2B2654AD49CB7EE47A8980, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0084;
		}
	}
	{
		FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * L_19 = V_1;
		FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * L_20 = V_1;
		NullCheck(L_20);
		String_t* L_21 = FieldWithRemoteSettingsKey_get_rsKeyName_m28E722837D46BB69E300E597AD7EB4D911636F42(L_20, /*hidden argument*/NULL);
		bool L_22 = RemoteSettings_GetBool_mE9DF175D4FD141EF73B6FD24AAEE1E6C73FC66B8(L_21, /*hidden argument*/NULL);
		bool L_23 = L_22;
		RuntimeObject * L_24 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_19);
		FieldWithRemoteSettingsKey_SetValue_m5F6C33A1B1DD2A65D1815E1963A69B7C59AE7922(L_19, L_24, /*hidden argument*/NULL);
		goto IL_00fb;
	}

IL_0084:
	{
		FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * L_25 = V_1;
		NullCheck(L_25);
		String_t* L_26 = FieldWithRemoteSettingsKey_get_type_mBEC66BFF50B5D9EB27C7A0D7F409E9E18B3149C4(L_25, /*hidden argument*/NULL);
		bool L_27 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_26, _stringLiteral685E80366130387CB75C055248326976D16FDF8D, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00ae;
		}
	}
	{
		FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * L_28 = V_1;
		FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * L_29 = V_1;
		NullCheck(L_29);
		String_t* L_30 = FieldWithRemoteSettingsKey_get_rsKeyName_m28E722837D46BB69E300E597AD7EB4D911636F42(L_29, /*hidden argument*/NULL);
		float L_31 = RemoteSettings_GetFloat_m47DC1C19C08782839F15F8930B5624C4CF8C8EC3(L_30, /*hidden argument*/NULL);
		float L_32 = L_31;
		RuntimeObject * L_33 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_28);
		FieldWithRemoteSettingsKey_SetValue_m5F6C33A1B1DD2A65D1815E1963A69B7C59AE7922(L_28, L_33, /*hidden argument*/NULL);
		goto IL_00fb;
	}

IL_00ae:
	{
		FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * L_34 = V_1;
		NullCheck(L_34);
		String_t* L_35 = FieldWithRemoteSettingsKey_get_type_mBEC66BFF50B5D9EB27C7A0D7F409E9E18B3149C4(L_34, /*hidden argument*/NULL);
		bool L_36 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_35, _stringLiteral46F8AB7C0CFF9DF7CD124852E26022A6BF89E315, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00d8;
		}
	}
	{
		FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * L_37 = V_1;
		FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * L_38 = V_1;
		NullCheck(L_38);
		String_t* L_39 = FieldWithRemoteSettingsKey_get_rsKeyName_m28E722837D46BB69E300E597AD7EB4D911636F42(L_38, /*hidden argument*/NULL);
		int32_t L_40 = RemoteSettings_GetInt_mBFB4FD4F8BA949BA10C5FB6B266837CCD2849F83(L_39, /*hidden argument*/NULL);
		int32_t L_41 = L_40;
		RuntimeObject * L_42 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_37);
		FieldWithRemoteSettingsKey_SetValue_m5F6C33A1B1DD2A65D1815E1963A69B7C59AE7922(L_37, L_42, /*hidden argument*/NULL);
		goto IL_00fb;
	}

IL_00d8:
	{
		FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * L_43 = V_1;
		NullCheck(L_43);
		String_t* L_44 = FieldWithRemoteSettingsKey_get_type_mBEC66BFF50B5D9EB27C7A0D7F409E9E18B3149C4(L_43, /*hidden argument*/NULL);
		bool L_45 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_44, _stringLiteralECB252044B5EA0F679EE78EC1A12904739E2904D, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_00fb;
		}
	}
	{
		FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * L_46 = V_1;
		FieldWithRemoteSettingsKey_t913904D23F41776BDD82A34276C7C2E60389AB54 * L_47 = V_1;
		NullCheck(L_47);
		String_t* L_48 = FieldWithRemoteSettingsKey_get_rsKeyName_m28E722837D46BB69E300E597AD7EB4D911636F42(L_47, /*hidden argument*/NULL);
		String_t* L_49 = RemoteSettings_GetString_mAB61849D20D62068B8771CBDE8BBA9918B62BF80(L_48, /*hidden argument*/NULL);
		NullCheck(L_46);
		FieldWithRemoteSettingsKey_SetValue_m5F6C33A1B1DD2A65D1815E1963A69B7C59AE7922(L_46, L_49, /*hidden argument*/NULL);
	}

IL_00fb:
	{
		int32_t L_50 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_00ff:
	{
		int32_t L_51 = V_0;
		DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D * L_52 = __this->get_m_DriveableProperty_4();
		NullCheck(L_52);
		List_1_t369B5F88B31214ECF949397A6F62A8D986191A3C * L_53 = DriveableProperty_get_fields_m4C768C1A819DFD877B6CBD64EC90CD0FFAFE13AB(L_52, /*hidden argument*/NULL);
		NullCheck(L_53);
		int32_t L_54 = List_1_get_Count_m52E62E3EFB54E9B8B9A28E96DB41DE829D0CA284(L_53, /*hidden argument*/List_1_get_Count_m52E62E3EFB54E9B8B9A28E96DB41DE829D0CA284_RuntimeMethod_var);
		if ((((int32_t)L_51) < ((int32_t)L_54)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.RemoteSettings::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RemoteSettings__ctor_m2E9A4F8AAE3E79203B35CFBEA4574C5BAF330BF9 (RemoteSettings_t22B238E4CC6786349CA5436F5416C62AADF4758A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings__ctor_m2E9A4F8AAE3E79203B35CFBEA4574C5BAF330BF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D * L_0 = (DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D *)il2cpp_codegen_object_new(DriveableProperty_tDD67B6E21CAE41E8A76A3E6EEF055D47B583AE2D_il2cpp_TypeInfo_var);
		DriveableProperty__ctor_m8C4B348FA8A7355489FDB3DE7D9B50D581865B6B(L_0, /*hidden argument*/NULL);
		__this->set_m_DriveableProperty_4(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
