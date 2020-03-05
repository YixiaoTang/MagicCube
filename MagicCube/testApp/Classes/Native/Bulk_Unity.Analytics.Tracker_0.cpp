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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.Boolean>>[]
struct EntryU5BU5D_t60002001262E46AB7BE60D777703961BC7FD1AB2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Boolean>>
struct KeyCollection_tB5F80A783DC72D93D05498A5152163E5360BAAF0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.Boolean>>
struct ValueCollection_tD32E39B896629525F188D53EA957DE0F4210D459;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Boolean>>
struct Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam>
struct List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC;
// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>
struct List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C;
// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>
struct List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
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
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Analytics.AnalyticsEventParam
struct AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA;
// UnityEngine.Analytics.AnalyticsEventParamListContainer
struct AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F;
// UnityEngine.Analytics.AnalyticsEventParam[]
struct AnalyticsEventParamU5BU5D_tE887E3E558D9582B1E010B50353489E1D3CA4DA8;
// UnityEngine.Analytics.AnalyticsEventTracker
struct AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85;
// UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0
struct U3CTimedTriggerU3Ec__Iterator0_tC423D57544229E73A4C71483BD195FDF77B05344;
// UnityEngine.Analytics.AnalyticsTracker
struct AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9;
// UnityEngine.Analytics.EventTrigger
struct EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71;
// UnityEngine.Analytics.EventTrigger/OnTrigger
struct OnTrigger_t15137E7AEE2F88371244BABB916F36896F969636;
// UnityEngine.Analytics.StandardEventPayload
struct StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4;
// UnityEngine.Analytics.TrackableField
struct TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53;
// UnityEngine.Analytics.TrackableProperty
struct TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460;
// UnityEngine.Analytics.TrackableProperty/FieldWithTarget
struct FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75;
// UnityEngine.Analytics.TrackableProperty/FieldWithTarget[]
struct FieldWithTargetU5BU5D_t45BC3A5501D9924ECA9C153D715D7394A62E4599;
// UnityEngine.Analytics.TrackablePropertyBase
struct TrackablePropertyBase_t389C506235A1BBF399DC5F41267AA2EEE24B0471;
// UnityEngine.Analytics.TrackableTrigger
struct TrackableTrigger_t1AF0FCBCA5B4245444E306EE3A29FA78646252EF;
// UnityEngine.Analytics.TriggerListContainer
struct TriggerListContainer_t17A33E4C209E99BC294058F7052EA65F5D4DCA18;
// UnityEngine.Analytics.TriggerMethod
struct TriggerMethod_tCED6C0B94B1F4D290BCAC91643FB836CE9C9CBCC;
// UnityEngine.Analytics.TriggerRule
struct TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083;
// UnityEngine.Analytics.TriggerRule[]
struct TriggerRuleU5BU5D_tB26F52418406F2B72112C107DAAA6B7DE27B8DEF;
// UnityEngine.Analytics.ValueProperty
struct ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;

extern RuntimeClass* AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F_il2cpp_TypeInfo_var;
extern RuntimeClass* AnalyticsEventTrackerSettings_tC0D48832DBA374CA53343838FE8FFBAA25A72DD1_il2cpp_TypeInfo_var;
extern RuntimeClass* AnalyticsEvent_t33C084647ABB51775504EED444F48FBF1332CCB5_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
extern RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
extern RuntimeClass* EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC_il2cpp_TypeInfo_var;
extern RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
extern RuntimeClass* StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460_il2cpp_TypeInfo_var;
extern RuntimeClass* TriggerListContainer_t17A33E4C209E99BC294058F7052EA65F5D4DCA18_il2cpp_TypeInfo_var;
extern RuntimeClass* TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CTimedTriggerU3Ec__Iterator0_tC423D57544229E73A4C71483BD195FDF77B05344_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral147B14D1727DDC43E42BFD053D952E4F8F21248A;
extern String_t* _stringLiteral21623A418AEC085E33F80BAB18DF7FB9D63D6E0F;
extern String_t* _stringLiteral255A64B9AEF6D40A3185887A9609F4756B511135;
extern String_t* _stringLiteral328FA72F5BD82DBD3DFBAD69876C783686DA994A;
extern String_t* _stringLiteral624EC7C8DECF0E1DBA8536BBAE524A259EF38F8D;
extern String_t* _stringLiteral71F8E7976E4CBC4561C9D62FB283E7F788202ACB;
extern String_t* _stringLiteral9A9C627A0F53EF0BBCE20557D3F99E54DB03D965;
extern String_t* _stringLiteralAA1F29A574D86DFA098A38CA22487FAE4C3D5C56;
extern String_t* _stringLiteralE338E8E3D1DDEB83DF4ACE416A87E89ED797CD19;
extern String_t* _stringLiteralF787F33231C06E6C035E0165DA48A4A07A5B67BD;
extern const RuntimeMethod* Dictionary_2_Add_m233AC329D8947CF1508C9A2B8DE8EDCD68B6F4AA_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m2C14D0192CAB02448C6BD0971307CF53FE79CE6D_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m2AB63CDBD2D220F7E1A0FD9B1248CFEF78767A59_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_mFE3A1BC7E40E7720DFA6C4A3665F0F63E859C2BA_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m7702392922636D9AEDAA86B5044638866A56200F_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m3888B381F35379249EB956C0CB6ADED59C25BAEA_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Keys_mBAD38BDB4B29DE0EABEFA97FD533ABB3745EA281_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3DD968CBFFC2A171628E57F52799403D22016EDD_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m84F295C1FA045940273F7DFB0FB06E1FCE8461DB_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_mA03B06227A858F3735458754DFA8AF5B6B51FE6E_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m718187321BD8432B606268827E7B303553F9701E_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m915DF780E52F4295C6E7C8965AFA06607E7B4BE5_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m9B2A2689495B9A4D839CC5092B940A6389ED4ECC_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m27A9D40F9132B17EA0523E5648525BF4AA41AE8A_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_mE214FAC39E4EAD81507D33456CBFFA064C022B63_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_mF1B26462232800E6BD5C5A1DB1BF04237FB10B82_RuntimeMethod_var;
extern const RuntimeMethod* KeyCollection_GetEnumerator_m11D25963220009E20AB2D5431EA0D513E17BDAC8_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2FC4231C93844B9DB4D4FF8157D061DF9B8FBA03_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m89BEC490ABACE3269A09A9378C655A0BFCC578F9_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m8A7FB96FD71D0AB70BA9E12285C291A0085A3ADD_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_mD99D742FACD4AF08ACB48F68FB2372DF54D85857_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_mF3969C5D7DDD3ECFBADFA58AD157FF51ACA604DA_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m6A84DF71A8CC50213A910AF387265FC3C8B7E7DD_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m036AAC4EDD1099001700A4CD8C2926D337595A48_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m150C7A13E82800F2BA8CEA6CD8E12ED8FC5D5BDB_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mE6C3ED22D95329042E880DC486456A4DB7BA0358_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m26C16C77F4576A0FF1A1771F1B372799114AF23A_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_mF2F6CBB3F54138F58FDD30A344E98CA795BDA55C_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_mA14569596BC62A88E55650FC0EE3621EC4C4D769_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB_RuntimeMethod_var;
extern const RuntimeMethod* StandardEventPayload_Send_mB9AE412C89A41703019635A93487F809E5FA4D07_RuntimeMethod_var;
extern const RuntimeMethod* U3CTimedTriggerU3Ec__Iterator0_Reset_m0B4C5BAF0050ED696862E1C3418A7F822B8F1ECF_RuntimeMethod_var;
extern const RuntimeType* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var;
extern const RuntimeType* Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_0_0_0_var;
extern const RuntimeType* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_0_0_0_var;
extern const RuntimeType* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_0_0_0_var;
extern const RuntimeType* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var;
extern const RuntimeType* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var;
extern const RuntimeType* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var;
extern const RuntimeType* String_t_0_0_0_var;
extern const uint32_t AnalyticsEventParamListContainer__ctor_mC280A6518029986F1D4489B5DF8A9A0B384E6625_MetadataUsageId;
extern const uint32_t AnalyticsEventParam__ctor_mFB90CF41DD56886345E5596FFA7A3FCCEE27FD22_MetadataUsageId;
extern const uint32_t AnalyticsEventTrackerSettings__cctor_mDD00635350526358733CE0A345D94E83A84CAF50_MetadataUsageId;
extern const uint32_t AnalyticsEventTracker_TimedTrigger_m8BEAE18BB1AE5F41BD01302841305D6F38883C2B_MetadataUsageId;
extern const uint32_t AnalyticsEventTracker__ctor_m0CAA3ED3C319467BF7A524F0EADB192310979FDB_MetadataUsageId;
extern const uint32_t AnalyticsTracker_BuildParameters_mE4B0387CF54871CF591F244DA9F0AEDDEB82969D_MetadataUsageId;
extern const uint32_t AnalyticsTracker__ctor_m92B4B24D74F2F8040B0B8809C0DC0BDFF2C702DF_MetadataUsageId;
extern const uint32_t EventTrigger_AddRule_m0425DCA1620D5DD73283FC54856A11DC608E2B03_MetadataUsageId;
extern const uint32_t EventTrigger_RemoveRule_m353E13A1B7D977EF793AE0DEEDE471362772B426_MetadataUsageId;
extern const uint32_t EventTrigger_Test_m795A384D563EEFC1E380857F88B428325507E42C_MetadataUsageId;
extern const uint32_t EventTrigger__ctor_m7ABF456AB791FA644FC46C22030022D7164FD176_MetadataUsageId;
extern const uint32_t FieldWithTarget_GetValue_m30F2D9AFF48F230DEF3D54F19D37675C2E3F5520_MetadataUsageId;
extern const uint32_t StandardEventPayload_GetParameters_m388FA7197463B299413548E7425D0BFAE526D36F_MetadataUsageId;
extern const uint32_t StandardEventPayload_IsCustomDataValid_m556BB8009D59C1049A113DC95DD2F522058E6178_MetadataUsageId;
extern const uint32_t StandardEventPayload_IsRequiredDataValid_m6AFB2A6596E789A32B1959E0CDE0CD4F521495D0_MetadataUsageId;
extern const uint32_t StandardEventPayload_Send_mB9AE412C89A41703019635A93487F809E5FA4D07_MetadataUsageId;
extern const uint32_t StandardEventPayload__cctor_m14F3C437A97EE8BD4E256E06A50749930431DBD5_MetadataUsageId;
extern const uint32_t StandardEventPayload__ctor_mAAB34F27B4601B7CE9F43450F1F7ADBF2BB4AC08_MetadataUsageId;
extern const uint32_t TrackableField_GetValue_m9EE8327C429574A98AFE09ABBD6851D9CA618FAD_MetadataUsageId;
extern const uint32_t TrackableField__ctor_m45C6378E507F30365E6278568BCB98E7A00731A4_MetadataUsageId;
extern const uint32_t TrackableProperty_GetHashCode_mF8B54954A9C74DE93918DC3DD260B3E4B23AFF6F_MetadataUsageId;
extern const uint32_t TriggerListContainer__ctor_m035A61847E774852174026A8413CE61EFD4BCE86_MetadataUsageId;
extern const uint32_t TriggerRule_GetDouble_m29DA1A9B8E0046F8108A062878AD2BCA5A5480A7_MetadataUsageId;
extern const uint32_t TriggerRule_SafeEquals_m92A424C431C539280E10F70FF9A01C598E93419B_MetadataUsageId;
extern const uint32_t TriggerRule_TestByBool_m015D9E092EE884740E5EBEB85665E59B3A640076_MetadataUsageId;
extern const uint32_t TriggerRule_Test_mAD45B68EE2F787D22DBA507450CDCE9CC3D82445_MetadataUsageId;
extern const uint32_t U3CTimedTriggerU3Ec__Iterator0_MoveNext_m7548F59F1A81486E8F0EE245E6868492C8C0AB06_MetadataUsageId;
extern const uint32_t U3CTimedTriggerU3Ec__Iterator0_Reset_m0B4C5BAF0050ED696862E1C3418A7F822B8F1ECF_MetadataUsageId;
extern const uint32_t ValueProperty_IsValid_mF5A7B38893069B4C209E4DD8228A7B458DFA80F2_MetadataUsageId;
extern const uint32_t ValueProperty__ctor_mD39B3D2090A2054F081097C75E7ADD3AB01029B8_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;


#ifndef U3CMODULEU3E_T12A11497AE880D1CC28CD2B57486E09668552D84_H
#define U3CMODULEU3E_T12A11497AE880D1CC28CD2B57486E09668552D84_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t12A11497AE880D1CC28CD2B57486E09668552D84 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T12A11497AE880D1CC28CD2B57486E09668552D84_H
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
#ifndef KEYCOLLECTION_TB5F80A783DC72D93D05498A5152163E5360BAAF0_H
#define KEYCOLLECTION_TB5F80A783DC72D93D05498A5152163E5360BAAF0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2_KeyCollection<System.String,System.Collections.Generic.List`1<System.Boolean>>
struct  KeyCollection_tB5F80A783DC72D93D05498A5152163E5360BAAF0  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_KeyCollection::dictionary
	Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_tB5F80A783DC72D93D05498A5152163E5360BAAF0, ___dictionary_0)); }
	inline Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_TB5F80A783DC72D93D05498A5152163E5360BAAF0_H
#ifndef DICTIONARY_2_T15D71DFE8A22AE51D1163CD0AD60657779BFFC33_H
#define DICTIONARY_2_T15D71DFE8A22AE51D1163CD0AD60657779BFFC33_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Boolean>>
struct  Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t60002001262E46AB7BE60D777703961BC7FD1AB2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tB5F80A783DC72D93D05498A5152163E5360BAAF0 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD32E39B896629525F188D53EA957DE0F4210D459 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33, ___entries_1)); }
	inline EntryU5BU5D_t60002001262E46AB7BE60D777703961BC7FD1AB2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t60002001262E46AB7BE60D777703961BC7FD1AB2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t60002001262E46AB7BE60D777703961BC7FD1AB2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33, ___keys_7)); }
	inline KeyCollection_tB5F80A783DC72D93D05498A5152163E5360BAAF0 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB5F80A783DC72D93D05498A5152163E5360BAAF0 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB5F80A783DC72D93D05498A5152163E5360BAAF0 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33, ___values_8)); }
	inline ValueCollection_tD32E39B896629525F188D53EA957DE0F4210D459 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD32E39B896629525F188D53EA957DE0F4210D459 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD32E39B896629525F188D53EA957DE0F4210D459 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T15D71DFE8A22AE51D1163CD0AD60657779BFFC33_H
#ifndef DICTIONARY_2_T9140A71329927AE4FD0F3CF4D4D66668EBE151EA_H
#define DICTIONARY_2_T9140A71329927AE4FD0F3CF4D4D66668EBE151EA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___entries_1)); }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___keys_7)); }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___values_8)); }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T9140A71329927AE4FD0F3CF4D4D66668EBE151EA_H
#ifndef LIST_1_T3DDB9FC102E84D6C6A4430CB071C8EF31975D03D_H
#define LIST_1_T3DDB9FC102E84D6C6A4430CB071C8EF31975D03D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Boolean>
struct  List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D, ____items_1)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get__items_1() const { return ____items_1; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D_StaticFields, ____emptyArray_5)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3DDB9FC102E84D6C6A4430CB071C8EF31975D03D_H
#ifndef LIST_1_TBDC0AB64C659F7EF72C612D8FE61EB51998A25BC_H
#define LIST_1_TBDC0AB64C659F7EF72C612D8FE61EB51998A25BC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam>
struct  List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AnalyticsEventParamU5BU5D_tE887E3E558D9582B1E010B50353489E1D3CA4DA8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC, ____items_1)); }
	inline AnalyticsEventParamU5BU5D_tE887E3E558D9582B1E010B50353489E1D3CA4DA8* get__items_1() const { return ____items_1; }
	inline AnalyticsEventParamU5BU5D_tE887E3E558D9582B1E010B50353489E1D3CA4DA8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AnalyticsEventParamU5BU5D_tE887E3E558D9582B1E010B50353489E1D3CA4DA8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AnalyticsEventParamU5BU5D_tE887E3E558D9582B1E010B50353489E1D3CA4DA8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC_StaticFields, ____emptyArray_5)); }
	inline AnalyticsEventParamU5BU5D_tE887E3E558D9582B1E010B50353489E1D3CA4DA8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AnalyticsEventParamU5BU5D_tE887E3E558D9582B1E010B50353489E1D3CA4DA8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AnalyticsEventParamU5BU5D_tE887E3E558D9582B1E010B50353489E1D3CA4DA8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TBDC0AB64C659F7EF72C612D8FE61EB51998A25BC_H
#ifndef LIST_1_T4C852AB44496D4C76641389C3D0EBD3DBA647E5C_H
#define LIST_1_T4C852AB44496D4C76641389C3D0EBD3DBA647E5C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty_FieldWithTarget>
struct  List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FieldWithTargetU5BU5D_t45BC3A5501D9924ECA9C153D715D7394A62E4599* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C, ____items_1)); }
	inline FieldWithTargetU5BU5D_t45BC3A5501D9924ECA9C153D715D7394A62E4599* get__items_1() const { return ____items_1; }
	inline FieldWithTargetU5BU5D_t45BC3A5501D9924ECA9C153D715D7394A62E4599** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FieldWithTargetU5BU5D_t45BC3A5501D9924ECA9C153D715D7394A62E4599* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FieldWithTargetU5BU5D_t45BC3A5501D9924ECA9C153D715D7394A62E4599* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C_StaticFields, ____emptyArray_5)); }
	inline FieldWithTargetU5BU5D_t45BC3A5501D9924ECA9C153D715D7394A62E4599* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FieldWithTargetU5BU5D_t45BC3A5501D9924ECA9C153D715D7394A62E4599** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FieldWithTargetU5BU5D_t45BC3A5501D9924ECA9C153D715D7394A62E4599* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4C852AB44496D4C76641389C3D0EBD3DBA647E5C_H
#ifndef LIST_1_T413CDD0A3245F380CAD81A63DCBEE90784EDDAF9_H
#define LIST_1_T413CDD0A3245F380CAD81A63DCBEE90784EDDAF9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>
struct  List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TriggerRuleU5BU5D_tB26F52418406F2B72112C107DAAA6B7DE27B8DEF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9, ____items_1)); }
	inline TriggerRuleU5BU5D_tB26F52418406F2B72112C107DAAA6B7DE27B8DEF* get__items_1() const { return ____items_1; }
	inline TriggerRuleU5BU5D_tB26F52418406F2B72112C107DAAA6B7DE27B8DEF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TriggerRuleU5BU5D_tB26F52418406F2B72112C107DAAA6B7DE27B8DEF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TriggerRuleU5BU5D_tB26F52418406F2B72112C107DAAA6B7DE27B8DEF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9_StaticFields, ____emptyArray_5)); }
	inline TriggerRuleU5BU5D_tB26F52418406F2B72112C107DAAA6B7DE27B8DEF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TriggerRuleU5BU5D_tB26F52418406F2B72112C107DAAA6B7DE27B8DEF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TriggerRuleU5BU5D_tB26F52418406F2B72112C107DAAA6B7DE27B8DEF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T413CDD0A3245F380CAD81A63DCBEE90784EDDAF9_H
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
#ifndef ANALYTICSEVENTPARAMLISTCONTAINER_T7D4BF3CFE498BFBF86B536FDBA80D8F80037569F_H
#define ANALYTICSEVENTPARAMLISTCONTAINER_T7D4BF3CFE498BFBF86B536FDBA80D8F80037569F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsEventParamListContainer
struct  AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam> UnityEngine.Analytics.AnalyticsEventParamListContainer::m_Parameters
	List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * ___m_Parameters_0;

public:
	inline static int32_t get_offset_of_m_Parameters_0() { return static_cast<int32_t>(offsetof(AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F, ___m_Parameters_0)); }
	inline List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * get_m_Parameters_0() const { return ___m_Parameters_0; }
	inline List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC ** get_address_of_m_Parameters_0() { return &___m_Parameters_0; }
	inline void set_m_Parameters_0(List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * value)
	{
		___m_Parameters_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Parameters_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSEVENTPARAMLISTCONTAINER_T7D4BF3CFE498BFBF86B536FDBA80D8F80037569F_H
#ifndef U3CTIMEDTRIGGERU3EC__ITERATOR0_TC423D57544229E73A4C71483BD195FDF77B05344_H
#define U3CTIMEDTRIGGERU3EC__ITERATOR0_TC423D57544229E73A4C71483BD195FDF77B05344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsEventTracker_<TimedTrigger>c__Iterator0
struct  U3CTimedTriggerU3Ec__Iterator0_tC423D57544229E73A4C71483BD195FDF77B05344  : public RuntimeObject
{
public:
	// UnityEngine.Analytics.AnalyticsEventTracker UnityEngine.Analytics.AnalyticsEventTracker_<TimedTrigger>c__Iterator0::U24this
	AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * ___U24this_0;
	// System.Object UnityEngine.Analytics.AnalyticsEventTracker_<TimedTrigger>c__Iterator0::U24current
	RuntimeObject * ___U24current_1;
	// System.Boolean UnityEngine.Analytics.AnalyticsEventTracker_<TimedTrigger>c__Iterator0::U24disposing
	bool ___U24disposing_2;
	// System.Int32 UnityEngine.Analytics.AnalyticsEventTracker_<TimedTrigger>c__Iterator0::U24PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CTimedTriggerU3Ec__Iterator0_tC423D57544229E73A4C71483BD195FDF77B05344, ___U24this_0)); }
	inline AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * get_U24this_0() const { return ___U24this_0; }
	inline AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CTimedTriggerU3Ec__Iterator0_tC423D57544229E73A4C71483BD195FDF77B05344, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CTimedTriggerU3Ec__Iterator0_tC423D57544229E73A4C71483BD195FDF77B05344, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CTimedTriggerU3Ec__Iterator0_tC423D57544229E73A4C71483BD195FDF77B05344, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTIMEDTRIGGERU3EC__ITERATOR0_TC423D57544229E73A4C71483BD195FDF77B05344_H
#ifndef ANALYTICSEVENTTRACKERSETTINGS_TC0D48832DBA374CA53343838FE8FFBAA25A72DD1_H
#define ANALYTICSEVENTTRACKERSETTINGS_TC0D48832DBA374CA53343838FE8FFBAA25A72DD1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsEventTrackerSettings
struct  AnalyticsEventTrackerSettings_tC0D48832DBA374CA53343838FE8FFBAA25A72DD1  : public RuntimeObject
{
public:

public:
};

struct AnalyticsEventTrackerSettings_tC0D48832DBA374CA53343838FE8FFBAA25A72DD1_StaticFields
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsEventTrackerSettings::paramCountMax
	int32_t ___paramCountMax_0;
	// System.Int32 UnityEngine.Analytics.AnalyticsEventTrackerSettings::triggerRuleCountMax
	int32_t ___triggerRuleCountMax_1;

public:
	inline static int32_t get_offset_of_paramCountMax_0() { return static_cast<int32_t>(offsetof(AnalyticsEventTrackerSettings_tC0D48832DBA374CA53343838FE8FFBAA25A72DD1_StaticFields, ___paramCountMax_0)); }
	inline int32_t get_paramCountMax_0() const { return ___paramCountMax_0; }
	inline int32_t* get_address_of_paramCountMax_0() { return &___paramCountMax_0; }
	inline void set_paramCountMax_0(int32_t value)
	{
		___paramCountMax_0 = value;
	}

	inline static int32_t get_offset_of_triggerRuleCountMax_1() { return static_cast<int32_t>(offsetof(AnalyticsEventTrackerSettings_tC0D48832DBA374CA53343838FE8FFBAA25A72DD1_StaticFields, ___triggerRuleCountMax_1)); }
	inline int32_t get_triggerRuleCountMax_1() const { return ___triggerRuleCountMax_1; }
	inline int32_t* get_address_of_triggerRuleCountMax_1() { return &___triggerRuleCountMax_1; }
	inline void set_triggerRuleCountMax_1(int32_t value)
	{
		___triggerRuleCountMax_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSEVENTTRACKERSETTINGS_TC0D48832DBA374CA53343838FE8FFBAA25A72DD1_H
#ifndef STANDARDEVENTPAYLOAD_TBAC66EBBF5501C050F51656E5B137BF3604A24D4_H
#define STANDARDEVENTPAYLOAD_TBAC66EBBF5501C050F51656E5B137BF3604A24D4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.StandardEventPayload
struct  StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Analytics.StandardEventPayload::m_IsEventExpanded
	bool ___m_IsEventExpanded_0;
	// System.String UnityEngine.Analytics.StandardEventPayload::m_StandardEventType
	String_t* ___m_StandardEventType_1;
	// System.Type UnityEngine.Analytics.StandardEventPayload::standardEventType
	Type_t * ___standardEventType_2;
	// UnityEngine.Analytics.AnalyticsEventParamListContainer UnityEngine.Analytics.StandardEventPayload::m_Parameters
	AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F * ___m_Parameters_3;
	// System.String UnityEngine.Analytics.StandardEventPayload::m_Name
	String_t* ___m_Name_5;

public:
	inline static int32_t get_offset_of_m_IsEventExpanded_0() { return static_cast<int32_t>(offsetof(StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4, ___m_IsEventExpanded_0)); }
	inline bool get_m_IsEventExpanded_0() const { return ___m_IsEventExpanded_0; }
	inline bool* get_address_of_m_IsEventExpanded_0() { return &___m_IsEventExpanded_0; }
	inline void set_m_IsEventExpanded_0(bool value)
	{
		___m_IsEventExpanded_0 = value;
	}

	inline static int32_t get_offset_of_m_StandardEventType_1() { return static_cast<int32_t>(offsetof(StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4, ___m_StandardEventType_1)); }
	inline String_t* get_m_StandardEventType_1() const { return ___m_StandardEventType_1; }
	inline String_t** get_address_of_m_StandardEventType_1() { return &___m_StandardEventType_1; }
	inline void set_m_StandardEventType_1(String_t* value)
	{
		___m_StandardEventType_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_StandardEventType_1), value);
	}

	inline static int32_t get_offset_of_standardEventType_2() { return static_cast<int32_t>(offsetof(StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4, ___standardEventType_2)); }
	inline Type_t * get_standardEventType_2() const { return ___standardEventType_2; }
	inline Type_t ** get_address_of_standardEventType_2() { return &___standardEventType_2; }
	inline void set_standardEventType_2(Type_t * value)
	{
		___standardEventType_2 = value;
		Il2CppCodeGenWriteBarrier((&___standardEventType_2), value);
	}

	inline static int32_t get_offset_of_m_Parameters_3() { return static_cast<int32_t>(offsetof(StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4, ___m_Parameters_3)); }
	inline AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F * get_m_Parameters_3() const { return ___m_Parameters_3; }
	inline AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F ** get_address_of_m_Parameters_3() { return &___m_Parameters_3; }
	inline void set_m_Parameters_3(AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F * value)
	{
		___m_Parameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Parameters_3), value);
	}

	inline static int32_t get_offset_of_m_Name_5() { return static_cast<int32_t>(offsetof(StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4, ___m_Name_5)); }
	inline String_t* get_m_Name_5() const { return ___m_Name_5; }
	inline String_t** get_address_of_m_Name_5() { return &___m_Name_5; }
	inline void set_m_Name_5(String_t* value)
	{
		___m_Name_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_5), value);
	}
};

