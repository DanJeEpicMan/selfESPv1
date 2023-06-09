#include "memory.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>
#include <TlHelp32.h>

#include <objidl.h>
#include <gdiplus.h>

#include <thread>

#include <cstdlib>
#include <string> 

using namespace Gdiplus;
#pragma comment (lib,"Gdiplus.lib")

float width = 2560;
float height = 1440;

VOID OnPainteteam(HDC hdc, int x, int y, int width, int height, int diff, int color1, int color2, int color3)
{
	using namespace Gdiplus;
	Graphics graphics(hdc);
	Pen pen(Color(255, color1, color2, color3), 3);
	//graphics.DrawLine(&pen, leftx, heady, rightx, heady);
	//graphics.DrawLine(&pen, rightx, heady, rightx, feety);
	//graphics.DrawLine(&pen, leftx, feety, rightx, feety);
	//graphics.DrawLine(&pen, leftx, heady, leftx, feety);
	graphics.DrawRectangle(&pen, x, y, width, height); // x, y, width, height
}

VOID ehead(HDC hdc, int X, int Y)
{
	Graphics graphics(hdc);
	Pen pen(Color(255, 255, 0, 0), 5);
	graphics.DrawLine(&pen, X-2, Y-10, X+2, Y-10);

}

namespace alloffsets
{
	//netvars
	constexpr ::std::ptrdiff_t cs_gamerules_data = 0x0;
	constexpr ::std::ptrdiff_t m_ArmorValue = 0x117CC;
	constexpr ::std::ptrdiff_t m_Collision = 0x320;
	constexpr ::std::ptrdiff_t m_CollisionGroup = 0x474;
	constexpr ::std::ptrdiff_t m_Local = 0x2FCC;
	constexpr ::std::ptrdiff_t m_MoveType = 0x25C;
	constexpr ::std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x31D4;
	constexpr ::std::ptrdiff_t m_OriginalOwnerXuidLow = 0x31D0;
	constexpr ::std::ptrdiff_t m_SurvivalGameRuleDecisionTypes = 0x1328;
	constexpr ::std::ptrdiff_t m_SurvivalRules = 0xD00;
	constexpr ::std::ptrdiff_t m_aimPunchAngle = 0x303C;
	constexpr ::std::ptrdiff_t m_aimPunchAngleVel = 0x3048;
	constexpr ::std::ptrdiff_t m_angEyeAnglesX = 0x117D0;
	constexpr ::std::ptrdiff_t m_angEyeAnglesY = 0x117D4;
	constexpr ::std::ptrdiff_t m_bBombDefused = 0x29C0;
	constexpr ::std::ptrdiff_t m_bBombPlanted = 0x9A5;
	constexpr ::std::ptrdiff_t m_bBombTicking = 0x2990;
	constexpr ::std::ptrdiff_t m_bFreezePeriod = 0x20;
	constexpr ::std::ptrdiff_t m_bGunGameImmunity = 0x9990;
	constexpr ::std::ptrdiff_t m_bHasDefuser = 0x117DC;
	constexpr ::std::ptrdiff_t m_bHasHelmet = 0x117C0;
	constexpr ::std::ptrdiff_t m_bInReload = 0x32B5;
	constexpr ::std::ptrdiff_t m_bIsDefusing = 0x997C;
	constexpr ::std::ptrdiff_t m_bIsQueuedMatchmaking = 0x74;
	constexpr ::std::ptrdiff_t m_bIsScoped = 0x9974;
	constexpr ::std::ptrdiff_t m_bIsValveDS = 0x7C;
	constexpr ::std::ptrdiff_t m_bSpotted = 0x93D;
	constexpr ::std::ptrdiff_t m_bSpottedByMask = 0x980;
	constexpr ::std::ptrdiff_t m_bStartedArming = 0x3400;
	constexpr ::std::ptrdiff_t m_bUseCustomAutoExposureMax = 0x9D9;
	constexpr ::std::ptrdiff_t m_bUseCustomAutoExposureMin = 0x9D8;
	constexpr ::std::ptrdiff_t m_bUseCustomBloomScale = 0x9DA;
	constexpr ::std::ptrdiff_t m_clrRender = 0x70;
	constexpr ::std::ptrdiff_t m_dwBoneMatrix = 0x26A8;
	constexpr ::std::ptrdiff_t m_fAccuracyPenalty = 0x3340;
	constexpr ::std::ptrdiff_t m_fFlags = 0x104;
	constexpr ::std::ptrdiff_t m_flC4Blow = 0x29A0;
	constexpr ::std::ptrdiff_t m_flCustomAutoExposureMax = 0x9E0;
	constexpr ::std::ptrdiff_t m_flCustomAutoExposureMin = 0x9DC;
	constexpr ::std::ptrdiff_t m_flCustomBloomScale = 0x9E4;
	constexpr ::std::ptrdiff_t m_flDefuseCountDown = 0x29BC;
	constexpr ::std::ptrdiff_t m_flDefuseLength = 0x29B8;
	constexpr ::std::ptrdiff_t m_flFallbackWear = 0x31E0;
	constexpr ::std::ptrdiff_t m_flFlashDuration = 0x10470;
	constexpr ::std::ptrdiff_t m_flFlashMaxAlpha = 0x1046C;
	constexpr ::std::ptrdiff_t m_flLastBoneSetupTime = 0x2928;
	constexpr ::std::ptrdiff_t m_flLowerBodyYawTarget = 0x9ADC;
	constexpr ::std::ptrdiff_t m_flNextAttack = 0x2D80;
	constexpr ::std::ptrdiff_t m_flNextPrimaryAttack = 0x3248;
	constexpr ::std::ptrdiff_t m_flSimulationTime = 0x268;
	constexpr ::std::ptrdiff_t m_flTimerLength = 0x29A4;
	constexpr ::std::ptrdiff_t m_hActiveWeapon = 0x2F08;
	constexpr ::std::ptrdiff_t m_hBombDefuser = 0x29C4;
	constexpr ::std::ptrdiff_t m_hMyWeapons = 0x2E08;
	constexpr ::std::ptrdiff_t m_hObserverTarget = 0x339C;
	constexpr ::std::ptrdiff_t m_hOwner = 0x29DC;
	constexpr ::std::ptrdiff_t m_hOwnerEntity = 0x14C;
	constexpr ::std::ptrdiff_t m_hViewModel = 0x3308;
	constexpr ::std::ptrdiff_t m_iAccountID = 0x2FD8;
	constexpr ::std::ptrdiff_t m_iClip1 = 0x3274;
	constexpr ::std::ptrdiff_t m_iCompetitiveRanking = 0x1A84;
	constexpr ::std::ptrdiff_t m_iCompetitiveWins = 0x1B88;
	constexpr ::std::ptrdiff_t m_iCrosshairId = 0x11838;
	constexpr ::std::ptrdiff_t m_iDefaultFOV = 0x333C;
	constexpr ::std::ptrdiff_t m_iEntityQuality = 0x2FBC;
	constexpr ::std::ptrdiff_t m_iFOV = 0x31F4;
	constexpr ::std::ptrdiff_t m_iFOVStart = 0x31F8;
	constexpr ::std::ptrdiff_t m_iGlowIndex = 0x10488;
	constexpr ::std::ptrdiff_t m_iHealth = 0x100;
	constexpr ::std::ptrdiff_t m_iItemDefinitionIndex = 0x2FBA;
	constexpr ::std::ptrdiff_t m_iItemIDHigh = 0x2FD0;
	constexpr ::std::ptrdiff_t m_iMostRecentModelBoneCounter = 0x2690;
	constexpr ::std::ptrdiff_t m_iObserverMode = 0x3388;
	constexpr ::std::ptrdiff_t m_iShotsFired = 0x103E0;
	constexpr ::std::ptrdiff_t m_iState = 0x3268;
	constexpr ::std::ptrdiff_t m_iTeamNum = 0xF4;
	constexpr ::std::ptrdiff_t m_lifeState = 0x25F;
	constexpr ::std::ptrdiff_t m_nBombSite = 0x2994;
	constexpr ::std::ptrdiff_t m_nFallbackPaintKit = 0x31D8;
	constexpr ::std::ptrdiff_t m_nFallbackSeed = 0x31DC;
	constexpr ::std::ptrdiff_t m_nFallbackStatTrak = 0x31E4;
	constexpr ::std::ptrdiff_t m_nForceBone = 0x268C;
	constexpr ::std::ptrdiff_t m_nModelIndex = 0x258;
	constexpr ::std::ptrdiff_t m_nTickBase = 0x3440;
	constexpr ::std::ptrdiff_t m_nViewModelIndex = 0x29D0;
	constexpr ::std::ptrdiff_t m_rgflCoordinateFrame = 0x444;
	constexpr ::std::ptrdiff_t m_szCustomName = 0x304C;
	constexpr ::std::ptrdiff_t m_szLastPlaceName = 0x35C4;
	constexpr ::std::ptrdiff_t m_thirdPersonViewAngles = 0x31E8;
	constexpr ::std::ptrdiff_t m_vecOrigin = 0x138;
	constexpr ::std::ptrdiff_t m_vecVelocity = 0x114;
	constexpr ::std::ptrdiff_t m_vecViewOffset = 0x108;
	constexpr ::std::ptrdiff_t m_viewPunchAngle = 0x3030;
	constexpr ::std::ptrdiff_t m_zoomLevel = 0x33E0;
	//sigs
	constexpr ::std::ptrdiff_t anim_overlays = 0x2990;
	constexpr ::std::ptrdiff_t clientstate_choked_commands = 0x4D30;
	constexpr ::std::ptrdiff_t clientstate_delta_ticks = 0x174;
	constexpr ::std::ptrdiff_t clientstate_last_outgoing_command = 0x4D2C;
	constexpr ::std::ptrdiff_t clientstate_net_channel = 0x9C;
	constexpr ::std::ptrdiff_t convar_name_hash_table = 0x301A0;
	constexpr ::std::ptrdiff_t dwClientState = 0x59F19C;
	constexpr ::std::ptrdiff_t dwClientState_GetLocalPlayer = 0x180;
	constexpr ::std::ptrdiff_t dwClientState_IsHLTV = 0x4D48;
	constexpr ::std::ptrdiff_t dwClientState_Map = 0x28C;
	constexpr ::std::ptrdiff_t dwClientState_MapDirectory = 0x188;
	constexpr ::std::ptrdiff_t dwClientState_MaxPlayer = 0x388;
	constexpr ::std::ptrdiff_t dwClientState_PlayerInfo = 0x52C0;
	constexpr ::std::ptrdiff_t dwClientState_State = 0x108;
	constexpr ::std::ptrdiff_t dwClientState_ViewAngles = 0x4D90;
	constexpr ::std::ptrdiff_t dwEntityList = 0x4DFEF0C;
	constexpr ::std::ptrdiff_t dwForceAttack = 0x322CD48;
	constexpr ::std::ptrdiff_t dwForceAttack2 = 0x322CD54;
	constexpr ::std::ptrdiff_t dwForceBackward = 0x322CD9C;
	constexpr ::std::ptrdiff_t dwForceForward = 0x322CD90;
	constexpr ::std::ptrdiff_t dwForceJump = 0x52BAC68;
	constexpr ::std::ptrdiff_t dwForceLeft = 0x322CDA8;
	constexpr ::std::ptrdiff_t dwForceRight = 0x322CDB4;
	constexpr ::std::ptrdiff_t dwGameDir = 0x63AD80;
	constexpr ::std::ptrdiff_t dwGameRulesProxy = 0x532E474;
	constexpr ::std::ptrdiff_t dwGetAllClasses = 0xE0AF84;
	constexpr ::std::ptrdiff_t dwGlobalVars = 0x59EE60;
	constexpr ::std::ptrdiff_t dwGlowObjectManager = 0x5359988;
	constexpr ::std::ptrdiff_t dwInput = 0x525C4E0;
	constexpr ::std::ptrdiff_t dwInterfaceLinkList = 0x99A804;
	constexpr ::std::ptrdiff_t dwLocalPlayer = 0xDE997C;
	constexpr ::std::ptrdiff_t dwMouseEnable = 0x5238140;
	constexpr ::std::ptrdiff_t dwMouseEnablePtr = 0x5238110;
	constexpr ::std::ptrdiff_t dwPlayerResource = 0x322B0B0;
	constexpr ::std::ptrdiff_t dwRadarBase = 0x52359E4;
	constexpr ::std::ptrdiff_t dwSensitivity = 0xDEDB98;
	constexpr ::std::ptrdiff_t dwSensitivityPtr = 0xDEDB98;
	constexpr ::std::ptrdiff_t dwSetClanTag = 0x8DA80;
	constexpr ::std::ptrdiff_t dwViewMatrix = 0x4DEFD54;
	constexpr ::std::ptrdiff_t dwWeaponTable = 0x525D5BC;
	constexpr ::std::ptrdiff_t dwWeaponTableIndex = 0x326C;
	constexpr ::std::ptrdiff_t dwYawPtr = 0xDED928;
	constexpr ::std::ptrdiff_t dwZoomSensitivityRatioPtr = 0xDF3398;
	constexpr ::std::ptrdiff_t dwbSendPackets = 0xDD2B2;
	constexpr ::std::ptrdiff_t dwppDirect3DDevice9 = 0xA62C0;
	constexpr ::std::ptrdiff_t find_hud_element = 0x5AABF630;
	constexpr ::std::ptrdiff_t force_update_spectator_glow = 0x3D8BEA;
	constexpr ::std::ptrdiff_t interface_engine_cvar = 0x3FA9C;
	constexpr ::std::ptrdiff_t is_c4_owner = 0x3E63F0;
	constexpr ::std::ptrdiff_t m_bDormant = 0xED;
	constexpr ::std::ptrdiff_t m_bIsLocalPlayer = 0x3628;
	constexpr ::std::ptrdiff_t m_flSpawnTime = 0x103C0;
	constexpr ::std::ptrdiff_t m_pStudioHdr = 0x2950;
	constexpr ::std::ptrdiff_t m_pitchClassPtr = 0x5238038;
	constexpr ::std::ptrdiff_t m_yawClassPtr = 0xDED928;
	constexpr ::std::ptrdiff_t model_ambient_min = 0x5A1194;
	constexpr ::std::ptrdiff_t set_abs_angles = 0x1E6D00;
	constexpr ::std::ptrdiff_t set_abs_origin = 0x1E6B40;
}

