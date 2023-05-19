#include "memory.h"
#include <iostream>
#include <chrono>
#include <thread>

namespace offsets
{
	constexpr ::std::ptrdiff_t dwLocalPlayer = 0xDEA964;
	constexpr ::std::ptrdiff_t m_iEntityQuality = 0x2FBC;
	constexpr ::std::ptrdiff_t dwForceAttack = 0x322DDFC;
	constexpr ::std::ptrdiff_t m_iHealth = 0x100;
	constexpr ::std::ptrdiff_t m_iTeamNum = 0xF4;
	constexpr ::std::ptrdiff_t m_iCrosshairId = 0x11838;
	constexpr ::std::ptrdiff_t dwGlowObjectManager = 0x535AA70;
}


int main()
{
	const auto memory = Memory{ "csgo.exe" };
	const auto client = memory.GetModuleAddress("client.dll");

	std::cout << std::hex << "client.dll -> 0x" << client << std::dec << std::endl;
	while (true)
	{
		//sleep loop for 1 millisecond
		std::this_thread::sleep_for(std::chrono::milliseconds(1));

		//get local player
		const auto localPlayer = memory.Read<std::uintptr_t>(client + offsets::dwLocalPlayer);

	}

	return 0;
}