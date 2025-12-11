#pragma once
#include <Windows.h>

namespace Offsets {
	inline constexpr uintptr_t EnableLoadModule = 0x679c8f8;
	
	inline constexpr uintptr_t FakeDataModelPointer = 0x7d02728;
	inline constexpr uintptr_t FakeDataModelToDataModel = 0x1c0;
	
	inline constexpr uintptr_t Children = 0x70;
	inline constexpr uintptr_t ChildrenEnd = 0x8;
	inline constexpr uintptr_t Name = 0xb0;
	
	inline constexpr uintptr_t Value = 0xd0;
	
	inline constexpr uintptr_t ClassDescriptor = 0x18;
	inline constexpr uintptr_t ClassDescriptorToClassName = 0x8;

	inline constexpr uintptr_t LocalScriptByteCode = 0x0;
	inline constexpr uintptr_t ModuleScriptByteCode = 0x0;
}