struct StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Analytics.StandardEventPayload::m_EventData
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___m_EventData_4;

public:
	inline static int32_t get_offset_of_m_EventData_4() { return static_cast<int32_t>(offsetof(StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4_StaticFields, ___m_EventData_4)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_m_EventData_4() const { return ___m_EventData_4; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_m_EventData_4() { return &___m_EventData_4; }
	inline void set_m_EventData_4(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___m_EventData_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventData_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDARDEVENTPAYLOAD_TBAC66EBBF5501C050F51656E5B137BF3604A24D4_H
#ifndef TRACKABLEPROPERTY_T65710B554EA8615F731300E23712A63A0686B460_H
#define TRACKABLEPROPERTY_T65710B554EA8615F731300E23712A63A0686B460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableProperty
struct  TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty_FieldWithTarget> UnityEngine.Analytics.TrackableProperty::m_Fields
	List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C * ___m_Fields_1;

public:
	inline static int32_t get_offset_of_m_Fields_1() { return static_cast<int32_t>(offsetof(TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460, ___m_Fields_1)); }
	inline List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C * get_m_Fields_1() const { return ___m_Fields_1; }
	inline List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C ** get_address_of_m_Fields_1() { return &___m_Fields_1; }
	inline void set_m_Fields_1(List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C * value)
	{
		___m_Fields_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Fields_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEPROPERTY_T65710B554EA8615F731300E23712A63A0686B460_H
#ifndef FIELDWITHTARGET_T29B71F4D8A138192D5B62EF01F694FC88B460B75_H
#define FIELDWITHTARGET_T29B71F4D8A138192D5B62EF01F694FC88B460B75_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableProperty_FieldWithTarget
struct  FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75  : public RuntimeObject
{
public:
	// System.String UnityEngine.Analytics.TrackableProperty_FieldWithTarget::m_ParamName
	String_t* ___m_ParamName_0;
	// UnityEngine.Object UnityEngine.Analytics.TrackableProperty_FieldWithTarget::m_Target
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___m_Target_1;
	// System.String UnityEngine.Analytics.TrackableProperty_FieldWithTarget::m_FieldPath
	String_t* ___m_FieldPath_2;
	// System.String UnityEngine.Analytics.TrackableProperty_FieldWithTarget::m_TypeString
	String_t* ___m_TypeString_3;
	// System.Boolean UnityEngine.Analytics.TrackableProperty_FieldWithTarget::m_DoStatic
	bool ___m_DoStatic_4;
	// System.String UnityEngine.Analytics.TrackableProperty_FieldWithTarget::m_StaticString
	String_t* ___m_StaticString_5;

public:
	inline static int32_t get_offset_of_m_ParamName_0() { return static_cast<int32_t>(offsetof(FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75, ___m_ParamName_0)); }
	inline String_t* get_m_ParamName_0() const { return ___m_ParamName_0; }
	inline String_t** get_address_of_m_ParamName_0() { return &___m_ParamName_0; }
	inline void set_m_ParamName_0(String_t* value)
	{
		___m_ParamName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParamName_0), value);
	}

	inline static int32_t get_offset_of_m_Target_1() { return static_cast<int32_t>(offsetof(FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75, ___m_Target_1)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_m_Target_1() const { return ___m_Target_1; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_m_Target_1() { return &___m_Target_1; }
	inline void set_m_Target_1(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___m_Target_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_1), value);
	}

	inline static int32_t get_offset_of_m_FieldPath_2() { return static_cast<int32_t>(offsetof(FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75, ___m_FieldPath_2)); }
	inline String_t* get_m_FieldPath_2() const { return ___m_FieldPath_2; }
	inline String_t** get_address_of_m_FieldPath_2() { return &___m_FieldPath_2; }
	inline void set_m_FieldPath_2(String_t* value)
	{
		___m_FieldPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_FieldPath_2), value);
	}

	inline static int32_t get_offset_of_m_TypeString_3() { return static_cast<int32_t>(offsetof(FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75, ___m_TypeString_3)); }
	inline String_t* get_m_TypeString_3() const { return ___m_TypeString_3; }
	inline String_t** get_address_of_m_TypeString_3() { return &___m_TypeString_3; }
	inline void set_m_TypeString_3(String_t* value)
	{
		___m_TypeString_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeString_3), value);
	}

	inline static int32_t get_offset_of_m_DoStatic_4() { return static_cast<int32_t>(offsetof(FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75, ___m_DoStatic_4)); }
	inline bool get_m_DoStatic_4() const { return ___m_DoStatic_4; }
	inline bool* get_address_of_m_DoStatic_4() { return &___m_DoStatic_4; }
	inline void set_m_DoStatic_4(bool value)
	{
		___m_DoStatic_4 = value;
	}

	inline static int32_t get_offset_of_m_StaticString_5() { return static_cast<int32_t>(offsetof(FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75, ___m_StaticString_5)); }
	inline String_t* get_m_StaticString_5() const { return ___m_StaticString_5; }
	inline String_t** get_address_of_m_StaticString_5() { return &___m_StaticString_5; }
	inline void set_m_StaticString_5(String_t* value)
	{
		___m_StaticString_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_StaticString_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDWITHTARGET_T29B71F4D8A138192D5B62EF01F694FC88B460B75_H
#ifndef TRACKABLEPROPERTYBASE_T389C506235A1BBF399DC5F41267AA2EEE24B0471_H
#define TRACKABLEPROPERTYBASE_T389C506235A1BBF399DC5F41267AA2EEE24B0471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackablePropertyBase
struct  TrackablePropertyBase_t389C506235A1BBF399DC5F41267AA2EEE24B0471  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Analytics.TrackablePropertyBase::m_Target
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___m_Target_0;
	// System.String UnityEngine.Analytics.TrackablePropertyBase::m_Path
	String_t* ___m_Path_1;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(TrackablePropertyBase_t389C506235A1BBF399DC5F41267AA2EEE24B0471, ___m_Target_0)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(TrackablePropertyBase_t389C506235A1BBF399DC5F41267AA2EEE24B0471, ___m_Path_1)); }
	inline String_t* get_m_Path_1() const { return ___m_Path_1; }
	inline String_t** get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(String_t* value)
	{
		___m_Path_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Path_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEPROPERTYBASE_T389C506235A1BBF399DC5F41267AA2EEE24B0471_H
#ifndef TRACKABLETRIGGER_T1AF0FCBCA5B4245444E306EE3A29FA78646252EF_H
#define TRACKABLETRIGGER_T1AF0FCBCA5B4245444E306EE3A29FA78646252EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableTrigger
struct  TrackableTrigger_t1AF0FCBCA5B4245444E306EE3A29FA78646252EF  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityEngine.Analytics.TrackableTrigger::m_Target
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_Target_0;
	// System.String UnityEngine.Analytics.TrackableTrigger::m_MethodPath
	String_t* ___m_MethodPath_1;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(TrackableTrigger_t1AF0FCBCA5B4245444E306EE3A29FA78646252EF, ___m_Target_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_Target_0() const { return ___m_Target_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodPath_1() { return static_cast<int32_t>(offsetof(TrackableTrigger_t1AF0FCBCA5B4245444E306EE3A29FA78646252EF, ___m_MethodPath_1)); }
	inline String_t* get_m_MethodPath_1() const { return ___m_MethodPath_1; }
	inline String_t** get_address_of_m_MethodPath_1() { return &___m_MethodPath_1; }
	inline void set_m_MethodPath_1(String_t* value)
	{
		___m_MethodPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodPath_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLETRIGGER_T1AF0FCBCA5B4245444E306EE3A29FA78646252EF_H
#ifndef TRIGGERLISTCONTAINER_T17A33E4C209E99BC294058F7052EA65F5D4DCA18_H
#define TRIGGERLISTCONTAINER_T17A33E4C209E99BC294058F7052EA65F5D4DCA18_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerListContainer
struct  TriggerListContainer_t17A33E4C209E99BC294058F7052EA65F5D4DCA18  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule> UnityEngine.Analytics.TriggerListContainer::m_Rules
	List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 * ___m_Rules_0;

public:
	inline static int32_t get_offset_of_m_Rules_0() { return static_cast<int32_t>(offsetof(TriggerListContainer_t17A33E4C209E99BC294058F7052EA65F5D4DCA18, ___m_Rules_0)); }
	inline List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 * get_m_Rules_0() const { return ___m_Rules_0; }
	inline List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 ** get_address_of_m_Rules_0() { return &___m_Rules_0; }
	inline void set_m_Rules_0(List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 * value)
	{
		___m_Rules_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rules_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERLISTCONTAINER_T17A33E4C209E99BC294058F7052EA65F5D4DCA18_H
#ifndef TRIGGERMETHOD_TCED6C0B94B1F4D290BCAC91643FB836CE9C9CBCC_H
#define TRIGGERMETHOD_TCED6C0B94B1F4D290BCAC91643FB836CE9C9CBCC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerMethod
struct  TriggerMethod_tCED6C0B94B1F4D290BCAC91643FB836CE9C9CBCC  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERMETHOD_TCED6C0B94B1F4D290BCAC91643FB836CE9C9CBCC_H
#ifndef YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#define YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
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
#ifndef ENUMERATOR_T3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A_H
#define ENUMERATOR_T3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator<System.Object,System.Object>
struct  Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::dictionary
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::currentKey
	RuntimeObject * ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A, ___dictionary_0)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A, ___currentKey_3)); }
	inline RuntimeObject * get_currentKey_3() const { return ___currentKey_3; }
	inline RuntimeObject ** get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(RuntimeObject * value)
	{
		___currentKey_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentKey_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A_H
#ifndef ENUMERATOR_T1E6A150A0DF57630B199E32A6FA2FE393B6DD17D_H
#define ENUMERATOR_T1E6A150A0DF57630B199E32A6FA2FE393B6DD17D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator<System.String,System.Collections.Generic.List`1<System.Boolean>>
struct  Enumerator_t1E6A150A0DF57630B199E32A6FA2FE393B6DD17D 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::dictionary
	Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::currentKey
	String_t* ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1E6A150A0DF57630B199E32A6FA2FE393B6DD17D, ___dictionary_0)); }
	inline Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t1E6A150A0DF57630B199E32A6FA2FE393B6DD17D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t1E6A150A0DF57630B199E32A6FA2FE393B6DD17D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t1E6A150A0DF57630B199E32A6FA2FE393B6DD17D, ___currentKey_3)); }
	inline String_t* get_currentKey_3() const { return ___currentKey_3; }
	inline String_t** get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(String_t* value)
	{
		___currentKey_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentKey_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1E6A150A0DF57630B199E32A6FA2FE393B6DD17D_H
#ifndef ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#define ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifndef ENUMERATOR_T6F1054F2AD106A6B5B2B2E98984F5F25C5D53228_H
#define ENUMERATOR_T6F1054F2AD106A6B5B2B2E98984F5F25C5D53228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<UnityEngine.Analytics.TrackableProperty_FieldWithTarget>
struct  Enumerator_t6F1054F2AD106A6B5B2B2E98984F5F25C5D53228 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t6F1054F2AD106A6B5B2B2E98984F5F25C5D53228, ___list_0)); }
	inline List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C * get_list_0() const { return ___list_0; }
	inline List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6F1054F2AD106A6B5B2B2E98984F5F25C5D53228, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6F1054F2AD106A6B5B2B2E98984F5F25C5D53228, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t6F1054F2AD106A6B5B2B2E98984F5F25C5D53228, ___current_3)); }
	inline FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * get_current_3() const { return ___current_3; }
	inline FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T6F1054F2AD106A6B5B2B2E98984F5F25C5D53228_H
#ifndef ENUMERATOR_TED8C3B0D954CCDF1FE79D20CA2BD98284017F40E_H
#define ENUMERATOR_TED8C3B0D954CCDF1FE79D20CA2BD98284017F40E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<UnityEngine.Analytics.TriggerRule>
struct  Enumerator_tED8C3B0D954CCDF1FE79D20CA2BD98284017F40E 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tED8C3B0D954CCDF1FE79D20CA2BD98284017F40E, ___list_0)); }
	inline List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 * get_list_0() const { return ___list_0; }
	inline List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tED8C3B0D954CCDF1FE79D20CA2BD98284017F40E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tED8C3B0D954CCDF1FE79D20CA2BD98284017F40E, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tED8C3B0D954CCDF1FE79D20CA2BD98284017F40E, ___current_3)); }
	inline TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * get_current_3() const { return ___current_3; }
	inline TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TED8C3B0D954CCDF1FE79D20CA2BD98284017F40E_H
#ifndef DECIMAL_T44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_H
#define DECIMAL_T44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((&___Powers10_6), value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_H
#ifndef DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#define DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
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
#ifndef INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#define INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
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
#ifndef INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#define INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
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
#ifndef UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#define UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
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
#ifndef TRACKABLEFIELD_TB97394F33CE23BAA3E2AC230E487A7FA8BE42B53_H
#define TRACKABLEFIELD_TB97394F33CE23BAA3E2AC230E487A7FA8BE42B53_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableField
struct  TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53  : public TrackablePropertyBase_t389C506235A1BBF399DC5F41267AA2EEE24B0471
{
public:
	// System.String[] UnityEngine.Analytics.TrackableField::m_ValidTypeNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_ValidTypeNames_2;
	// System.String UnityEngine.Analytics.TrackableField::m_Type
	String_t* ___m_Type_3;
	// System.String UnityEngine.Analytics.TrackableField::m_EnumType
	String_t* ___m_EnumType_4;

public:
	inline static int32_t get_offset_of_m_ValidTypeNames_2() { return static_cast<int32_t>(offsetof(TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53, ___m_ValidTypeNames_2)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_ValidTypeNames_2() const { return ___m_ValidTypeNames_2; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_ValidTypeNames_2() { return &___m_ValidTypeNames_2; }
	inline void set_m_ValidTypeNames_2(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_ValidTypeNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ValidTypeNames_2), value);
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53, ___m_Type_3)); }
	inline String_t* get_m_Type_3() const { return ___m_Type_3; }
	inline String_t** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(String_t* value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type_3), value);
	}

	inline static int32_t get_offset_of_m_EnumType_4() { return static_cast<int32_t>(offsetof(TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53, ___m_EnumType_4)); }
	inline String_t* get_m_EnumType_4() const { return ___m_EnumType_4; }
	inline String_t** get_address_of_m_EnumType_4() { return &___m_EnumType_4; }
	inline void set_m_EnumType_4(String_t* value)
	{
		___m_EnumType_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EnumType_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEFIELD_TB97394F33CE23BAA3E2AC230E487A7FA8BE42B53_H
#ifndef WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#define WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
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
#ifndef NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#define NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
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
#ifndef REQUIREMENTTYPE_TAF5AFE0969799C398CC3024380361DDC33204639_H
#define REQUIREMENTTYPE_TAF5AFE0969799C398CC3024380361DDC33204639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsEventParam_RequirementType
struct  RequirementType_tAF5AFE0969799C398CC3024380361DDC33204639 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsEventParam_RequirementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RequirementType_tAF5AFE0969799C398CC3024380361DDC33204639, ___value___2)); }
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
#endif // REQUIREMENTTYPE_TAF5AFE0969799C398CC3024380361DDC33204639_H
#ifndef ANALYTICSRESULT_TD85E76975F9D738CA8110F664D5482A8608D131C_H
#define ANALYTICSRESULT_TD85E76975F9D738CA8110F664D5482A8608D131C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsResult
struct  AnalyticsResult_tD85E76975F9D738CA8110F664D5482A8608D131C 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnalyticsResult_tD85E76975F9D738CA8110F664D5482A8608D131C, ___value___2)); }
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
#endif // ANALYTICSRESULT_TD85E76975F9D738CA8110F664D5482A8608D131C_H
#ifndef TRIGGER_TE48C8E8099DDAA28D99213C038DE8B3639A76F51_H
#define TRIGGER_TE48C8E8099DDAA28D99213C038DE8B3639A76F51_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsTracker_Trigger
struct  Trigger_tE48C8E8099DDAA28D99213C038DE8B3639A76F51 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsTracker_Trigger::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Trigger_tE48C8E8099DDAA28D99213C038DE8B3639A76F51, ___value___2)); }
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
#endif // TRIGGER_TE48C8E8099DDAA28D99213C038DE8B3639A76F51_H
#ifndef TRIGGERBOOL_TF1A5E9125A1C91788904A590AE17F7A49AAD0885_H
#define TRIGGERBOOL_TF1A5E9125A1C91788904A590AE17F7A49AAD0885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerBool
struct  TriggerBool_tF1A5E9125A1C91788904A590AE17F7A49AAD0885 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerBool::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TriggerBool_tF1A5E9125A1C91788904A590AE17F7A49AAD0885, ___value___2)); }
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
#endif // TRIGGERBOOL_TF1A5E9125A1C91788904A590AE17F7A49AAD0885_H
#ifndef TRIGGERLIFECYCLEEVENT_TBA09161C0DDE55D0D825A5DED406E2288182D819_H
#define TRIGGERLIFECYCLEEVENT_TBA09161C0DDE55D0D825A5DED406E2288182D819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerLifecycleEvent
struct  TriggerLifecycleEvent_tBA09161C0DDE55D0D825A5DED406E2288182D819 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerLifecycleEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TriggerLifecycleEvent_tBA09161C0DDE55D0D825A5DED406E2288182D819, ___value___2)); }
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
#endif // TRIGGERLIFECYCLEEVENT_TBA09161C0DDE55D0D825A5DED406E2288182D819_H
#ifndef TRIGGEROPERATOR_TD47D61D4AC2DABFA3C9A97915D3292FC405E85AF_H
#define TRIGGEROPERATOR_TD47D61D4AC2DABFA3C9A97915D3292FC405E85AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerOperator
struct  TriggerOperator_tD47D61D4AC2DABFA3C9A97915D3292FC405E85AF 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerOperator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TriggerOperator_tD47D61D4AC2DABFA3C9A97915D3292FC405E85AF, ___value___2)); }
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
#endif // TRIGGEROPERATOR_TD47D61D4AC2DABFA3C9A97915D3292FC405E85AF_H
#ifndef TRIGGERTYPE_T4A88F34AF7DD7530F4292517404982717DA6F799_H
#define TRIGGERTYPE_T4A88F34AF7DD7530F4292517404982717DA6F799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerType
struct  TriggerType_t4A88F34AF7DD7530F4292517404982717DA6F799 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TriggerType_t4A88F34AF7DD7530F4292517404982717DA6F799, ___value___2)); }
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
#endif // TRIGGERTYPE_T4A88F34AF7DD7530F4292517404982717DA6F799_H
#ifndef PROPERTYTYPE_T65D5C5244A589ADDF97B13B1A3D7EF98E09A877F_H
#define PROPERTYTYPE_T65D5C5244A589ADDF97B13B1A3D7EF98E09A877F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.ValueProperty_PropertyType
struct  PropertyType_t65D5C5244A589ADDF97B13B1A3D7EF98E09A877F 
{
public:
	// System.Int32 UnityEngine.Analytics.ValueProperty_PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_t65D5C5244A589ADDF97B13B1A3D7EF98E09A877F, ___value___2)); }
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
#endif // PROPERTYTYPE_T65D5C5244A589ADDF97B13B1A3D7EF98E09A877F_H
#ifndef COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#define COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
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
#ifndef ANALYTICSEVENTPARAM_T51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA_H
#define ANALYTICSEVENTPARAM_T51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsEventParam
struct  AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA  : public RuntimeObject
{
public:
	// UnityEngine.Analytics.AnalyticsEventParam_RequirementType UnityEngine.Analytics.AnalyticsEventParam::m_RequirementType
	int32_t ___m_RequirementType_0;
	// System.String UnityEngine.Analytics.AnalyticsEventParam::m_GroupID
	String_t* ___m_GroupID_1;
	// System.String UnityEngine.Analytics.AnalyticsEventParam::m_Tooltip
	String_t* ___m_Tooltip_2;
	// System.String UnityEngine.Analytics.AnalyticsEventParam::m_Name
	String_t* ___m_Name_3;
	// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.AnalyticsEventParam::m_Value
	ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * ___m_Value_4;

public:
	inline static int32_t get_offset_of_m_RequirementType_0() { return static_cast<int32_t>(offsetof(AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA, ___m_RequirementType_0)); }
	inline int32_t get_m_RequirementType_0() const { return ___m_RequirementType_0; }
	inline int32_t* get_address_of_m_RequirementType_0() { return &___m_RequirementType_0; }
	inline void set_m_RequirementType_0(int32_t value)
	{
		___m_RequirementType_0 = value;
	}

