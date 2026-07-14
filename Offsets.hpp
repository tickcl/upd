#pragma once

namespace Offsets {
    inline constexpr uintptr_t This = 0x8;
    inline constexpr uintptr_t Name = 0x98;
    inline constexpr uintptr_t Parent = 0x68;
    inline constexpr uintptr_t Children = 0x70;
    inline constexpr uintptr_t ChildrenEnd = 0x8;
    inline constexpr uintptr_t DisplayName = 0x138;
    inline constexpr uintptr_t ClassDescriptor = 0x18;
    inline constexpr uintptr_t ClassDescriptorToClassName = 0x8;
    inline constexpr uintptr_t StringLength = 0x10;
    inline constexpr uintptr_t LocalPlayer = 0x130;
    inline constexpr uintptr_t ModelInstance = 0x298;
    inline constexpr uintptr_t WalkSpeed = 0x1D0;
    inline constexpr uintptr_t WalkSpeedCheck = 0x3BC;
    inline constexpr uintptr_t JumpPower = 0x1A4;
    inline constexpr uintptr_t Team = 0x2D8;
    inline constexpr uintptr_t Health = 0x188;
    inline constexpr uintptr_t MaxHealth = 0x1A8;
    inline constexpr uintptr_t MoveDirection = 0x140;
    inline constexpr uintptr_t Position = 0xEC;
    inline constexpr uintptr_t Velocity = 0xF8;
    inline constexpr uintptr_t CFrame = 0xC8;
    inline constexpr uintptr_t Primitive = 0x128;
    inline constexpr uintptr_t PartSize = 0x1B8;
    inline constexpr uintptr_t RootPartR15 = 0x620;
    inline constexpr uintptr_t RootPartR6 = 0x4C0;
    inline constexpr uintptr_t Gravity = 0x210;
    inline constexpr uintptr_t GravityInfo = 0x3C8;
    inline constexpr uintptr_t FakeDataModel = 0x851F568;
    inline constexpr uintptr_t FakeDataModelToDataModel = 0x1D0;
    inline constexpr uintptr_t ServerIP = 0x560;
    inline constexpr uintptr_t VisualEnginePointer = 0x824B728;
    inline constexpr uintptr_t ViewMatrix = 0x150;
    inline constexpr uintptr_t CurrentCamera = 0x488;
    inline constexpr uintptr_t CameraPos = 0xFC;
    inline constexpr uintptr_t FOV = 0x140;
    inline constexpr uintptr_t CameraSubject = 0xC8;
    inline constexpr uintptr_t CameraType = 0x138;
    inline constexpr uintptr_t CameraRotation = 0xD8;

    namespace Humanoid {
        inline constexpr uintptr_t SeatPart = 0x108;
    }

    namespace VehicleSeat {
        inline constexpr uintptr_t MaxSpeed = 0x1C8;
        inline constexpr uintptr_t SteerFloat = 0x1D0;
        inline constexpr uintptr_t ThrottleFloat = 0x1D8;
        inline constexpr uintptr_t Torque = 0x1DC;
        inline constexpr uintptr_t TurnSpeed = 0x1E0;
    }

    namespace Tool {
        inline constexpr uintptr_t CanBeDropped = 0x4B8;
        inline constexpr uintptr_t Enabled = 0x4B9;
        inline constexpr uintptr_t Grip = 0x4AC;
        inline constexpr uintptr_t ManualActivationOnly = 0x1D5;
        inline constexpr uintptr_t RequiresHandle = 0x4BB;
        inline constexpr uintptr_t TextureId = 0x360;
        inline constexpr uintptr_t Tooltip = 0x468;
    }

    namespace Atmosphere {
        inline constexpr uintptr_t Color = 0xB8;
        inline constexpr uintptr_t Decay = 0xC4;
        inline constexpr uintptr_t Density = 0xD0;
        inline constexpr uintptr_t Glare = 0xD4;
        inline constexpr uintptr_t Haze = 0xD8;
        inline constexpr uintptr_t Offset = 0xDC;
    }

    namespace Lighting {
        inline constexpr uintptr_t Ambient = 0xC8;
        inline constexpr uintptr_t Brightness = 0x110;
        inline constexpr uintptr_t ClockTime = 0x1A8;
        inline constexpr uintptr_t ColorShift_Bottom = 0xE0;
        inline constexpr uintptr_t ColorShift_Top = 0xD4;
        inline constexpr uintptr_t EnvironmentDiffuseScale = 0x114;
        inline constexpr uintptr_t EnvironmentSpecularScale = 0x118;
        inline constexpr uintptr_t ExposureCompensation = 0x11C;
        inline constexpr uintptr_t FogColor = 0xEC;
        inline constexpr uintptr_t FogEnd = 0x124;
        inline constexpr uintptr_t FogStart = 0x128;
        inline constexpr uintptr_t GeographicLatitude = 0x180;
        inline constexpr uintptr_t GlobalShadows = 0x138;
        inline constexpr uintptr_t GradientBottom = 0x184;
        inline constexpr uintptr_t GradientTop = 0x140;
        inline constexpr uintptr_t LightColor = 0x14C;
        inline constexpr uintptr_t LightDirection = 0x158;
        inline constexpr uintptr_t MoonPosition = 0x174;
        inline constexpr uintptr_t OutdoorAmbient = 0xF8;
        inline constexpr uintptr_t Sky = 0x1C8;
        inline constexpr uintptr_t Source = 0x164;
        inline constexpr uintptr_t SunPosition = 0x168;
    }

