/* =========================================

		FCNPC - Fully Controllable NPC
			----------------------

	- File: CallbackManager.hpp
	- Author(s): OrMisicL

  =========================================*/


#ifndef CALLBACKMANAGER_H
#define CALLBACKMANAGER_H

#include <list>

class CCallbackManager
{
public:

	static void	RegisterAMX(AMX *pAMX);
	static void	UnregisterAMX(AMX *pAMX);
	// Callbacks
	static void	OnCreate(int iGameId);
	static void	OnSpawn(int iGameId);
	static void	OnRespawn(int iGameId);
	static void OnDeath(int iGameId, int iKillerId, int iWeapon);
	static void	OnReachDestination(int iGameId);
	static void	OnVehicleEntryComplete(int iGameId, WORD wVehicleId, int iSeat);
	static void	OnVehicleExitComplete(int iGameId);
	static int	OnTakeDamage(int iGameId, WORD wDamagerId, int iWeapon, int iBodyPart, float fHealthLoss);
	static int	OnVehicleTakeDamage(int iGameId, WORD wDamagerId, WORD wVehicleId, BYTE byteWeaponId, CVector vecHit);
	static void	OnFinishPlayback(int iGameId);
	static int	OnChangeNode(int iGameId, int iNodeId);
	static int	OnFinishNodePoint(int iGameId, int iNodePoint);
	static void	OnFinishNode(int iGameId);
	static void	OnStreamIn(int iNPCId, WORD wForPlayerId);
	static void	OnStreamOut(int iNPCId, WORD wForPlayerId);

	static std::list<AMX *>		m_listAMX;

};

#endif