namespace offsets 
{
	constexpr ::std::ptrdiff_t dwViewMatrix = 0x4DEFD54;
	constexpr ::std::ptrdiff_t dwEntityList = 0x4DFEF0C;
	constexpr ::std::ptrdiff_t dwLocalPlayer = 0xDE997C;
	constexpr ::std::ptrdiff_t m_iTeamNum = 0xF4;
	constexpr ::std::ptrdiff_t m_iHealth = 0x100;
	constexpr ::std::ptrdiff_t m_vecOrigin = 0x138;
	constexpr ::std::ptrdiff_t m_dwBoneMatrix = 0x26A8;
}

struct view_matrix_t {
	float* operator[ ](int index) {
		return matrix[index];
	}

	float matrix[4][4];
};

struct Vector3
{
	float x, y, z;
};

struct Vector2
{
	float x, y;
};

struct Vector4
{
	float x, y, z, w;
};

float offsetx(float x)
{
	x = x+2500;
	return x / 2;
}

float offsety(float y)
{
	y = y+1500;
	return y / 2;
}

Vector2 WorldToScreen(const Vector3 pos, view_matrix_t matrix, float width, float height) {
	//world space to clip space
	float _x = matrix[0][0] * pos.x + matrix[0][1] * pos.y + matrix[0][2] * pos.z + matrix[0][3];
	//std::cout << "x: " << _x << std::endl;
	float _y = matrix[1][0] * pos.x + matrix[1][1] * pos.y + matrix[1][2] * pos.z + matrix[1][3];
	//std::cout << "y: " << _y << std::endl;

	float w = matrix[3][0] * pos.x + matrix[3][1] * pos.y + matrix[3][2] * pos.z + matrix[3][3];
	//std::cout << "w: " << w << std::endl;

	if (w < 0.01f)
		return Vector2(0, 0);

	float inv_w = 1.f / w;
	_x *= inv_w;
	_y *= inv_w;
	//clip space to screen space
	//std::cout << "x2: " << _x << std::endl;
	//std::cout << "y2: " << _y << std::endl;

	float x = width * .5f;
	float y = height * .5f;
	//std::cout << "x3: " << x << std::endl;
	//std::cout << "y3: " << y << std::endl;

	x += 0.5f * _x * width + 0.5f;
	y -= 0.5f * _y * height + 0.5f;
	//std::cout << "x4: " << x << std::endl;
	//std::cout << "y4: " << y << std::endl;

	return Vector2(x, y);
}