    namespace Sky {
        inline constexpr uintptr_t MoonAngularSize = 0x244;
        inline constexpr uintptr_t MoonTextureId = 0xC8;
        inline constexpr uintptr_t SkyboxBk = 0xF8;
        inline constexpr uintptr_t SkyboxDn = 0x128;
        inline constexpr uintptr_t SkyboxFt = 0x158;
        inline constexpr uintptr_t SkyboxLf = 0x188;
        inline constexpr uintptr_t SkyboxOrientation = 0x238;
        inline constexpr uintptr_t SkyboxRt = 0x1B8;
        inline constexpr uintptr_t SkyboxUp = 0x1E8;
        inline constexpr uintptr_t StarCount = 0x248;
        inline constexpr uintptr_t SunAngularSize = 0x23C;
        inline constexpr uintptr_t SunTextureId = 0x218;
    }

    namespace BlurEffect {
        inline constexpr uintptr_t Enabled = 0xB0;
        inline constexpr uintptr_t Size = 0xB8;
    }

    namespace SunRaysEffect {
        inline constexpr uintptr_t Enabled = 0xB0;
        inline constexpr uintptr_t Intensity = 0xB8;
        inline constexpr uintptr_t Spread = 0xBC;
    }

    namespace MaterialColors {
        inline constexpr uintptr_t Asphalt = 0x30;
        inline constexpr uintptr_t Basalt = 0x27;
        inline constexpr uintptr_t Brick = 0xF;
        inline constexpr uintptr_t Cobblestone = 0x33;
        inline constexpr uintptr_t Concrete = 0xC;
        inline constexpr uintptr_t CrackedLava = 0x2D;
        inline constexpr uintptr_t Glacier = 0x1B;
        inline constexpr uintptr_t Grass = 0x6;
        inline constexpr uintptr_t Ground = 0x2A;
        inline constexpr uintptr_t Ice = 0x36;
        inline constexpr uintptr_t LeafyGrass = 0x39;
        inline constexpr uintptr_t Limestone = 0x3F;
        inline constexpr uintptr_t Mud = 0x24;
        inline constexpr uintptr_t Pavement = 0x42;
        inline constexpr uintptr_t Rock = 0x18;
        inline constexpr uintptr_t Salt = 0x3C;
        inline constexpr uintptr_t Sand = 0x12;
        inline constexpr uintptr_t Sandstone = 0x21;
        inline constexpr uintptr_t Slate = 0x9;
        inline constexpr uintptr_t Snow = 0x1E;
        inline constexpr uintptr_t WoodPlanks = 0x15;
    }

    namespace DataModel {
        inline constexpr uintptr_t CreatorId = 0x180;
        inline constexpr uintptr_t GameId = 0x188;
        inline constexpr uintptr_t GameLoaded = 0x578;
        inline constexpr uintptr_t JobId = 0x120;
        inline constexpr uintptr_t PlaceId = 0x190;
        inline constexpr uintptr_t PlaceVersion = 0x1AC;
        inline constexpr uintptr_t PrimitiveCount = 0x3C0;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t ServerIP = 0x560;
        inline constexpr uintptr_t Workspace = 0x160;
    }

    namespace BasePart {
        inline constexpr uintptr_t AssemblyAngularVelocity = 0x104;
        inline constexpr uintptr_t AssemblyLinearVelocity = 0xF8;
        inline constexpr uintptr_t Color3 = 0x148;
        inline constexpr uintptr_t Primitive = 0x128;
        inline constexpr uintptr_t Shape = 0x159;
        inline constexpr uintptr_t Transparency = 0xD0;
    }

    namespace Primitive {
        inline constexpr uintptr_t Material = 0x0;
        inline constexpr uintptr_t Position = 0xEC;
        inline constexpr uintptr_t Flags = 0x1B6;
        inline constexpr uintptr_t Owner = 0x208;
        inline constexpr uintptr_t Rotation = 0xC8;
        inline constexpr uintptr_t Size = 0x1B8;
        inline constexpr uintptr_t Validate = 0x6;
    }

    namespace PrimitiveFlags {
        inline constexpr uintptr_t Anchored = 0x2;
    }
}
