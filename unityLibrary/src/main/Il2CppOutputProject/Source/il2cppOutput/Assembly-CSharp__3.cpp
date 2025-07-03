#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct BasicCameraControl_t06699E83504BCA9DF583E4912B8E523E9E42EC04;
struct BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct SliceHelper_t695F49C4F4DB1DF0317D652676704FFEC121C05B;
struct String_t;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3;
struct OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854;
struct OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493;
struct OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381;
struct OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A;
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;

IL2CPP_EXTERN_C RuntimeClass* BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F__padding[12];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D3479_t2A44BF0252AD80EAAEB365F75AA03B4DC47B34C6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3479_t2A44BF0252AD80EAAEB365F75AA03B4DC47B34C6__padding[3479];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D6711_t2121CCC18A519657669CD5A1350A7705676D812B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6711_t2121CCC18A519657669CD5A1350A7705676D812B__padding[6711];
	};
};
#pragma pack(pop, tp)
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction;
};
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	uint32_t ___m_FaceID;
	float ___m_Distance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV;
	int32_t ___m_Collider;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3  : public MulticastDelegate_t
{
};
struct OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854  : public MulticastDelegate_t
{
};
struct OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493  : public MulticastDelegate_t
{
};
struct OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381  : public MulticastDelegate_t
{
};
struct OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A  : public MulticastDelegate_t
{
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct BasicCameraControl_t06699E83504BCA9DF583E4912B8E523E9E42EC04  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	float ___rotateSpeed;
	float ___scrollSmooth;
};
struct BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placeholderPrefab;
};
struct SliceHelper_t695F49C4F4DB1DF0317D652676704FFEC121C05B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___slicePrefab;
	int32_t ___sliceCount;
};
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	__StaticArrayInitTypeSizeU3D3479_t2A44BF0252AD80EAAEB365F75AA03B4DC47B34C6 ___63554C9BBC8CF5243AA8A019CBF9A4B05DB7A03DE05C7B926CE0055999503E40;
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___8688D249E9D047B4FC2FB89CE05AFE9EC89252FFCCDD969DE6EEF260DD7FFB21;
	__StaticArrayInitTypeSizeU3D6711_t2121CCC18A519657669CD5A1350A7705676D812B ___F41E585C7229FC7192C0AAFD1B789E6EA043C9573F5622412C02A3529E5E6B86;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	float ___Epsilon;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender;
};
struct BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields
{
	OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* ___onOrderCancelled;
	OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* ___onOrderCompleted;
	OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* ___onProductAddedToSlot;
	OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* ___onProductDeletedFromSlot;
	OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* ___onPlaceHolderRequired;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___0_button, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5_inline (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, int32_t ___0_ID, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0_inline (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, int32_t ___0_ID, float ___1_percentageSuccess, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472_inline (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, int32_t ___0_ID, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C_inline (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, int32_t ___0_ID, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_inline (OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicCameraControl_Update_m3EDB55A0971045938B92E70EEDE61445BFD6AB26 (BasicCameraControl_t06699E83504BCA9DF583E4912B8E523E9E42EC04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2;
		L_2 = fabsf(L_1);
		float L_3 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_00ca;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(L_4, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_5);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_7;
		L_7 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_5, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_7, (&V_1), NULL);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		V_2 = L_9;
		goto IL_0069;
	}

IL_0043:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, (5.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_11, L_14, NULL);
		V_2 = L_15;
	}

IL_0069:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_17, NULL);
		float L_19;
		L_19 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_16, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_20, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_23, NULL);
		float L_25 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_24, L_25, NULL);
		V_3 = L_26;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = L_27;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		float L_31 = __this->___scrollSmooth;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_30, L_31, NULL);
		float L_33;
		L_33 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_32, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_29, L_34, NULL);
		NullCheck(L_28);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_28, L_35, NULL);
	}

