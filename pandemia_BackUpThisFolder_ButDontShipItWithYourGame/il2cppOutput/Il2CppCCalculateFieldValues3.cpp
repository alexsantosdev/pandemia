#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Unity.Services.Core.Environments.Internal.Environments
struct Environments_tC4B2F50A927F4B9798E0EA1415765D81DC7C0A00  : public RuntimeObject
{
	// System.String Unity.Services.Core.Environments.Internal.Environments::<Current>k__BackingField
	String_t* ___U3CCurrentU3Ek__BackingField_0;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Runtime.Serialization.EnumMemberAttribute::value
	String_t* ___value_0;
	// System.Boolean System.Runtime.Serialization.EnumMemberAttribute::isValueSetExplicitly
	bool ___isValueSetExplicitly_1;
};

// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974  : public RuntimeObject
{
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<platformSpecificID>k__BackingField
	String_t* ___U3CplatformSpecificIDU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<price>k__BackingField
	String_t* ___U3CpriceU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<title>k__BackingField
	String_t* ___U3CtitleU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<description>k__BackingField
	String_t* ___U3CdescriptionU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<ISOCurrencyCode>k__BackingField
	String_t* ___U3CISOCurrencyCodeU3Ek__BackingField_4;
	// System.Decimal UnityEngine.Purchasing.Default.WinProductDescription::<priceDecimal>k__BackingField
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CpriceDecimalU3Ek__BackingField_5;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_6;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Purchasing.Default.WinProductDescription::<consumable>k__BackingField
	bool ___U3CconsumableU3Ek__BackingField_8;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9000[2] = 
{
	static_cast<int32_t>(offsetof(EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F, ___value_0)),static_cast<int32_t>(offsetof(EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F, ___isValueSetExplicitly_1)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9011[9] = 
{
	static_cast<int32_t>(offsetof(WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974, ___U3CplatformSpecificIDU3Ek__BackingField_0)),static_cast<int32_t>(offsetof(WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974, ___U3CpriceU3Ek__BackingField_1)),static_cast<int32_t>(offsetof(WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974, ___U3CtitleU3Ek__BackingField_2)),static_cast<int32_t>(offsetof(WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974, ___U3CdescriptionU3Ek__BackingField_3)),static_cast<int32_t>(offsetof(WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974, ___U3CISOCurrencyCodeU3Ek__BackingField_4)),static_cast<int32_t>(offsetof(WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974, ___U3CpriceDecimalU3Ek__BackingField_5)),static_cast<int32_t>(offsetof(WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974, ___U3CreceiptU3Ek__BackingField_6)),static_cast<int32_t>(offsetof(WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974, ___U3CtransactionIDU3Ek__BackingField_7)),static_cast<int32_t>(offsetof(WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974, ___U3CconsumableU3Ek__BackingField_8)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9015[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9029[1] = 
{
	static_cast<int32_t>(offsetof(Environments_tC4B2F50A927F4B9798E0EA1415765D81DC7C0A00, ___U3CCurrentU3Ek__BackingField_0)),};