	inline static int32_t get_offset_of_m_GroupID_1() { return static_cast<int32_t>(offsetof(AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA, ___m_GroupID_1)); }
	inline String_t* get_m_GroupID_1() const { return ___m_GroupID_1; }
	inline String_t** get_address_of_m_GroupID_1() { return &___m_GroupID_1; }
	inline void set_m_GroupID_1(String_t* value)
	{
		___m_GroupID_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_GroupID_1), value);
	}

	inline static int32_t get_offset_of_m_Tooltip_2() { return static_cast<int32_t>(offsetof(AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA, ___m_Tooltip_2)); }
	inline String_t* get_m_Tooltip_2() const { return ___m_Tooltip_2; }
	inline String_t** get_address_of_m_Tooltip_2() { return &___m_Tooltip_2; }
	inline void set_m_Tooltip_2(String_t* value)
	{
		___m_Tooltip_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tooltip_2), value);
	}

	inline static int32_t get_offset_of_m_Name_3() { return static_cast<int32_t>(offsetof(AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA, ___m_Name_3)); }
	inline String_t* get_m_Name_3() const { return ___m_Name_3; }
	inline String_t** get_address_of_m_Name_3() { return &___m_Name_3; }
	inline void set_m_Name_3(String_t* value)
	{
		___m_Name_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_3), value);
	}

	inline static int32_t get_offset_of_m_Value_4() { return static_cast<int32_t>(offsetof(AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA, ___m_Value_4)); }
	inline ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * get_m_Value_4() const { return ___m_Value_4; }
	inline ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF ** get_address_of_m_Value_4() { return &___m_Value_4; }
	inline void set_m_Value_4(ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * value)
	{
		___m_Value_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSEVENTPARAM_T51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA_H
#ifndef EVENTTRIGGER_T67721A5D892A8C35A25C3DF66295A085D55D9F71_H
#define EVENTTRIGGER_T67721A5D892A8C35A25C3DF66295A085D55D9F71_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.EventTrigger
struct  EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Analytics.EventTrigger::m_IsTriggerExpanded
	bool ___m_IsTriggerExpanded_0;
	// UnityEngine.Analytics.TriggerType UnityEngine.Analytics.EventTrigger::m_Type
	int32_t ___m_Type_1;
	// UnityEngine.Analytics.TriggerLifecycleEvent UnityEngine.Analytics.EventTrigger::m_LifecycleEvent
	int32_t ___m_LifecycleEvent_2;
	// System.Boolean UnityEngine.Analytics.EventTrigger::m_ApplyRules
	bool ___m_ApplyRules_3;
	// UnityEngine.Analytics.TriggerListContainer UnityEngine.Analytics.EventTrigger::m_Rules
	TriggerListContainer_t17A33E4C209E99BC294058F7052EA65F5D4DCA18 * ___m_Rules_4;
	// UnityEngine.Analytics.TriggerBool UnityEngine.Analytics.EventTrigger::m_TriggerBool
	int32_t ___m_TriggerBool_5;
	// System.Single UnityEngine.Analytics.EventTrigger::m_InitTime
	float ___m_InitTime_6;
	// System.Single UnityEngine.Analytics.EventTrigger::m_RepeatTime
	float ___m_RepeatTime_7;
	// System.Int32 UnityEngine.Analytics.EventTrigger::m_Repetitions
	int32_t ___m_Repetitions_8;
	// System.Int32 UnityEngine.Analytics.EventTrigger::repetitionCount
	int32_t ___repetitionCount_9;
	// UnityEngine.Analytics.EventTrigger_OnTrigger UnityEngine.Analytics.EventTrigger::m_TriggerFunction
	OnTrigger_t15137E7AEE2F88371244BABB916F36896F969636 * ___m_TriggerFunction_10;
	// UnityEngine.Analytics.TriggerMethod UnityEngine.Analytics.EventTrigger::m_Method
	TriggerMethod_tCED6C0B94B1F4D290BCAC91643FB836CE9C9CBCC * ___m_Method_11;

public:
	inline static int32_t get_offset_of_m_IsTriggerExpanded_0() { return static_cast<int32_t>(offsetof(EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71, ___m_IsTriggerExpanded_0)); }
	inline bool get_m_IsTriggerExpanded_0() const { return ___m_IsTriggerExpanded_0; }
	inline bool* get_address_of_m_IsTriggerExpanded_0() { return &___m_IsTriggerExpanded_0; }
	inline void set_m_IsTriggerExpanded_0(bool value)
	{
		___m_IsTriggerExpanded_0 = value;
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_LifecycleEvent_2() { return static_cast<int32_t>(offsetof(EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71, ___m_LifecycleEvent_2)); }
	inline int32_t get_m_LifecycleEvent_2() const { return ___m_LifecycleEvent_2; }
	inline int32_t* get_address_of_m_LifecycleEvent_2() { return &___m_LifecycleEvent_2; }
	inline void set_m_LifecycleEvent_2(int32_t value)
	{
		___m_LifecycleEvent_2 = value;
	}

	inline static int32_t get_offset_of_m_ApplyRules_3() { return static_cast<int32_t>(offsetof(EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71, ___m_ApplyRules_3)); }
	inline bool get_m_ApplyRules_3() const { return ___m_ApplyRules_3; }
	inline bool* get_address_of_m_ApplyRules_3() { return &___m_ApplyRules_3; }
	inline void set_m_ApplyRules_3(bool value)
	{
		___m_ApplyRules_3 = value;
	}

	inline static int32_t get_offset_of_m_Rules_4() { return static_cast<int32_t>(offsetof(EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71, ___m_Rules_4)); }
	inline TriggerListContainer_t17A33E4C209E99BC294058F7052EA65F5D4DCA18 * get_m_Rules_4() const { return ___m_Rules_4; }
	inline TriggerListContainer_t17A33E4C209E99BC294058F7052EA65F5D4DCA18 ** get_address_of_m_Rules_4() { return &___m_Rules_4; }
	inline void set_m_Rules_4(TriggerListContainer_t17A33E4C209E99BC294058F7052EA65F5D4DCA18 * value)
	{
		___m_Rules_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rules_4), value);
	}

	inline static int32_t get_offset_of_m_TriggerBool_5() { return static_cast<int32_t>(offsetof(EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71, ___m_TriggerBool_5)); }
	inline int32_t get_m_TriggerBool_5() const { return ___m_TriggerBool_5; }
	inline int32_t* get_address_of_m_TriggerBool_5() { return &___m_TriggerBool_5; }
	inline void set_m_TriggerBool_5(int32_t value)
	{
		___m_TriggerBool_5 = value;
	}

	inline static int32_t get_offset_of_m_InitTime_6() { return static_cast<int32_t>(offsetof(EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71, ___m_InitTime_6)); }
	inline float get_m_InitTime_6() const { return ___m_InitTime_6; }
	inline float* get_address_of_m_InitTime_6() { return &___m_InitTime_6; }
	inline void set_m_InitTime_6(float value)
	{
		___m_InitTime_6 = value;
	}

	inline static int32_t get_offset_of_m_RepeatTime_7() { return static_cast<int32_t>(offsetof(EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71, ___m_RepeatTime_7)); }
	inline float get_m_RepeatTime_7() const { return ___m_RepeatTime_7; }
	inline float* get_address_of_m_RepeatTime_7() { return &___m_RepeatTime_7; }
	inline void set_m_RepeatTime_7(float value)
	{
		___m_RepeatTime_7 = value;
	}

	inline static int32_t get_offset_of_m_Repetitions_8() { return static_cast<int32_t>(offsetof(EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71, ___m_Repetitions_8)); }
	inline int32_t get_m_Repetitions_8() const { return ___m_Repetitions_8; }
	inline int32_t* get_address_of_m_Repetitions_8() { return &___m_Repetitions_8; }
	inline void set_m_Repetitions_8(int32_t value)
	{
		___m_Repetitions_8 = value;
	}

	inline static int32_t get_offset_of_repetitionCount_9() { return static_cast<int32_t>(offsetof(EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71, ___repetitionCount_9)); }
	inline int32_t get_repetitionCount_9() const { return ___repetitionCount_9; }
	inline int32_t* get_address_of_repetitionCount_9() { return &___repetitionCount_9; }
	inline void set_repetitionCount_9(int32_t value)
	{
		___repetitionCount_9 = value;
	}

	inline static int32_t get_offset_of_m_TriggerFunction_10() { return static_cast<int32_t>(offsetof(EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71, ___m_TriggerFunction_10)); }
	inline OnTrigger_t15137E7AEE2F88371244BABB916F36896F969636 * get_m_TriggerFunction_10() const { return ___m_TriggerFunction_10; }
	inline OnTrigger_t15137E7AEE2F88371244BABB916F36896F969636 ** get_address_of_m_TriggerFunction_10() { return &___m_TriggerFunction_10; }
	inline void set_m_TriggerFunction_10(OnTrigger_t15137E7AEE2F88371244BABB916F36896F969636 * value)
	{
		___m_TriggerFunction_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_TriggerFunction_10), value);
	}

	inline static int32_t get_offset_of_m_Method_11() { return static_cast<int32_t>(offsetof(EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71, ___m_Method_11)); }
	inline TriggerMethod_tCED6C0B94B1F4D290BCAC91643FB836CE9C9CBCC * get_m_Method_11() const { return ___m_Method_11; }
	inline TriggerMethod_tCED6C0B94B1F4D290BCAC91643FB836CE9C9CBCC ** get_address_of_m_Method_11() { return &___m_Method_11; }
	inline void set_m_Method_11(TriggerMethod_tCED6C0B94B1F4D290BCAC91643FB836CE9C9CBCC * value)
	{
		___m_Method_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Method_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTTRIGGER_T67721A5D892A8C35A25C3DF66295A085D55D9F71_H
#ifndef TRIGGERRULE_T032F452757ED356B9A01239A0ABF4A5B502F5083_H
#define TRIGGERRULE_T032F452757ED356B9A01239A0ABF4A5B502F5083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerRule
struct  TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083  : public RuntimeObject
{
public:
	// UnityEngine.Analytics.TrackableField UnityEngine.Analytics.TriggerRule::m_Target
	TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 * ___m_Target_0;
	// UnityEngine.Analytics.TriggerOperator UnityEngine.Analytics.TriggerRule::m_Operator
	int32_t ___m_Operator_1;
	// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.TriggerRule::m_Value
	ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * ___m_Value_2;
	// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.TriggerRule::m_Value2
	ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * ___m_Value2_3;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083, ___m_Target_0)); }
	inline TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 * get_m_Target_0() const { return ___m_Target_0; }
	inline TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_Operator_1() { return static_cast<int32_t>(offsetof(TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083, ___m_Operator_1)); }
	inline int32_t get_m_Operator_1() const { return ___m_Operator_1; }
	inline int32_t* get_address_of_m_Operator_1() { return &___m_Operator_1; }
	inline void set_m_Operator_1(int32_t value)
	{
		___m_Operator_1 = value;
	}

	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083, ___m_Value_2)); }
	inline ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * get_m_Value_2() const { return ___m_Value_2; }
	inline ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF ** get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * value)
	{
		___m_Value_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value_2), value);
	}

	inline static int32_t get_offset_of_m_Value2_3() { return static_cast<int32_t>(offsetof(TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083, ___m_Value2_3)); }
	inline ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * get_m_Value2_3() const { return ___m_Value2_3; }
	inline ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF ** get_address_of_m_Value2_3() { return &___m_Value2_3; }
	inline void set_m_Value2_3(ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * value)
	{
		___m_Value2_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value2_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERRULE_T032F452757ED356B9A01239A0ABF4A5B502F5083_H
#ifndef VALUEPROPERTY_T3DF56B991F3DE57DEC98862E6E20EA53DDE821BF_H
#define VALUEPROPERTY_T3DF56B991F3DE57DEC98862E6E20EA53DDE821BF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.ValueProperty
struct  ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_EditingCustomValue
	bool ___m_EditingCustomValue_0;
	// System.Int32 UnityEngine.Analytics.ValueProperty::m_PopupIndex
	int32_t ___m_PopupIndex_1;
	// System.String UnityEngine.Analytics.ValueProperty::m_CustomValue
	String_t* ___m_CustomValue_2;
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_FixedType
	bool ___m_FixedType_3;
	// System.String UnityEngine.Analytics.ValueProperty::m_EnumType
	String_t* ___m_EnumType_4;
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_EnumTypeIsCustomizable
	bool ___m_EnumTypeIsCustomizable_5;
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_CanDisable
	bool ___m_CanDisable_6;
	// UnityEngine.Analytics.ValueProperty_PropertyType UnityEngine.Analytics.ValueProperty::m_PropertyType
	int32_t ___m_PropertyType_7;
	// System.String UnityEngine.Analytics.ValueProperty::m_ValueType
	String_t* ___m_ValueType_8;
	// System.String UnityEngine.Analytics.ValueProperty::m_Value
	String_t* ___m_Value_9;
	// UnityEngine.Analytics.TrackableField UnityEngine.Analytics.ValueProperty::m_Target
	TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 * ___m_Target_10;

public:
	inline static int32_t get_offset_of_m_EditingCustomValue_0() { return static_cast<int32_t>(offsetof(ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF, ___m_EditingCustomValue_0)); }
	inline bool get_m_EditingCustomValue_0() const { return ___m_EditingCustomValue_0; }
	inline bool* get_address_of_m_EditingCustomValue_0() { return &___m_EditingCustomValue_0; }
	inline void set_m_EditingCustomValue_0(bool value)
	{
		___m_EditingCustomValue_0 = value;
	}

	inline static int32_t get_offset_of_m_PopupIndex_1() { return static_cast<int32_t>(offsetof(ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF, ___m_PopupIndex_1)); }
	inline int32_t get_m_PopupIndex_1() const { return ___m_PopupIndex_1; }
	inline int32_t* get_address_of_m_PopupIndex_1() { return &___m_PopupIndex_1; }
	inline void set_m_PopupIndex_1(int32_t value)
	{
		___m_PopupIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_CustomValue_2() { return static_cast<int32_t>(offsetof(ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF, ___m_CustomValue_2)); }
	inline String_t* get_m_CustomValue_2() const { return ___m_CustomValue_2; }
	inline String_t** get_address_of_m_CustomValue_2() { return &___m_CustomValue_2; }
	inline void set_m_CustomValue_2(String_t* value)
	{
		___m_CustomValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_CustomValue_2), value);
	}

	inline static int32_t get_offset_of_m_FixedType_3() { return static_cast<int32_t>(offsetof(ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF, ___m_FixedType_3)); }
	inline bool get_m_FixedType_3() const { return ___m_FixedType_3; }
	inline bool* get_address_of_m_FixedType_3() { return &___m_FixedType_3; }
	inline void set_m_FixedType_3(bool value)
	{
		___m_FixedType_3 = value;
	}

	inline static int32_t get_offset_of_m_EnumType_4() { return static_cast<int32_t>(offsetof(ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF, ___m_EnumType_4)); }
	inline String_t* get_m_EnumType_4() const { return ___m_EnumType_4; }
	inline String_t** get_address_of_m_EnumType_4() { return &___m_EnumType_4; }
	inline void set_m_EnumType_4(String_t* value)
	{
		___m_EnumType_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EnumType_4), value);
	}

	inline static int32_t get_offset_of_m_EnumTypeIsCustomizable_5() { return static_cast<int32_t>(offsetof(ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF, ___m_EnumTypeIsCustomizable_5)); }
	inline bool get_m_EnumTypeIsCustomizable_5() const { return ___m_EnumTypeIsCustomizable_5; }
	inline bool* get_address_of_m_EnumTypeIsCustomizable_5() { return &___m_EnumTypeIsCustomizable_5; }
	inline void set_m_EnumTypeIsCustomizable_5(bool value)
	{
		___m_EnumTypeIsCustomizable_5 = value;
	}

	inline static int32_t get_offset_of_m_CanDisable_6() { return static_cast<int32_t>(offsetof(ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF, ___m_CanDisable_6)); }
	inline bool get_m_CanDisable_6() const { return ___m_CanDisable_6; }
	inline bool* get_address_of_m_CanDisable_6() { return &___m_CanDisable_6; }
	inline void set_m_CanDisable_6(bool value)
	{
		___m_CanDisable_6 = value;
	}

	inline static int32_t get_offset_of_m_PropertyType_7() { return static_cast<int32_t>(offsetof(ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF, ___m_PropertyType_7)); }
	inline int32_t get_m_PropertyType_7() const { return ___m_PropertyType_7; }
	inline int32_t* get_address_of_m_PropertyType_7() { return &___m_PropertyType_7; }
	inline void set_m_PropertyType_7(int32_t value)
	{
		___m_PropertyType_7 = value;
	}

	inline static int32_t get_offset_of_m_ValueType_8() { return static_cast<int32_t>(offsetof(ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF, ___m_ValueType_8)); }
	inline String_t* get_m_ValueType_8() const { return ___m_ValueType_8; }
	inline String_t** get_address_of_m_ValueType_8() { return &___m_ValueType_8; }
	inline void set_m_ValueType_8(String_t* value)
	{
		___m_ValueType_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_ValueType_8), value);
	}

	inline static int32_t get_offset_of_m_Value_9() { return static_cast<int32_t>(offsetof(ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF, ___m_Value_9)); }
	inline String_t* get_m_Value_9() const { return ___m_Value_9; }
	inline String_t** get_address_of_m_Value_9() { return &___m_Value_9; }
	inline void set_m_Value_9(String_t* value)
	{
		___m_Value_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value_9), value);
	}

	inline static int32_t get_offset_of_m_Target_10() { return static_cast<int32_t>(offsetof(ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF, ___m_Target_10)); }
	inline TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 * get_m_Target_10() const { return ___m_Target_10; }
	inline TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 ** get_address_of_m_Target_10() { return &___m_Target_10; }
	inline void set_m_Target_10(TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 * value)
	{
		___m_Target_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUEPROPERTY_T3DF56B991F3DE57DEC98862E6E20EA53DDE821BF_H
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
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifndef ONTRIGGER_T15137E7AEE2F88371244BABB916F36896F969636_H
#define ONTRIGGER_T15137E7AEE2F88371244BABB916F36896F969636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.EventTrigger_OnTrigger
struct  OnTrigger_t15137E7AEE2F88371244BABB916F36896F969636  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONTRIGGER_T15137E7AEE2F88371244BABB916F36896F969636_H
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
#ifndef ANALYTICSEVENTTRACKER_TBC593DD7C991E0F59C6CDC519287BAADF38FEB85_H
#define ANALYTICSEVENTTRACKER_TBC593DD7C991E0F59C6CDC519287BAADF38FEB85_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsEventTracker
struct  AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Analytics.EventTrigger UnityEngine.Analytics.AnalyticsEventTracker::m_Trigger
	EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * ___m_Trigger_4;
	// UnityEngine.Analytics.StandardEventPayload UnityEngine.Analytics.AnalyticsEventTracker::m_EventPayload
	StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * ___m_EventPayload_5;

public:
	inline static int32_t get_offset_of_m_Trigger_4() { return static_cast<int32_t>(offsetof(AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85, ___m_Trigger_4)); }
	inline EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * get_m_Trigger_4() const { return ___m_Trigger_4; }
	inline EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 ** get_address_of_m_Trigger_4() { return &___m_Trigger_4; }
	inline void set_m_Trigger_4(EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * value)
	{
		___m_Trigger_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Trigger_4), value);
	}

	inline static int32_t get_offset_of_m_EventPayload_5() { return static_cast<int32_t>(offsetof(AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85, ___m_EventPayload_5)); }
	inline StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * get_m_EventPayload_5() const { return ___m_EventPayload_5; }
	inline StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 ** get_address_of_m_EventPayload_5() { return &___m_EventPayload_5; }
	inline void set_m_EventPayload_5(StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * value)
	{
		___m_EventPayload_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventPayload_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSEVENTTRACKER_TBC593DD7C991E0F59C6CDC519287BAADF38FEB85_H
#ifndef ANALYTICSTRACKER_TAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9_H
#define ANALYTICSTRACKER_TAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsTracker
struct  AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String UnityEngine.Analytics.AnalyticsTracker::m_EventName
	String_t* ___m_EventName_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Analytics.AnalyticsTracker::m_Dict
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___m_Dict_5;
	// System.Int32 UnityEngine.Analytics.AnalyticsTracker::m_PrevDictHash
	int32_t ___m_PrevDictHash_6;
	// UnityEngine.Analytics.TrackableProperty UnityEngine.Analytics.AnalyticsTracker::m_TrackableProperty
	TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460 * ___m_TrackableProperty_7;
	// UnityEngine.Analytics.AnalyticsTracker_Trigger UnityEngine.Analytics.AnalyticsTracker::m_Trigger
	int32_t ___m_Trigger_8;

public:
	inline static int32_t get_offset_of_m_EventName_4() { return static_cast<int32_t>(offsetof(AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9, ___m_EventName_4)); }
	inline String_t* get_m_EventName_4() const { return ___m_EventName_4; }
	inline String_t** get_address_of_m_EventName_4() { return &___m_EventName_4; }
	inline void set_m_EventName_4(String_t* value)
	{
		___m_EventName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventName_4), value);
	}

	inline static int32_t get_offset_of_m_Dict_5() { return static_cast<int32_t>(offsetof(AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9, ___m_Dict_5)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_m_Dict_5() const { return ___m_Dict_5; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_m_Dict_5() { return &___m_Dict_5; }
	inline void set_m_Dict_5(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___m_Dict_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dict_5), value);
	}

	inline static int32_t get_offset_of_m_PrevDictHash_6() { return static_cast<int32_t>(offsetof(AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9, ___m_PrevDictHash_6)); }
	inline int32_t get_m_PrevDictHash_6() const { return ___m_PrevDictHash_6; }
	inline int32_t* get_address_of_m_PrevDictHash_6() { return &___m_PrevDictHash_6; }
	inline void set_m_PrevDictHash_6(int32_t value)
	{
		___m_PrevDictHash_6 = value;
	}

	inline static int32_t get_offset_of_m_TrackableProperty_7() { return static_cast<int32_t>(offsetof(AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9, ___m_TrackableProperty_7)); }
	inline TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460 * get_m_TrackableProperty_7() const { return ___m_TrackableProperty_7; }
	inline TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460 ** get_address_of_m_TrackableProperty_7() { return &___m_TrackableProperty_7; }
	inline void set_m_TrackableProperty_7(TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460 * value)
	{
		___m_TrackableProperty_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_TrackableProperty_7), value);
	}

	inline static int32_t get_offset_of_m_Trigger_8() { return static_cast<int32_t>(offsetof(AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9, ___m_Trigger_8)); }
	inline int32_t get_m_Trigger_8() const { return ___m_Trigger_8; }
	inline int32_t* get_address_of_m_Trigger_8() { return &___m_Trigger_8; }
	inline void set_m_Trigger_8(int32_t value)
	{
		___m_Trigger_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSTRACKER_TAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9_H
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
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m0EC0FF0E4C6FE91D15CEE92696B25109A202B942_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveAt_m1EC5117AD814B97460F8F95D49A428032FE37CBF_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m150C7A13E82800F2BA8CEA6CD8E12ED8FC5D5BDB_gshared (List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m2FC4231C93844B9DB4D4FF8157D061DF9B8FBA03_gshared (List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D * __this, bool p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" IL2CPP_METHOD_ATTR KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * Dictionary_2_get_Keys_m079EE5437EE7D904E9E3F798041C1108B96B3AC3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A  KeyCollection_GetEnumerator_m5818848159146B9275EEBDB34FDE4F00178DB43F_gshared (KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mBAAE32BBA285AF5D6C18DE8C9A5E1A8D8A157BA2_gshared (Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_m8A7FB96FD71D0AB70BA9E12285C291A0085A3ADD_gshared (List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D * __this, bool p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m0A180808394FC206E5870987E67957EE1D9A85E3_gshared (Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m5D6053937D6CD09077A90EB5594628CC48582A58_gshared (Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Trim()
extern "C" IL2CPP_METHOD_ATTR String_t* String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D (String_t* __this, const RuntimeMethod* method);
// System.String UnityEngine.Analytics.ValueProperty::get_propertyValue()
extern "C" IL2CPP_METHOD_ATTR String_t* ValueProperty_get_propertyValue_mD1D5638BF414ED71BCDCC15530EBFB05620E0A17 (ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam>::.ctor()
inline void List_1__ctor_mE6C3ED22D95329042E880DC486456A4DB7BA0358 (List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void UnityEngine.Analytics.EventTrigger::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EventTrigger__ctor_m7ABF456AB791FA644FC46C22030022D7164FD176 (EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.StandardEventPayload::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StandardEventPayload__ctor_mAAB34F27B4601B7CE9F43450F1F7ADBF2BB4AC08 (StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEventTracker::SendEvent()
extern "C" IL2CPP_METHOD_ATTR int32_t AnalyticsEventTracker_SendEvent_m7C29B32FE45B3A004D8027847338326B98B41692 (AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.EventTrigger::Test(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR bool EventTrigger_Test_m795A384D563EEFC1E380857F88B428325507E42C (EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject0, const RuntimeMethod* method);
// UnityEngine.Analytics.StandardEventPayload UnityEngine.Analytics.AnalyticsEventTracker::get_payload()
extern "C" IL2CPP_METHOD_ATTR StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * AnalyticsEventTracker_get_payload_mBE74034CF35305906724B3E6DDF1FBFDED4CA962 (AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * __this, const RuntimeMethod* method);
// UnityEngine.Analytics.TriggerType UnityEngine.Analytics.EventTrigger::get_triggerType()
extern "C" IL2CPP_METHOD_ATTR int32_t EventTrigger_get_triggerType_mAB9135AF347FD24B40DF5C994D9494974FC8EAFE (EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * __this, const RuntimeMethod* method);
// UnityEngine.Analytics.TriggerLifecycleEvent UnityEngine.Analytics.EventTrigger::get_lifecycleEvent()
extern "C" IL2CPP_METHOD_ATTR int32_t EventTrigger_get_lifecycleEvent_m5AAF79F7981D04D84E95B76B85F2527168A0A01D (EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Analytics.AnalyticsEventTracker::TimedTrigger()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsEventTracker_TimedTrigger_m8BEAE18BB1AE5F41BD01302841305D6F38883C2B (AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CTimedTriggerU3Ec__Iterator0__ctor_mEF1550B4900917DFD8D8FB8D1F54AA16A75A6E98 (U3CTimedTriggerU3Ec__Iterator0_tC423D57544229E73A4C71483BD195FDF77B05344 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Analytics.EventTrigger::get_initTime()
extern "C" IL2CPP_METHOD_ATTR float EventTrigger_get_initTime_mB490E4BDFDB2F441B116C0EDBDC7437C428CD8D9 (EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float p0, const RuntimeMethod* method);
// System.Single UnityEngine.Analytics.EventTrigger::get_repeatTime()
extern "C" IL2CPP_METHOD_ATTR float EventTrigger_get_repeatTime_m970DD20ED7C42F245BBD91D71C8FA0560F7BE4F9 (EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Analytics.EventTrigger::get_repetitions()
extern "C" IL2CPP_METHOD_ATTR int32_t EventTrigger_get_repetitions_mC99BA6431B8C06433B1A1AADA9F9D93EAED12861 (EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void UnityEngine.Analytics.TrackableProperty::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TrackableProperty__ctor_mC8A4DC9E6E8FE348512C786CA3B44F2D8444BC69 (TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.AnalyticsTracker::TriggerEvent()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_TriggerEvent_mA2D27D23EE7408D892B825CF5C61D401D3BE5415 (AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.AnalyticsTracker::BuildParameters()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_BuildParameters_mE4B0387CF54871CF591F244DA9F0AEDDEB82969D (AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.AnalyticsTracker::SendEvent()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_SendEvent_mE90F925EE43F64137EAB56AA1A0194DDB2F28B9C (AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9 * __this, const RuntimeMethod* method);
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::CustomEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR int32_t Analytics_CustomEvent_mB0F6DDF5C94D0D6540E427B71E4081F443CA6E02 (String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
inline void Dictionary_2_Clear_m2AB63CDBD2D220F7E1A0FD9B1248CFEF78767A59 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, const RuntimeMethod*))Dictionary_2_Clear_m0EC0FF0E4C6FE91D15CEE92696B25109A202B942_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget> UnityEngine.Analytics.TrackableProperty::get_fields()
extern "C" IL2CPP_METHOD_ATTR List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C * TrackableProperty_get_fields_m0AD99E85D972FD4C116E45208A47A0B082CC7454 (TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::get_Count()
inline int32_t List_1_get_Count_mF2F6CBB3F54138F58FDD30A344E98CA795BDA55C (List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::get_Item(System.Int32)
inline FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * List_1_get_Item_mA14569596BC62A88E55650FC0EE3621EC4C4D769 (List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * (*) (List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// UnityEngine.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_target()
extern "C" IL2CPP_METHOD_ATTR Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * FieldWithTarget_get_target_mB65CD273FE61390F062ACA9A33CCF0DA82ACB745 (FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_doStatic()
extern "C" IL2CPP_METHOD_ATTR bool FieldWithTarget_get_doStatic_mE7B4611802F694F21699B392D1836D7B7294798B (FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * __this, const RuntimeMethod* method);
// System.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::GetValue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * FieldWithTarget_GetValue_m30F2D9AFF48F230DEF3D54F19D37675C2E3F5520 (FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_paramName()
extern "C" IL2CPP_METHOD_ATTR String_t* FieldWithTarget_get_paramName_mDD894385D9EE4C1EB6A03230BA9EC8DED864F230 (FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Analytics.TriggerListContainer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TriggerListContainer__ctor_m035A61847E774852174026A8413CE61EFD4BCE86 (TriggerListContainer_t17A33E4C209E99BC294058F7052EA65F5D4DCA18 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.TriggerRule::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TriggerRule__ctor_mDA8547EA21067DC1D7AA9E797D70269D262062E6 (TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule> UnityEngine.Analytics.TriggerListContainer::get_rules()
extern "C" IL2CPP_METHOD_ATTR List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 * TriggerListContainer_get_rules_m8B3E91888F397F4DE8E0A4A66AE8E22CC74164A3 (TriggerListContainer_t17A33E4C209E99BC294058F7052EA65F5D4DCA18 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>::Add(!0)
inline void List_1_Add_m89BEC490ABACE3269A09A9378C655A0BFCC578F9 (List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 * __this, TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 *, TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m6A84DF71A8CC50213A910AF387265FC3C8B7E7DD (List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m1EC5117AD814B97460F8F95D49A428032FE37CBF_gshared)(__this, p0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>::GetEnumerator()
inline Enumerator_tED8C3B0D954CCDF1FE79D20CA2BD98284017F40E  List_1_GetEnumerator_mD99D742FACD4AF08ACB48F68FB2372DF54D85857 (List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tED8C3B0D954CCDF1FE79D20CA2BD98284017F40E  (*) (List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TriggerRule>::get_Current()
inline TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * Enumerator_get_Current_mE214FAC39E4EAD81507D33456CBFFA064C022B63 (Enumerator_tED8C3B0D954CCDF1FE79D20CA2BD98284017F40E * __this, const RuntimeMethod* method)
{
	return ((  TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * (*) (Enumerator_tED8C3B0D954CCDF1FE79D20CA2BD98284017F40E *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// System.Boolean UnityEngine.Analytics.TriggerRule::Test(System.Boolean&,System.String&)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_Test_mAD45B68EE2F787D22DBA507450CDCE9CC3D82445 (TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * __this, bool* ___error0, String_t** ___message1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB (String_t* p0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TriggerRule>::MoveNext()
inline bool Enumerator_MoveNext_m9B2A2689495B9A4D839CC5092B940A6389ED4ECC (Enumerator_tED8C3B0D954CCDF1FE79D20CA2BD98284017F40E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tED8C3B0D954CCDF1FE79D20CA2BD98284017F40E *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TriggerRule>::Dispose()
inline void Enumerator_Dispose_m84F295C1FA045940273F7DFB0FB06E1FCE8461DB (Enumerator_tED8C3B0D954CCDF1FE79D20CA2BD98284017F40E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tED8C3B0D954CCDF1FE79D20CA2BD98284017F40E *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void UnityEngine.Analytics.AnalyticsEventParamListContainer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventParamListContainer__ctor_mC280A6518029986F1D4489B5DF8A9A0B384E6625 (AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F * __this, const RuntimeMethod* method);
// System.String UnityEngine.Analytics.StandardEventPayload::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* StandardEventPayload_get_name_m6DC7D60B1ECC4DCF3940F88EBD68ECE15BB2D431 (StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* p0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.StandardEventPayload::IsCustomDataValid()
extern "C" IL2CPP_METHOD_ATTR bool StandardEventPayload_IsCustomDataValid_m556BB8009D59C1049A113DC95DD2F522058E6178 (StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.StandardEventPayload::IsRequiredDataValid()
extern "C" IL2CPP_METHOD_ATTR bool StandardEventPayload_IsRequiredDataValid_m6AFB2A6596E789A32B1959E0CDE0CD4F521495D0 (StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Analytics.StandardEventPayload::GetParameters()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StandardEventPayload_GetParameters_m388FA7197463B299413548E7425D0BFAE526D36F (StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * __this, const RuntimeMethod* method);
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::Custom(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR int32_t AnalyticsEvent_Custom_mD76D121CA72EEE8F4065F872B888499FBF918DFF (String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// UnityEngine.Analytics.AnalyticsEventParamListContainer UnityEngine.Analytics.StandardEventPayload::get_parameters()
extern "C" IL2CPP_METHOD_ATTR AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F * StandardEventPayload_get_parameters_m394E127E5E48182B8DA3B345940BBB0C4CC37A71 (StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam> UnityEngine.Analytics.AnalyticsEventParamListContainer::get_parameters()
extern "C" IL2CPP_METHOD_ATTR List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * AnalyticsEventParamListContainer_get_parameters_m8635192716AF773B67F8A1E69FDA856318DF6977 (AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam>::get_Item(System.Int32)
inline AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB (List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * (*) (List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.AnalyticsEventParam::get_valueProperty()
extern "C" IL2CPP_METHOD_ATTR ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * AnalyticsEventParam_get_valueProperty_m34ED396986AF4DB149E1A0B829A08980B05D4826 (AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.ValueProperty::IsValid()
extern "C" IL2CPP_METHOD_ATTR bool ValueProperty_IsValid_mF5A7B38893069B4C209E4DD8228A7B458DFA80F2 (ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * __this, const RuntimeMethod* method);
// System.String UnityEngine.Analytics.AnalyticsEventParam::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* AnalyticsEventParam_get_name_m52808B401FD4A02A6AF8559B45EF3B1DE58B71BE (AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * __this, const RuntimeMethod* method);
// System.Object UnityEngine.Analytics.AnalyticsEventParam::get_value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AnalyticsEventParam_get_value_mE9E4399B1A57A9601D1172B4668330B74F5F6924 (AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m233AC329D8947CF1508C9A2B8DE8EDCD68B6F4AA (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, p0, p1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam>::get_Count()
inline int32_t List_1_get_Count_m26C16C77F4576A0FF1A1771F1B372799114AF23A (List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Boolean>>::.ctor()
inline void Dictionary_2__ctor_m7702392922636D9AEDAA86B5044638866A56200F (Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// UnityEngine.Analytics.AnalyticsEventParam/RequirementType UnityEngine.Analytics.AnalyticsEventParam::get_requirementType()
extern "C" IL2CPP_METHOD_ATTR int32_t AnalyticsEventParam_get_requirementType_m284A9D799309DB3EB7BC7DCB7EA7018E1A9323F2 (AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * __this, const RuntimeMethod* method);
// System.String UnityEngine.Analytics.AnalyticsEventParam::get_groupID()
extern "C" IL2CPP_METHOD_ATTR String_t* AnalyticsEventParam_get_groupID_mF21A0AAA7762D0021B3E52ABF82E904DB4B5AD9E (AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Boolean>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mFE3A1BC7E40E7720DFA6C4A3665F0F63E859C2BA (Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
inline void List_1__ctor_m150C7A13E82800F2BA8CEA6CD8E12ED8FC5D5BDB (List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D *, const RuntimeMethod*))List_1__ctor_m150C7A13E82800F2BA8CEA6CD8E12ED8FC5D5BDB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Boolean>>::Add(!0,!1)
inline void Dictionary_2_Add_m2C14D0192CAB02448C6BD0971307CF53FE79CE6D (Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * __this, String_t* p0, List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 *, String_t*, List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, p0, p1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Boolean>>::get_Item(!0)
inline List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D * Dictionary_2_get_Item_m3888B381F35379249EB956C0CB6ADED59C25BAEA (Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D * (*) (Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(!0)
inline void List_1_Add_m2FC4231C93844B9DB4D4FF8157D061DF9B8FBA03 (List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D * __this, bool p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D *, bool, const RuntimeMethod*))List_1_Add_m2FC4231C93844B9DB4D4FF8157D061DF9B8FBA03_gshared)(__this, p0, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Boolean>>::get_Keys()
inline KeyCollection_tB5F80A783DC72D93D05498A5152163E5360BAAF0 * Dictionary_2_get_Keys_mBAD38BDB4B29DE0EABEFA97FD533ABB3745EA281 (Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tB5F80A783DC72D93D05498A5152163E5360BAAF0 * (*) (Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 *, const RuntimeMethod*))Dictionary_2_get_Keys_m079EE5437EE7D904E9E3F798041C1108B96B3AC3_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Boolean>>::GetEnumerator()
inline Enumerator_t1E6A150A0DF57630B199E32A6FA2FE393B6DD17D  KeyCollection_GetEnumerator_m11D25963220009E20AB2D5431EA0D513E17BDAC8 (KeyCollection_tB5F80A783DC72D93D05498A5152163E5360BAAF0 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1E6A150A0DF57630B199E32A6FA2FE393B6DD17D  (*) (KeyCollection_tB5F80A783DC72D93D05498A5152163E5360BAAF0 *, const RuntimeMethod*))KeyCollection_GetEnumerator_m5818848159146B9275EEBDB34FDE4F00178DB43F_gshared)(__this, method);
}
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.List`1<System.Boolean>>::get_Current()
inline String_t* Enumerator_get_Current_mF1B26462232800E6BD5C5A1DB1BF04237FB10B82 (Enumerator_t1E6A150A0DF57630B199E32A6FA2FE393B6DD17D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t1E6A150A0DF57630B199E32A6FA2FE393B6DD17D *, const RuntimeMethod*))Enumerator_get_Current_mBAAE32BBA285AF5D6C18DE8C9A5E1A8D8A157BA2_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::Contains(!0)
inline bool List_1_Contains_m8A7FB96FD71D0AB70BA9E12285C291A0085A3ADD (List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D * __this, bool p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D *, bool, const RuntimeMethod*))List_1_Contains_m8A7FB96FD71D0AB70BA9E12285C291A0085A3ADD_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.List`1<System.Boolean>>::MoveNext()
inline bool Enumerator_MoveNext_m915DF780E52F4295C6E7C8965AFA06607E7B4BE5 (Enumerator_t1E6A150A0DF57630B199E32A6FA2FE393B6DD17D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1E6A150A0DF57630B199E32A6FA2FE393B6DD17D *, const RuntimeMethod*))Enumerator_MoveNext_m0A180808394FC206E5870987E67957EE1D9A85E3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.List`1<System.Boolean>>::Dispose()
inline void Enumerator_Dispose_m3DD968CBFFC2A171628E57F52799403D22016EDD (Enumerator_t1E6A150A0DF57630B199E32A6FA2FE393B6DD17D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1E6A150A0DF57630B199E32A6FA2FE393B6DD17D *, const RuntimeMethod*))Enumerator_Dispose_m5D6053937D6CD09077A90EB5594628CC48582A58_gshared)(__this, method);
}
// System.Void UnityEngine.Analytics.TrackablePropertyBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TrackablePropertyBase__ctor_mECE5A89EC6F2B4823B2AE16714BB0B76C87475A5 (TrackablePropertyBase_t389C506235A1BBF399DC5F41267AA2EEE24B0471 * __this, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* String_Split_m13262358217AD2C119FD1B9733C3C0289D608512 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* p0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
extern "C" IL2CPP_METHOD_ATTR PropertyInfo_t * Type_GetProperty_m309A76AAAFC344BA5EB24ACD874400F90B6E877E (Type_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Reflection.FieldInfo System.Type::GetField(System.String)
extern "C" IL2CPP_METHOD_ATTR FieldInfo_t * Type_GetField_m564F7686385A6EA8C30F81C939250D5010DC0CA5 (Type_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::GetEnumerator()
inline Enumerator_t6F1054F2AD106A6B5B2B2E98984F5F25C5D53228  List_1_GetEnumerator_mF3969C5D7DDD3ECFBADFA58AD157FF51ACA604DA (List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6F1054F2AD106A6B5B2B2E98984F5F25C5D53228  (*) (List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::get_Current()
inline FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * Enumerator_get_Current_m27A9D40F9132B17EA0523E5648525BF4AA41AE8A (Enumerator_t6F1054F2AD106A6B5B2B2E98984F5F25C5D53228 * __this, const RuntimeMethod* method)
{
	return ((  FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * (*) (Enumerator_t6F1054F2AD106A6B5B2B2E98984F5F25C5D53228 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::MoveNext()
inline bool Enumerator_MoveNext_m718187321BD8432B606268827E7B303553F9701E (Enumerator_t6F1054F2AD106A6B5B2B2E98984F5F25C5D53228 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6F1054F2AD106A6B5B2B2E98984F5F25C5D53228 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::Dispose()
inline void Enumerator_Dispose_mA03B06227A858F3735458754DFA8AF5B6B51FE6E (Enumerator_t6F1054F2AD106A6B5B2B2E98984F5F25C5D53228 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6F1054F2AD106A6B5B2B2E98984F5F25C5D53228 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>::.ctor()
inline void List_1__ctor_m036AAC4EDD1099001700A4CD8C2926D337595A48 (List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Object UnityEngine.Analytics.TrackableField::GetValue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TrackableField_GetValue_m9EE8327C429574A98AFE09ABBD6851D9CA618FAD (TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 * __this, const RuntimeMethod* method);
// UnityEngine.Analytics.TrackableField UnityEngine.Analytics.ValueProperty::get_target()
extern "C" IL2CPP_METHOD_ATTR TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 * ValueProperty_get_target_mEC7978285693A5D9842F9DDE42D9B8FBDA217D05 (ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * __this, const RuntimeMethod* method);
// System.String UnityEngine.Analytics.ValueProperty::get_valueType()
extern "C" IL2CPP_METHOD_ATTR String_t* ValueProperty_get_valueType_mC7E7BE65E73BE787CE9B9524D1597DB54A234619 (ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByString(System.String)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_TestByString_mF9191FE7333E51148E44D764869235712F97A773 (TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * __this, String_t* ___currentValue0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByBool(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_TestByBool_m015D9E092EE884740E5EBEB85665E59B3A640076 (TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * __this, bool ___currentValue0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByDouble(System.Double)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_TestByDouble_mBEB43058D783EF3BCB2209EB9100D152DFF4AFA6 (TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * __this, double ___currentValue0, const RuntimeMethod* method);
// System.Double System.Decimal::op_Explicit(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR double Decimal_op_Explicit_mB7F34E3B2DFB6211CA5ACB5497DA6CDCB09FC6CE (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  p0, const RuntimeMethod* method);
// System.String System.String::ToLower()
extern "C" IL2CPP_METHOD_ATTR String_t* String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8 (String_t* __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByEnum(System.String)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_TestByEnum_m64B0567967B1237FC0B4226E14175D954192996C (TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * __this, String_t* ___currentValue0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByObject(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_TestByObject_m66C63DB5ADFFAE2B57E75D39E176C75A6FEFFA00 (TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * __this, RuntimeObject * ___currentValue0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Boolean::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Boolean_Parse_m82CC57BC939797529A5CC485B6C26E8CE67A646F (String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Boolean::Equals(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool Boolean_Equals_mD6223639457331BC16211ED4772C5927668DC060 (bool* __this, bool p0, const RuntimeMethod* method);
// System.Double UnityEngine.Analytics.TriggerRule::GetDouble(System.Object)
extern "C" IL2CPP_METHOD_ATTR double TriggerRule_GetDouble_m29DA1A9B8E0046F8108A062878AD2BCA5A5480A7 (TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.TriggerRule::SafeEquals(System.Double,System.Double)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_SafeEquals_m92A424C431C539280E10F70FF9A01C598E93419B (TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * __this, double ___double10, double ___double21, const RuntimeMethod* method);
// System.Double System.Double::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR double Double_Parse_m17E3E4C7194E91689E3E2250A584DB7F1D617552 (String_t* p0, const RuntimeMethod* method);
// System.Type System.Type::GetType(System.String)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetType_mCF0A3B28889C9FFB9987C8D30C23DF0912E7C00C (String_t* p0, const RuntimeMethod* method);
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
// System.Void UnityEngine.Analytics.AnalyticsEventParam::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventParam__ctor_mFB90CF41DD56886345E5596FFA7A3FCCEE27FD22 (AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsEventParam__ctor_mFB90CF41DD56886345E5596FFA7A3FCCEE27FD22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_Tooltip_2(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___name0;
		NullCheck(L_1);
		String_t* L_2 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_1, /*hidden argument*/NULL);
		__this->set_m_Name_3(L_2);
		return;
	}
}
// UnityEngine.Analytics.AnalyticsEventParam_RequirementType UnityEngine.Analytics.AnalyticsEventParam::get_requirementType()
extern "C" IL2CPP_METHOD_ATTR int32_t AnalyticsEventParam_get_requirementType_m284A9D799309DB3EB7BC7DCB7EA7018E1A9323F2 (AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_RequirementType_0();
		return L_0;
	}
}
// System.String UnityEngine.Analytics.AnalyticsEventParam::get_groupID()
extern "C" IL2CPP_METHOD_ATTR String_t* AnalyticsEventParam_get_groupID_mF21A0AAA7762D0021B3E52ABF82E904DB4B5AD9E (AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_GroupID_1();
		return L_0;
	}
}
// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.AnalyticsEventParam::get_valueProperty()
extern "C" IL2CPP_METHOD_ATTR ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * AnalyticsEventParam_get_valueProperty_m34ED396986AF4DB149E1A0B829A08980B05D4826 (AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * __this, const RuntimeMethod* method)
{
	{
		ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * L_0 = __this->get_m_Value_4();
		return L_0;
	}
}
// System.String UnityEngine.Analytics.AnalyticsEventParam::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* AnalyticsEventParam_get_name_m52808B401FD4A02A6AF8559B45EF3B1DE58B71BE (AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_Name_3();
		return L_0;
	}
}
// System.Object UnityEngine.Analytics.AnalyticsEventParam::get_value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AnalyticsEventParam_get_value_mE9E4399B1A57A9601D1172B4668330B74F5F6924 (AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * __this, const RuntimeMethod* method)
{
	{
		ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * L_0 = __this->get_m_Value_4();
		NullCheck(L_0);
		String_t* L_1 = ValueProperty_get_propertyValue_mD1D5638BF414ED71BCDCC15530EBFB05620E0A17(L_0, /*hidden argument*/NULL);
		return L_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Analytics.AnalyticsEventParamListContainer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventParamListContainer__ctor_mC280A6518029986F1D4489B5DF8A9A0B384E6625 (AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsEventParamListContainer__ctor_mC280A6518029986F1D4489B5DF8A9A0B384E6625_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_0 = (List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC *)il2cpp_codegen_object_new(List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC_il2cpp_TypeInfo_var);
		List_1__ctor_mE6C3ED22D95329042E880DC486456A4DB7BA0358(L_0, /*hidden argument*/List_1__ctor_mE6C3ED22D95329042E880DC486456A4DB7BA0358_RuntimeMethod_var);
		__this->set_m_Parameters_0(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam> UnityEngine.Analytics.AnalyticsEventParamListContainer::get_parameters()
extern "C" IL2CPP_METHOD_ATTR List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * AnalyticsEventParamListContainer_get_parameters_m8635192716AF773B67F8A1E69FDA856318DF6977 (AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F * __this, const RuntimeMethod* method)
{
	{
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_0 = __this->get_m_Parameters_0();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventParamListContainer::set_parameters(System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam>)
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventParamListContainer_set_parameters_m02ED822B98F0C06F0878B49C8B58C436505FBD90 (AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F * __this, List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * ___value0, const RuntimeMethod* method)
{
	{
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_0 = ___value0;
		__this->set_m_Parameters_0(L_0);
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
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventTracker__ctor_m0CAA3ED3C319467BF7A524F0EADB192310979FDB (AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsEventTracker__ctor_m0CAA3ED3C319467BF7A524F0EADB192310979FDB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_0 = (EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 *)il2cpp_codegen_object_new(EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71_il2cpp_TypeInfo_var);
		EventTrigger__ctor_m7ABF456AB791FA644FC46C22030022D7164FD176(L_0, /*hidden argument*/NULL);
		__this->set_m_Trigger_4(L_0);
		StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * L_1 = (StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 *)il2cpp_codegen_object_new(StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4_il2cpp_TypeInfo_var);
		StandardEventPayload__ctor_mAAB34F27B4601B7CE9F43450F1F7ADBF2BB4AC08(L_1, /*hidden argument*/NULL);
		__this->set_m_EventPayload_5(L_1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Analytics.StandardEventPayload UnityEngine.Analytics.AnalyticsEventTracker::get_payload()
extern "C" IL2CPP_METHOD_ATTR StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * AnalyticsEventTracker_get_payload_mBE74034CF35305906724B3E6DDF1FBFDED4CA962 (AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * __this, const RuntimeMethod* method)
{
	{
		StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * L_0 = __this->get_m_EventPayload_5();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::TriggerEvent()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventTracker_TriggerEvent_mA392D0689256C9FC41CFF43404041683923ACD8A (AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * __this, const RuntimeMethod* method)
{
	{
		AnalyticsEventTracker_SendEvent_m7C29B32FE45B3A004D8027847338326B98B41692(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEventTracker::SendEvent()
extern "C" IL2CPP_METHOD_ATTR int32_t AnalyticsEventTracker_SendEvent_m7C29B32FE45B3A004D8027847338326B98B41692 (AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * __this, const RuntimeMethod* method)
{
	{
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_0 = __this->get_m_Trigger_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_2 = EventTrigger_Test_m795A384D563EEFC1E380857F88B428325507E42C(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * L_3 = AnalyticsEventTracker_get_payload_mBE74034CF35305906724B3E6DDF1FBFDED4CA962(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(4 /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.StandardEventPayload::Send() */, L_3);
		return L_4;
	}

IL_0022:
	{
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::Awake()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventTracker_Awake_m59224163D9287A801F86A0D20EC05E10013DD883 (AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * __this, const RuntimeMethod* method)
{
	{
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_0 = __this->get_m_Trigger_4();
		NullCheck(L_0);
		int32_t L_1 = EventTrigger_get_triggerType_mAB9135AF347FD24B40DF5C994D9494974FC8EAFE(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_2 = __this->get_m_Trigger_4();
		NullCheck(L_2);
		int32_t L_3 = EventTrigger_get_lifecycleEvent_m5AAF79F7981D04D84E95B76B85F2527168A0A01D(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0028;
		}
	}
	{
		AnalyticsEventTracker_SendEvent_m7C29B32FE45B3A004D8027847338326B98B41692(__this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::Start()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventTracker_Start_m82849ABC7D0003706E69CD748934913E42535D4E (AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * __this, const RuntimeMethod* method)
{
	{
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_0 = __this->get_m_Trigger_4();
		NullCheck(L_0);
		int32_t L_1 = EventTrigger_get_triggerType_mAB9135AF347FD24B40DF5C994D9494974FC8EAFE(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_2 = __this->get_m_Trigger_4();
		NullCheck(L_2);
		int32_t L_3 = EventTrigger_get_lifecycleEvent_m5AAF79F7981D04D84E95B76B85F2527168A0A01D(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_002d;
		}
	}
	{
		AnalyticsEventTracker_SendEvent_m7C29B32FE45B3A004D8027847338326B98B41692(__this, /*hidden argument*/NULL);
		goto IL_004b;
	}

IL_002d:
	{
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_4 = __this->get_m_Trigger_4();
		NullCheck(L_4);
		int32_t L_5 = EventTrigger_get_triggerType_mAB9135AF347FD24B40DF5C994D9494974FC8EAFE(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_6 = AnalyticsEventTracker_TimedTrigger_m8BEAE18BB1AE5F41BD01302841305D6F38883C2B(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_6, /*hidden argument*/NULL);
	}

IL_004b:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventTracker_OnEnable_m87A9190C62BE87EE8A29827B6EEBB0654264C5A0 (AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * __this, const RuntimeMethod* method)
{
	{
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_0 = __this->get_m_Trigger_4();
		NullCheck(L_0);
		int32_t L_1 = EventTrigger_get_triggerType_mAB9135AF347FD24B40DF5C994D9494974FC8EAFE(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_2 = __this->get_m_Trigger_4();
		NullCheck(L_2);
		int32_t L_3 = EventTrigger_get_lifecycleEvent_m5AAF79F7981D04D84E95B76B85F2527168A0A01D(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_0028;
		}
	}
	{
		AnalyticsEventTracker_SendEvent_m7C29B32FE45B3A004D8027847338326B98B41692(__this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventTracker_OnDisable_m38324D1C3E1678DA7DAF027145A4CDEB31B94060 (AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * __this, const RuntimeMethod* method)
{
	{
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_0 = __this->get_m_Trigger_4();
		NullCheck(L_0);
		int32_t L_1 = EventTrigger_get_triggerType_mAB9135AF347FD24B40DF5C994D9494974FC8EAFE(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_2 = __this->get_m_Trigger_4();
		NullCheck(L_2);
		int32_t L_3 = EventTrigger_get_lifecycleEvent_m5AAF79F7981D04D84E95B76B85F2527168A0A01D(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_0028;
		}
	}
	{
		AnalyticsEventTracker_SendEvent_m7C29B32FE45B3A004D8027847338326B98B41692(__this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::OnApplicationPause(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventTracker_OnApplicationPause_mFE78D0C50B6E9C69FB66BFDE8D94432FE30ECFF4 (AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * __this, bool ___paused0, const RuntimeMethod* method)
{
	{
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_0 = __this->get_m_Trigger_4();
		NullCheck(L_0);
		int32_t L_1 = EventTrigger_get_triggerType_mAB9135AF347FD24B40DF5C994D9494974FC8EAFE(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		bool L_2 = ___paused0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_3 = __this->get_m_Trigger_4();
		NullCheck(L_3);
		int32_t L_4 = EventTrigger_get_lifecycleEvent_m5AAF79F7981D04D84E95B76B85F2527168A0A01D(L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)5))))
		{
			goto IL_0033;
		}
	}
	{
		AnalyticsEventTracker_SendEvent_m7C29B32FE45B3A004D8027847338326B98B41692(__this, /*hidden argument*/NULL);
		goto IL_0051;
	}

IL_0033:
	{
		bool L_5 = ___paused0;
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_6 = __this->get_m_Trigger_4();
		NullCheck(L_6);
		int32_t L_7 = EventTrigger_get_lifecycleEvent_m5AAF79F7981D04D84E95B76B85F2527168A0A01D(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)6))))
		{
			goto IL_0051;
		}
	}
	{
		AnalyticsEventTracker_SendEvent_m7C29B32FE45B3A004D8027847338326B98B41692(__this, /*hidden argument*/NULL);
	}

IL_0051:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventTracker_OnDestroy_m890CE8CF9D243F571C3ED5BFCA3A13E2321A8AAE (AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * __this, const RuntimeMethod* method)
{
	{
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_0 = __this->get_m_Trigger_4();
		NullCheck(L_0);
		int32_t L_1 = EventTrigger_get_triggerType_mAB9135AF347FD24B40DF5C994D9494974FC8EAFE(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_2 = __this->get_m_Trigger_4();
		NullCheck(L_2);
		int32_t L_3 = EventTrigger_get_lifecycleEvent_m5AAF79F7981D04D84E95B76B85F2527168A0A01D(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)7))))
		{
			goto IL_0028;
		}
	}
	{
		AnalyticsEventTracker_SendEvent_m7C29B32FE45B3A004D8027847338326B98B41692(__this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.Analytics.AnalyticsEventTracker::TimedTrigger()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsEventTracker_TimedTrigger_m8BEAE18BB1AE5F41BD01302841305D6F38883C2B (AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsEventTracker_TimedTrigger_m8BEAE18BB1AE5F41BD01302841305D6F38883C2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CTimedTriggerU3Ec__Iterator0_tC423D57544229E73A4C71483BD195FDF77B05344 * V_0 = NULL;
	{
		U3CTimedTriggerU3Ec__Iterator0_tC423D57544229E73A4C71483BD195FDF77B05344 * L_0 = (U3CTimedTriggerU3Ec__Iterator0_tC423D57544229E73A4C71483BD195FDF77B05344 *)il2cpp_codegen_object_new(U3CTimedTriggerU3Ec__Iterator0_tC423D57544229E73A4C71483BD195FDF77B05344_il2cpp_TypeInfo_var);
		U3CTimedTriggerU3Ec__Iterator0__ctor_mEF1550B4900917DFD8D8FB8D1F54AA16A75A6E98(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CTimedTriggerU3Ec__Iterator0_tC423D57544229E73A4C71483BD195FDF77B05344 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CTimedTriggerU3Ec__Iterator0_tC423D57544229E73A4C71483BD195FDF77B05344 * L_2 = V_0;
		return L_2;
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
// System.Void UnityEngine.Analytics.AnalyticsEventTracker_<TimedTrigger>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CTimedTriggerU3Ec__Iterator0__ctor_mEF1550B4900917DFD8D8FB8D1F54AA16A75A6E98 (U3CTimedTriggerU3Ec__Iterator0_tC423D57544229E73A4C71483BD195FDF77B05344 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Analytics.AnalyticsEventTracker_<TimedTrigger>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CTimedTriggerU3Ec__Iterator0_MoveNext_m7548F59F1A81486E8F0EE245E6868492C8C0AB06 (U3CTimedTriggerU3Ec__Iterator0_tC423D57544229E73A4C71483BD195FDF77B05344 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTimedTriggerU3Ec__Iterator0_MoveNext_m7548F59F1A81486E8F0EE245E6868492C8C0AB06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_0072;
			}
			case 2:
			{
				goto IL_00cc;
			}
			case 3:
			{
				goto IL_00ec;
			}
		}
	}
	{
		goto IL_0139;
	}

IL_0029:
	{
		AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * L_2 = __this->get_U24this_0();
		NullCheck(L_2);
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_3 = L_2->get_m_Trigger_4();
		NullCheck(L_3);
		float L_4 = EventTrigger_get_initTime_mB490E4BDFDB2F441B116C0EDBDC7437C428CD8D9(L_3, /*hidden argument*/NULL);
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_0072;
		}
	}
	{
		AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * L_5 = __this->get_U24this_0();
		NullCheck(L_5);
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_6 = L_5->get_m_Trigger_4();
		NullCheck(L_6);
		float L_7 = EventTrigger_get_initTime_mB490E4BDFDB2F441B116C0EDBDC7437C428CD8D9(L_6, /*hidden argument*/NULL);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_8 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_8, L_7, /*hidden argument*/NULL);
		__this->set_U24current_1(L_8);
		bool L_9 = __this->get_U24disposing_2();
		if (L_9)
		{
			goto IL_006d;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_006d:
	{
		goto IL_013b;
	}

IL_0072:
	{
		AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * L_10 = __this->get_U24this_0();
		NullCheck(L_10);
		AnalyticsEventTracker_SendEvent_m7C29B32FE45B3A004D8027847338326B98B41692(L_10, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_0083:
	{
		AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * L_11 = __this->get_U24this_0();
		NullCheck(L_11);
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_12 = L_11->get_m_Trigger_4();
		NullCheck(L_12);
		float L_13 = EventTrigger_get_repeatTime_m970DD20ED7C42F245BBD91D71C8FA0560F7BE4F9(L_12, /*hidden argument*/NULL);
		if ((!(((float)L_13) > ((float)(0.0f)))))
		{
			goto IL_00d1;
		}
	}
	{
		AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * L_14 = __this->get_U24this_0();
		NullCheck(L_14);
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_15 = L_14->get_m_Trigger_4();
		NullCheck(L_15);
		float L_16 = EventTrigger_get_repeatTime_m970DD20ED7C42F245BBD91D71C8FA0560F7BE4F9(L_15, /*hidden argument*/NULL);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_17 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_17, L_16, /*hidden argument*/NULL);
		__this->set_U24current_1(L_17);
		bool L_18 = __this->get_U24disposing_2();
		if (L_18)
		{
			goto IL_00c7;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_00c7:
	{
		goto IL_013b;
	}

IL_00cc:
	{
		goto IL_00ec;
	}

IL_00d1:
	{
		__this->set_U24current_1(NULL);
		bool L_19 = __this->get_U24disposing_2();
		if (L_19)
		{
			goto IL_00e7;
		}
	}
	{
		__this->set_U24PC_3(3);
	}

IL_00e7:
	{
		goto IL_013b;
	}

IL_00ec:
	{
		AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * L_20 = __this->get_U24this_0();
		NullCheck(L_20);
		AnalyticsEventTracker_SendEvent_m7C29B32FE45B3A004D8027847338326B98B41692(L_20, /*hidden argument*/NULL);
	}

IL_00f8:
	{
		AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * L_21 = __this->get_U24this_0();
		NullCheck(L_21);
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_22 = L_21->get_m_Trigger_4();
		NullCheck(L_22);
		int32_t L_23 = EventTrigger_get_repetitions_mC99BA6431B8C06433B1A1AADA9F9D93EAED12861(L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0083;
		}
	}
	{
		AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * L_24 = __this->get_U24this_0();
		NullCheck(L_24);
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_25 = L_24->get_m_Trigger_4();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_repetitionCount_9();
		AnalyticsEventTracker_tBC593DD7C991E0F59C6CDC519287BAADF38FEB85 * L_27 = __this->get_U24this_0();
		NullCheck(L_27);
		EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * L_28 = L_27->get_m_Trigger_4();
		NullCheck(L_28);
		int32_t L_29 = EventTrigger_get_repetitions_mC99BA6431B8C06433B1A1AADA9F9D93EAED12861(L_28, /*hidden argument*/NULL);
		if ((((int32_t)L_26) <= ((int32_t)L_29)))
		{
			goto IL_0083;
		}
	}
	{
		__this->set_U24PC_3((-1));
	}

IL_0139:
	{
		return (bool)0;
	}

IL_013b:
	{
		return (bool)1;
	}
}
// System.Object UnityEngine.Analytics.AnalyticsEventTracker_<TimedTrigger>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CTimedTriggerU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_mDD6E9A008E03D22202D7580B39DB0EADB902C638 (U3CTimedTriggerU3Ec__Iterator0_tC423D57544229E73A4C71483BD195FDF77B05344 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object UnityEngine.Analytics.AnalyticsEventTracker_<TimedTrigger>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CTimedTriggerU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m6250A2FC878A9528753D976B6DF39A2BBE6E375D (U3CTimedTriggerU3Ec__Iterator0_tC423D57544229E73A4C71483BD195FDF77B05344 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker_<TimedTrigger>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CTimedTriggerU3Ec__Iterator0_Dispose_mFA2863BA5BF8EAE6EABB41328356A31E08A939F0 (U3CTimedTriggerU3Ec__Iterator0_tC423D57544229E73A4C71483BD195FDF77B05344 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker_<TimedTrigger>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CTimedTriggerU3Ec__Iterator0_Reset_m0B4C5BAF0050ED696862E1C3418A7F822B8F1ECF (U3CTimedTriggerU3Ec__Iterator0_tC423D57544229E73A4C71483BD195FDF77B05344 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTimedTriggerU3Ec__Iterator0_Reset_m0B4C5BAF0050ED696862E1C3418A7F822B8F1ECF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CTimedTriggerU3Ec__Iterator0_Reset_m0B4C5BAF0050ED696862E1C3418A7F822B8F1ECF_RuntimeMethod_var);
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
// System.Void UnityEngine.Analytics.AnalyticsEventTrackerSettings::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventTrackerSettings__cctor_mDD00635350526358733CE0A345D94E83A84CAF50 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsEventTrackerSettings__cctor_mDD00635350526358733CE0A345D94E83A84CAF50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((AnalyticsEventTrackerSettings_tC0D48832DBA374CA53343838FE8FFBAA25A72DD1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsEventTrackerSettings_tC0D48832DBA374CA53343838FE8FFBAA25A72DD1_il2cpp_TypeInfo_var))->set_paramCountMax_0(((int32_t)10));
		((AnalyticsEventTrackerSettings_tC0D48832DBA374CA53343838FE8FFBAA25A72DD1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsEventTrackerSettings_tC0D48832DBA374CA53343838FE8FFBAA25A72DD1_il2cpp_TypeInfo_var))->set_triggerRuleCountMax_1(5);
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
// System.Void UnityEngine.Analytics.AnalyticsTracker::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker__ctor_m92B4B24D74F2F8040B0B8809C0DC0BDFF2C702DF (AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsTracker__ctor_m92B4B24D74F2F8040B0B8809C0DC0BDFF2C702DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)il2cpp_codegen_object_new(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997(L_0, /*hidden argument*/Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var);
		__this->set_m_Dict_5(L_0);
		TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460 * L_1 = (TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460 *)il2cpp_codegen_object_new(TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460_il2cpp_TypeInfo_var);
		TrackableProperty__ctor_mC8A4DC9E6E8FE348512C786CA3B44F2D8444BC69(L_1, /*hidden argument*/NULL);
		__this->set_m_TrackableProperty_7(L_1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Analytics.AnalyticsTracker::get_eventName()
extern "C" IL2CPP_METHOD_ATTR String_t* AnalyticsTracker_get_eventName_m68EE118AA87605296F24FF00C1507BE179C0BAD5 (AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_EventName_4();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::set_eventName(System.String)
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_set_eventName_mFD36655C73BDF37F70725FB60D4EE256241EEF13 (AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_EventName_4(L_0);
		return;
	}
}
// UnityEngine.Analytics.TrackableProperty UnityEngine.Analytics.AnalyticsTracker::get_TP()
extern "C" IL2CPP_METHOD_ATTR TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460 * AnalyticsTracker_get_TP_m886700FF025AB8F2269FEEE703B6DC470A28EF5F (AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9 * __this, const RuntimeMethod* method)
{
	{
		TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460 * L_0 = __this->get_m_TrackableProperty_7();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::set_TP(UnityEngine.Analytics.TrackableProperty)
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_set_TP_m634B566C609E9344657C8BACCC5ED8AAF6B9B054 (AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9 * __this, TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460 * ___value0, const RuntimeMethod* method)
{
	{
		TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460 * L_0 = ___value0;
		__this->set_m_TrackableProperty_7(L_0);
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::Awake()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_Awake_m2D4766AE7C27BADBBB5BB4FE94220402B6E5CE05 (AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_mA2D27D23EE7408D892B825CF5C61D401D3BE5415(__this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::Start()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_Start_m630E64D6D6440E2313496501128EF2DCD048ED42 (AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0012;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_mA2D27D23EE7408D892B825CF5C61D401D3BE5415(__this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_OnEnable_mC06BEF0006A7E20DF59D0718679A538F52700AF9 (AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0012;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_mA2D27D23EE7408D892B825CF5C61D401D3BE5415(__this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_OnDisable_m6222F71838502A2E9077C2B033DF4466B01D30B2 (AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0012;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_mA2D27D23EE7408D892B825CF5C61D401D3BE5415(__this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnApplicationPause()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_OnApplicationPause_m5259F8B5064C739970B14A43166B1890835F6F65 (AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_0012;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_mA2D27D23EE7408D892B825CF5C61D401D3BE5415(__this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_OnDestroy_m9D5EFD05693E4BBBA6F10799CCBAFE20098D20E0 (AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)6))))
		{
			goto IL_0012;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_mA2D27D23EE7408D892B825CF5C61D401D3BE5415(__this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::TriggerEvent()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_TriggerEvent_mA2D27D23EE7408D892B825CF5C61D401D3BE5415 (AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9 * __this, const RuntimeMethod* method)
{
	{
		AnalyticsTracker_BuildParameters_mE4B0387CF54871CF591F244DA9F0AEDDEB82969D(__this, /*hidden argument*/NULL);
		AnalyticsTracker_SendEvent_mE90F925EE43F64137EAB56AA1A0194DDB2F28B9C(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::SendEvent()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_SendEvent_mE90F925EE43F64137EAB56AA1A0194DDB2F28B9C (AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_EventName_4();
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_1 = __this->get_m_Dict_5();
		Analytics_CustomEvent_mB0F6DDF5C94D0D6540E427B71E4081F443CA6E02(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::BuildParameters()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_BuildParameters_mE4B0387CF54871CF591F244DA9F0AEDDEB82969D (AnalyticsTracker_tAFFD4CDEF9F370DA4DB6EB50661642A2EF31CBA9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsTracker_BuildParameters_mE4B0387CF54871CF591F244DA9F0AEDDEB82969D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460 * L_0 = __this->get_m_TrackableProperty_7();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_m_PrevDictHash_6();
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_4 = __this->get_m_Dict_5();
		NullCheck(L_4);
		Dictionary_2_Clear_m2AB63CDBD2D220F7E1A0FD9B1248CFEF78767A59(L_4, /*hidden argument*/Dictionary_2_Clear_m2AB63CDBD2D220F7E1A0FD9B1248CFEF78767A59_RuntimeMethod_var);
	}

IL_0023:
	{
		int32_t L_5 = V_0;
		__this->set_m_PrevDictHash_6(L_5);
		V_1 = 0;
		TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460 * L_6 = __this->get_m_TrackableProperty_7();
		NullCheck(L_6);
		List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C * L_7 = TrackableProperty_get_fields_m0AD99E85D972FD4C116E45208A47A0B082CC7454(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_mF2F6CBB3F54138F58FDD30A344E98CA795BDA55C(L_7, /*hidden argument*/List_1_get_Count_mF2F6CBB3F54138F58FDD30A344E98CA795BDA55C_RuntimeMethod_var);
		V_2 = L_8;
		goto IL_0094;
	}

IL_0042:
	{
		TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460 * L_9 = __this->get_m_TrackableProperty_7();
		NullCheck(L_9);
		List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C * L_10 = TrackableProperty_get_fields_m0AD99E85D972FD4C116E45208A47A0B082CC7454(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * L_12 = List_1_get_Item_mA14569596BC62A88E55650FC0EE3621EC4C4D769(L_10, L_11, /*hidden argument*/List_1_get_Item_mA14569596BC62A88E55650FC0EE3621EC4C4D769_RuntimeMethod_var);
		V_3 = L_12;
		FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * L_13 = V_3;
		NullCheck(L_13);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_14 = FieldWithTarget_get_target_mB65CD273FE61390F062ACA9A33CCF0DA82ACB745(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_14, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0070;
		}
	}
	{
		FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * L_16 = V_3;
		NullCheck(L_16);
		bool L_17 = FieldWithTarget_get_doStatic_mE7B4611802F694F21699B392D1836D7B7294798B(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0090;
		}
	}

IL_0070:
	{
		FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * L_18 = V_3;
		NullCheck(L_18);
		RuntimeObject * L_19 = FieldWithTarget_GetValue_m30F2D9AFF48F230DEF3D54F19D37675C2E3F5520(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		V_4 = L_20;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_21 = __this->get_m_Dict_5();
		FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * L_22 = V_3;
		NullCheck(L_22);
		String_t* L_23 = FieldWithTarget_get_paramName_mDD894385D9EE4C1EB6A03230BA9EC8DED864F230(L_22, /*hidden argument*/NULL);
		String_t* L_24 = V_4;
		NullCheck(L_21);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_21, L_23, L_24, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
	}

IL_0090:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0094:
	{
		int32_t L_26 = V_1;
		int32_t L_27 = V_2;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0042;
		}
	}
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Analytics.EventTrigger::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EventTrigger__ctor_m7ABF456AB791FA644FC46C22030022D7164FD176 (EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventTrigger__ctor_m7ABF456AB791FA644FC46C22030022D7164FD176_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_IsTriggerExpanded_0((bool)1);
		__this->set_m_InitTime_6((5.0f));
		__this->set_m_RepeatTime_7((5.0f));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		TriggerListContainer_t17A33E4C209E99BC294058F7052EA65F5D4DCA18 * L_0 = (TriggerListContainer_t17A33E4C209E99BC294058F7052EA65F5D4DCA18 *)il2cpp_codegen_object_new(TriggerListContainer_t17A33E4C209E99BC294058F7052EA65F5D4DCA18_il2cpp_TypeInfo_var);
		TriggerListContainer__ctor_m035A61847E774852174026A8413CE61EFD4BCE86(L_0, /*hidden argument*/NULL);
		__this->set_m_Rules_4(L_0);
		return;
	}
}
// UnityEngine.Analytics.TriggerType UnityEngine.Analytics.EventTrigger::get_triggerType()
extern "C" IL2CPP_METHOD_ATTR int32_t EventTrigger_get_triggerType_mAB9135AF347FD24B40DF5C994D9494974FC8EAFE (EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Type_1();
		return L_0;
	}
}
// UnityEngine.Analytics.TriggerLifecycleEvent UnityEngine.Analytics.EventTrigger::get_lifecycleEvent()
extern "C" IL2CPP_METHOD_ATTR int32_t EventTrigger_get_lifecycleEvent_m5AAF79F7981D04D84E95B76B85F2527168A0A01D (EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_LifecycleEvent_2();
		return L_0;
	}
}
// System.Single UnityEngine.Analytics.EventTrigger::get_initTime()
extern "C" IL2CPP_METHOD_ATTR float EventTrigger_get_initTime_mB490E4BDFDB2F441B116C0EDBDC7437C428CD8D9 (EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_InitTime_6();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.EventTrigger::set_initTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void EventTrigger_set_initTime_mDF4BDAB6A5BCAEA7B2654676D4795B5ECD3FD923 (EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_InitTime_6(L_0);
		return;
	}
}
// System.Single UnityEngine.Analytics.EventTrigger::get_repeatTime()
extern "C" IL2CPP_METHOD_ATTR float EventTrigger_get_repeatTime_m970DD20ED7C42F245BBD91D71C8FA0560F7BE4F9 (EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_RepeatTime_7();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.EventTrigger::set_repeatTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void EventTrigger_set_repeatTime_m730AE6BABACBEF9AB4BCAAFE476528A1FE03AC0A (EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_RepeatTime_7(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Analytics.EventTrigger::get_repetitions()
extern "C" IL2CPP_METHOD_ATTR int32_t EventTrigger_get_repetitions_mC99BA6431B8C06433B1A1AADA9F9D93EAED12861 (EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Repetitions_8();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.EventTrigger::set_repetitions(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void EventTrigger_set_repetitions_m987C7E1FB631B8B67702FDB2334B0948F7D752CD (EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Repetitions_8(L_0);
		return;
	}
}
// System.Void UnityEngine.Analytics.EventTrigger::AddRule()
extern "C" IL2CPP_METHOD_ATTR void EventTrigger_AddRule_m0425DCA1620D5DD73283FC54856A11DC608E2B03 (EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventTrigger_AddRule_m0425DCA1620D5DD73283FC54856A11DC608E2B03_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * V_0 = NULL;
	{
		TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * L_0 = (TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 *)il2cpp_codegen_object_new(TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083_il2cpp_TypeInfo_var);
		TriggerRule__ctor_mDA8547EA21067DC1D7AA9E797D70269D262062E6(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		TriggerListContainer_t17A33E4C209E99BC294058F7052EA65F5D4DCA18 * L_1 = __this->get_m_Rules_4();
		NullCheck(L_1);
		List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 * L_2 = TriggerListContainer_get_rules_m8B3E91888F397F4DE8E0A4A66AE8E22CC74164A3(L_1, /*hidden argument*/NULL);
		TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * L_3 = V_0;
		NullCheck(L_2);
		List_1_Add_m89BEC490ABACE3269A09A9378C655A0BFCC578F9(L_2, L_3, /*hidden argument*/List_1_Add_m89BEC490ABACE3269A09A9378C655A0BFCC578F9_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Analytics.EventTrigger::RemoveRule(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void EventTrigger_RemoveRule_m353E13A1B7D977EF793AE0DEEDE471362772B426 (EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventTrigger_RemoveRule_m353E13A1B7D977EF793AE0DEEDE471362772B426_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TriggerListContainer_t17A33E4C209E99BC294058F7052EA65F5D4DCA18 * L_0 = __this->get_m_Rules_4();
		NullCheck(L_0);
		List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 * L_1 = TriggerListContainer_get_rules_m8B3E91888F397F4DE8E0A4A66AE8E22CC74164A3(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___index0;
		NullCheck(L_1);
		List_1_RemoveAt_m6A84DF71A8CC50213A910AF387265FC3C8B7E7DD(L_1, L_2, /*hidden argument*/List_1_RemoveAt_m6A84DF71A8CC50213A910AF387265FC3C8B7E7DD_RuntimeMethod_var);
		return;
	}
}
// System.Boolean UnityEngine.Analytics.EventTrigger::Test(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR bool EventTrigger_Test_m795A384D563EEFC1E380857F88B428325507E42C (EventTrigger_t67721A5D892A8C35A25C3DF66295A085D55D9F71 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventTrigger_Test_m795A384D563EEFC1E380857F88B428325507E42C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * V_3 = NULL;
	Enumerator_tED8C3B0D954CCDF1FE79D20CA2BD98284017F40E  V_4;
	memset(&V_4, 0, sizeof(V_4));
	bool V_5 = false;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 7);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B12_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B12_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B12_2 = NULL;
	String_t* G_B12_3 = NULL;
	int32_t G_B11_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B11_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B11_2 = NULL;
	String_t* G_B11_3 = NULL;
	String_t* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B13_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B13_3 = NULL;
	String_t* G_B13_4 = NULL;
	{
		bool L_0 = __this->get_m_ApplyRules_3();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}

IL_000d:
	{
		int32_t L_1 = EventTrigger_get_repetitions_mC99BA6431B8C06433B1A1AADA9F9D93EAED12861(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = __this->get_repetitionCount_9();
		int32_t L_3 = EventTrigger_get_repetitions_mC99BA6431B8C06433B1A1AADA9F9D93EAED12861(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_002c;
		}
	}
	{
		return (bool)0;
	}

IL_002c:
	{
		V_0 = (bool)0;
		V_1 = 0;
		V_2 = 0;
		TriggerListContainer_t17A33E4C209E99BC294058F7052EA65F5D4DCA18 * L_4 = __this->get_m_Rules_4();
		NullCheck(L_4);
		List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 * L_5 = TriggerListContainer_get_rules_m8B3E91888F397F4DE8E0A4A66AE8E22CC74164A3(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Enumerator_tED8C3B0D954CCDF1FE79D20CA2BD98284017F40E  L_6 = List_1_GetEnumerator_mD99D742FACD4AF08ACB48F68FB2372DF54D85857(L_5, /*hidden argument*/List_1_GetEnumerator_mD99D742FACD4AF08ACB48F68FB2372DF54D85857_RuntimeMethod_var);
		V_4 = L_6;
	}

IL_0044:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0114;
		}

IL_0049:
		{
			TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * L_7 = Enumerator_get_Current_mE214FAC39E4EAD81507D33456CBFFA064C022B63((Enumerator_tED8C3B0D954CCDF1FE79D20CA2BD98284017F40E *)(&V_4), /*hidden argument*/Enumerator_get_Current_mE214FAC39E4EAD81507D33456CBFFA064C022B63_RuntimeMethod_var);
			V_3 = L_7;
			int32_t L_8 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
			TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * L_9 = V_3;
			NullCheck(L_9);
			bool L_10 = TriggerRule_Test_mAD45B68EE2F787D22DBA507450CDCE9CC3D82445(L_9, (bool*)(&V_5), (String_t**)(&V_6), /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_006d;
			}
		}

IL_0064:
		{
			int32_t L_11 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
			goto IL_00b7;
		}

IL_006d:
		{
			bool L_12 = V_5;
			if (!L_12)
			{
				goto IL_00b7;
			}
		}

IL_0074:
		{
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = L_13;
			int32_t L_15 = V_2;
			int32_t L_16 = L_15;
			RuntimeObject * L_17 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_16);
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, L_17);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_14;
			String_t* L_19 = V_6;
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_19);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_18;
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = ___gameObject0;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_22 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_21, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			G_B11_0 = 2;
			G_B11_1 = L_20;
			G_B11_2 = L_20;
			G_B11_3 = _stringLiteralAA1F29A574D86DFA098A38CA22487FAE4C3D5C56;
			if (!L_22)
			{
				G_B12_0 = 2;
				G_B12_1 = L_20;
				G_B12_2 = L_20;
				G_B12_3 = _stringLiteralAA1F29A574D86DFA098A38CA22487FAE4C3D5C56;
				goto IL_00a1;
			}
		}

IL_009b:
		{
			G_B13_0 = ((String_t*)(NULL));
			G_B13_1 = G_B11_0;
			G_B13_2 = G_B11_1;
			G_B13_3 = G_B11_2;
			G_B13_4 = G_B11_3;
			goto IL_00b1;
		}

IL_00a1:
		{
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = ___gameObject0;
			NullCheck(L_23);
			String_t* L_24 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_23, /*hidden argument*/NULL);
			String_t* L_25 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral9A9C627A0F53EF0BBCE20557D3F99E54DB03D965, L_24, /*hidden argument*/NULL);
			G_B13_0 = L_25;
			G_B13_1 = G_B12_0;
			G_B13_2 = G_B12_1;
			G_B13_3 = G_B12_2;
			G_B13_4 = G_B12_3;
		}

IL_00b1:
		{
			NullCheck(G_B13_2);
			ArrayElementTypeCheck (G_B13_2, G_B13_0);
			(G_B13_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B13_1), (RuntimeObject *)G_B13_0);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB(G_B13_4, G_B13_3, /*hidden argument*/NULL);
		}

IL_00b7:
		{
			int32_t L_26 = __this->get_m_TriggerBool_5();
			V_7 = L_26;
			int32_t L_27 = V_7;
			if (!L_27)
			{
				goto IL_00db;
			}
		}

IL_00c6:
		{
			int32_t L_28 = V_7;
			if ((((int32_t)L_28) == ((int32_t)2)))
			{
				goto IL_00ee;
			}
		}

IL_00ce:
		{
			int32_t L_29 = V_7;
			if ((((int32_t)L_29) == ((int32_t)1)))
			{
				goto IL_0101;
			}
		}

IL_00d6:
		{
			goto IL_0114;
		}

IL_00db:
		{
			int32_t L_30 = V_1;
			int32_t L_31 = V_2;
			if ((((int32_t)L_30) >= ((int32_t)L_31)))
			{
				goto IL_00e9;
			}
		}

IL_00e2:
		{
			V_0 = (bool)0;
			goto IL_0114;
		}

IL_00e9:
		{
			goto IL_0114;
		}

IL_00ee:
		{
			int32_t L_32 = V_1;
			if ((((int32_t)L_32) <= ((int32_t)0)))
			{
				goto IL_00fc;
			}
		}

IL_00f5:
		{
			V_0 = (bool)0;
			goto IL_0114;
		}

IL_00fc:
		{
			goto IL_0114;
		}

IL_0101:
		{
			int32_t L_33 = V_1;
			if ((((int32_t)L_33) <= ((int32_t)0)))
			{
				goto IL_010f;
			}
		}

IL_0108:
		{
			V_0 = (bool)1;
			goto IL_0114;
		}

IL_010f:
		{
			goto IL_0114;
		}

IL_0114:
		{
			bool L_34 = Enumerator_MoveNext_m9B2A2689495B9A4D839CC5092B940A6389ED4ECC((Enumerator_tED8C3B0D954CCDF1FE79D20CA2BD98284017F40E *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m9B2A2689495B9A4D839CC5092B940A6389ED4ECC_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_0049;
			}
		}

IL_0120:
		{
			IL2CPP_LEAVE(0x133, FINALLY_0125);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0125;
	}

FINALLY_0125:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m84F295C1FA045940273F7DFB0FB06E1FCE8461DB((Enumerator_tED8C3B0D954CCDF1FE79D20CA2BD98284017F40E *)(&V_4), /*hidden argument*/Enumerator_Dispose_m84F295C1FA045940273F7DFB0FB06E1FCE8461DB_RuntimeMethod_var);
		IL2CPP_END_FINALLY(293)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(293)
	{
		IL2CPP_JUMP_TBL(0x133, IL_0133)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0133:
	{
		int32_t L_35 = __this->get_m_TriggerBool_5();
		if (L_35)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_36 = V_1;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) == ((int32_t)L_37)))
		{
			goto IL_0157;
		}
	}

IL_0145:
	{
		int32_t L_38 = __this->get_m_TriggerBool_5();
		if ((!(((uint32_t)L_38) == ((uint32_t)2))))
		{
			goto IL_0159;
		}
	}
	{
		int32_t L_39 = V_1;
		if (L_39)
		{
			goto IL_0159;
		}
	}

IL_0157:
	{
		V_0 = (bool)1;
	}

IL_0159:
	{
		int32_t L_40 = EventTrigger_get_repetitions_mC99BA6431B8C06433B1A1AADA9F9D93EAED12861(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_40) <= ((int32_t)0)))
		{
			goto IL_0179;
		}
	}
	{
		bool L_41 = V_0;
		if (!L_41)
		{
			goto IL_0179;
		}
	}
	{
		int32_t L_42 = __this->get_repetitionCount_9();
		__this->set_repetitionCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1)));
	}

IL_0179:
	{
		bool L_43 = V_0;
		return L_43;
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
extern "C"  void DelegatePInvokeWrapper_OnTrigger_t15137E7AEE2F88371244BABB916F36896F969636 (OnTrigger_t15137E7AEE2F88371244BABB916F36896F969636 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Analytics.EventTrigger_OnTrigger::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnTrigger__ctor_mAD215B88E7492D729A44E1F7B8530DC7F5D940F4 (OnTrigger_t15137E7AEE2F88371244BABB916F36896F969636 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Analytics.EventTrigger_OnTrigger::Invoke()
extern "C" IL2CPP_METHOD_ATTR void OnTrigger_Invoke_mEE0217971671DA34D705BF9E1AEDF29E7435DC92 (OnTrigger_t15137E7AEE2F88371244BABB916F36896F969636 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 0)
				{
					// open
					typedef void (*FunctionPointerType) (const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Analytics.EventTrigger_OnTrigger::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnTrigger_BeginInvoke_m22E13710CE73E54EB797EB4288483700A06A7FEE (OnTrigger_t15137E7AEE2F88371244BABB916F36896F969636 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.Analytics.EventTrigger_OnTrigger::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnTrigger_EndInvoke_m63809D1866C26AA184DF9661038FDB0A7868DE0A (OnTrigger_t15137E7AEE2F88371244BABB916F36896F969636 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Analytics.StandardEventPayload::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StandardEventPayload__ctor_mAAB34F27B4601B7CE9F43450F1F7ADBF2BB4AC08 (StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardEventPayload__ctor_mAAB34F27B4601B7CE9F43450F1F7ADBF2BB4AC08_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_IsEventExpanded_0((bool)1);
		__this->set_m_StandardEventType_1(_stringLiteral328FA72F5BD82DBD3DFBAD69876C783686DA994A);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_Name_5(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F * L_1 = (AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F *)il2cpp_codegen_object_new(AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F_il2cpp_TypeInfo_var);
		AnalyticsEventParamListContainer__ctor_mC280A6518029986F1D4489B5DF8A9A0B384E6625(L_1, /*hidden argument*/NULL);
		__this->set_m_Parameters_3(L_1);
		return;
	}
}
// UnityEngine.Analytics.AnalyticsEventParamListContainer UnityEngine.Analytics.StandardEventPayload::get_parameters()
extern "C" IL2CPP_METHOD_ATTR AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F * StandardEventPayload_get_parameters_m394E127E5E48182B8DA3B345940BBB0C4CC37A71 (StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * __this, const RuntimeMethod* method)
{
	{
		AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F * L_0 = __this->get_m_Parameters_3();
		return L_0;
	}
}
// System.String UnityEngine.Analytics.StandardEventPayload::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* StandardEventPayload_get_name_m6DC7D60B1ECC4DCF3940F88EBD68ECE15BB2D431 (StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_Name_5();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.StandardEventPayload::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void StandardEventPayload_set_name_mAB0B2367E55B35B1549784ADE29867869A6B5B2C (StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_Name_5(L_0);
		return;
	}
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.StandardEventPayload::Send()
extern "C" IL2CPP_METHOD_ATTR int32_t StandardEventPayload_Send_mB9AE412C89A41703019635A93487F809E5FA4D07 (StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardEventPayload_Send_mB9AE412C89A41703019635A93487F809E5FA4D07_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = StandardEventPayload_get_name_m6DC7D60B1ECC4DCF3940F88EBD68ECE15BB2D431(__this, /*hidden argument*/NULL);
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_2, _stringLiteral255A64B9AEF6D40A3185887A9609F4756B511135, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, StandardEventPayload_Send_mB9AE412C89A41703019635A93487F809E5FA4D07_RuntimeMethod_var);
	}

IL_001b:
	{
		bool L_3 = StandardEventPayload_IsCustomDataValid_m556BB8009D59C1049A113DC95DD2F522058E6178(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		Exception_t * L_4 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_4, _stringLiteralF787F33231C06E6C035E0165DA48A4A07A5B67BD, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, StandardEventPayload_Send_mB9AE412C89A41703019635A93487F809E5FA4D07_RuntimeMethod_var);
	}

IL_0031:
	{
		bool L_5 = StandardEventPayload_IsRequiredDataValid_m6AFB2A6596E789A32B1959E0CDE0CD4F521495D0(__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0047;
		}
	}
	{
		Exception_t * L_6 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_6, _stringLiteral147B14D1727DDC43E42BFD053D952E4F8F21248A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, StandardEventPayload_Send_mB9AE412C89A41703019635A93487F809E5FA4D07_RuntimeMethod_var);
	}

IL_0047:
	{
		String_t* L_7 = StandardEventPayload_get_name_m6DC7D60B1ECC4DCF3940F88EBD68ECE15BB2D431(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_7, /*hidden argument*/NULL);
		RuntimeObject* L_9 = StandardEventPayload_GetParameters_m388FA7197463B299413548E7425D0BFAE526D36F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AnalyticsEvent_t33C084647ABB51775504EED444F48FBF1332CCB5_il2cpp_TypeInfo_var);
		int32_t L_10 = AnalyticsEvent_Custom_mD76D121CA72EEE8F4065F872B888499FBF918DFF(L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Analytics.StandardEventPayload::GetParameters()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StandardEventPayload_GetParameters_m388FA7197463B299413548E7425D0BFAE526D36F (StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardEventPayload_GetParameters_m388FA7197463B299413548E7425D0BFAE526D36F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * V_0 = NULL;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4_il2cpp_TypeInfo_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = ((StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4_StaticFields*)il2cpp_codegen_static_fields_for(StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4_il2cpp_TypeInfo_var))->get_m_EventData_4();
		NullCheck(L_0);
		Dictionary_2_Clear_m2AB63CDBD2D220F7E1A0FD9B1248CFEF78767A59(L_0, /*hidden argument*/Dictionary_2_Clear_m2AB63CDBD2D220F7E1A0FD9B1248CFEF78767A59_RuntimeMethod_var);
		AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F * L_1 = StandardEventPayload_get_parameters_m394E127E5E48182B8DA3B345940BBB0C4CC37A71(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_2 = AnalyticsEventParamListContainer_get_parameters_m8635192716AF773B67F8A1E69FDA856318DF6977(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001d:
	{
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * L_5 = List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB(L_3, L_4, /*hidden argument*/List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0061;
		}
	}
	{
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * L_8 = List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB(L_6, L_7, /*hidden argument*/List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB_RuntimeMethod_var);
		NullCheck(L_8);
		ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * L_9 = AnalyticsEventParam_get_valueProperty_m34ED396986AF4DB149E1A0B829A08980B05D4826(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10 = ValueProperty_IsValid_mF5A7B38893069B4C209E4DD8228A7B458DFA80F2(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4_il2cpp_TypeInfo_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_11 = ((StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4_StaticFields*)il2cpp_codegen_static_fields_for(StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4_il2cpp_TypeInfo_var))->get_m_EventData_4();
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * L_14 = List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB(L_12, L_13, /*hidden argument*/List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB_RuntimeMethod_var);
		NullCheck(L_14);
		String_t* L_15 = AnalyticsEventParam_get_name_m52808B401FD4A02A6AF8559B45EF3B1DE58B71BE(L_14, /*hidden argument*/NULL);
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * L_18 = List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB(L_16, L_17, /*hidden argument*/List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB_RuntimeMethod_var);
		NullCheck(L_18);
		RuntimeObject * L_19 = AnalyticsEventParam_get_value_mE9E4399B1A57A9601D1172B4668330B74F5F6924(L_18, /*hidden argument*/NULL);
		NullCheck(L_11);
		Dictionary_2_Add_m233AC329D8947CF1508C9A2B8DE8EDCD68B6F4AA(L_11, L_15, L_19, /*hidden argument*/Dictionary_2_Add_m233AC329D8947CF1508C9A2B8DE8EDCD68B6F4AA_RuntimeMethod_var);
	}

IL_0061:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0065:
	{
		int32_t L_21 = V_1;
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = List_1_get_Count_m26C16C77F4576A0FF1A1771F1B372799114AF23A(L_22, /*hidden argument*/List_1_get_Count_m26C16C77F4576A0FF1A1771F1B372799114AF23A_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4_il2cpp_TypeInfo_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_24 = ((StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4_StaticFields*)il2cpp_codegen_static_fields_for(StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4_il2cpp_TypeInfo_var))->get_m_EventData_4();
		return L_24;
	}
}
// System.Boolean UnityEngine.Analytics.StandardEventPayload::IsCustomDataValid()
extern "C" IL2CPP_METHOD_ATTR bool StandardEventPayload_IsCustomDataValid_m556BB8009D59C1049A113DC95DD2F522058E6178 (StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardEventPayload_IsCustomDataValid_m556BB8009D59C1049A113DC95DD2F522058E6178_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * V_0 = NULL;
	int32_t V_1 = 0;
	{
		AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F * L_0 = StandardEventPayload_get_parameters_m394E127E5E48182B8DA3B345940BBB0C4CC37A71(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_1 = AnalyticsEventParamListContainer_get_parameters_m8635192716AF773B67F8A1E69FDA856318DF6977(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0056;
	}

IL_0013:
	{
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * L_4 = List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB(L_2, L_3, /*hidden argument*/List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0052;
	}

IL_0024:
	{
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * L_7 = List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB(L_5, L_6, /*hidden argument*/List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB_RuntimeMethod_var);
		NullCheck(L_7);
		String_t* L_8 = AnalyticsEventParam_get_name_m52808B401FD4A02A6AF8559B45EF3B1DE58B71BE(L_7, /*hidden argument*/NULL);
		bool L_9 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * L_12 = List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB(L_10, L_11, /*hidden argument*/List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB_RuntimeMethod_var);
		NullCheck(L_12);
		ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * L_13 = AnalyticsEventParam_get_valueProperty_m34ED396986AF4DB149E1A0B829A08980B05D4826(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_14 = ValueProperty_IsValid_mF5A7B38893069B4C209E4DD8228A7B458DFA80F2(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0052;
		}
	}
	{
		return (bool)0;
	}

IL_0052:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0056:
	{
		int32_t L_16 = V_1;
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = List_1_get_Count_m26C16C77F4576A0FF1A1771F1B372799114AF23A(L_17, /*hidden argument*/List_1_get_Count_m26C16C77F4576A0FF1A1771F1B372799114AF23A_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0013;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean UnityEngine.Analytics.StandardEventPayload::IsRequiredDataValid()
extern "C" IL2CPP_METHOD_ATTR bool StandardEventPayload_IsRequiredDataValid_m6AFB2A6596E789A32B1959E0CDE0CD4F521495D0 (StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardEventPayload_IsRequiredDataValid_m6AFB2A6596E789A32B1959E0CDE0CD4F521495D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * V_0 = NULL;
	Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	Enumerator_t1E6A150A0DF57630B199E32A6FA2FE393B6DD17D  V_4;
	memset(&V_4, 0, sizeof(V_4));
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		AnalyticsEventParamListContainer_t7D4BF3CFE498BFBF86B536FDBA80D8F80037569F * L_0 = StandardEventPayload_get_parameters_m394E127E5E48182B8DA3B345940BBB0C4CC37A71(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_1 = AnalyticsEventParamListContainer_get_parameters_m8635192716AF773B67F8A1E69FDA856318DF6977(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * L_2 = (Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 *)il2cpp_codegen_object_new(Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7702392922636D9AEDAA86B5044638866A56200F(L_2, /*hidden argument*/Dictionary_2__ctor_m7702392922636D9AEDAA86B5044638866A56200F_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		goto IL_00ed;
	}

IL_0019:
	{
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_3 = V_0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * L_5 = List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB(L_3, L_4, /*hidden argument*/List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_00e9;
		}
	}
	{
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * L_8 = List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB(L_6, L_7, /*hidden argument*/List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB_RuntimeMethod_var);
		NullCheck(L_8);
		int32_t L_9 = AnalyticsEventParam_get_requirementType_m284A9D799309DB3EB7BC7DCB7EA7018E1A9323F2(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_00e9;
		}
	}
	{
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * L_12 = List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB(L_10, L_11, /*hidden argument*/List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_13 = AnalyticsEventParam_get_groupID_mF21A0AAA7762D0021B3E52ABF82E904DB4B5AD9E(L_12, /*hidden argument*/NULL);
		bool L_14 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0093;
		}
	}
	{
		Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * L_15 = V_1;
		NullCheck(L_15);
		bool L_16 = Dictionary_2_ContainsKey_mFE3A1BC7E40E7720DFA6C4A3665F0F63E859C2BA(L_15, _stringLiteral71F8E7976E4CBC4561C9D62FB283E7F788202ACB, /*hidden argument*/Dictionary_2_ContainsKey_mFE3A1BC7E40E7720DFA6C4A3665F0F63E859C2BA_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_006d;
		}
	}
	{
		Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * L_17 = V_1;
		List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D * L_18 = (List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D *)il2cpp_codegen_object_new(List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D_il2cpp_TypeInfo_var);
		List_1__ctor_m150C7A13E82800F2BA8CEA6CD8E12ED8FC5D5BDB(L_18, /*hidden argument*/List_1__ctor_m150C7A13E82800F2BA8CEA6CD8E12ED8FC5D5BDB_RuntimeMethod_var);
		NullCheck(L_17);
		Dictionary_2_Add_m2C14D0192CAB02448C6BD0971307CF53FE79CE6D(L_17, _stringLiteral71F8E7976E4CBC4561C9D62FB283E7F788202ACB, L_18, /*hidden argument*/Dictionary_2_Add_m2C14D0192CAB02448C6BD0971307CF53FE79CE6D_RuntimeMethod_var);
	}

IL_006d:
	{
		Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * L_19 = V_1;
		NullCheck(L_19);
		List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D * L_20 = Dictionary_2_get_Item_m3888B381F35379249EB956C0CB6ADED59C25BAEA(L_19, _stringLiteral71F8E7976E4CBC4561C9D62FB283E7F788202ACB, /*hidden argument*/Dictionary_2_get_Item_m3888B381F35379249EB956C0CB6ADED59C25BAEA_RuntimeMethod_var);
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_21 = V_0;
		int32_t L_22 = V_2;
		NullCheck(L_21);
		AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * L_23 = List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB(L_21, L_22, /*hidden argument*/List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB_RuntimeMethod_var);
		NullCheck(L_23);
		ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * L_24 = AnalyticsEventParam_get_valueProperty_m34ED396986AF4DB149E1A0B829A08980B05D4826(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		bool L_25 = ValueProperty_IsValid_mF5A7B38893069B4C209E4DD8228A7B458DFA80F2(L_24, /*hidden argument*/NULL);
		NullCheck(L_20);
		List_1_Add_m2FC4231C93844B9DB4D4FF8157D061DF9B8FBA03(L_20, L_25, /*hidden argument*/List_1_Add_m2FC4231C93844B9DB4D4FF8157D061DF9B8FBA03_RuntimeMethod_var);
		goto IL_00e9;
	}

IL_0093:
	{
		Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * L_26 = V_1;
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_27 = V_0;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * L_29 = List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB(L_27, L_28, /*hidden argument*/List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB_RuntimeMethod_var);
		NullCheck(L_29);
		String_t* L_30 = AnalyticsEventParam_get_groupID_mF21A0AAA7762D0021B3E52ABF82E904DB4B5AD9E(L_29, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_31 = Dictionary_2_ContainsKey_mFE3A1BC7E40E7720DFA6C4A3665F0F63E859C2BA(L_26, L_30, /*hidden argument*/Dictionary_2_ContainsKey_mFE3A1BC7E40E7720DFA6C4A3665F0F63E859C2BA_RuntimeMethod_var);
		if (L_31)
		{
			goto IL_00c1;
		}
	}
	{
		Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * L_32 = V_1;
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_33 = V_0;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * L_35 = List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB(L_33, L_34, /*hidden argument*/List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB_RuntimeMethod_var);
		NullCheck(L_35);
		String_t* L_36 = AnalyticsEventParam_get_groupID_mF21A0AAA7762D0021B3E52ABF82E904DB4B5AD9E(L_35, /*hidden argument*/NULL);
		List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D * L_37 = (List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D *)il2cpp_codegen_object_new(List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D_il2cpp_TypeInfo_var);
		List_1__ctor_m150C7A13E82800F2BA8CEA6CD8E12ED8FC5D5BDB(L_37, /*hidden argument*/List_1__ctor_m150C7A13E82800F2BA8CEA6CD8E12ED8FC5D5BDB_RuntimeMethod_var);
		NullCheck(L_32);
		Dictionary_2_Add_m2C14D0192CAB02448C6BD0971307CF53FE79CE6D(L_32, L_36, L_37, /*hidden argument*/Dictionary_2_Add_m2C14D0192CAB02448C6BD0971307CF53FE79CE6D_RuntimeMethod_var);
	}

IL_00c1:
	{
		Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * L_38 = V_1;
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_39 = V_0;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * L_41 = List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB(L_39, L_40, /*hidden argument*/List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB_RuntimeMethod_var);
		NullCheck(L_41);
		String_t* L_42 = AnalyticsEventParam_get_groupID_mF21A0AAA7762D0021B3E52ABF82E904DB4B5AD9E(L_41, /*hidden argument*/NULL);
		NullCheck(L_38);
		List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D * L_43 = Dictionary_2_get_Item_m3888B381F35379249EB956C0CB6ADED59C25BAEA(L_38, L_42, /*hidden argument*/Dictionary_2_get_Item_m3888B381F35379249EB956C0CB6ADED59C25BAEA_RuntimeMethod_var);
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_44 = V_0;
		int32_t L_45 = V_2;
		NullCheck(L_44);
		AnalyticsEventParam_t51BC81C4FF9D6394B319F37895F34D0BCA7EC5DA * L_46 = List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB(L_44, L_45, /*hidden argument*/List_1_get_Item_mF855AE0F50B23B495C772126F02D43FCCC3228DB_RuntimeMethod_var);
		NullCheck(L_46);
		ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * L_47 = AnalyticsEventParam_get_valueProperty_m34ED396986AF4DB149E1A0B829A08980B05D4826(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		bool L_48 = ValueProperty_IsValid_mF5A7B38893069B4C209E4DD8228A7B458DFA80F2(L_47, /*hidden argument*/NULL);
		NullCheck(L_43);
		List_1_Add_m2FC4231C93844B9DB4D4FF8157D061DF9B8FBA03(L_43, L_48, /*hidden argument*/List_1_Add_m2FC4231C93844B9DB4D4FF8157D061DF9B8FBA03_RuntimeMethod_var);
	}

IL_00e9:
	{
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_00ed:
	{
		int32_t L_50 = V_2;
		List_1_tBDC0AB64C659F7EF72C612D8FE61EB51998A25BC * L_51 = V_0;
		NullCheck(L_51);
		int32_t L_52 = List_1_get_Count_m26C16C77F4576A0FF1A1771F1B372799114AF23A(L_51, /*hidden argument*/List_1_get_Count_m26C16C77F4576A0FF1A1771F1B372799114AF23A_RuntimeMethod_var);
		if ((((int32_t)L_50) < ((int32_t)L_52)))
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * L_53 = V_1;
		NullCheck(L_53);
		KeyCollection_tB5F80A783DC72D93D05498A5152163E5360BAAF0 * L_54 = Dictionary_2_get_Keys_mBAD38BDB4B29DE0EABEFA97FD533ABB3745EA281(L_53, /*hidden argument*/Dictionary_2_get_Keys_mBAD38BDB4B29DE0EABEFA97FD533ABB3745EA281_RuntimeMethod_var);
		NullCheck(L_54);
		Enumerator_t1E6A150A0DF57630B199E32A6FA2FE393B6DD17D  L_55 = KeyCollection_GetEnumerator_m11D25963220009E20AB2D5431EA0D513E17BDAC8(L_54, /*hidden argument*/KeyCollection_GetEnumerator_m11D25963220009E20AB2D5431EA0D513E17BDAC8_RuntimeMethod_var);
		V_4 = L_55;
	}

IL_0106:
	try
	{ // begin try (depth: 1)
		{
			goto IL_016c;
		}

IL_010b:
		{
			String_t* L_56 = Enumerator_get_Current_mF1B26462232800E6BD5C5A1DB1BF04237FB10B82((Enumerator_t1E6A150A0DF57630B199E32A6FA2FE393B6DD17D *)(&V_4), /*hidden argument*/Enumerator_get_Current_mF1B26462232800E6BD5C5A1DB1BF04237FB10B82_RuntimeMethod_var);
			V_3 = L_56;
			String_t* L_57 = V_3;
			if (!L_57)
			{
				goto IL_014d;
			}
		}

IL_0119:
		{
			String_t* L_58 = V_3;
			bool L_59 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_58, _stringLiteral71F8E7976E4CBC4561C9D62FB283E7F788202ACB, /*hidden argument*/NULL);
			if (L_59)
			{
				goto IL_012e;
			}
		}

IL_0129:
		{
			goto IL_014d;
		}

IL_012e:
		{
			Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * L_60 = V_1;
			String_t* L_61 = V_3;
			NullCheck(L_60);
			List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D * L_62 = Dictionary_2_get_Item_m3888B381F35379249EB956C0CB6ADED59C25BAEA(L_60, L_61, /*hidden argument*/Dictionary_2_get_Item_m3888B381F35379249EB956C0CB6ADED59C25BAEA_RuntimeMethod_var);
			NullCheck(L_62);
			bool L_63 = List_1_Contains_m8A7FB96FD71D0AB70BA9E12285C291A0085A3ADD(L_62, (bool)0, /*hidden argument*/List_1_Contains_m8A7FB96FD71D0AB70BA9E12285C291A0085A3ADD_RuntimeMethod_var);
			if (!L_63)
			{
				goto IL_0148;
			}
		}

IL_0140:
		{
			V_5 = (bool)0;
			IL2CPP_LEAVE(0x18D, FINALLY_017d);
		}

IL_0148:
		{
			goto IL_016c;
		}

IL_014d:
		{
			Dictionary_2_t15D71DFE8A22AE51D1163CD0AD60657779BFFC33 * L_64 = V_1;
			String_t* L_65 = V_3;
			NullCheck(L_64);
			List_1_t3DDB9FC102E84D6C6A4430CB071C8EF31975D03D * L_66 = Dictionary_2_get_Item_m3888B381F35379249EB956C0CB6ADED59C25BAEA(L_64, L_65, /*hidden argument*/Dictionary_2_get_Item_m3888B381F35379249EB956C0CB6ADED59C25BAEA_RuntimeMethod_var);
			NullCheck(L_66);
			bool L_67 = List_1_Contains_m8A7FB96FD71D0AB70BA9E12285C291A0085A3ADD(L_66, (bool)1, /*hidden argument*/List_1_Contains_m8A7FB96FD71D0AB70BA9E12285C291A0085A3ADD_RuntimeMethod_var);
			if (L_67)
			{
				goto IL_0167;
			}
		}

IL_015f:
		{
			V_5 = (bool)0;
			IL2CPP_LEAVE(0x18D, FINALLY_017d);
		}

IL_0167:
		{
			goto IL_016c;
		}

IL_016c:
		{
			bool L_68 = Enumerator_MoveNext_m915DF780E52F4295C6E7C8965AFA06607E7B4BE5((Enumerator_t1E6A150A0DF57630B199E32A6FA2FE393B6DD17D *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m915DF780E52F4295C6E7C8965AFA06607E7B4BE5_RuntimeMethod_var);
			if (L_68)
			{
				goto IL_010b;
			}
		}

IL_0178:
		{
			IL2CPP_LEAVE(0x18B, FINALLY_017d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_017d;
	}

FINALLY_017d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3DD968CBFFC2A171628E57F52799403D22016EDD((Enumerator_t1E6A150A0DF57630B199E32A6FA2FE393B6DD17D *)(&V_4), /*hidden argument*/Enumerator_Dispose_m3DD968CBFFC2A171628E57F52799403D22016EDD_RuntimeMethod_var);
		IL2CPP_END_FINALLY(381)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(381)
	{
		IL2CPP_JUMP_TBL(0x18D, IL_018d)
		IL2CPP_JUMP_TBL(0x18B, IL_018b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_018b:
	{
		return (bool)1;
	}

IL_018d:
	{
		bool L_69 = V_5;
		return L_69;
	}
}
// System.Void UnityEngine.Analytics.StandardEventPayload::.cctor()
extern "C" IL2CPP_METHOD_ATTR void StandardEventPayload__cctor_m14F3C437A97EE8BD4E256E06A50749930431DBD5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardEventPayload__cctor_m14F3C437A97EE8BD4E256E06A50749930431DBD5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)il2cpp_codegen_object_new(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997(L_0, /*hidden argument*/Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var);
		((StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4_StaticFields*)il2cpp_codegen_static_fields_for(StandardEventPayload_tBAC66EBBF5501C050F51656E5B137BF3604A24D4_il2cpp_TypeInfo_var))->set_m_EventData_4(L_0);
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
// System.Void UnityEngine.Analytics.TrackableField::.ctor(System.Type[])
extern "C" IL2CPP_METHOD_ATTR void TrackableField__ctor_m45C6378E507F30365E6278568BCB98E7A00731A4 (TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 * __this, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___validTypes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableField__ctor_m45C6378E507F30365E6278568BCB98E7A00731A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		TrackablePropertyBase__ctor_mECE5A89EC6F2B4823B2AE16714BB0B76C87475A5(__this, /*hidden argument*/NULL);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_0 = ___validTypes0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_1 = ___validTypes0;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))))
		{
			goto IL_0015;
		}
	}

IL_0014:
	{
		return;
	}

IL_0015:
	{
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = ___validTypes0;
		NullCheck(L_2);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))));
		__this->set_m_ValidTypeNames_2(L_3);
		V_0 = 0;
		goto IL_003e;
	}

IL_002a:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = __this->get_m_ValidTypeNames_2();
		int32_t L_5 = V_0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = ___validTypes0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Type_t * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_10);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (String_t*)L_10);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_12 = V_0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_13 = ___validTypes0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))))))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}
}
// System.Object UnityEngine.Analytics.TrackableField::GetValue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TrackableField_GetValue_m9EE8327C429574A98AFE09ABBD6851D9CA618FAD (TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableField_GetValue_m9EE8327C429574A98AFE09ABBD6851D9CA618FAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_2 = NULL;
	int32_t V_3 = 0;
	PropertyInfo_t * V_4 = NULL;
	FieldInfo_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = ((TrackablePropertyBase_t389C506235A1BBF399DC5F41267AA2EEE24B0471 *)__this)->get_m_Target_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = ((TrackablePropertyBase_t389C506235A1BBF399DC5F41267AA2EEE24B0471 *)__this)->get_m_Path_1();
		bool L_3 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}

IL_0021:
	{
		return NULL;
	}

IL_0023:
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_4 = ((TrackablePropertyBase_t389C506235A1BBF399DC5F41267AA2EEE24B0471 *)__this)->get_m_Target_0();
		V_0 = L_4;
		String_t* L_5 = ((TrackablePropertyBase_t389C506235A1BBF399DC5F41267AA2EEE24B0471 *)__this)->get_m_Path_1();
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_6 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_5, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		V_3 = 0;
		goto IL_008a;
	}

IL_0048:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = L_12;
	}

IL_004c:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_13 = V_0;
		NullCheck(L_13);
		Type_t * L_14 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_13, /*hidden argument*/NULL);
		String_t* L_15 = V_1;
		NullCheck(L_14);
		PropertyInfo_t * L_16 = Type_GetProperty_m309A76AAAFC344BA5EB24ACD874400F90B6E877E(L_14, L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		PropertyInfo_t * L_17 = V_4;
		RuntimeObject * L_18 = V_0;
		NullCheck(L_17);
		RuntimeObject * L_19 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_17, L_18, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		V_0 = L_19;
		goto IL_0086;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0069;
		throw e;
	}

CATCH_0069:
	{ // begin catch(System.Object)
		RuntimeObject * L_20 = V_0;
		NullCheck(L_20);
		Type_t * L_21 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_20, /*hidden argument*/NULL);
		String_t* L_22 = V_1;
		NullCheck(L_21);
		FieldInfo_t * L_23 = Type_GetField_m564F7686385A6EA8C30F81C939250D5010DC0CA5(L_21, L_22, /*hidden argument*/NULL);
		V_5 = L_23;
		FieldInfo_t * L_24 = V_5;
		RuntimeObject * L_25 = V_0;
		NullCheck(L_24);
		RuntimeObject * L_26 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_24, L_25);
		V_0 = L_26;
		goto IL_0086;
	} // end catch (depth: 1)

IL_0086:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_008a:
	{
		int32_t L_28 = V_3;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject * L_30 = V_0;
		return L_30;
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
// System.Void UnityEngine.Analytics.TrackableProperty::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TrackableProperty__ctor_mC8A4DC9E6E8FE348512C786CA3B44F2D8444BC69 (TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty_FieldWithTarget> UnityEngine.Analytics.TrackableProperty::get_fields()
extern "C" IL2CPP_METHOD_ATTR List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C * TrackableProperty_get_fields_m0AD99E85D972FD4C116E45208A47A0B082CC7454 (TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460 * __this, const RuntimeMethod* method)
{
	{
		List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C * L_0 = __this->get_m_Fields_1();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty::set_fields(System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty_FieldWithTarget>)
extern "C" IL2CPP_METHOD_ATTR void TrackableProperty_set_fields_m7060C7DEEF3B038780B2235B23A7817A77849F95 (TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460 * __this, List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C * L_0 = ___value0;
		__this->set_m_Fields_1(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Analytics.TrackableProperty::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t TrackableProperty_GetHashCode_mF8B54954A9C74DE93918DC3DD260B3E4B23AFF6F (TrackableProperty_t65710B554EA8615F731300E23712A63A0686B460 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableProperty_GetHashCode_mF8B54954A9C74DE93918DC3DD260B3E4B23AFF6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * V_1 = NULL;
	Enumerator_t6F1054F2AD106A6B5B2B2E98984F5F25C5D53228  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = ((int32_t)17);
		List_1_t4C852AB44496D4C76641389C3D0EBD3DBA647E5C * L_0 = __this->get_m_Fields_1();
		NullCheck(L_0);
		Enumerator_t6F1054F2AD106A6B5B2B2E98984F5F25C5D53228  L_1 = List_1_GetEnumerator_mF3969C5D7DDD3ECFBADFA58AD157FF51ACA604DA(L_0, /*hidden argument*/List_1_GetEnumerator_mF3969C5D7DDD3ECFBADFA58AD157FF51ACA604DA_RuntimeMethod_var);
		V_2 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002d;
		}

IL_0014:
		{
			FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * L_2 = Enumerator_get_Current_m27A9D40F9132B17EA0523E5648525BF4AA41AE8A((Enumerator_t6F1054F2AD106A6B5B2B2E98984F5F25C5D53228 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m27A9D40F9132B17EA0523E5648525BF4AA41AE8A_RuntimeMethod_var);
			V_1 = L_2;
			int32_t L_3 = V_0;
			FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5 = FieldWithTarget_get_paramName_mDD894385D9EE4C1EB6A03230BA9EC8DED864F230(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)23))), (int32_t)L_6));
		}

IL_002d:
		{
			bool L_7 = Enumerator_MoveNext_m718187321BD8432B606268827E7B303553F9701E((Enumerator_t6F1054F2AD106A6B5B2B2E98984F5F25C5D53228 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m718187321BD8432B606268827E7B303553F9701E_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0014;
			}
		}

IL_0039:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mA03B06227A858F3735458754DFA8AF5B6B51FE6E((Enumerator_t6F1054F2AD106A6B5B2B2E98984F5F25C5D53228 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mA03B06227A858F3735458754DFA8AF5B6B51FE6E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(62)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		int32_t L_8 = V_0;
		return L_8;
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
// System.Void UnityEngine.Analytics.TrackableProperty_FieldWithTarget::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FieldWithTarget__ctor_m17DCB830EEF6F67C6BAF0ABE586CD2DE4FFA90F4 (FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Analytics.TrackableProperty_FieldWithTarget::get_paramName()
extern "C" IL2CPP_METHOD_ATTR String_t* FieldWithTarget_get_paramName_mDD894385D9EE4C1EB6A03230BA9EC8DED864F230 (FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_ParamName_0();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty_FieldWithTarget::set_paramName(System.String)
extern "C" IL2CPP_METHOD_ATTR void FieldWithTarget_set_paramName_m15DA53AAEDD7169D64EC1A98F8456B133122D2CB (FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_ParamName_0(L_0);
		return;
	}
}
// UnityEngine.Object UnityEngine.Analytics.TrackableProperty_FieldWithTarget::get_target()
extern "C" IL2CPP_METHOD_ATTR Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * FieldWithTarget_get_target_mB65CD273FE61390F062ACA9A33CCF0DA82ACB745 (FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * __this, const RuntimeMethod* method)
{
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = __this->get_m_Target_1();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty_FieldWithTarget::set_target(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void FieldWithTarget_set_target_m3D6D5AE73F76B06905B3E591B677910ABD88F579 (FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * __this, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___value0, const RuntimeMethod* method)
{
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = ___value0;
		__this->set_m_Target_1(L_0);
		return;
	}
}
// System.String UnityEngine.Analytics.TrackableProperty_FieldWithTarget::get_fieldPath()
extern "C" IL2CPP_METHOD_ATTR String_t* FieldWithTarget_get_fieldPath_mFAF072F90935E15DB6795DEF4754217AC58E26E1 (FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_FieldPath_2();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty_FieldWithTarget::set_fieldPath(System.String)
extern "C" IL2CPP_METHOD_ATTR void FieldWithTarget_set_fieldPath_m95AD24106813CEA17FBD64BB1F959DE66AD145B7 (FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_FieldPath_2(L_0);
		return;
	}
}
// System.String UnityEngine.Analytics.TrackableProperty_FieldWithTarget::get_typeString()
extern "C" IL2CPP_METHOD_ATTR String_t* FieldWithTarget_get_typeString_m972ABC48AF180AD4BF6B1F29A80AD60851E0EA0C (FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_TypeString_3();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty_FieldWithTarget::set_typeString(System.String)
extern "C" IL2CPP_METHOD_ATTR void FieldWithTarget_set_typeString_mC5AB8E9C0687D85A8941C2B4176067CA05A782F9 (FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_TypeString_3(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Analytics.TrackableProperty_FieldWithTarget::get_doStatic()
extern "C" IL2CPP_METHOD_ATTR bool FieldWithTarget_get_doStatic_mE7B4611802F694F21699B392D1836D7B7294798B (FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_DoStatic_4();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty_FieldWithTarget::set_doStatic(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void FieldWithTarget_set_doStatic_m567C7CBD525B7444629590549C7DB75C307D49D5 (FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_DoStatic_4(L_0);
		return;
	}
}
// System.String UnityEngine.Analytics.TrackableProperty_FieldWithTarget::get_staticString()
extern "C" IL2CPP_METHOD_ATTR String_t* FieldWithTarget_get_staticString_mE3B1E768DCA6CF7D61964B3C2B574DD9DF769D63 (FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_StaticString_5();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty_FieldWithTarget::set_staticString(System.String)
extern "C" IL2CPP_METHOD_ATTR void FieldWithTarget_set_staticString_mCC8520242C479B3B54AFE7E67E41013E58CD64AA (FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_StaticString_5(L_0);
		return;
	}
}
// System.Object UnityEngine.Analytics.TrackableProperty_FieldWithTarget::GetValue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * FieldWithTarget_GetValue_m30F2D9AFF48F230DEF3D54F19D37675C2E3F5520 (FieldWithTarget_t29B71F4D8A138192D5B62EF01F694FC88B460B75 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FieldWithTarget_GetValue_m30F2D9AFF48F230DEF3D54F19D37675C2E3F5520_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_2 = NULL;
	int32_t V_3 = 0;
	Type_t * V_4 = NULL;
	PropertyInfo_t * V_5 = NULL;
	FieldInfo_t * V_6 = NULL;
	{
		bool L_0 = __this->get_m_DoStatic_4();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = __this->get_m_StaticString_5();
		return L_1;
	}

IL_0012:
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_2 = __this->get_m_Target_1();
		V_0 = L_2;
		String_t* L_3 = __this->get_m_FieldPath_2();
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_4 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_3, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		V_3 = 0;
		goto IL_0088;
	}

IL_0037:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		RuntimeObject * L_11 = V_0;
		NullCheck(L_11);
		Type_t * L_12 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		Type_t * L_13 = V_4;
		String_t* L_14 = V_1;
		NullCheck(L_13);
		PropertyInfo_t * L_15 = Type_GetProperty_m309A76AAAFC344BA5EB24ACD874400F90B6E877E(L_13, L_14, /*hidden argument*/NULL);
		V_5 = L_15;
		Type_t * L_16 = V_4;
		String_t* L_17 = V_1;
		NullCheck(L_16);
		FieldInfo_t * L_18 = Type_GetField_m564F7686385A6EA8C30F81C939250D5010DC0CA5(L_16, L_17, /*hidden argument*/NULL);
		V_6 = L_18;
		PropertyInfo_t * L_19 = V_5;
		if (!L_19)
		{
			goto IL_006d;
		}
	}
	{
		PropertyInfo_t * L_20 = V_5;
		RuntimeObject * L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject * L_22 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_20, L_21, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		V_0 = L_22;
		goto IL_0084;
	}

IL_006d:
	{
		FieldInfo_t * L_23 = V_6;
		if (!L_23)
		{
			goto IL_0082;
		}
	}
	{
		FieldInfo_t * L_24 = V_6;
		RuntimeObject * L_25 = V_0;
		NullCheck(L_24);
		RuntimeObject * L_26 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_24, L_25);
		V_0 = L_26;
		goto IL_0084;
	}

IL_0082:
	{
		return NULL;
	}

IL_0084:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0088:
	{
		int32_t L_28 = V_3;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject * L_30 = V_0;
		return L_30;
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
// System.Void UnityEngine.Analytics.TrackablePropertyBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TrackablePropertyBase__ctor_mECE5A89EC6F2B4823B2AE16714BB0B76C87475A5 (TrackablePropertyBase_t389C506235A1BBF399DC5F41267AA2EEE24B0471 * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.Analytics.TrackableTrigger::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TrackableTrigger__ctor_mACD2E8B977EBC3D6C9668E1288CBBD4C38C502FD (TrackableTrigger_t1AF0FCBCA5B4245444E306EE3A29FA78646252EF * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.Analytics.TriggerListContainer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TriggerListContainer__ctor_m035A61847E774852174026A8413CE61EFD4BCE86 (TriggerListContainer_t17A33E4C209E99BC294058F7052EA65F5D4DCA18 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TriggerListContainer__ctor_m035A61847E774852174026A8413CE61EFD4BCE86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 * L_0 = (List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 *)il2cpp_codegen_object_new(List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9_il2cpp_TypeInfo_var);
		List_1__ctor_m036AAC4EDD1099001700A4CD8C2926D337595A48(L_0, /*hidden argument*/List_1__ctor_m036AAC4EDD1099001700A4CD8C2926D337595A48_RuntimeMethod_var);
		__this->set_m_Rules_0(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule> UnityEngine.Analytics.TriggerListContainer::get_rules()
extern "C" IL2CPP_METHOD_ATTR List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 * TriggerListContainer_get_rules_m8B3E91888F397F4DE8E0A4A66AE8E22CC74164A3 (TriggerListContainer_t17A33E4C209E99BC294058F7052EA65F5D4DCA18 * __this, const RuntimeMethod* method)
{
	{
		List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 * L_0 = __this->get_m_Rules_0();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.TriggerListContainer::set_rules(System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>)
extern "C" IL2CPP_METHOD_ATTR void TriggerListContainer_set_rules_mF9C6494E65C75578B8FC60DE0940F545EC359567 (TriggerListContainer_t17A33E4C209E99BC294058F7052EA65F5D4DCA18 * __this, List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t413CDD0A3245F380CAD81A63DCBEE90784EDDAF9 * L_0 = ___value0;
		__this->set_m_Rules_0(L_0);
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
// System.Void UnityEngine.Analytics.TriggerMethod::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TriggerMethod__ctor_m8EC16C657467203F73F216825F17473B2776F97D (TriggerMethod_tCED6C0B94B1F4D290BCAC91643FB836CE9C9CBCC * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Analytics.TriggerRule::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TriggerRule__ctor_mDA8547EA21067DC1D7AA9E797D70269D262062E6 (TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::Test()
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_Test_mD82AC0A099CD90F4739A4D251A3C375D972D99B4 (TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		bool L_0 = TriggerRule_Test_mAD45B68EE2F787D22DBA507450CDCE9CC3D82445(__this, (bool*)(&V_0), (String_t**)(&V_1), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::Test(System.BooleanU26,System.StringU26)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_Test_mAD45B68EE2F787D22DBA507450CDCE9CC3D82445 (TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * __this, bool* ___error0, String_t** ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TriggerRule_Test_mAD45B68EE2F787D22DBA507450CDCE9CC3D82445_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		bool* L_0 = ___error0;
		*((int8_t*)L_0) = (int8_t)0;
		String_t** L_1 = ___message1;
		*((RuntimeObject **)L_1) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_1, (RuntimeObject *)NULL);
		TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 * L_2 = __this->get_m_Target_0();
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 * L_3 = __this->get_m_Target_0();
		NullCheck(L_3);
		RuntimeObject * L_4 = TrackableField_GetValue_m9EE8327C429574A98AFE09ABBD6851D9CA618FAD(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002d;
		}
	}

IL_0021:
	{
		bool* L_5 = ___error0;
		*((int8_t*)L_5) = (int8_t)1;
		String_t** L_6 = ___message1;
		*((RuntimeObject **)L_6) = (RuntimeObject *)_stringLiteral21623A418AEC085E33F80BAB18DF7FB9D63D6E0F;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_6, (RuntimeObject *)_stringLiteral21623A418AEC085E33F80BAB18DF7FB9D63D6E0F);
		return (bool)0;
	}

IL_002d:
	{
		ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * L_7 = __this->get_m_Value_2();
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * L_8 = __this->get_m_Value_2();
		NullCheck(L_8);
		TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 * L_9 = ValueProperty_get_target_mEC7978285693A5D9842F9DDE42D9B8FBDA217D05(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * L_10 = __this->get_m_Value_2();
		NullCheck(L_10);
		String_t* L_11 = ValueProperty_get_propertyValue_mD1D5638BF414ED71BCDCC15530EBFB05620E0A17(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0064;
		}
	}

IL_0058:
	{
		bool* L_12 = ___error0;
		*((int8_t*)L_12) = (int8_t)1;
		String_t** L_13 = ___message1;
		*((RuntimeObject **)L_13) = (RuntimeObject *)_stringLiteral624EC7C8DECF0E1DBA8536BBAE524A259EF38F8D;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_13, (RuntimeObject *)_stringLiteral624EC7C8DECF0E1DBA8536BBAE524A259EF38F8D);
		return (bool)0;
	}

IL_0064:
	{
		TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 * L_14 = __this->get_m_Target_0();
		NullCheck(L_14);
		RuntimeObject * L_15 = TrackableField_GetValue_m9EE8327C429574A98AFE09ABBD6851D9CA618FAD(L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * L_16 = __this->get_m_Value_2();
		NullCheck(L_16);
		String_t* L_17 = ValueProperty_get_valueType_mC7E7BE65E73BE787CE9B9524D1597DB54A234619(L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		String_t* L_18 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_19 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		bool L_22 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_18, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00a3;
		}
	}
	{
		RuntimeObject * L_23 = V_0;
		bool L_24 = TriggerRule_TestByString_mF9191FE7333E51148E44D764869235712F97A773(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_23, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_24;
	}

IL_00a3:
	{
		String_t* L_25 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_26 = { reinterpret_cast<intptr_t> (Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_27 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
		bool L_29 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_25, L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00ca;
		}
	}
	{
		RuntimeObject * L_30 = V_0;
		bool L_31 = TriggerRule_TestByBool_m015D9E092EE884740E5EBEB85665E59B3A640076(__this, ((*(bool*)((bool*)UnBox(L_30, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_31;
	}

IL_00ca:
	{
		String_t* L_32 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_33 = { reinterpret_cast<intptr_t> (Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_34 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		String_t* L_35 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_34);
		bool L_36 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_32, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00f2;
		}
	}
	{
		RuntimeObject * L_37 = V_0;
		bool L_38 = TriggerRule_TestByDouble_mBEB43058D783EF3BCB2209EB9100D152DFF4AFA6(__this, (((double)((double)((*(float*)((float*)UnBox(L_37, Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var))))))), /*hidden argument*/NULL);
		return L_38;
	}

IL_00f2:
	{
		String_t* L_39 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_40 = { reinterpret_cast<intptr_t> (Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_41 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		String_t* L_42 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_41);
		bool L_43 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_39, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0119;
		}
	}
	{
		RuntimeObject * L_44 = V_0;
		bool L_45 = TriggerRule_TestByDouble_mBEB43058D783EF3BCB2209EB9100D152DFF4AFA6(__this, ((*(double*)((double*)UnBox(L_44, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_45;
	}

IL_0119:
	{
		String_t* L_46 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_47 = { reinterpret_cast<intptr_t> (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_48 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		String_t* L_49 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		bool L_50 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_46, L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject * L_51 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var);
		double L_52 = Decimal_op_Explicit_mB7F34E3B2DFB6211CA5ACB5497DA6CDCB09FC6CE(((*(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 *)((Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 *)UnBox(L_51, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		bool L_53 = TriggerRule_TestByDouble_mBEB43058D783EF3BCB2209EB9100D152DFF4AFA6(__this, L_52, /*hidden argument*/NULL);
		return L_53;
	}

IL_0145:
	{
		String_t* L_54 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_55 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		String_t* L_57 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_56);
		bool L_58 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_54, L_57, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_016d;
		}
	}
	{
		RuntimeObject * L_59 = V_0;
		bool L_60 = TriggerRule_TestByDouble_mBEB43058D783EF3BCB2209EB9100D152DFF4AFA6(__this, (((double)((double)((*(int32_t*)((int32_t*)UnBox(L_59, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))))))), /*hidden argument*/NULL);
		return L_60;
	}

IL_016d:
	{
		String_t* L_61 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_62 = { reinterpret_cast<intptr_t> (Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_63 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_62, /*hidden argument*/NULL);
		NullCheck(L_63);
		String_t* L_64 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_63);
		bool L_65 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_61, L_64, /*hidden argument*/NULL);
		if (!L_65)
		{
			goto IL_0195;
		}
	}
	{
		RuntimeObject * L_66 = V_0;
		bool L_67 = TriggerRule_TestByDouble_mBEB43058D783EF3BCB2209EB9100D152DFF4AFA6(__this, (((double)((double)((*(int16_t*)((int16_t*)UnBox(L_66, Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var))))))), /*hidden argument*/NULL);
		return L_67;
	}

IL_0195:
	{
		String_t* L_68 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_69 = { reinterpret_cast<intptr_t> (Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_70 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_69, /*hidden argument*/NULL);
		NullCheck(L_70);
		String_t* L_71 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_70);
		bool L_72 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_68, L_71, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_01bd;
		}
	}
	{
		RuntimeObject * L_73 = V_0;
		bool L_74 = TriggerRule_TestByDouble_mBEB43058D783EF3BCB2209EB9100D152DFF4AFA6(__this, (((double)((double)((*(int64_t*)((int64_t*)UnBox(L_73, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var))))))), /*hidden argument*/NULL);
		return L_74;
	}

IL_01bd:
	{
		String_t* L_75 = V_1;
		bool L_76 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_75, _stringLiteralE338E8E3D1DDEB83DF4ACE416A87E89ED797CD19, /*hidden argument*/NULL);
		if (!L_76)
		{
			goto IL_01e4;
		}
	}
	{
		RuntimeObject * L_77 = V_0;
		NullCheck(((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)CastclassClass((RuntimeObject*)L_77, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var)));
		String_t* L_78 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)CastclassClass((RuntimeObject*)L_77, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var)));
		NullCheck(L_78);
		String_t* L_79 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_78, /*hidden argument*/NULL);
		bool L_80 = TriggerRule_TestByEnum_m64B0567967B1237FC0B4226E14175D954192996C(__this, L_79, /*hidden argument*/NULL);
		return L_80;
	}

IL_01e4:
	{
		RuntimeObject * L_81 = V_0;
		bool L_82 = TriggerRule_TestByObject_m66C63DB5ADFFAE2B57E75D39E176C75A6FEFFA00(__this, L_81, /*hidden argument*/NULL);
		return L_82;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByObject(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_TestByObject_m66C63DB5ADFFAE2B57E75D39E176C75A6FEFFA00 (TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * __this, RuntimeObject * ___currentValue0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->get_m_Operator_1();
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_004c;
	}

IL_001b:
	{
		RuntimeObject * L_3 = ___currentValue0;
		ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * L_4 = __this->get_m_Value_2();
		NullCheck(L_4);
		String_t* L_5 = ValueProperty_get_propertyValue_mD1D5638BF414ED71BCDCC15530EBFB05620E0A17(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_5);
		V_0 = L_6;
		goto IL_004c;
	}

IL_0032:
	{
		RuntimeObject * L_7 = ___currentValue0;
		ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * L_8 = __this->get_m_Value_2();
		NullCheck(L_8);
		String_t* L_9 = ValueProperty_get_propertyValue_mD1D5638BF414ED71BCDCC15530EBFB05620E0A17(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_10 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_7, L_9);
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_004c;
	}

IL_004c:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByEnum(System.String)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_TestByEnum_m64B0567967B1237FC0B4226E14175D954192996C (TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * __this, String_t* ___currentValue0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->get_m_Operator_1();
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0060;
	}

IL_001b:
	{
		String_t* L_3 = ___currentValue0;
		ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * L_4 = __this->get_m_Value_2();
		NullCheck(L_4);
		String_t* L_5 = ValueProperty_get_propertyValue_mD1D5638BF414ED71BCDCC15530EBFB05620E0A17(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		NullCheck(L_6);
		String_t* L_7 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_8 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_3, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0060;
	}

IL_003c:
	{
		String_t* L_9 = ___currentValue0;
		ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * L_10 = __this->get_m_Value_2();
		NullCheck(L_10);
		String_t* L_11 = ValueProperty_get_propertyValue_mD1D5638BF414ED71BCDCC15530EBFB05620E0A17(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		NullCheck(L_12);
		String_t* L_13 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_14 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_9, L_13, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_0060:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByString(System.String)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_TestByString_mF9191FE7333E51148E44D764869235712F97A773 (TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * __this, String_t* ___currentValue0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->get_m_Operator_1();
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_004c;
	}

IL_001b:
	{
		String_t* L_3 = ___currentValue0;
		ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * L_4 = __this->get_m_Value_2();
		NullCheck(L_4);
		String_t* L_5 = ValueProperty_get_propertyValue_mD1D5638BF414ED71BCDCC15530EBFB05620E0A17(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_6 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_004c;
	}

IL_0032:
	{
		String_t* L_7 = ___currentValue0;
		ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * L_8 = __this->get_m_Value_2();
		NullCheck(L_8);
		String_t* L_9 = ValueProperty_get_propertyValue_mD1D5638BF414ED71BCDCC15530EBFB05620E0A17(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_10 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_7, L_9, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_004c;
	}

IL_004c:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByBool(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_TestByBool_m015D9E092EE884740E5EBEB85665E59B3A640076 (TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * __this, bool ___currentValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TriggerRule_TestByBool_m015D9E092EE884740E5EBEB85665E59B3A640076_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		V_0 = (bool)0;
		ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * L_0 = __this->get_m_Value_2();
		NullCheck(L_0);
		String_t* L_1 = ValueProperty_get_propertyValue_mD1D5638BF414ED71BCDCC15530EBFB05620E0A17(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var);
		bool L_2 = Boolean_Parse_m82CC57BC939797529A5CC485B6C26E8CE67A646F(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = __this->get_m_Operator_1();
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_003a;
		}
	}
	{
		goto IL_004b;
	}

IL_002c:
	{
		bool L_6 = V_1;
		bool L_7 = Boolean_Equals_mD6223639457331BC16211ED4772C5927668DC060((bool*)(&___currentValue0), L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_004b;
	}

IL_003a:
	{
		bool L_8 = V_1;
		bool L_9 = Boolean_Equals_mD6223639457331BC16211ED4772C5927668DC060((bool*)(&___currentValue0), L_8, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_004b;
	}

IL_004b:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByDouble(System.Double)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_TestByDouble_mBEB43058D783EF3BCB2209EB9100D152DFF4AFA6 (TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * __this, double ___currentValue0, const RuntimeMethod* method)
{
	bool V_0 = false;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B25_0 = 0;
	{
		V_0 = (bool)0;
		ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * L_0 = __this->get_m_Value_2();
		NullCheck(L_0);
		String_t* L_1 = ValueProperty_get_propertyValue_mD1D5638BF414ED71BCDCC15530EBFB05620E0A17(L_0, /*hidden argument*/NULL);
		double L_2 = TriggerRule_GetDouble_m29DA1A9B8E0046F8108A062878AD2BCA5A5480A7(__this, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = __this->get_m_Operator_1();
		V_2 = L_3;
		int32_t L_4 = V_2;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0054;
			}
			case 2:
			{
				goto IL_0065;
			}
			case 3:
			{
				goto IL_006f;
			}
			case 4:
			{
				goto IL_0087;
			}
			case 5:
			{
				goto IL_0091;
			}
			case 6:
			{
				goto IL_00a9;
			}
			case 7:
			{
				goto IL_00cf;
			}
		}
	}
	{
		goto IL_0115;
	}

IL_0046:
	{
		double L_5 = ___currentValue0;
		double L_6 = V_1;
		bool L_7 = TriggerRule_SafeEquals_m92A424C431C539280E10F70FF9A01C598E93419B(__this, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0115;
	}

IL_0054:
	{
		double L_8 = ___currentValue0;
		double L_9 = V_1;
		bool L_10 = TriggerRule_SafeEquals_m92A424C431C539280E10F70FF9A01C598E93419B(__this, L_8, L_9, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_0115;
	}

IL_0065:
	{
		double L_11 = ___currentValue0;
		double L_12 = V_1;
		V_0 = (bool)((((double)L_11) > ((double)L_12))? 1 : 0);
		goto IL_0115;
	}

IL_006f:
	{
		double L_13 = ___currentValue0;
		double L_14 = V_1;
		if ((((double)L_13) > ((double)L_14)))
		{
			goto IL_0080;
		}
	}
	{
		double L_15 = ___currentValue0;
		double L_16 = V_1;
		bool L_17 = TriggerRule_SafeEquals_m92A424C431C539280E10F70FF9A01C598E93419B(__this, L_15, L_16, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_17));
		goto IL_0081;
	}

IL_0080:
	{
		G_B8_0 = 1;
	}

IL_0081:
	{
		V_0 = (bool)G_B8_0;
		goto IL_0115;
	}

IL_0087:
	{
		double L_18 = ___currentValue0;
		double L_19 = V_1;
		V_0 = (bool)((((double)L_18) < ((double)L_19))? 1 : 0);
		goto IL_0115;
	}

IL_0091:
	{
		double L_20 = ___currentValue0;
		double L_21 = V_1;
		if ((((double)L_20) < ((double)L_21)))
		{
			goto IL_00a2;
		}
	}
	{
		double L_22 = ___currentValue0;
		double L_23 = V_1;
		bool L_24 = TriggerRule_SafeEquals_m92A424C431C539280E10F70FF9A01C598E93419B(__this, L_22, L_23, /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_24));
		goto IL_00a3;
	}

IL_00a2:
	{
		G_B13_0 = 1;
	}

IL_00a3:
	{
		V_0 = (bool)G_B13_0;
		goto IL_0115;
	}

IL_00a9:
	{
		ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * L_25 = __this->get_m_Value2_3();
		NullCheck(L_25);
		String_t* L_26 = ValueProperty_get_propertyValue_mD1D5638BF414ED71BCDCC15530EBFB05620E0A17(L_25, /*hidden argument*/NULL);
		double L_27 = TriggerRule_GetDouble_m29DA1A9B8E0046F8108A062878AD2BCA5A5480A7(__this, L_26, /*hidden argument*/NULL);
		V_3 = L_27;
		double L_28 = ___currentValue0;
		double L_29 = V_1;
		if ((!(((double)L_28) > ((double)L_29))))
		{
			goto IL_00c8;
		}
	}
	{
		double L_30 = ___currentValue0;
		double L_31 = V_3;
		G_B17_0 = ((((double)L_30) < ((double)L_31))? 1 : 0);
		goto IL_00c9;
	}

IL_00c8:
	{
		G_B17_0 = 0;
	}

IL_00c9:
	{
		V_0 = (bool)G_B17_0;
		goto IL_0115;
	}

IL_00cf:
	{
		ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * L_32 = __this->get_m_Value2_3();
		NullCheck(L_32);
		String_t* L_33 = ValueProperty_get_propertyValue_mD1D5638BF414ED71BCDCC15530EBFB05620E0A17(L_32, /*hidden argument*/NULL);
		double L_34 = TriggerRule_GetDouble_m29DA1A9B8E0046F8108A062878AD2BCA5A5480A7(__this, L_33, /*hidden argument*/NULL);
		V_4 = L_34;
		double L_35 = ___currentValue0;
		double L_36 = V_1;
		bool L_37 = TriggerRule_SafeEquals_m92A424C431C539280E10F70FF9A01C598E93419B(__this, L_35, L_36, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_010e;
		}
	}
	{
		double L_38 = ___currentValue0;
		double L_39 = V_4;
		bool L_40 = TriggerRule_SafeEquals_m92A424C431C539280E10F70FF9A01C598E93419B(__this, L_38, L_39, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_010e;
		}
	}
	{
		double L_41 = ___currentValue0;
		double L_42 = V_1;
		if ((!(((double)L_41) > ((double)L_42))))
		{
			goto IL_010b;
		}
	}
	{
		double L_43 = ___currentValue0;
		double L_44 = V_4;
		G_B23_0 = ((((double)L_43) < ((double)L_44))? 1 : 0);
		goto IL_010c;
	}

IL_010b:
	{
		G_B23_0 = 0;
	}

IL_010c:
	{
		G_B25_0 = G_B23_0;
		goto IL_010f;
	}

IL_010e:
	{
		G_B25_0 = 1;
	}

IL_010f:
	{
		V_0 = (bool)G_B25_0;
		goto IL_0115;
	}

IL_0115:
	{
		bool L_45 = V_0;
		return L_45;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::SafeEquals(System.Double,System.Double)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_SafeEquals_m92A424C431C539280E10F70FF9A01C598E93419B (TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * __this, double ___double10, double ___double21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TriggerRule_SafeEquals_m92A424C431C539280E10F70FF9A01C598E93419B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___double10;
		double L_1 = ___double21;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_2 = fabs(((double)il2cpp_codegen_subtract((double)L_0, (double)L_1)));
		return (bool)((((double)L_2) < ((double)(1.0E-07)))? 1 : 0);
	}
}
// System.Double UnityEngine.Analytics.TriggerRule::GetDouble(System.Object)
extern "C" IL2CPP_METHOD_ATTR double TriggerRule_GetDouble_m29DA1A9B8E0046F8108A062878AD2BCA5A5480A7 (TriggerRule_t032F452757ED356B9A01239A0ABF4A5B502F5083 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TriggerRule_GetDouble_m29DA1A9B8E0046F8108A062878AD2BCA5A5480A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var);
		double L_2 = Double_Parse_m17E3E4C7194E91689E3E2250A584DB7F1D617552(L_1, /*hidden argument*/NULL);
		return L_2;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Analytics.ValueProperty::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ValueProperty__ctor_mD39B3D2090A2054F081097C75E7ADD3AB01029B8 (ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueProperty__ctor_mD39B3D2090A2054F081097C75E7ADD3AB01029B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_EnumTypeIsCustomizable_5((bool)1);
		__this->set_m_PropertyType_7(1);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_Value_9(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Analytics.ValueProperty::get_valueType()
extern "C" IL2CPP_METHOD_ATTR String_t* ValueProperty_get_valueType_mC7E7BE65E73BE787CE9B9524D1597DB54A234619 (ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_ValueType_8();
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.ValueProperty::set_valueType(System.String)
extern "C" IL2CPP_METHOD_ATTR void ValueProperty_set_valueType_m33C0B7861A65214476684320071165504C88DF89 (ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_ValueType_8(L_0);
		return;
	}
}
// System.String UnityEngine.Analytics.ValueProperty::get_propertyValue()
extern "C" IL2CPP_METHOD_ATTR String_t* ValueProperty_get_propertyValue_mD1D5638BF414ED71BCDCC15530EBFB05620E0A17 (ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B9_0 = NULL;
	{
		int32_t L_0 = __this->get_m_PropertyType_7();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_003b;
		}
	}
	{
		TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 * L_1 = __this->get_m_Target_10();
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 * L_2 = __this->get_m_Target_10();
		NullCheck(L_2);
		RuntimeObject * L_3 = TrackableField_GetValue_m9EE8327C429574A98AFE09ABBD6851D9CA618FAD(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject * L_4 = V_0;
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_003a;
	}

IL_002f:
	{
		RuntimeObject * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		NullCheck(L_6);
		String_t* L_7 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_6, /*hidden argument*/NULL);
		G_B5_0 = L_7;
	}

IL_003a:
	{
		return G_B5_0;
	}

IL_003b:
	{
		String_t* L_8 = __this->get_m_Value_9();
		if (L_8)
		{
			goto IL_004c;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		goto IL_0057;
	}

IL_004c:
	{
		String_t* L_9 = __this->get_m_Value_9();
		NullCheck(L_9);
		String_t* L_10 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_9, /*hidden argument*/NULL);
		G_B9_0 = L_10;
	}

IL_0057:
	{
		return G_B9_0;
	}
}
// UnityEngine.Analytics.TrackableField UnityEngine.Analytics.ValueProperty::get_target()
extern "C" IL2CPP_METHOD_ATTR TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 * ValueProperty_get_target_mEC7978285693A5D9842F9DDE42D9B8FBDA217D05 (ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * __this, const RuntimeMethod* method)
{
	{
		TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 * L_0 = __this->get_m_Target_10();
		return L_0;
	}
}
// System.Boolean UnityEngine.Analytics.ValueProperty::IsValid()
extern "C" IL2CPP_METHOD_ATTR bool ValueProperty_IsValid_mF5A7B38893069B4C209E4DD8228A7B458DFA80F2 (ValueProperty_t3DF56B991F3DE57DEC98862E6E20EA53DDE821BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueProperty_IsValid_mF5A7B38893069B4C209E4DD8228A7B458DFA80F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B9_0 = 0;
	{
		int32_t L_0 = __this->get_m_PropertyType_7();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_001e;
			}
			case 2:
			{
				goto IL_004c;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_001e:
	{
		String_t* L_2 = __this->get_m_Value_9();
		bool L_3 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_4 = __this->get_m_ValueType_8();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_mCF0A3B28889C9FFB9987C8D30C23DF0912E7C00C, L_4, "Unity.Analytics.Tracker, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null");
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_6 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_7 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_6, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)((((RuntimeObject*)(Type_t *)L_5) == ((RuntimeObject*)(Type_t *)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004b;
	}

IL_004a:
	{
		G_B5_0 = 1;
	}

IL_004b:
	{
		return (bool)G_B5_0;
	}

IL_004c:
	{
		TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 * L_8 = __this->get_m_Target_10();
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		TrackableField_tB97394F33CE23BAA3E2AC230E487A7FA8BE42B53 * L_9 = __this->get_m_Target_10();
		NullCheck(L_9);
		RuntimeObject * L_10 = TrackableField_GetValue_m9EE8327C429574A98AFE09ABBD6851D9CA618FAD(L_9, /*hidden argument*/NULL);
		G_B9_0 = ((((int32_t)((((RuntimeObject*)(RuntimeObject *)L_10) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006b;
	}

IL_006a:
	{
		G_B9_0 = 0;
	}

IL_006b:
	{
		return (bool)G_B9_0;
	}

IL_006c:
	{
		return (bool)0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
