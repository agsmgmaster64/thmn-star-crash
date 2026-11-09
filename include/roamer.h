#ifndef GUARD_ROAMER_H
#define GUARD_ROAMER_H

enum RoamLocationType {
    ROAM_LOCATION_AMPHIBIOUS,
    ROAM_LOCATION_TERRESTRIAL,
};

enum RespawnMode {
    ROAMER_NO_RESPAWN,
    ROAMER_DAILY_RESPAWN,
    ROAMER_WEEKLY_RESPAWN,
    ROAMER_INSTANT_RESPAWN,
};

void DeactivateAllRoamers(void);
void InitRoamer(void);
void UpdateLocationHistoryForRoamer(void);
void RoamerMoveToOtherLocationSet(u32 roamerIndex);
void RoamerMove(u32 roamerIndex);
bool8 IsRoamerAt(u32 roamerIndex, u8 mapGroup, u8 mapNum);
void CreateRoamerMonInstance(u32 roamerIndex);
bool8 TryStartRoamerEncounter(void);
void UpdateRoamerHPStatus(struct Pokemon *mon);
void SetRoamerInactive(u32 roamerIndex);
void GetRoamerLocation(u32 roamerIndex, u8 *mapGroup, u8 *mapNum);
bool8 TryAddRoamer(enum Species species, u8 level, bool32 doesNotFlee, enum RespawnMode respawnMode);
void MoveAllRoamersToOtherLocationSets(void);
void MoveAllRoamers(void);
bool8 DoesRoamerFlee(void);
bool8 CanRoamerRespawn(u32 roamerIndex);
void HandleRoamerRespawnTimer(void);
void UpdateRoamerRespawns(u16 days);
bool8 TryAddStalker(enum Species species, u8 level, bool32 doesNotFlee, enum RespawnMode respawnMode);

extern u8 gEncounteredRoamerIndex;

#endif // GUARD_ROAMER_H