IL_00ca:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicCameraControl_LateUpdate_mB862A9C300B781C2CCB0FD511C91B07AE98A34E4 (BasicCameraControl_t06699E83504BCA9DF583E4912B8E523E9E42EC04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_0, NULL);
		V_1 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		V_0 = L_2;
		(&V_0)->___z = (0.0f);
		bool L_3;
		L_3 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(1, NULL);
		if (!L_3)
		{
			goto IL_0065;
		}
	}
	{
		float L_4;
		L_4 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		V_2 = L_4;
		float L_5;
		L_5 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		V_3 = ((-L_5));
		float* L_6 = (float*)(&(&V_0)->___x);
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		float L_9 = V_3;
		float L_10 = __this->___rotateSpeed;
		*((float*)L_7) = (float)((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		float* L_11 = (float*)(&(&V_0)->___y);
		float* L_12 = L_11;
		float L_13 = *((float*)L_12);
		float L_14 = V_2;
		float L_15 = __this->___rotateSpeed;
		*((float*)L_12) = (float)((float)il2cpp_codegen_add(L_13, ((float)il2cpp_codegen_multiply(L_14, L_15))));
	}

IL_0065:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_17, NULL);
		NullCheck(L_16);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_16, L_18, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicCameraControl__ctor_m9CFF652C274B4BD867EF139ABD57CE23D28517DA (BasicCameraControl_t06699E83504BCA9DF583E4912B8E523E9E42EC04* __this, const RuntimeMethod* method) 
{
	{
		__this->___rotateSpeed = (2.0f);
		__this->___scrollSmooth = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_add_onOrderCancelled_m38509E2701FC60C1F728AA68F37030EECBC5D93E (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* V_0 = NULL;
	OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* V_1 = NULL;
	OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* V_2 = NULL;
	{
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCancelled;
		V_0 = L_0;
	}

IL_0006:
	{
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_1 = V_0;
		V_1 = L_1;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_2 = V_1;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3*)CastclassSealed((RuntimeObject*)L_4, OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3_il2cpp_TypeInfo_var));
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_5 = V_2;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_6 = V_1;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3*>((&((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCancelled), L_5, L_6);
		V_0 = L_7;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_8 = V_0;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3*)L_8) == ((RuntimeObject*)(OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_remove_onOrderCancelled_m4F0FC7F85E2B4A20A6E1233F3DC90984AA507765 (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* V_0 = NULL;
	OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* V_1 = NULL;
	OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* V_2 = NULL;
	{
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCancelled;
		V_0 = L_0;
	}

IL_0006:
	{
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_1 = V_0;
		V_1 = L_1;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_2 = V_1;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3*)CastclassSealed((RuntimeObject*)L_4, OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3_il2cpp_TypeInfo_var));
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_5 = V_2;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_6 = V_1;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3*>((&((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCancelled), L_5, L_6);
		V_0 = L_7;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_8 = V_0;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3*)L_8) == ((RuntimeObject*)(OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_RaiseOnOrderCancelled_mA92233A4E1FA7331707E9BDAA18DE58380698EA7 (int32_t ___0_ID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCancelled;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_1 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCancelled;
		int32_t L_2 = ___0_ID;
		NullCheck(L_1);
		OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5_inline(L_1, L_2, NULL);
	}

IL_0012:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_add_onOrderCompleted_mB5789734C8152A8629E52C1DC59C8BC8D64C367F (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* V_0 = NULL;
	OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* V_1 = NULL;
	OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* V_2 = NULL;
	{
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCompleted;
		V_0 = L_0;
	}

IL_0006:
	{
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_1 = V_0;
		V_1 = L_1;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_2 = V_1;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854*)CastclassSealed((RuntimeObject*)L_4, OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854_il2cpp_TypeInfo_var));
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_5 = V_2;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_6 = V_1;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854*>((&((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCompleted), L_5, L_6);
		V_0 = L_7;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_8 = V_0;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854*)L_8) == ((RuntimeObject*)(OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_remove_onOrderCompleted_m99980DC1CEF7B6F38F560EE79C00E476CD12DB9C (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* V_0 = NULL;
	OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* V_1 = NULL;
	OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* V_2 = NULL;
	{
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCompleted;
		V_0 = L_0;
	}

IL_0006:
	{
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_1 = V_0;
		V_1 = L_1;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_2 = V_1;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854*)CastclassSealed((RuntimeObject*)L_4, OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854_il2cpp_TypeInfo_var));
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_5 = V_2;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_6 = V_1;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854*>((&((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCompleted), L_5, L_6);
		V_0 = L_7;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_8 = V_0;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854*)L_8) == ((RuntimeObject*)(OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_RaiseOnOrderCompleted_mF29A8772748E7A07BAD7505AB14A3C6E36DED2ED (int32_t ___0_ID, float ___1_percentageSuccess, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCompleted;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_1 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCompleted;
		int32_t L_2 = ___0_ID;
		float L_3 = ___1_percentageSuccess;
		NullCheck(L_1);
		OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0_inline(L_1, L_2, L_3, NULL);
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_add_onProductAddedToSlot_m7A95E79212287B2A53D3B29354111709F581AA28 (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* V_0 = NULL;
	OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* V_1 = NULL;
	OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* V_2 = NULL;
	{
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductAddedToSlot;
		V_0 = L_0;
	}

IL_0006:
	{
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_1 = V_0;
		V_1 = L_1;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_2 = V_1;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381*)CastclassSealed((RuntimeObject*)L_4, OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381_il2cpp_TypeInfo_var));
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_5 = V_2;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_6 = V_1;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381*>((&((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductAddedToSlot), L_5, L_6);
		V_0 = L_7;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_8 = V_0;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381*)L_8) == ((RuntimeObject*)(OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_remove_onProductAddedToSlot_m78BDF72AAC02D690B7B0201B4F5F7B1FCE26184D (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* V_0 = NULL;
	OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* V_1 = NULL;
	OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* V_2 = NULL;
	{
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductAddedToSlot;
		V_0 = L_0;
	}

IL_0006:
	{
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_1 = V_0;
		V_1 = L_1;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_2 = V_1;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381*)CastclassSealed((RuntimeObject*)L_4, OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381_il2cpp_TypeInfo_var));
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_5 = V_2;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_6 = V_1;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381*>((&((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductAddedToSlot), L_5, L_6);
		V_0 = L_7;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_8 = V_0;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381*)L_8) == ((RuntimeObject*)(OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_RaiseOnProductAddedToSlot_m40CEC2748EF5B29A546BC9B214BAD678538D6338 (int32_t ___0_ID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductAddedToSlot;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_1 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductAddedToSlot;
		int32_t L_2 = ___0_ID;
		NullCheck(L_1);
		OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472_inline(L_1, L_2, NULL);
	}

IL_0012:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_add_onProductDeletedFromSlot_mDF102E17AAC799C986D821E156521221D44C27D3 (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* V_0 = NULL;
	OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* V_1 = NULL;
	OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* V_2 = NULL;
	{
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductDeletedFromSlot;
		V_0 = L_0;
	}

IL_0006:
	{
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_1 = V_0;
		V_1 = L_1;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_2 = V_1;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A*)CastclassSealed((RuntimeObject*)L_4, OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A_il2cpp_TypeInfo_var));
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_5 = V_2;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_6 = V_1;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A*>((&((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductDeletedFromSlot), L_5, L_6);
		V_0 = L_7;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_8 = V_0;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A*)L_8) == ((RuntimeObject*)(OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_remove_onProductDeletedFromSlot_m089E2179B14FA531B9A7C13DE9F5686704E03917 (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* V_0 = NULL;
	OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* V_1 = NULL;
	OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* V_2 = NULL;
	{
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductDeletedFromSlot;
		V_0 = L_0;
	}

IL_0006:
	{
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_1 = V_0;
		V_1 = L_1;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_2 = V_1;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A*)CastclassSealed((RuntimeObject*)L_4, OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A_il2cpp_TypeInfo_var));
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_5 = V_2;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_6 = V_1;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A*>((&((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductDeletedFromSlot), L_5, L_6);
		V_0 = L_7;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_8 = V_0;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A*)L_8) == ((RuntimeObject*)(OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_RaiseOnProductDeletedFromSlot_mEBDB08BFC5C0C000A30D764769D48B60006139DF (int32_t ___0_ID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductDeletedFromSlot;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_1 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductDeletedFromSlot;
		int32_t L_2 = ___0_ID;
		NullCheck(L_1);
		OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C_inline(L_1, L_2, NULL);
	}

IL_0012:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_add_onPlaceHolderRequired_mAC31AE207AA792B5F6CCE028A34A70CEDFF5C235 (OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* V_0 = NULL;
	OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* V_1 = NULL;
	OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* V_2 = NULL;
	{
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onPlaceHolderRequired;
		V_0 = L_0;
	}

IL_0006:
	{
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_1 = V_0;
		V_1 = L_1;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_2 = V_1;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493*)CastclassSealed((RuntimeObject*)L_4, OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493_il2cpp_TypeInfo_var));
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_5 = V_2;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_6 = V_1;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493*>((&((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onPlaceHolderRequired), L_5, L_6);
		V_0 = L_7;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_8 = V_0;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493*)L_8) == ((RuntimeObject*)(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_remove_onPlaceHolderRequired_m9452F0B44B3FCCD76CD4CB9B3B1391A5E3CF415D (OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* V_0 = NULL;
	OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* V_1 = NULL;
	OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* V_2 = NULL;
	{
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onPlaceHolderRequired;
		V_0 = L_0;
	}

IL_0006:
	{
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_1 = V_0;
		V_1 = L_1;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_2 = V_1;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493*)CastclassSealed((RuntimeObject*)L_4, OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493_il2cpp_TypeInfo_var));
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_5 = V_2;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_6 = V_1;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493*>((&((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onPlaceHolderRequired), L_5, L_6);
		V_0 = L_7;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_8 = V_0;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493*)L_8) == ((RuntimeObject*)(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_RaiseInstantiatePlaceHolder_mD21089052205D67F4985B0F8B64AFD0378781C4F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onPlaceHolderRequired;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_1 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onPlaceHolderRequired;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0_parent;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_pos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___2_go;
		NullCheck(L_1);
		OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_inline(L_1, L_2, L_3, L_4, NULL);
	}

IL_0014:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents__ctor_m02376F6DEDAA4620349247E93549669A64DA6F26 (BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5_Multicast(OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* currentDelegate = reinterpret_cast<OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_ID, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5_OpenInst(OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_ID, method);
}
void OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5_OpenStatic(OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_ID, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3 (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_ID);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOrderCancelled__ctor_mF032F851C8585E69E27ED7A7850C4932B9A646B4 (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5 (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, int32_t ___0_ID, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_ID, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnOrderCancelled_BeginInvoke_mB430EDFF54E9D9C276C8E9E818539C0BDBA18B4F (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, int32_t ___0_ID, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_ID);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOrderCancelled_EndInvoke_m43A17E4635CB5043A78475264EFA150960D6CEDE (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0_Multicast(OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, int32_t ___0_ID, float ___1_percentageSuccess, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* currentDelegate = reinterpret_cast<OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_ID, ___1_percentageSuccess, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0_OpenInst(OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, int32_t ___0_ID, float ___1_percentageSuccess, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_ID, ___1_percentageSuccess, method);
}
void OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0_OpenStatic(OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, int32_t ___0_ID, float ___1_percentageSuccess, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_ID, ___1_percentageSuccess, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854 (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, int32_t ___0_ID, float ___1_percentageSuccess, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_ID, ___1_percentageSuccess);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOrderCompleted__ctor_m03B5422CAC165D6B4737FDA68344B3B2E790EF92 (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0 (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, int32_t ___0_ID, float ___1_percentageSuccess, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_ID, ___1_percentageSuccess, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnOrderCompleted_BeginInvoke_m447A12F1D9E0D5D520541476B68B7C8E3F0DFA6B (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, int32_t ___0_ID, float ___1_percentageSuccess, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_ID);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___1_percentageSuccess);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOrderCompleted_EndInvoke_m560667A0F3D665EA0940D03FBFFA071D6340C110 (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472_Multicast(OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* currentDelegate = reinterpret_cast<OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_ID, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472_OpenInst(OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_ID, method);
}
void OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472_OpenStatic(OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_ID, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381 (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_ID);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnProductAddedToSlot__ctor_mFB35C4601A92249E50E1B7119D9E805F6D08699B (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472 (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, int32_t ___0_ID, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_ID, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnProductAddedToSlot_BeginInvoke_m928D2B4C211D24036612BFE32ADCA9663C545C6B (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, int32_t ___0_ID, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_ID);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnProductAddedToSlot_EndInvoke_mE23636E6E4885A690FD0530F25672F3CC35033EC (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C_Multicast(OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* currentDelegate = reinterpret_cast<OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_ID, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C_OpenInst(OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_ID, method);
}
void OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C_OpenStatic(OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_ID, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_ID);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnProductDeletedFromSlot__ctor_mDF8370623788671109BF3E133329AF55A5F03F14 (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, int32_t ___0_ID, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_ID, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnProductDeletedFromSlot_BeginInvoke_m69CC86787C55B32C575E54AFBC949406E14C8459 (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, int32_t ___0_ID, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_ID);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnProductDeletedFromSlot_EndInvoke_m397399989A72C1F973CC67A9CECA289A5AD8BDE3 (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_Multicast(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* currentDelegate = reinterpret_cast<OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_parent, ___1_pos, ___2_go, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenInst(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method)
{
	NullCheck(___0_parent);
	typedef void (*FunctionPointerType) (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_parent, ___1_pos, ___2_go, method);
}
void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenStatic(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_parent, ___1_pos, ___2_go, method);
}
void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenVirtual(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method)
{
	NullCheck(___0_parent);
	VirtualActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_parent, ___1_pos, ___2_go);
}
void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenInterface(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method)
{
	NullCheck(___0_parent);
	InterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_parent, ___1_pos, ___2_go);
}
void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenGenericVirtual(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method)
{
	NullCheck(___0_parent);
	GenericVirtualActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(method, ___0_parent, ___1_pos, ___2_go);
}
void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenGenericInterface(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method)
{
	NullCheck(___0_parent);
	GenericInterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(method, ___0_parent, ___1_pos, ___2_go);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlaceHolderRequired__ctor_mCA70F750633D199CAEBB4B9967DD416BEC2EC803 (OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B (OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_parent, ___1_pos, ___2_go, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnPlaceHolderRequired_BeginInvoke_mF60F811D7EB81A0AA70A814431E64B211D8F11D4 (OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_parent;
	__d_args[1] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___1_pos);
	__d_args[2] = ___2_go;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlaceHolderRequired_EndInvoke_m75DA679C1B98A7EC86E86163B36A4AAAE1B4CA6C (OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliceHelper__ctor_m545D86008EC90C178914453F94BA793B7A7FD0E3 (SliceHelper_t695F49C4F4DB1DF0317D652676704FFEC121C05B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5_inline (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, int32_t ___0_ID, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_ID, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0_inline (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, int32_t ___0_ID, float ___1_percentageSuccess, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_ID, ___1_percentageSuccess, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472_inline (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, int32_t ___0_ID, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_ID, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C_inline (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, int32_t ___0_ID, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_ID, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_inline (OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_parent, ___1_pos, ___2_go, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
