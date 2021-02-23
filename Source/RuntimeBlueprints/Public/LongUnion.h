// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Containers/Union.h"


template<typename TypeA, typename TypeB, typename TypeC, typename TypeD, typename TypeE, typename TypeF, typename TypeG, typename TypeH, typename TypeI, typename TypeJ, typename TypeK, typename TypeL, typename TypeM, typename TypeN, typename TypeO, typename TypeP, typename TypeQ, typename TypeR, typename TypeS, typename TypeT, typename TypeU, typename TypeV, typename TypeW, typename TypeX, typename TypeY, typename TypeZ, typename TypeAA, typename TypeAB>
class TLongUnion
{
public:
	/** CurrentSubtypeIndex is made public instead of private for better access */

	/** The index of the subtype that the union's current value is of. */
	uint8 CurrentSubtypeIndex;

	/** Default constructor. */
	TLongUnion()
		: CurrentSubtypeIndex(-1)
	{ }

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeA>::ParamType InValue, TDisambiguater<0> Disambiguater = TDisambiguater<0>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeA>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeB>::ParamType InValue, TDisambiguater<1> Disambiguater = TDisambiguater<1>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeB>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeC>::ParamType InValue, TDisambiguater<2> Disambiguater = TDisambiguater<2>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeC>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeD>::ParamType InValue, TDisambiguater<3> Disambiguater = TDisambiguater<3>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeD>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeE>::ParamType InValue, TDisambiguater<4> Disambiguater = TDisambiguater<4>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeE>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeF>::ParamType InValue, TDisambiguater<5> Disambiguater = TDisambiguater<5>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeF>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeG>::ParamType InValue, TDisambiguater<6> Disambiguater = TDisambiguater<6>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeG>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeH>::ParamType InValue, TDisambiguater<7> Disambiguater = TDisambiguater<7>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeH>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeI>::ParamType InValue, TDisambiguater<8> Disambiguater = TDisambiguater<8>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeI>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeJ>::ParamType InValue, TDisambiguater<9> Disambiguater = TDisambiguater<9>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeJ>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeK>::ParamType InValue, TDisambiguater<10> Disambiguater = TDisambiguater<10>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeK>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeL>::ParamType InValue, TDisambiguater<11> Disambiguater = TDisambiguater<11>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeL>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeM>::ParamType InValue, TDisambiguater<12> Disambiguater = TDisambiguater<12>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeM>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeN>::ParamType InValue, TDisambiguater<13> Disambiguater = TDisambiguater<13>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeN>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeO>::ParamType InValue, TDisambiguater<14> Disambiguater = TDisambiguater<14>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeO>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeP>::ParamType InValue, TDisambiguater<15> Disambiguater = TDisambiguater<15>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeP>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeQ>::ParamType InValue, TDisambiguater<16> Disambiguater = TDisambiguater<16>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeQ>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeR>::ParamType InValue, TDisambiguater<17> Disambiguater = TDisambiguater<17>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeR>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeS>::ParamType InValue, TDisambiguater<18> Disambiguater = TDisambiguater<18>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeS>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeT>::ParamType InValue, TDisambiguater<19> Disambiguater = TDisambiguater<19>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeT>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeU>::ParamType InValue, TDisambiguater<20> Disambiguater = TDisambiguater<20>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeU>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeV>::ParamType InValue, TDisambiguater<21> Disambiguater = TDisambiguater<21>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeV>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeW>::ParamType InValue, TDisambiguater<22> Disambiguater = TDisambiguater<22>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeW>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeX>::ParamType InValue, TDisambiguater<23> Disambiguater = TDisambiguater<23>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeX>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeY>::ParamType InValue, TDisambiguater<24> Disambiguater = TDisambiguater<24>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeY>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeZ>::ParamType InValue, TDisambiguater<25> Disambiguater = TDisambiguater<25>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeZ>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeAA>::ParamType InValue, TDisambiguater<26> Disambiguater = TDisambiguater<26>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeAA>(InValue);
	}

	/** Initialization constructor. */
	explicit TLongUnion(typename TCallTraits<TypeAB>::ParamType InValue, TDisambiguater<27> Disambiguater = TDisambiguater<27>())
		: CurrentSubtypeIndex(-1)
	{
		SetSubtype<TypeAB>(InValue);
	}

	/** Copy constructor. */
	TLongUnion(const TLongUnion& Other)
	:	CurrentSubtypeIndex(-1)
	{
		*this = Other;
	}

	/** Destructor. */
	~TLongUnion()
	{
		// Destruct any subtype value the union may have.
		Reset();
	}

	/** @return True if the union's value is of the given subtype. */
	template<typename Subtype>
	bool HasSubtype() const
	{
		// Determine the subtype's index and reference.
		int32 SubtypeIndex;
		const Subtype* SubtypeValuePointer;
		GetSubtypeIndexAndReference<Subtype,const Subtype*>(*this,SubtypeIndex,SubtypeValuePointer);

		return CurrentSubtypeIndex == SubtypeIndex;
	}

	/** If the union's current value is of the given subtype, sets the union's value to a NULL value. */
	template<typename Subtype>
	void ResetSubtype()
	{
		// Determine the subtype's index and reference.
		int32 SubtypeIndex;
		Subtype* SubtypeValuePointer;
		GetSubtypeIndexAndReference<Subtype,Subtype*>(*this,SubtypeIndex,SubtypeValuePointer);

		// Only reset the value if it is of the specified subtype.
		if(CurrentSubtypeIndex == SubtypeIndex)
		{
			CurrentSubtypeIndex = -1;

			// Destruct the subtype.
			SubtypeValuePointer->~Subtype();
		}
	}

	/** @return A reference to the union's value of the given subtype.  May only be called if the union's HasSubtype()==true for the given subtype. */
	template<typename Subtype>
	const Subtype& GetSubtype() const
	{
		// Determine the subtype's index and reference.
		int32 SubtypeIndex;
		const Subtype* SubtypeValuePointer;
		GetSubtypeIndexAndReference<Subtype,const Subtype*>(*this,SubtypeIndex,SubtypeValuePointer);

		// Validate that the union has a value of the requested subtype.
		checkf((CurrentSubtypeIndex == SubtypeIndex), TEXT("Invalid SubtypeIndex, Current is %i, tested against %i"), CurrentSubtypeIndex, SubtypeIndex);

		return *SubtypeValuePointer;
	}

	/** @return A reference to the union's value of the given subtype.  May only be called if the union's HasSubtype()==true for the given subtype. */
	template<typename Subtype>
	Subtype& GetSubtype()
	{
		// Determine the subtype's index and reference.
		int32 SubtypeIndex;
		Subtype* SubtypeValuePointer;
		GetSubtypeIndexAndReference<Subtype,Subtype*>(*this,SubtypeIndex,SubtypeValuePointer);

		// Validate that the union has a value of the requested subtype.
		checkf((CurrentSubtypeIndex == SubtypeIndex), TEXT("Invalid SubtypeIndex, Current is %i, tested against %i"), CurrentSubtypeIndex, SubtypeIndex);

		return *SubtypeValuePointer;
	}

	/** Replaces the value of the union with a value of the given subtype. */
	template<typename Subtype>
	Subtype* SetSubtype(typename TCallTraits<Subtype>::ParamType NewValue)
	{
		int32 SubtypeIndex;
		Subtype* SubtypeValuePointer;
		GetSubtypeIndexAndReference<Subtype,Subtype*>(*this,SubtypeIndex,SubtypeValuePointer);

		Reset();

		new(SubtypeValuePointer) Subtype(NewValue);

		CurrentSubtypeIndex = SubtypeIndex;
		return SubtypeValuePointer;
	}

	/** Sets the union's value to NULL. */
	void Reset()
	{
		switch(CurrentSubtypeIndex)
		{
		case 0: ResetSubtype<TypeA>(); break;
		case 1: ResetSubtype<TypeB>(); break;
		case 2: ResetSubtype<TypeC>(); break;
		case 3: ResetSubtype<TypeD>(); break;
		case 4: ResetSubtype<TypeE>(); break;
		case 5: ResetSubtype<TypeF>(); break;
		case 6: ResetSubtype<TypeG>(); break;
		case 7: ResetSubtype<TypeH>(); break;
		case 8: ResetSubtype<TypeI>(); break;
		case 9: ResetSubtype<TypeJ>(); break;
		case 10: ResetSubtype<TypeK>(); break;
		case 11: ResetSubtype<TypeL>(); break;
		case 12: ResetSubtype<TypeM>(); break;
		case 13: ResetSubtype<TypeN>(); break;
		case 14: ResetSubtype<TypeO>(); break;
		case 15: ResetSubtype<TypeP>(); break;
		case 16: ResetSubtype<TypeQ>(); break;
		case 17: ResetSubtype<TypeR>(); break;
		case 18: ResetSubtype<TypeS>(); break;
		case 19: ResetSubtype<TypeT>(); break;
		case 20: ResetSubtype<TypeU>(); break;
		case 21: ResetSubtype<TypeV>(); break;
		case 22: ResetSubtype<TypeW>(); break;
		case 23: ResetSubtype<TypeX>(); break;
		case 24: ResetSubtype<TypeY>(); break;
		case 25: ResetSubtype<TypeZ>(); break;
		case 26: ResetSubtype<TypeAA>(); break;
		case 27: ResetSubtype<TypeAB>(); break;
		};
	}

	/** Hash function. */
	friend uint32 GetTypeHash(const TLongUnion& Union)
	{
		uint32 Result = GetTypeHash(Union.CurrentSubtypeIndex);

		switch(Union.CurrentSubtypeIndex)
		{
		case 0: Result ^= GetTypeHash(Union.GetSubtype<TypeA>()); break;
		case 1: Result ^= GetTypeHash(Union.GetSubtype<TypeB>()); break;
		case 2: Result ^= GetTypeHash(Union.GetSubtype<TypeC>()); break;
		case 3: Result ^= GetTypeHash(Union.GetSubtype<TypeD>()); break;
		case 4: Result ^= GetTypeHash(Union.GetSubtype<TypeE>()); break;
		case 5: Result ^= GetTypeHash(Union.GetSubtype<TypeF>()); break;
		case 6: Result ^= GetTypeHash(Union.GetSubtype<TypeG>()); break;
		case 7: Result ^= GetTypeHash(Union.GetSubtype<TypeH>()); break;
		case 8: Result ^= GetTypeHash(Union.GetSubtype<TypeI>()); break;
		case 9: Result ^= GetTypeHash(Union.GetSubtype<TypeJ>()); break;
		case 10: Result ^= GetTypeHash(Union.GetSubtype<TypeK>()); break;
		case 11: Result ^= GetTypeHash(Union.GetSubtype<TypeL>()); break;
		case 12: Result ^= GetTypeHash(Union.GetSubtype<TypeM>()); break;
		case 13: Result ^= GetTypeHash(Union.GetSubtype<TypeN>()); break;
		case 14: Result ^= GetTypeHash(Union.GetSubtype<TypeO>()); break;
		case 15: Result ^= GetTypeHash(Union.GetSubtype<TypeP>()); break;
		case 16: Result ^= GetTypeHash(Union.GetSubtype<TypeQ>()); break;
		case 17: Result ^= GetTypeHash(Union.GetSubtype<TypeR>()); break;
		case 18: Result ^= GetTypeHash(Union.GetSubtype<TypeS>()); break;
		case 19: Result ^= GetTypeHash(Union.GetSubtype<TypeT>()); break;
		case 20: Result ^= GetTypeHash(Union.GetSubtype<TypeU>()); break;
		case 21: Result ^= GetTypeHash(Union.GetSubtype<TypeV>()); break;
		case 22: Result ^= GetTypeHash(Union.GetSubtype<TypeW>()); break;
		case 23: Result ^= GetTypeHash(Union.GetSubtype<TypeX>()); break;
		case 24: Result ^= GetTypeHash(Union.GetSubtype<TypeY>()); break;
		case 25: Result ^= GetTypeHash(Union.GetSubtype<TypeZ>()); break;
		case 26: Result ^= GetTypeHash(Union.GetSubtype<TypeAA>()); break;
		case 27: Result ^= GetTypeHash(Union.GetSubtype<TypeAB>()); break;
		default: FatalErrorUndefinedSubtype(); break;
		};

		return Result;
	}

	/** Equality comparison. */
	bool operator==(const TLongUnion& Other) const
	{
		if(CurrentSubtypeIndex == Other.CurrentSubtypeIndex)
		{
			switch(CurrentSubtypeIndex)
			{
			case 0: return GetSubtype<TypeA>() == Other.GetSubtype<TypeA>(); break;
			case 1: return GetSubtype<TypeB>() == Other.GetSubtype<TypeB>(); break;
			case 2: return GetSubtype<TypeC>() == Other.GetSubtype<TypeC>(); break;
			case 3: return GetSubtype<TypeD>() == Other.GetSubtype<TypeD>(); break;
			case 4: return GetSubtype<TypeE>() == Other.GetSubtype<TypeE>(); break;
			case 5: return GetSubtype<TypeF>() == Other.GetSubtype<TypeF>(); break;
			case 6: return GetSubtype<TypeG>() == Other.GetSubtype<TypeG>(); break;
			case 7: return GetSubtype<TypeH>() == Other.GetSubtype<TypeH>(); break;
			case 8: return GetSubtype<TypeI>() == Other.GetSubtype<TypeI>(); break;
			case 9: return GetSubtype<TypeJ>() == Other.GetSubtype<TypeJ>(); break;
			case 10: return GetSubtype<TypeK>() == Other.GetSubtype<TypeK>(); break;
			case 11: return GetSubtype<TypeL>() == Other.GetSubtype<TypeL>(); break;
			case 12: return GetSubtype<TypeM>() == Other.GetSubtype<TypeM>(); break;
			case 13: return GetSubtype<TypeN>() == Other.GetSubtype<TypeN>(); break;
			case 14: return GetSubtype<TypeO>() == Other.GetSubtype<TypeO>(); break;
			case 15: return GetSubtype<TypeP>() == Other.GetSubtype<TypeP>(); break;
			case 16: return GetSubtype<TypeQ>() == Other.GetSubtype<TypeQ>(); break;
			case 17: return GetSubtype<TypeR>() == Other.GetSubtype<TypeR>(); break;
			case 18: return GetSubtype<TypeS>() == Other.GetSubtype<TypeS>(); break;
			case 19: return GetSubtype<TypeT>() == Other.GetSubtype<TypeT>(); break;
			case 20: return GetSubtype<TypeU>() == Other.GetSubtype<TypeU>(); break;
			case 21: return GetSubtype<TypeV>() == Other.GetSubtype<TypeV>(); break;
			case 22: return GetSubtype<TypeW>() == Other.GetSubtype<TypeW>(); break;
			case 23: return GetSubtype<TypeX>() == Other.GetSubtype<TypeX>(); break;
			case 24: return GetSubtype<TypeY>() == Other.GetSubtype<TypeY>(); break;
			case 25: return GetSubtype<TypeZ>() == Other.GetSubtype<TypeZ>(); break;
			case 26: return GetSubtype<TypeAA>() == Other.GetSubtype<TypeAA>(); break;
			case 27: return GetSubtype<TypeAB>() == Other.GetSubtype<TypeAB>(); break;
			default: FatalErrorUndefinedSubtype(); break;
			};
		}

		return false;
	}

	friend FArchive& operator<<(FArchive& Ar,TLongUnion& Union)
	{
		if(Ar.IsLoading())
		{
			Union.Reset();

			Ar << Union.CurrentSubtypeIndex;

			switch(Union.CurrentSubtypeIndex)
			{
			case 0: Ar << Union.InitSubtype<TypeA>(); break;
			case 1: Ar << Union.InitSubtype<TypeB>(); break;
			case 2: Ar << Union.InitSubtype<TypeC>(); break;
			case 3: Ar << Union.InitSubtype<TypeD>(); break;
			case 4: Ar << Union.InitSubtype<TypeE>(); break;
			case 5: Ar << Union.InitSubtype<TypeF>(); break;
			case 6: Ar << Union.InitSubtype<TypeG>(); break;
			case 7: Ar << Union.InitSubtype<TypeH>(); break;
			case 8: Ar << Union.InitSubtype<TypeI>(); break;
			case 9: Ar << Union.InitSubtype<TypeJ>(); break;
			case 10: Ar << Union.InitSubtype<TypeK>(); break;
			case 11: Ar << Union.InitSubtype<TypeL>(); break;
			case 12: Ar << Union.InitSubtype<TypeM>(); break;
			case 13: Ar << Union.InitSubtype<TypeN>(); break;
			case 14: Ar << Union.InitSubtype<TypeO>(); break;
			case 15: Ar << Union.InitSubtype<TypeP>(); break;
			case 16: Ar << Union.InitSubtype<TypeQ>(); break;
			case 17: Ar << Union.InitSubtype<TypeR>(); break;
			case 18: Ar << Union.InitSubtype<TypeS>(); break;
			case 19: Ar << Union.InitSubtype<TypeT>(); break;
			case 20: Ar << Union.InitSubtype<TypeU>(); break;
			case 21: Ar << Union.InitSubtype<TypeV>(); break;
			case 22: Ar << Union.InitSubtype<TypeW>(); break;
			case 23: Ar << Union.InitSubtype<TypeX>(); break;
			case 24: Ar << Union.InitSubtype<TypeY>(); break;
			case 25: Ar << Union.InitSubtype<TypeZ>(); break;
			case 26: Ar << Union.InitSubtype<TypeAA>(); break;
			case 27: Ar << Union.InitSubtype<TypeAB>(); break;
			default: FatalErrorUndefinedSubtype(); break;
			};
		}
		else
		{
			Ar << Union.CurrentSubtypeIndex;

			switch(Union.CurrentSubtypeIndex)
			{
			case 0: Ar << Union.GetSubtype<TypeA>(); break;
			case 1: Ar << Union.GetSubtype<TypeB>(); break;
			case 2: Ar << Union.GetSubtype<TypeC>(); break;
			case 3: Ar << Union.GetSubtype<TypeD>(); break;
			case 4: Ar << Union.GetSubtype<TypeE>(); break;
			case 5: Ar << Union.GetSubtype<TypeF>(); break;
			case 6: Ar << Union.GetSubtype<TypeG>(); break;
			case 7: Ar << Union.GetSubtype<TypeH>(); break;
			case 8: Ar << Union.GetSubtype<TypeI>(); break;
			case 9: Ar << Union.GetSubtype<TypeJ>(); break;
			case 10: Ar << Union.GetSubtype<TypeK>(); break;
			case 11: Ar << Union.GetSubtype<TypeL>(); break;
			case 12: Ar << Union.GetSubtype<TypeM>(); break;
			case 13: Ar << Union.GetSubtype<TypeN>(); break;
			case 14: Ar << Union.GetSubtype<TypeO>(); break;
			case 15: Ar << Union.GetSubtype<TypeP>(); break;
			case 16: Ar << Union.GetSubtype<TypeQ>(); break;
			case 17: Ar << Union.GetSubtype<TypeR>(); break;
			case 18: Ar << Union.GetSubtype<TypeS>(); break;
			case 19: Ar << Union.GetSubtype<TypeT>(); break;
			case 20: Ar << Union.GetSubtype<TypeU>(); break;
			case 21: Ar << Union.GetSubtype<TypeV>(); break;
			case 22: Ar << Union.GetSubtype<TypeW>(); break;
			case 23: Ar << Union.GetSubtype<TypeX>(); break;
			case 24: Ar << Union.GetSubtype<TypeY>(); break;
			case 25: Ar << Union.GetSubtype<TypeZ>(); break;
			case 26: Ar << Union.GetSubtype<TypeAA>(); break;
			case 27: Ar << Union.GetSubtype<TypeAB>(); break;
			default: FatalErrorUndefinedSubtype(); break;
			};
		}
		return Ar;
	}
