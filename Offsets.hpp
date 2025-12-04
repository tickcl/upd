#pragma once
#include <Windows.h>

namespace offsets {

    inline constexpr uintptr_t This = 0x8;
    inline constexpr uintptr_t Name = 0xB0;
    inline constexpr uintptr_t Parent = 0x68;
    inline constexpr uintptr_t Children = 0x70;
    inline constexpr uintptr_t ChildrenEnd = 0x8;
    inline constexpr uintptr_t DisplayName = 0x130;
    inline constexpr uintptr_t Gravity = 0x1D8;
    inline constexpr uintptr_t GravityInfo = 0x398;
    inline constexpr uintptr_t StringLength = 0x10;
    inline constexpr uintptr_t ClassDescriptor = 0x18;
    inline constexpr uintptr_t ClassDescriptorToClassName = 0x8;

    inline constexpr uintptr_t LocalPlayer = 0x130;
    inline constexpr uintptr_t WalkSpeed = 0x1D4;
    inline constexpr uintptr_t WalkSpeedCheck = 0x3C0;
    inline constexpr uintptr_t JumpPower = 0x1B0;
    inline constexpr uintptr_t Character = 0x2E8;
    inline constexpr uintptr_t ModelInstance = 0x360;
    inline constexpr uintptr_t MoveDirection = 0x360;
    inline constexpr uintptr_t Team = 0x270;

    inline constexpr uintptr_t Health = 0x194;
    inline constexpr uintptr_t MaxHealth = 0x1B4;
    inline constexpr uintptr_t Position = 0x12C;
    inline constexpr uintptr_t CFrame = 0xC0;
    inline constexpr uintptr_t RootPartR15 = 0x608;
    inline constexpr uintptr_t RootPartR6 = 0x4A8;
    inline constexpr uintptr_t Primitive = 0x148;
    inline constexpr uintptr_t PartSize = 0x1B0;

    inline constexpr uintptr_t FakeDataModel = 0x78A24C8;
    inline constexpr uintptr_t FakeDataModelToDataModel = 0x1C0;
    inline constexpr uintptr_t ServerIP = 0x5d8;

    inline constexpr uintptr_t VisualEnginePointer = 0x76180D0;
    inline constexpr uintptr_t ViewMatrix = 0x4B0;
    inline constexpr uintptr_t Camera = 0x420;
    inline constexpr uintptr_t CameraPos = 0x11C;
    inline constexpr uintptr_t FOV = 0x160;
    inline constexpr uintptr_t CameraSubject = 0xE8;
    inline constexpr uintptr_t CameraType = 0x158;
    inline constexpr uintptr_t CameraRotation = 0xF8;

    inline constexpr uintptr_t CurrentCamera = 0x420;

    inline constexpr uintptr_t name = Name;
    inline constexpr uintptr_t parent = Parent;
    inline constexpr uintptr_t children = Children;
    inline constexpr uintptr_t children_end = ChildrenEnd;
    inline constexpr uintptr_t localplayer = LocalPlayer;
    inline constexpr uintptr_t walkspeed = WalkSpeed;
    inline constexpr uintptr_t walkspeedcheck = WalkSpeedCheck;
    inline constexpr uintptr_t jumppower = JumpPower;
    inline constexpr uintptr_t fakedatamodel = FakeDataModel;
    inline constexpr uintptr_t fakedm_to_dm = FakeDataModelToDataModel;

}