int main()
{
	const auto memory = Memory{ "csgo.exe" };
	const auto client = memory.GetModuleAddress("client.dll");

	GdiplusStartupInput gdiplusStartupInput;
	ULONG_PTR gdiplusToken;
	GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);


	HWND hWnd = FindWindow(NULL, TEXT("Counter-Strike: Global Offensive - Direct3D 9"));
	HDC hdc;
	hdc = GetDC(hWnd);

	while (true)
	{
		//std::this_thread::sleep_for(std::chrono::milliseconds(1));

		const auto localPlayer = memory.Read<std::uintptr_t>(client + offsets::dwLocalPlayer);
		int localPlayerTeam = memory.Read<int>(localPlayer + offsets::m_iTeamNum);
		view_matrix_t vm = memory.Read<view_matrix_t>(client + offsets::dwViewMatrix);

		Vector3 position_m = memory.Read<Vector3>(localPlayer + offsets::m_vecOrigin);

		//OnPaintme(hdc, offsetx(position_m.x), offsety(position_m.y));

		for (int i = 1; i < 64; i++)// loops though all possible places where players would be
		{
			uintptr_t entity = memory.Read<uintptr_t>(client + offsets::dwEntityList + i * 0x10); //base entity + 0x10 = player 1 + 0x10 = player 2 etc

			int health = memory.Read<int>(entity + offsets::m_iHealth);
			int team = memory.Read<int>(entity + offsets::m_iTeamNum);
			if (team == 0) // if team is 0 then its not a player
			{
				continue;
			}

			if (health < 1) // if health is less than 1 then its dead
			{
				continue;
			}

			Vector3 position = memory.Read<Vector3>(entity + offsets::m_vecOrigin);

			int diffx = std::abs(position_m.x - position.x);
			int diffy = std::abs(position_m.y - position.y);
			int diffz = std::abs(position_m.z - position.z);
			int diff = diffx + diffy + diffz;

			// Get the screen coordinates of the entity.
			Vector2 screenCoordinates = WorldToScreen(position, vm, width, height);

			const auto bonematrix = memory.Read<std::uintptr_t>(entity + offsets::m_dwBoneMatrix);
			//std::cout << "Bone Matrix: " << bonematrix << std::endl;

			const auto playerHeadPosition = Vector3{
				memory.Read<float>(bonematrix + 0x30 * 8 + 0x0C),
				memory.Read<float>(bonematrix + 0x30 * 8 + 0x1C),
				memory.Read<float>(bonematrix + 0x30 * 8 + 0x2C)
			};

			//std::cout << "X: " << playerHeadPosition.x << " Y: " << playerHeadPosition.y << " Z: " << playerHeadPosition.z << std::endl;
			//std::cout << "X: " << headPosition.x << " Y: " << headPosition.y << " Z: " << headPosition.z << std::endl;

			Vector2 screenCoordinatesHead = WorldToScreen(playerHeadPosition, vm, width, height);

			// Render the entity at the screen coordinates.
				//OnPaintme(hdc, screenCoordinates.x, screenCoordinates.y);
			//std::cout << "X: " << screenCoordinates.x << " Y: " << screenCoordinates.y << std::endl << std::endl;
				//OnPainteteam(hdc, screenCoordinatesHead.x, screenCoordinatesHead.y);

			int middley_middle_math = ((screenCoordinatesHead.y - screenCoordinates.y) / 2); // middle Y
			int height = std::abs(screenCoordinatesHead.y - screenCoordinates.y);
			int middley = screenCoordinates.y + middley_middle_math; // middle true Y
			int div3 = std::abs(middley_middle_math / 3); // 1/3 of the middle Y
			int left = screenCoordinates.x - div3; // left X
			int right = screenCoordinates.x + div3; // right X

				//OnPaintteam(hdc, left, middley);
				//OnPaintteam(hdc, right, middley);

			//left, screenCoordinatesHead.y         right, screenCoordinatesHead.y
			//
			//left, screenCoordinates.y				right, screenCoordinates.y
			int c1 = 0;
			int c2 = 0;
			int c3 = 0;
			if (team != localPlayerTeam)
			{
				c1 = 255;
				//ehead(hdc, screenCoordinatesHead.x, screenCoordinatesHead.y);

			}
			else if (team  == localPlayerTeam)
			{
				c2 = 255;
			}

			OnPainteteam(hdc, left, screenCoordinatesHead.y, div3 * 2, height, diff, c1, c2, c3);
			//std::cout << std::endl;
		}
	}

	return 0;
}
      

//Memory Class               |-|
//Get the Offsets            |-|
//Make a loop                |-|
//Vector3                    |-|
//Get local player           |-|
//Get everyone else X,Y,Z    |-|
//Draw a map of people       |-|
	//Get OpenGL to display  | |
	//pos |x, y|			 |-|
	//display x, y from there|-|
//Get the view matrix        |-|
//Make needed vecors         |-|
//implement a wts func       | |
//c++ template 4 overlay     | |