private:

	/** The potential values for each subtype of the union. */
	union
	{
		TTypeCompatibleBytes<TypeA> A;
		TTypeCompatibleBytes<TypeB> B;
		TTypeCompatibleBytes<TypeC> C;
		TTypeCompatibleBytes<TypeD> D;
		TTypeCompatibleBytes<TypeE> E;
		TTypeCompatibleBytes<TypeF> F;
		TTypeCompatibleBytes<TypeG> G;
		TTypeCompatibleBytes<TypeH> H;
		TTypeCompatibleBytes<TypeI> I;
		TTypeCompatibleBytes<TypeJ> J;
		TTypeCompatibleBytes<TypeK> K;
		TTypeCompatibleBytes<TypeL> L;
		TTypeCompatibleBytes<TypeM> M;
		TTypeCompatibleBytes<TypeN> N;
		TTypeCompatibleBytes<TypeO> O;
		TTypeCompatibleBytes<TypeP> P;
		TTypeCompatibleBytes<TypeQ> Q;
		TTypeCompatibleBytes<TypeR> R;
		TTypeCompatibleBytes<TypeS> S;
		TTypeCompatibleBytes<TypeT> T;
		TTypeCompatibleBytes<TypeU> U;
		TTypeCompatibleBytes<TypeV> V;
		TTypeCompatibleBytes<TypeW> W;
		TTypeCompatibleBytes<TypeX> X;
		TTypeCompatibleBytes<TypeY> Y;
		TTypeCompatibleBytes<TypeZ> Z;
		TTypeCompatibleBytes<TypeAA> AA;
		TTypeCompatibleBytes<TypeAB> AB;
	} Values;

	/** Sets the union's value to a default value of the given subtype. */
	template<typename Subtype>
	Subtype& InitSubtype()
	{
		Subtype* NewSubtype = &GetSubtype<Subtype>();
		return *new(NewSubtype) Subtype;
	}

	/** Determines the index and reference to the potential value for the given union subtype. */
	template<typename Subtype,typename PointerType>
	static void GetSubtypeIndexAndReference(
		const TLongUnion& Union,
		int32& OutIndex,
		PointerType& OutValuePointer
		)
	{
		if(TAreTypesEqual<TypeA,Subtype>::Value)
		{
			OutIndex = 0;
			OutValuePointer = (PointerType)&Union.Values.A;
		}
		else if(TAreTypesEqual<TypeB,Subtype>::Value)
		{
			OutIndex = 1;
			OutValuePointer = (PointerType)&Union.Values.B;
		}
		else if(TAreTypesEqual<TypeC,Subtype>::Value)
		{
			OutIndex = 2;
			OutValuePointer = (PointerType)&Union.Values.C;
		}
		else if(TAreTypesEqual<TypeD,Subtype>::Value)
		{
			OutIndex = 3;
			OutValuePointer = (PointerType)&Union.Values.D;
		}
		else if(TAreTypesEqual<TypeE,Subtype>::Value)
		{
			OutIndex = 4;
			OutValuePointer = (PointerType)&Union.Values.E;
		}
		else if(TAreTypesEqual<TypeF,Subtype>::Value)
		{
			OutIndex = 5;
			OutValuePointer = (PointerType)&Union.Values.F;
		}
		else if(TAreTypesEqual<TypeG,Subtype>::Value)
		{
			OutIndex = 6;
			OutValuePointer = (PointerType)&Union.Values.G;
		}
		else if(TAreTypesEqual<TypeH,Subtype>::Value)
		{
			OutIndex = 7;
			OutValuePointer = (PointerType)&Union.Values.H;
		}
		else if(TAreTypesEqual<TypeI,Subtype>::Value)
		{
			OutIndex = 8;
			OutValuePointer = (PointerType)&Union.Values.I;
		}
		else if(TAreTypesEqual<TypeJ,Subtype>::Value)
		{
			OutIndex = 9;
			OutValuePointer = (PointerType)&Union.Values.J;
		}
		else if(TAreTypesEqual<TypeK,Subtype>::Value)
		{
			OutIndex = 10;
			OutValuePointer = (PointerType)&Union.Values.K;
		}
		else if(TAreTypesEqual<TypeL,Subtype>::Value)
		{
			OutIndex = 11;
			OutValuePointer = (PointerType)&Union.Values.L;
		}
		else if(TAreTypesEqual<TypeM,Subtype>::Value)
		{
			OutIndex = 12;
			OutValuePointer = (PointerType)&Union.Values.M;
		}
		else if(TAreTypesEqual<TypeN,Subtype>::Value)
		{
			OutIndex = 13;
			OutValuePointer = (PointerType)&Union.Values.N;
		}
		else if(TAreTypesEqual<TypeO,Subtype>::Value)
		{
			OutIndex = 14;
			OutValuePointer = (PointerType)&Union.Values.O;
		}
		else if(TAreTypesEqual<TypeP,Subtype>::Value)
		{
			OutIndex = 15;
			OutValuePointer = (PointerType)&Union.Values.P;
		}
		else if(TAreTypesEqual<TypeQ,Subtype>::Value)
		{
			OutIndex = 16;
			OutValuePointer = (PointerType)&Union.Values.Q;
		}
		else if(TAreTypesEqual<TypeR,Subtype>::Value)
		{
			OutIndex = 17;
			OutValuePointer = (PointerType)&Union.Values.R;
		}
		else if(TAreTypesEqual<TypeS,Subtype>::Value)
		{
			OutIndex = 18;
			OutValuePointer = (PointerType)&Union.Values.S;
		}
		else if(TAreTypesEqual<TypeT,Subtype>::Value)
		{
			OutIndex = 19;
			OutValuePointer = (PointerType)&Union.Values.T;
		}
		else if(TAreTypesEqual<TypeU,Subtype>::Value)
		{
			OutIndex = 20;
			OutValuePointer = (PointerType)&Union.Values.U;
		}
		else if(TAreTypesEqual<TypeV,Subtype>::Value)
		{
			OutIndex = 21;
			OutValuePointer = (PointerType)&Union.Values.V;
		}
		else if(TAreTypesEqual<TypeW,Subtype>::Value)
		{
			OutIndex = 22;
			OutValuePointer = (PointerType)&Union.Values.W;
		}
		else if(TAreTypesEqual<TypeX,Subtype>::Value)
		{
			OutIndex = 23;
			OutValuePointer = (PointerType)&Union.Values.X;
		}
		else if(TAreTypesEqual<TypeY,Subtype>::Value)
		{
			OutIndex = 24;
			OutValuePointer = (PointerType)&Union.Values.Y;
		}
		else if(TAreTypesEqual<TypeZ,Subtype>::Value)
		{
			OutIndex = 25;
			OutValuePointer = (PointerType)&Union.Values.Z;
		}
		else if(TAreTypesEqual<TypeAA,Subtype>::Value)
		{
			OutIndex = 26;
			OutValuePointer = (PointerType)&Union.Values.AA;
		}
		else if(TAreTypesEqual<TypeAB,Subtype>::Value)
		{
			OutIndex = 27;
			OutValuePointer = (PointerType)&Union.Values.AB;
		}
		else
		{
			static_assert(
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeA, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeB, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeC, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeD, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeE, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeF, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeG, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeH, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeI, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeJ, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeK, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeL, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeM, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeN, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeO, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeP, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeQ, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeR, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeS, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeT, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeU, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeV, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeW, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeX, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeY, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeZ, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeAA, Subtype)>::Value ||
				TAreTypesEqual<TEMPLATE_PARAMETERS2(TypeAB, Subtype)>::Value,
				"Type is not subtype of union.");
			OutIndex = -1;
			OutValuePointer = NULL;
		}
	}

	static void FatalErrorUndefinedSubtype()
	{
		UE_LOG(LogUnion, Fatal, TEXT("Unrecognized TLongUnion subtype"));
	}
};
