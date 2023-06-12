bool AisyaRescue_IsAfter_Ready_Exp() { return GetEnum("Step_AisyaRescue") > Ready; }
bool AisyaRescue_IsAfter_Step1_Exp() { return GetEnum("Step_AisyaRescue") > Step1; }
bool AisyaRescue_IsCompleted_Exp() { return GetEnum("Step_AisyaRescue") == Complete; }
bool All_HugeEnemy_1to3() { return GetBool("All_HugeEnemy_03") && GetBool("All_HugeEnemy_02") && GetBool("All_HugeEnemy_01"); }
bool All_HugeEnemy_4to6() { return GetBool("All_HugeEnemy_06") && GetBool("All_HugeEnemy_05") && GetBool("All_HugeEnemy_04"); }
bool All_HugeEnemy_Complete1to6() { return GetBoolExp("All_HugeEnemy_4to6") && GetBoolExp("All_HugeEnemy_1to3"); }
bool AmberCollector_IsCompleted_Exp() { return GetEnum("Step_AmberCollector") == Complete; }
bool AncientIsland07_SucActive() { return !GetBool("AncientIsland07_PredActive") && GetBool("AncientIsland07_Fallen"); }
bool AncientIsland09_SucActive() { return !GetBool("AncientIsland09_PredActive") && GetBool("AncientIsland09_Fallen"); }
bool AncientIsland10_SucActive() { return !GetBool("AncientIsland10_PredActive") && GetBool("AncientIsland10_Fallen"); }
bool AncientIsland11_SucActive() { return !GetBool("AncientIsland11_PredActive") && GetBool("AncientIsland11_Fallen"); }
bool AncientIsland12_SucActive() { return !GetBool("AncientIsland12_PredActive") && GetBool("AncientIsland12_Fallen"); }
bool AncientIsland13_SucActive() { return !GetBool("AncientIsland13_PredActive") && GetBool("AncientIsland13_Fallen"); }
bool Appear_F1_Item_CookSet() { return !GetBool("Canyon_Gaman_GoAway") && GetBoolExp("Tribune11_IsCompleted_Exp"); }
bool Appear_HorseInn_Npc_NewCanyonMissingPersonsCase() { return GetBool("End_NewCanyonMissingPersonsCase") && GetBoolExp("FairyAllClear"); }
bool Appear_Npc_GerudoCanyon003() { return GetBoolExp("Tribune11_IsCompleted_Exp") && GetBool("Canyon_Gaman_GoAway"); }
bool Apper_InGerudoCity_Npc_GerudoGate_AncientAssistant003() { return GetBoolExp("SageOfGerudo_IsCompleted_Exp") && !GetBool("Talked_Clear_AncientAssistant003_GerudoCanyon_Adventure") && GetBool("Clear_Exam_GerudoCanyon_Adventure"); }
bool Unknown_0x69d159e9() { return !GetBool("IsGet.Armor_048_Upper") && GetBool("ArmorOfLambda_HaveHeardAbout_01"); }
bool Unknown_0x73a854a6() { return !GetBool("IsGet.Armor_014_Upper") && GetBool("ArmorOfLambda_HaveHeardAbout_04"); }
bool Unknown_0x8a424156() { return !GetBool("IsGet.Armor_046_Upper") && GetBool("ArmorOfLambda_HaveHeardAbout_07"); }
bool ArrowMeister_Momo_IsAfter_HaveWaterFruit_Exp() { return GetEnum("Step_ArrowMeister_Momo") > HaveWaterFruit; }
bool ArrowMeister_Momo_IsAfter_Ready_Exp() { return GetEnum("Step_ArrowMeister_Momo") > Ready; }
bool ArrowMeister_Momo_IsCompleted_Exp() { return GetEnum("Step_ArrowMeister_Momo") == Complete; }
bool AssassinGerudoBase_IsAfter_Enlist_Exp() { return GetEnum("Step_AssassinGerudoBase") > Enlist; }
bool AssassinGerudoBase_IsAfter_Equip_Exp() { return GetEnum("Step_AssassinGerudoBase") > Equip; }
bool AssassinGerudoBase_IsAfter_Ready_Exp() { return GetEnum("Step_AssassinGerudoBase") > Ready; }
bool AssassinGerudoBase_IsCompleted_Exp() { return GetEnum("Step_AssassinGerudoBase") == Complete; }
bool BallBring_MiniGame_IsAfter_Craft_Exp() { return GetEnum("Step_BallBring_MiniGame") > Craft; }
bool BallBring_MiniGame_IsAfter_NotReady_Exp() { return GetEnum("Step_BallBring_MiniGame") > NotReady; }
bool BallBring_MiniGame_IsAfter_Playing_Exp() { return GetEnum("Step_BallBring_MiniGame") > Playing; }
bool BallBring_MiniGame_IsAfter_Ready_Exp() { return GetEnum("Step_BallBring_MiniGame") > Ready; }
bool BallBring_MiniGame_IsAfter_Retry_Exp() { return GetEnum("Step_BallBring_MiniGame") > Retry; }
bool BallBring_MiniGame_IsAfter_TimeOver_Exp() { return GetEnum("Step_BallBring_MiniGame") > TimeOver; }
bool BallBring_MiniGame_IsCompleted_Exp() { return GetEnum("Step_BallBring_MiniGame") == Complete; }
bool BaseCamp_GateOpen_NotEast() { return GetBool("BaseCamp_GateOpen_West") || GetBool("BaseCamp_GateOpen_South"); }
bool BaseCamp_GateOpen_NotSouth() { return GetBool("BaseCamp_GateOpen_West") || GetBool("BaseCamp_GateOpen_East"); }
bool BaseCamp_GateOpen_NotWest() { return GetBool("BaseCamp_GateOpen_South") || GetBool("BaseCamp_GateOpen_East"); }
bool BaseCamp_Gerudo_First_PosChange() { return !GetBool("BaseCamp_Gerudo_NotChangePos") && GetBool("BaseCamp_Gerudo_First"); }
bool BaseCamp_GerudoAppear() { return GetBoolExp("SageOfGerudo_IsCompleted_Exp") && GetBoolExp("SurveyOfFourVillages_IsAfter_Ready_Exp") && !GetBool("Npc_BaseCampSoldier_Hylia013_IsExist"); }
bool BaseCamp_Goron1_First_PosChange() { return !GetBool("Npc_Goron1_First_NotChangePos") && GetBool("BaseCamp_Goron1_First"); }
bool BaseCamp_GoronAppear() { return GetBoolExp("SageOfFire_IsCompleted_Exp") && GetBoolExp("SurveyOfFourVillages_IsAfter_Ready_Exp") && !GetBool("Npc_BaseCampSoldier_Hylia013_IsExist"); }
bool BaseCamp_Rito_First_PosChange() { return !GetBool("BaseCamp_Rito_First_NotChangePos") && GetBool("BaseCamp_Rito_First"); }
bool BaseCamp_RitoAppear() { return GetBoolExp("SageOfWind_IsCompleted_Exp") && GetBoolExp("SurveyOfFourVillages_IsAfter_Ready_Exp") && !GetBool("Npc_BaseCampSoldier_Hylia013_IsExist"); }
bool BaseCamp_UndergroundPassage_Exp() { return GetBoolExp("SageOfGerudo_IsCompleted_Exp") || GetBoolExp("SageOfWind_IsCompleted_Exp") || GetBoolExp("SageOfFire_IsCompleted_Exp") || GetBoolExp("SageOfZora_IsCompleted_Exp"); }
bool BaseCamp_ZoraAppear() { return GetBoolExp("SageOfZora_IsCompleted_Exp") && GetBoolExp("SurveyOfFourVillages_IsAfter_Ready_Exp") && !GetBool("Npc_BaseCampSoldier_Hylia013_IsExist"); }
bool Basketball_MiniGame_IsAfter_Finish_Exp() { return GetEnum("Step_Basketball_MiniGame") > Finish; }
bool Basketball_MiniGame_IsAfter_Playing_Exp() { return GetEnum("Step_Basketball_MiniGame") > Playing; }
bool Basketball_MiniGame_IsAfter_Ready_Exp() { return GetEnum("Step_Basketball_MiniGame") > Ready; }
bool Basketball_MiniGame_IsAfter_Retry_Exp() { return GetEnum("Step_Basketball_MiniGame") > Retry; }
bool Big_Rotate_IsCompleted_Exp() { return GetEnum("Step_Big_Rotate") == Complete; }
bool BlindRuins_FireBoardNotChecked_Exp() { return !GetBoolExp("BlindRuinsTreasure_Goron_IsAfter_Ready_Exp") && GetBoolExp("SageOfFire_IsCompleted_Exp"); }
bool BlindRuins_GetAllTreasureExp() { return GetBool("BlindRuins_GetThunderTreasure") && GetBool("BlindRuins_GetWaterTreasure") && GetBool("BlindRuins_GetFireTreasure") && GetBool("BlindRuins_GetWindTreasure"); }
bool BlindRuins_Is1MainChallangeCleared() { return GetBoolExp("SageOfGerudo_IsCompleted_Exp") || GetBoolExp("SageOfZora_IsCompleted_Exp") || GetBoolExp("SageOfFire_IsCompleted_Exp") || GetBoolExp("SageOfWind_IsCompleted_Exp"); }
bool BlindRuins_Is4MainChallangeCleared() { return GetBoolExp("SageOfGerudo_IsCompleted_Exp") && GetBoolExp("SageOfZora_IsCompleted_Exp") && GetBoolExp("SageOfFire_IsCompleted_Exp") && GetBoolExp("SageOfWind_IsCompleted_Exp"); }
bool BlindRuins_NotCheckedBoardExist_Exp() { return GetBoolExp("BlindRuins_ThunderBoardNotChecked_Exp") || GetBoolExp("BlindRuins_WaterBoardNotChecked_Exp") || GetBoolExp("BlindRuins_FireBoardNotChecked_Exp") || GetBoolExp("BlindRuins_WindBoardNotChecked_Exp"); }
bool BlindRuins_ShowFireBoard_Exp() { return GetBoolExp("SageOfFire_IsCompleted_Exp") && GetBool("BlindRuins_Joined"); }
bool BlindRuins_ShowThunderBoard_Exp() { return GetBoolExp("SageOfGerudo_IsCompleted_Exp") && GetBool("BlindRuins_Joined"); }
bool BlindRuins_ShowWaterBoard_Exp() { return GetBoolExp("SageOfZora_IsCompleted_Exp") && GetBool("BlindRuins_Joined"); }
bool BlindRuins_ShowWindBoard_Exp() { return GetBoolExp("SageOfWind_IsCompleted_Exp") && GetBool("BlindRuins_Joined"); }
bool BlindRuins_TalkAboutNextBoard_Exp() { return ((GetBoolExp("BlindRuinsTreasure_Gerudo_IsCompleted_Exp") && GetBoolExp("SageOfGerudo_IsCompleted_Exp")) || !GetBoolExp("SageOfGerudo_IsCompleted_Exp")) && ((GetBoolExp("BlindRuinsTreasure_Zora_IsCompleted_Exp") && GetBoolExp("SageOfZora_IsCompleted_Exp")) || !GetBoolExp("SageOfZora_IsCompleted_Exp")) && ((GetBoolExp("BlindRuinsTreasure_Goron_IsCompleted_Exp") && GetBoolExp("SageOfFire_IsCompleted_Exp")) || !GetBoolExp("SageOfFire_IsCompleted_Exp")) && ((GetBoolExp("BlindRuinsTreasure_Rito_IsCompleted_Exp") && GetBoolExp("SageOfWind_IsCompleted_Exp")) || !GetBoolExp("SageOfWind_IsCompleted_Exp")) && !GetBoolExp("BlindRuinsTreasure_IsAfter_Search_1_Exp") && GetBoolExp("BlindRuinsTreasure_IsAfter_Ready_Exp"); }
bool BlindRuins_ThunderBoardNotChecked_Exp() { return !GetBoolExp("BlindRuinsTreasure_Gerudo_IsAfter_Ready_Exp") && GetBoolExp("SageOfGerudo_IsCompleted_Exp"); }
bool BlindRuins_WaterBoardNotChecked_Exp() { return !GetBoolExp("BlindRuinsTreasure_Zora_IsAfter_Ready_Exp") && GetBoolExp("SageOfZora_IsCompleted_Exp"); }
bool BlindRuins_WindBoardNotChecked_Exp() { return !GetBoolExp("BlindRuinsTreasure_Rito_IsAfter_Ready_Exp") && GetBoolExp("SageOfWind_IsCompleted_Exp"); }
bool BlindRuinsTreasure_Gerudo_IsAfter_NotReady_Exp() { return GetEnum("Step_BlindRuinsTreasure_Gerudo") > NotReady; }
bool BlindRuinsTreasure_Gerudo_IsAfter_Ready_Exp() { return GetEnum("Step_BlindRuinsTreasure_Gerudo") > Ready; }
bool BlindRuinsTreasure_Gerudo_IsAfter_Search_Exp() { return GetEnum("Step_BlindRuinsTreasure_Gerudo") > Search; }
bool BlindRuinsTreasure_Gerudo_IsCompleted_Exp() { return GetEnum("Step_BlindRuinsTreasure_Gerudo") == Complete; }
bool BlindRuinsTreasure_Goron_IsAfter_NotReady_Exp() { return GetEnum("Step_BlindRuinsTreasure_Goron") > NotReady; }
bool BlindRuinsTreasure_Goron_IsAfter_Ready_Exp() { return GetEnum("Step_BlindRuinsTreasure_Goron") > Ready; }
bool BlindRuinsTreasure_Goron_IsAfter_Search_Exp() { return GetEnum("Step_BlindRuinsTreasure_Goron") > Search; }
bool BlindRuinsTreasure_Goron_IsCompleted_Exp() { return GetEnum("Step_BlindRuinsTreasure_Goron") == Complete; }
bool BlindRuinsTreasure_IsAfter_GoToCave_Exp() { return GetEnum("Step_BlindRuinsTreasure") > GoToCave; }
bool BlindRuinsTreasure_IsAfter_LookAtBoard_1_Exp() { return GetEnum("Step_BlindRuinsTreasure") > LookAtBoard_1; }
bool BlindRuinsTreasure_IsAfter_Ready_Exp() { return GetEnum("Step_BlindRuinsTreasure") > Ready; }
bool BlindRuinsTreasure_IsAfter_Search_1_Exp() { return GetEnum("Step_BlindRuinsTreasure") > Search_1; }
bool BlindRuinsTreasure_Rito_IsAfter_NotReady_Exp() { return GetEnum("Step_BlindRuinsTreasure_Rito") > NotReady; }
bool BlindRuinsTreasure_Rito_IsAfter_Ready_Exp() { return GetEnum("Step_BlindRuinsTreasure_Rito") > Ready; }
bool BlindRuinsTreasure_Rito_IsAfter_Search_Exp() { return GetEnum("Step_BlindRuinsTreasure_Rito") > Search; }
bool BlindRuinsTreasure_Rito_IsCompleted_Exp() { return GetEnum("Step_BlindRuinsTreasure_Rito") == Complete; }
bool BlindRuinsTreasure_Zora_IsAfter_NotReady_Exp() { return GetEnum("Step_BlindRuinsTreasure_Zora") > NotReady; }
bool BlindRuinsTreasure_Zora_IsAfter_Ready_Exp() { return GetEnum("Step_BlindRuinsTreasure_Zora") > Ready; }
bool BlindRuinsTreasure_Zora_IsAfter_Search_Exp() { return GetEnum("Step_BlindRuinsTreasure_Zora") > Search; }
bool BlindRuinsTreasure_Zora_IsCompleted_Exp() { return GetEnum("Step_BlindRuinsTreasure_Zora") == Complete; }
bool BuildHouse_IsAfter_Build_Exp() { return GetEnum("Step_BuildHouse") > Build; }
bool BuildHouse_IsAfter_Finish_Exp() { return GetEnum("Step_BuildHouse") > Finish; }
bool BuildHouse_IsAfter_NotReady_Exp() { return GetEnum("Step_BuildHouse") > NotReady; }
bool BuildHouse_IsAfter_Ready_Exp() { return GetEnum("Step_BuildHouse") > Ready; }
bool BuildHouse_IsCompleted_Exp() { return GetEnum("Step_BuildHouse") == Complete; }
bool BuildingMaterialsTutorial_CanBeStart() { return GetBool("Npc_BaseCampSoldier_Hylia013_Opened") && GetBoolExp("BaseCamp_UndergroundPassage_Exp") && GetBoolExp("MainChallenge_IsAfter_Ready_Exp"); }
bool BuildingMaterialsTutorial_IsAfter_GiveBuildingMaterials_Exp() { return GetEnum("Step_BuildingMaterialsTutorial") > GiveBuildingMaterials; }
bool BuildingMaterialsTutorial_IsAfter_NotReady_Exp() { return GetEnum("Step_BuildingMaterialsTutorial") > NotReady; }
bool BuildingMaterialsTutorial_IsAfter_Ready_Exp() { return GetEnum("Step_BuildingMaterialsTutorial") > Ready; }
bool BuildingMaterialsTutorial_IsCompleted_Exp() { return GetEnum("Step_BuildingMaterialsTutorial") == Complete; }
bool BuildingMaterialsTutorial_IsCompleted_Exp_AfterBlackZela() { return GetBoolExp("BuildingMaterialsTutorial_IsCompleted_Exp") && !GetBool("BuildingMaterialsTutorial_Built") && GetBool("Npc_BaseCampSoldier_Hylia013_Opened") && GetBoolExp("HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp") && GetBool("IsOpenCannon.Tower01"); }
bool CanBeOrdered_HugeEnemy1to3() { return GetBoolExp("HyruleCastleIncident_IsAfter_ToLand_Exp") && GetBool("Npc_MercenarySoldier_Hylia001_Move") && GetBool("MercenaryChallenge_AnyoneTalked"); }
bool CanBeOrdered_HugeEnemy4to6() { return GetBoolExp("DefeatHugeEnemy_3_IsCompleted_Exp") && GetBoolExp("DefeatHugeEnemy_2_IsCompleted_Exp") && GetBoolExp("DefeatHugeEnemy_1_IsCompleted_Exp"); }
bool CanCopy_BluePrint() { return !GetBool("IsComplete2ndTutorial_BluePrint") && GetBool("IsComplete1stTutorial_BluePrint"); }
bool CanFix_BluePrint() { return !GetBool("IsComplete1stTutorial_BluePrint") && GetBool("IsTalkedGolem_BluePrint"); }
bool Cannon04_ActorExist_Exp() { return GetBoolExp("Cannon04_NPCExist_Exp") && !GetBool("IsActivateCannon.Tower04") && !GetBool("Cannon04_GateOpenTalk"); }
bool Cannon04_NPCExist_Exp() { return !GetBool("IsOpenCannon.Tower04") && GetBool("MainChallenge_CannonReady"); }
bool Cannon05_ActorExist_Exp() { return GetBoolExp("Cannon05_NPCExist_Exp") && !GetBool("IsActivateCannon.Tower05") && !GetBool("Cannon05_Repaired"); }
bool Cannon05_NPCExist_Exp() { return !GetBool("IsOpenCannon.Tower05") && GetBool("MainChallenge_CannonReady"); }
bool Cannon06_ActorExist_Exp() { return !GetBool("IsOpenCannon.Tower06") && !GetBool("IsActivateCannon.Tower06") && !GetBool("Cannon06_Repaired") && GetBool("MainChallenge_CannonReady"); }
bool Cannon06_NPCExist_Exp() { return !GetBool("IsOpenCannon.Tower06") && !GetBool("IsActivateCannon.Tower06") && GetBool("MainChallenge_CannonReady") && !GetBool("Cannon06_NpcMoved"); }
bool Cannon06_StickExist_Exp() { return !GetBool("Cannon06_Repaired") && !GetBool("IsOpenCannon.Tower06") && GetBool("MainChallenge_CannonReady"); }
bool Cannon07_ActorExist_Exp() { return !GetBoolExp("SageOfZora_IsAfter_TouchSecretStone_Exp") && !GetBool("IsOpenCannon.Tower07") && !GetBool("IsActivateCannon.Tower07") && GetBool("MainChallenge_CannonReady"); }
bool Cannon09_NPCExist_Exp() { return !GetBool("Cannon09_NPCCarried") && !GetBool("IsOpenCannon.Tower09") && !GetBool("IsActivateCannon.Tower09") && GetBool("MainChallenge_CannonReady"); }
bool Cannon09_NPCExistAfterRepaired_Exp() { return GetBool("Cannon09_NPCCarried") && !GetBool("IsOpenCannon.Tower09") && GetBool("MainChallenge_CannonReady"); }
bool Cannon11_ActorExist() { return !GetBool("IsActivateCannon.Tower11") && !GetBool("IsOpenCannon.Tower11") && GetBool("MainChallenge_CannonReady"); }
bool Cannon12_ActorExist_Exp() { return !GetBool("IsOpenCannon.Tower12") && !GetBool("IsActivateCannon.Tower12") && GetBool("MainChallenge_CannonReady"); }
bool Cannon12_AfterMapOpened_Exp() { return GetBool("IsOpenCannon.Tower12"); }
bool Cannon12_NPCExist_Exp() { return GetBoolExp("Cannon12_ActorExist_Exp") && !GetBool("Cannon12_Repaired_Asked"); }
bool Cannon12_RepairSchedule() { return GetBool("Cannon12_RemoveObstacle") && GetBool("Cannon12_Repaired"); }
bool Cannon13_NPCExist_Exp() { return !GetBool("IsOpenCannon.Tower13") && !GetBool("IsActivateCannon.Tower13") && !GetBool("Cannon13_Repaired") && GetBool("MainChallenge_CannonReady"); }
bool Cannon13_NPCExistAfterRepaired_Exp() { return !GetBool("IsOpenCannon.Tower13") && GetBool("Cannon13_Repaired") && GetBool("MainChallenge_CannonReady"); }
bool Cannon15_ActorExist_Exp() { return !GetBool("IsActivateCannon.Tower15") && !GetBool("IsOpenCannon.Tower15") && GetBool("MainChallenge_CannonReady"); }
bool Canyon_Gaman_Battle_Opposite() { return !GetBool("Canyon_Gaman_Battle"); }
bool CarryGoronKid1_IsAfter_Ready_Exp() { return GetEnum("Step_CarryGoronKid1") > Ready; }
bool CarryGoronKid1_IsCompleted_Exp() { return GetEnum("Step_CarryGoronKid1") == Complete; }
bool CarryGoronkid1_OffLight_Goal() { return !(GetBool("CarryGoronKid1_OnTrain") && GetBool("CarryGoronkid1_Alive")); }
bool CarryGoronkid1_OffLight_Koppus() { return GetBool("CarryGoronKid1_OnTrain") && GetBool("CarryGoronkid1_Alive"); }
bool CarryGoronKid2_IsAfter_Ready_Exp() { return GetEnum("Step_CarryGoronKid2") > Ready; }
bool CarryGoronKid2_IsCompleted_Exp() { return GetEnum("Step_CarryGoronKid2") == Complete; }
bool CarryGoronkid2_OffLight_Fairy() { return !(GetBool("CarryGoronKid2_OnTrain") && GetBool("CarryGoronkid2_IsAlive")); }
bool CarryGoronkid2_OffLight_Koppus() { return GetBool("CarryGoronKid2_OnTrain") && GetBool("CarryGoronkid2_IsAlive"); }
bool CarryStone_IsAfter_CarryStone_Exp() { return GetEnum("Step_CarryStone") > CarryStone; }
bool CarryStone_IsAfter_Ready_Exp() { return GetEnum("Step_CarryStone") > Ready; }
bool CarryStone_IsCompleted_Exp() { return GetEnum("Step_CarryStone") == Complete; }
bool CarryToShrine01_IsAfter_Carry_Exp() { return GetEnum("Step_CarryToShrine01") > Carry; }
bool CarryToShrine01_IsAfter_Ready_Exp() { return GetEnum("Step_CarryToShrine01") > Ready; }
bool CarryToShrine01_IsCompleted_Exp() { return GetEnum("Step_CarryToShrine01") == Complete; }
bool CarryToShrine02_IsAfter_Carry_Exp() { return GetEnum("Step_CarryToShrine02") > Carry; }
bool CarryToShrine02_IsAfter_Ready_Exp() { return GetEnum("Step_CarryToShrine02") > Ready; }
bool CarryToShrine02_IsCompleted_Exp() { return GetEnum("Step_CarryToShrine02") == Complete; }
bool CarryToShrine03_IsAfter_Carry_Exp() { return GetEnum("Step_CarryToShrine03") > Carry; }
bool CarryToShrine03_IsAfter_Ready_Exp() { return GetEnum("Step_CarryToShrine03") > Ready; }
bool CarryToShrine03_IsCompleted_Exp() { return GetEnum("Step_CarryToShrine03") == Complete; }
bool CarryToShrine05_IsAfter_Carry_Exp() { return GetEnum("Step_CarryToShrine05") > Carry; }
bool CarryToShrine05_IsAfter_Ready_Exp() { return GetEnum("Step_CarryToShrine05") > Ready; }
bool CarryToShrine05_IsCompleted_Exp() { return GetEnum("Step_CarryToShrine05") == Complete; }
bool CarryToShrine06_IsAfter_Carry_Exp() { return GetEnum("Step_CarryToShrine06") > Carry; }
bool CarryToShrine06_IsAfter_Ready_Exp() { return GetEnum("Step_CarryToShrine06") > Ready; }
bool CarryToShrine06_IsCompleted_Exp() { return GetEnum("Step_CarryToShrine06") == Complete; }
bool CarryToShrine07_IsAfter_Carry_Exp() { return GetEnum("Step_CarryToShrine07") > Carry; }
bool CarryToShrine07_IsAfter_Ready_Exp() { return GetEnum("Step_CarryToShrine07") > Ready; }
bool CarryToShrine07_IsCompleted_Exp() { return GetEnum("Step_CarryToShrine07") == Complete; }
bool CarryToShrine08_Zora_IsCompleted_Exp() { return GetEnum("Step_CarryToShrine08_Zora") == Complete; }
bool CarryToShrine09_IsAfter_Carry_Exp() { return GetEnum("Step_CarryToShrine09") > Carry; }
bool CarryToShrine09_IsAfter_Ready_Exp() { return GetEnum("Step_CarryToShrine09") > Ready; }
bool CarryToShrine09_IsCompleted_Exp() { return GetEnum("Step_CarryToShrine09") == Complete; }
bool CarryToShrine10_IsAfter_Carry_Exp() { return GetEnum("Step_CarryToShrine10") > Carry; }
bool CarryToShrine10_IsAfter_Ready_Exp() { return GetEnum("Step_CarryToShrine10") > Ready; }
bool CarryToShrine10_IsCompleted_Exp() { return GetEnum("Step_CarryToShrine10") == Complete; }
bool CarryToShrine11_IsAfter_Carry_Exp() { return GetEnum("Step_CarryToShrine11") > Carry; }
bool CarryToShrine11_IsAfter_Ready_Exp() { return GetEnum("Step_CarryToShrine11") > Ready; }
bool CarryToShrine11_IsCompleted_Exp() { return GetEnum("Step_CarryToShrine11") == Complete; }
bool CarryToShrine12_IsAfter_Carry_Exp() { return GetEnum("Step_CarryToShrine12") > Carry; }
bool CarryToShrine12_IsAfter_Ready_Exp() { return GetEnum("Step_CarryToShrine12") > Ready; }
bool CarryToShrine12_IsCompleted_Exp() { return GetEnum("Step_CarryToShrine12") == Complete; }
bool CarryToShrine13_IsAfter_Carry_Exp() { return GetEnum("Step_CarryToShrine13") > Carry; }
bool CarryToShrine13_IsAfter_Ready_Exp() { return GetEnum("Step_CarryToShrine13") > Ready; }
bool CarryToShrine13_IsCompleted_Exp() { return GetEnum("Step_CarryToShrine13") == Complete; }
bool CarryToShrine14_IsAfter_Carry_Exp() { return GetEnum("Step_CarryToShrine14") > Carry; }
bool CarryToShrine14_IsAfter_Ready_Exp() { return GetEnum("Step_CarryToShrine14") > Ready; }
bool CarryToShrine14_IsCompleted_Exp() { return GetEnum("Step_CarryToShrine14") == Complete; }
bool CarryToShrine15_IsAfter_Carry_Exp() { return GetEnum("Step_CarryToShrine15") > Carry; }
bool CarryToShrine15_IsAfter_Ready_Exp() { return GetEnum("Step_CarryToShrine15") > Ready; }
bool CarryToShrine15_IsCompleted_Exp() { return GetEnum("Step_CarryToShrine15") == Complete; }
bool CarryToShrine16_IsAfter_Carry_Exp() { return GetEnum("Step_CarryToShrine16") > Carry; }
bool CarryToShrine16_IsAfter_Ready_Exp() { return GetEnum("Step_CarryToShrine16") > Ready; }
bool CarryToShrine16_IsCompleted_Exp() { return GetEnum("Step_CarryToShrine16") == Complete; }
bool CarryToShrine17_IsAfter_Carry_Exp() { return GetEnum("Step_CarryToShrine17") > Carry; }
bool CarryToShrine17_IsAfter_Ready_Exp() { return GetEnum("Step_CarryToShrine17") > Ready; }
bool CarryToShrine17_IsCompleted_Exp() { return GetEnum("Step_CarryToShrine17") == Complete; }
bool CarryToShrine19_IsAfter_Carry_Exp() { return GetEnum("Step_CarryToShrine19") > Carry; }
bool CarryToShrine19_IsAfter_Ready_Exp() { return GetEnum("Step_CarryToShrine19") > Ready; }
bool CarryToShrine19_IsCompleted_Exp() { return GetEnum("Step_CarryToShrine19") == Complete; }
bool CarryToShrine20_IsAfter_Carry_Exp() { return GetEnum("Step_CarryToShrine20") > Carry; }
bool CarryToShrine20_IsAfter_Ready_Exp() { return GetEnum("Step_CarryToShrine20") > Ready; }
bool CarryToShrine20_IsCompleted_Exp() { return GetEnum("Step_CarryToShrine20") == Complete; }
bool CarryToShrine21_IsAfter_Carry_Exp() { return GetEnum("Step_CarryToShrine21") > Carry; }
bool CarryToShrine21_IsAfter_Ready_Exp() { return GetEnum("Step_CarryToShrine21") > Ready; }
bool CarryToShrine21_IsCompleted_Exp() { return GetEnum("Step_CarryToShrine21") == Complete; }
bool CarryToShrine22_IsAfter_Carry_Exp() { return GetEnum("Step_CarryToShrine22") > Carry; }
bool CarryToShrine22_IsAfter_Ready_Exp() { return GetEnum("Step_CarryToShrine22") > Ready; }
bool CarryToShrine22_IsCompleted_Exp() { return GetEnum("Step_CarryToShrine22") == Complete; }
bool CarryToShrine23_IsAfter_Carry_Exp() { return GetEnum("Step_CarryToShrine23") > Carry; }
bool CarryToShrine23_IsAfter_Ready_Exp() { return GetEnum("Step_CarryToShrine23") > Ready; }
bool CarryToShrine23_IsCompleted_Exp() { return GetEnum("Step_CarryToShrine23") == Complete; }
bool Chaby_AfterFairyAllClear_1stTalked_recentTalkOff() { return !GetBool("Chaby_RecentTalk") && GetBool("Npc_Attacked_005_TalkBranch1") && GetBoolExp("FairyAllClear"); }
bool Circuit_Desert_IsAfter_Craft_Exp() { return GetEnum("Step_Circuit_Desert") > Craft; }
bool Circuit_Desert_IsAfter_Finish_Exp() { return GetEnum("Step_Circuit_Desert") > Finish; }
bool Circuit_Desert_IsAfter_NotReady_Exp() { return GetEnum("Step_Circuit_Desert") > NotReady; }
bool Circuit_Desert_IsAfter_Playing_Exp() { return GetEnum("Step_Circuit_Desert") > Playing; }
bool Circuit_Desert_IsAfter_Ready_Exp() { return GetEnum("Step_Circuit_Desert") > Ready; }
bool Circuit_Desert_IsAfter_TimeUp_Exp() { return GetEnum("Step_Circuit_Desert") > TimeUp; }
bool Circuit_Desert_IsCompleted_Exp() { return GetEnum("Step_Circuit_Desert") == Complete; }
bool Circuit_FaronWoods_MiniGame_IsAfter_Game_Exp() { return GetEnum("Step_Circuit_FaronWoods_MiniGame") > Game; }
bool Circuit_FaronWoods_MiniGame_IsAfter_NotReady_Exp() { return GetEnum("Step_Circuit_FaronWoods_MiniGame") > NotReady; }
bool Circuit_FaronWoods_MiniGame_IsAfter_Ready_Exp() { return GetEnum("Step_Circuit_FaronWoods_MiniGame") > Ready; }
bool Circuit_FaronWoods_MiniGame_IsAfter_Retry_Exp() { return GetEnum("Step_Circuit_FaronWoods_MiniGame") > Retry; }
bool Circuit_FaronWoods_MiniGame_IsAfter_TimeOver_Exp() { return GetEnum("Step_Circuit_FaronWoods_MiniGame") > TimeOver; }
bool Circuit_FaronWoods_MiniGame_IsCompleted_Exp() { return GetEnum("Step_Circuit_FaronWoods_MiniGame") == Complete; }
bool Circuit_Ichikara_IsAfter_Craft_Exp() { return GetEnum("Step_Circuit_Ichikara") > Craft; }
bool Circuit_Ichikara_IsAfter_Finish_Exp() { return GetEnum("Step_Circuit_Ichikara") > Finish; }
bool Circuit_Ichikara_IsAfter_NotReady_Exp() { return GetEnum("Step_Circuit_Ichikara") > NotReady; }
bool Circuit_Ichikara_IsAfter_Playing_Exp() { return GetEnum("Step_Circuit_Ichikara") > Playing; }
bool Circuit_Ichikara_IsAfter_Ready_Exp() { return GetEnum("Step_Circuit_Ichikara") > Ready; }
bool Circuit_Ichikara_IsAfter_Retry_Exp() { return GetEnum("Step_Circuit_Ichikara") > Retry; }
bool Circuit_Ichikara_IsAfter_TimeOver_Exp() { return GetEnum("Step_Circuit_Ichikara") > TimeOver; }
bool Circuit_Ichikara_IsCompleted_Exp() { return GetEnum("Step_Circuit_Ichikara") == Complete; }
bool Circuit_Ichikara_MiniGame_IsAfter_NotReady_Exp() { return GetEnum("Step_Circuit_Ichikara_MiniGame") > NotReady; }
bool Circuit_Ichikara_MiniGame_IsAfter_Playing_Exp() { return GetEnum("Step_Circuit_Ichikara_MiniGame") > Playing; }
bool Circuit_Ichikara_MiniGame_IsAfter_Ready_Exp() { return GetEnum("Step_Circuit_Ichikara_MiniGame") > Ready; }
bool Circuit_Ichikara_MiniGame_IsAfter_Retry_Exp() { return GetEnum("Step_Circuit_Ichikara_MiniGame") > Retry; }
bool Circuit_Ichikara_MiniGame_IsAfter_TimeOver_Exp() { return GetEnum("Step_Circuit_Ichikara_MiniGame") > TimeOver; }
bool Circuit_Ichikara_MiniGame_IsCompleted_Exp() { return GetEnum("Step_Circuit_Ichikara_MiniGame") == Complete; }
bool Circuit_Uotori_MiniGame_IsAfter_Finish_Exp() { return GetEnum("Step_Circuit_Uotori_MiniGame") > Finish; }
bool Circuit_Uotori_MiniGame_IsAfter_NotReady_Exp() { return GetEnum("Step_Circuit_Uotori_MiniGame") > NotReady; }
bool Circuit_Uotori_MiniGame_IsAfter_Playing_Exp() { return GetEnum("Step_Circuit_Uotori_MiniGame") > Playing; }
bool Circuit_Uotori_MiniGame_IsAfter_Ready_Exp() { return GetEnum("Step_Circuit_Uotori_MiniGame") > Ready; }
bool Circuit_Uotori_MiniGame_IsAfter_Retry_Exp() { return GetEnum("Step_Circuit_Uotori_MiniGame") > Retry; }
bool Circuit_Uotori_MiniGame_IsAfter_TimeOver_Exp() { return GetEnum("Step_Circuit_Uotori_MiniGame") > TimeOver; }
bool Circuit_Uotori_MiniGame_IsCompleted_Exp() { return GetEnum("Step_Circuit_Uotori_MiniGame") == Complete; }
bool CleanStatue_IsAfter_CleanUp_Exp() { return GetEnum("Step_CleanStatue") > CleanUp; }
bool CleanStatue_IsAfter_NotReady_Exp() { return GetEnum("Step_CleanStatue") > NotReady; }
bool CleanStatue_IsAfter_Ready_Exp() { return GetEnum("Step_CleanStatue") > Ready; }
bool CleanStatue_IsCompleted_Exp() { return GetEnum("Step_CleanStatue") == Complete; }
bool Clear_HugeEnemy4to6() { return GetBoolExp("DefeatHugeEnemy_6_IsCompleted_Exp") && GetBoolExp("DefeatHugeEnemy_5_IsCompleted_Exp") && GetBoolExp("DefeatHugeEnemy_4_IsCompleted_Exp"); }
bool Cleared_Or_NotDefeatHugeEnemy1() { return !GetBoolExp("DefeatHugeEnemy_1_IsAfter_Ready_Exp") || !GetBool("DefetHugeEnemy_Defeat_1") || GetBoolExp("DefeatHugeEnemy_1_IsCompleted_Exp"); }
bool Cleared_Or_NotDefeatHugeEnemy2() { return !GetBoolExp("DefeatHugeEnemy_2_IsAfter_Ready_Exp") || !GetBool("DefetHugeEnemy_Defeat_2") || GetBoolExp("DefeatHugeEnemy_2_IsCompleted_Exp"); }
bool Cleared_Or_NotDefeatHugeEnemy3() { return !GetBoolExp("DefeatHugeEnemy_3_IsAfter_Ready_Exp") || !GetBool("DefetHugeEnemy_Defeat_3") || GetBoolExp("DefeatHugeEnemy_3_IsCompleted_Exp"); }
bool Cleared_Or_NotDefeatHugeEnemy4() { return !GetBoolExp("DefeatHugeEnemy_4_IsAfter_Ready_Exp") || !GetBool("DefetHugeEnemy_Defeat_4") || GetBoolExp("DefeatHugeEnemy_4_IsCompleted_Exp"); }
bool Cleared_Or_NotDefeatHugeEnemy5() { return !GetBoolExp("DefeatHugeEnemy_5_IsAfter_Ready_Exp") || !GetBool("DefetHugeEnemy_Defeat_5") || GetBoolExp("DefeatHugeEnemy_5_IsCompleted_Exp"); }
bool Cleared_Or_NotDefeatHugeEnemy6() { return !GetBoolExp("DefeatHugeEnemy_6_IsAfter_Ready_Exp") || !GetBool("DefetHugeEnemy_Defeat_6") || GetBoolExp("DefeatHugeEnemy_6_IsCompleted_Exp"); }
bool ClearGetSeries() { return GetBoolExp("GetSensorPlus_IsCompleted_Exp") && GetBoolExp("GetWalker_IsCompleted_Exp") && GetBoolExp("GetWarpMarker_IsCompleted_Exp"); }
bool ClueTotheSixthSage_IsAfter_MeetTauro_Exp() { return GetEnum("Step_ClueTotheSixthSage") > MeetTauro; }
bool ClueTotheSixthSage_IsAfter_NotReady_Exp() { return GetEnum("Step_ClueTotheSixthSage") > NotReady; }
bool ClueTotheSixthSage_IsAfter_Ready_Exp() { return GetEnum("Step_ClueTotheSixthSage") > Ready; }
bool ClueTotheSixthSage_IsAfter_RuinsChallenge_Exp() { return GetEnum("Step_ClueTotheSixthSage") > RuinsChallenge; }
bool ClueTotheSixthSage_IsAfter_UntilYouReport_Exp() { return GetEnum("Step_ClueTotheSixthSage") > UntilYouReport; }
bool ClueTotheSixthSage_IsAfter_ZonauChallenge_Exp() { return GetEnum("Step_ClueTotheSixthSage") > ZonauChallenge; }
bool ClueTotheSixthSage_IsCompleted_Exp() { return GetEnum("Step_ClueTotheSixthSage") == Complete; }
bool CollectObject_MiniGame_Cliff_IsAfter_Playing_Exp() { return GetEnum("Step_CollectObject_MiniGame_Cliff") > Playing; }
bool CollectObject_MiniGame_Cliff_IsAfter_Ready_Exp() { return GetEnum("Step_CollectObject_MiniGame_Cliff") > Ready; }
bool CollectObject_MiniGame_Cliff_IsAfter_TimeOver_Exp() { return GetEnum("Step_CollectObject_MiniGame_Cliff") > TimeOver; }
bool CollectObject_MiniGame_Cliff_IsCompleted_Exp() { return GetEnum("Step_CollectObject_MiniGame_Cliff") == Complete; }
bool CollectObject_MiniGame_IsAfter_Playing_Exp() { return GetEnum("Step_CollectObject_MiniGame") > Playing; }
bool CollectObject_MiniGame_IsAfter_Ready_Exp() { return GetEnum("Step_CollectObject_MiniGame") > Ready; }
bool CollectObject_MiniGame_IsAfter_TimeOver_Exp() { return GetEnum("Step_CollectObject_MiniGame") > TimeOver; }
bool CollectObject_MiniGame_IsCompleted_Exp() { return GetEnum("Step_CollectObject_MiniGame") == Complete; }
bool CollectObject_MiniGame_LakeSide_IsAfter_Playing_Exp() { return GetEnum("Step_CollectObject_MiniGame_LakeSide") > Playing; }
bool CollectObject_MiniGame_LakeSide_IsAfter_Ready_Exp() { return GetEnum("Step_CollectObject_MiniGame_LakeSide") > Ready; }
bool CollectObject_MiniGame_LakeSide_IsAfter_TimeOver_Exp() { return GetEnum("Step_CollectObject_MiniGame_LakeSide") > TimeOver; }
bool CollectObject_MiniGame_LakeSide_IsCompleted_Exp() { return GetEnum("Step_CollectObject_MiniGame_LakeSide") == Complete; }
bool Unknown_0x59309627() { return (GetBoolExp("SageOfGerudo_IsCompleted_Exp") || GetBoolExp("SageOfWind_IsCompleted_Exp") || GetBoolExp("SageOfZora_IsCompleted_Exp")) && GetBoolExp("SageOfFire_IsCompleted_Exp"); }
bool Unknown_0x401413fc() { return (GetBoolExp("SageOfWind_IsCompleted_Exp") || GetBoolExp("SageOfFire_IsCompleted_Exp") || GetBoolExp("SageOfZora_IsCompleted_Exp")) && GetBoolExp("SageOfGerudo_IsCompleted_Exp"); }
bool Unknown_0xbe052cb9() { return (GetBoolExp("SageOfGerudo_IsCompleted_Exp") || GetBoolExp("SageOfFire_IsCompleted_Exp") || GetBoolExp("SageOfZora_IsCompleted_Exp")) && GetBoolExp("SageOfWind_IsCompleted_Exp"); }
bool Unknown_0xef2ea237() { return (GetBoolExp("SageOfGerudo_IsCompleted_Exp") || GetBoolExp("SageOfWind_IsCompleted_Exp") || GetBoolExp("SageOfFire_IsCompleted_Exp")) && GetBoolExp("SageOfZora_IsCompleted_Exp"); }
bool Complete_Three_SageChallenges() { return (GetBoolExp("SageOfWind_IsCompleted_Exp") && GetBoolExp("SageOfGerudo_IsCompleted_Exp") && GetBoolExp("SageOfZora_IsCompleted_Exp")) || (GetBoolExp("SageOfGerudo_IsCompleted_Exp") && GetBoolExp("SageOfZora_IsCompleted_Exp") && GetBoolExp("SageOfFire_IsCompleted_Exp")) || (GetBoolExp("SageOfGerudo_IsCompleted_Exp") && GetBoolExp("SageOfFire_IsCompleted_Exp") && GetBoolExp("SageOfWind_IsCompleted_Exp")) || (GetBoolExp("SageOfZora_IsCompleted_Exp") && GetBoolExp("SageOfFire_IsCompleted_Exp") && GetBoolExp("SageOfWind_IsCompleted_Exp")); }
bool Complete_Two_SageChallenges() { return GetBoolExp("Unknown_0x401413fc") || GetBoolExp("Unknown_0xbe052cb9") || GetBoolExp("Unknown_0x59309627") || GetBoolExp("Unknown_0xef2ea237"); }
bool Connect_AkkareMaze_IsAfter_Land_Exp() { return GetEnum("Step_Connect_AkkareMaze") > Land; }
bool Connect_AkkareMaze_IsAfter_Land2_Exp() { return GetEnum("Step_Connect_AkkareMaze") > Land2; }
bool Connect_AkkareMaze_IsAfter_Minus_Exp() { return GetEnum("Step_Connect_AkkareMaze") > Minus; }
bool Connect_AkkareMaze_IsAfter_Ready_Exp() { return GetEnum("Step_Connect_AkkareMaze") > Ready; }
bool Connect_AkkareMaze_IsAfter_Sky_Exp() { return GetEnum("Step_Connect_AkkareMaze") > Sky; }
bool Connect_AkkareMaze_IsAfter_Sky1st_Exp() { return GetEnum("Step_Connect_AkkareMaze") > Sky1st; }
bool Connect_AkkareMaze_IsAfter_Sky2nd_Exp() { return GetEnum("Step_Connect_AkkareMaze") > Sky2nd; }
bool Connect_AkkareMaze_IsAfter_Sky3rd_Exp() { return GetEnum("Step_Connect_AkkareMaze") > Sky3rd; }
bool Connect_AkkareMaze_IsAfter_SkyAll_Exp() { return GetEnum("Step_Connect_AkkareMaze") > SkyAll; }
bool Connect_AkkareMaze_IsCompleted_Exp() { return GetEnum("Step_Connect_AkkareMaze") == Complete; }
bool Connect_FirstIsland_IsAfter_Collect1st_Exp() { return GetEnum("Step_Connect_FirstIsland") > Collect1st; }
bool Connect_FirstIsland_IsAfter_Collect2nd_Exp() { return GetEnum("Step_Connect_FirstIsland") > Collect2nd; }
bool Connect_FirstIsland_IsAfter_Collect3rd_Exp() { return GetEnum("Step_Connect_FirstIsland") > Collect3rd; }
bool Connect_FirstIsland_IsAfter_Minus1st_Exp() { return GetEnum("Step_Connect_FirstIsland") > Minus1st; }
bool Connect_FirstIsland_IsAfter_Minus2nd_Exp() { return GetEnum("Step_Connect_FirstIsland") > Minus2nd; }
bool Connect_FirstIsland_IsAfter_Minus3rd_Exp() { return GetEnum("Step_Connect_FirstIsland") > Minus3rd; }
bool Connect_FirstIsland_IsAfter_Minus4th_Exp() { return GetEnum("Step_Connect_FirstIsland") > Minus4th; }
bool Connect_FirstIsland_IsAfter_Minus5th_Exp() { return GetEnum("Step_Connect_FirstIsland") > Minus5th; }
bool Connect_FirstIsland_IsAfter_Minus6th_Exp() { return GetEnum("Step_Connect_FirstIsland") > Minus6th; }
bool Connect_FirstIsland_IsAfter_MinusGather_Exp() { return GetEnum("Step_Connect_FirstIsland") > MinusGather; }
bool Connect_FirstIsland_IsAfter_Ready_Exp() { return GetEnum("Step_Connect_FirstIsland") > Ready; }
bool Connect_FirstIsland_IsAfter_Sky_Exp() { return GetEnum("Step_Connect_FirstIsland") > Sky; }
bool Connect_FirstIsland_IsAfter_SkyGather_Exp() { return GetEnum("Step_Connect_FirstIsland") > SkyGather; }
bool Connect_FirstIsland_IsCompleted_Exp() { return GetEnum("Step_Connect_FirstIsland") == Complete; }
bool Connect_GerudoMaze_IsAfter_Land_Exp() { return GetEnum("Step_Connect_GerudoMaze") > Land; }
bool Connect_GerudoMaze_IsAfter_Land2_Exp() { return GetEnum("Step_Connect_GerudoMaze") > Land2; }
bool Connect_GerudoMaze_IsAfter_Minus_Exp() { return GetEnum("Step_Connect_GerudoMaze") > Minus; }
bool Connect_GerudoMaze_IsAfter_Ready_Exp() { return GetEnum("Step_Connect_GerudoMaze") > Ready; }
bool Connect_GerudoMaze_IsAfter_Sky_Exp() { return GetEnum("Step_Connect_GerudoMaze") > Sky; }
bool Connect_GerudoMaze_IsAfter_Sky1st_Exp() { return GetEnum("Step_Connect_GerudoMaze") > Sky1st; }
bool Connect_GerudoMaze_IsAfter_Sky2nd_Exp() { return GetEnum("Step_Connect_GerudoMaze") > Sky2nd; }
bool Connect_GerudoMaze_IsAfter_Sky3rd_Exp() { return GetEnum("Step_Connect_GerudoMaze") > Sky3rd; }
bool Connect_GerudoMaze_IsAfter_SkyAll_Exp() { return GetEnum("Step_Connect_GerudoMaze") > SkyAll; }
bool Connect_GerudoMaze_IsCompleted_Exp() { return GetEnum("Step_Connect_GerudoMaze") == Complete; }
bool Connect_TabantaMaze_IsAfter_Land_Exp() { return GetEnum("Step_Connect_TabantaMaze") > Land; }
bool Connect_TabantaMaze_IsAfter_Land2_Exp() { return GetEnum("Step_Connect_TabantaMaze") > Land2; }
bool Connect_TabantaMaze_IsAfter_Minus_Exp() { return GetEnum("Step_Connect_TabantaMaze") > Minus; }
bool Connect_TabantaMaze_IsAfter_Ready_Exp() { return GetEnum("Step_Connect_TabantaMaze") > Ready; }
bool Connect_TabantaMaze_IsAfter_Sky_Exp() { return GetEnum("Step_Connect_TabantaMaze") > Sky; }
bool Connect_TabantaMaze_IsAfter_Sky1st_Exp() { return GetEnum("Step_Connect_TabantaMaze") > Sky1st; }
bool Connect_TabantaMaze_IsAfter_Sky2nd_Exp() { return GetEnum("Step_Connect_TabantaMaze") > Sky2nd; }
bool Connect_TabantaMaze_IsAfter_Sky3rd_Exp() { return GetEnum("Step_Connect_TabantaMaze") > Sky3rd; }
bool Connect_TabantaMaze_IsAfter_SkyAll_Exp() { return GetEnum("Step_Connect_TabantaMaze") > SkyAll; }
bool Connect_TabantaMaze_IsCompleted_Exp() { return GetEnum("Step_Connect_TabantaMaze") == Complete; }
bool CookAtBaseCamp_IsAfter_NotReady_Exp() { return GetEnum("Step_CookAtBaseCamp") > NotReady; }
bool CookAtBaseCamp_IsAfter_Ready_Exp() { return GetEnum("Step_CookAtBaseCamp") > Ready; }
bool CookAtBaseCamp_IsAfter_Step1_Exp() { return GetEnum("Step_CookAtBaseCamp") > Step1; }
bool CookAtBaseCamp_IsCompleted_Exp() { return GetEnum("Step_CookAtBaseCamp") == Complete; }
bool CraftShadowPicture_IsAfter_Step1_Exp() { return GetEnum("Step_CraftShadowPicture") > Step1; }
bool CraftShadowPicture_IsCompleted_Exp() { return GetEnum("Step_CraftShadowPicture") == Complete; }
bool CreateArmor_IsAfter_Ready_Exp() { return GetEnum("Step_CreateArmor") > Ready; }
bool CreateArmor_IsAfter_Search_Exp() { return GetEnum("Step_CreateArmor") > Search; }
bool CreateArmor_IsCompleted_Exp() { return GetEnum("Step_CreateArmor") == Complete; }
bool CreateOrchestra_DuelingPeeks_Exp() { return !GetBool("Fairy3_IsDeleted_StageOrchestra") && !GetBoolExp("Fairy3_IsAfter_GoToOrchestra_Exp") && (GetBoolExp("Fairy4_IsCompleted_Exp") || !GetBoolExp("Fairy4_IsAfter_Ready_Exp")) && (GetBoolExp("Fairy2_IsCompleted_Exp") || !GetBoolExp("Fairy2_IsAfter_Ready_Exp")) && GetBoolExp("Tribune16_IsCompleted_Exp"); }
bool CreateOrchestra_Outskirt_Exp() { return !GetBoolExp("Fairy4_IsCompleted_Exp") && (GetBoolExp("Fairy2_IsCompleted_Exp") || !GetBoolExp("Fairy2_IsAfter_Ready_Exp")) && (GetBoolExp("Fairy3_IsCompleted_Exp") || !GetBoolExp("Fairy3_IsAfter_Ready_Exp")) && GetBoolExp("Tribune16_IsCompleted_Exp"); }
bool CreateOrchestra_Snowfield_Exp() { return !GetBool("Fairy2_DeleteOrchestra") && (GetBoolExp("Fairy3_IsCompleted_Exp") || !GetBoolExp("Fairy3_IsAfter_Ready_Exp")) && (GetBoolExp("Fairy4_IsCompleted_Exp") || !GetBoolExp("Fairy4_IsAfter_Ready_Exp")) && GetBoolExp("Tribune16_IsCompleted_Exp"); }
bool Createshinguard_IsAfter_GatherItem_Exp() { return GetEnum("Step_Createshinguard") > GatherItem; }
bool Createshinguard_IsAfter_Ready_Exp() { return GetEnum("Step_Createshinguard") > Ready; }
bool Createshinguard_IsCompleted_Exp() { return GetEnum("Step_Createshinguard") == Complete; }
bool Unknown_0xcc96649a() { return GetEnum("Step_Hateno_NewSpecialty") == Step02 || GetBool("SageOfGerudo_InBattle"); }
bool DeathMtHatago_ExistDill() { return GetBoolExp("RescueWell_IsCompleted_Exp") && GetBoolExp("Tribune11_IsCompleted_Exp"); }
bool DeathMtHatago_NotExistDill() { return !GetBoolExp("RescueWell_IsCompleted_Exp") && GetBoolExp("Tribune11_IsCompleted_Exp"); }
bool DeepHoleSurvey_Permission() { return GetBoolExp("DeepHoleSurvey2_IsAfter_Report_Exp") && !GetBoolExp("DeepHoleSurvey2_IsAfter_Buield_Exp"); }
bool DeepHoleSurvey2_IsAfter_AfterInterview_Exp() { return GetEnum("Step_DeepHoleSurvey2") > AfterInterview; }
bool DeepHoleSurvey2_IsAfter_Buield_Exp() { return GetEnum("Step_DeepHoleSurvey2") > Buield; }
bool DeepHoleSurvey2_IsAfter_NotReady_Exp() { return GetEnum("Step_DeepHoleSurvey2") > NotReady; }
bool DeepHoleSurvey2_IsAfter_Ready_Exp() { return GetEnum("Step_DeepHoleSurvey2") > Ready; }
bool DeepHoleSurvey2_IsAfter_Report_Exp() { return GetEnum("Step_DeepHoleSurvey2") > Report; }
bool DeepHoleSurvey2_IsAfter_Step01_Exp() { return GetEnum("Step_DeepHoleSurvey2") > Step01; }
bool DeepHoleSurvey2_IsCompleted_Exp() { return GetEnum("Step_DeepHoleSurvey2") == Complete; }
bool DefeatGanondorf_IsAfter_DefeatBlackDragon_Exp() { return GetEnum("Step_DefeatGanondorf") > DefeatBlackDragon; }
bool DefeatGanondorf_IsAfter_DefeatGanon1_Exp() { return GetEnum("Step_DefeatGanondorf") > DefeatGanon1; }
bool DefeatGanondorf_IsAfter_DefeatGanon2_Exp() { return GetEnum("Step_DefeatGanondorf") > DefeatGanon2; }
bool DefeatGanondorf_IsAfter_DefeatMonsterArmy_Exp() { return GetEnum("Step_DefeatGanondorf") > DefeatMonsterArmy; }
bool DefeatGanondorf_IsAfter_FindWhereabouts_Exp() { return GetEnum("Step_DefeatGanondorf") > FindWhereabouts; }
bool DefeatGanondorf_IsAfter_GoToDeepHole_Exp() { return GetEnum("Step_DefeatGanondorf") > GoToDeepHole; }
bool DefeatGanondorf_IsAfter_NotReady_Exp() { return GetEnum("Step_DefeatGanondorf") > NotReady; }
bool DefeatGanondorf_IsAfter_Ready_Exp() { return GetEnum("Step_DefeatGanondorf") > Ready; }
bool DefeatGanondorf_IsCompleted_Exp() { return GetEnum("Step_DefeatGanondorf") == Complete; }
bool DefeatGanondorf_SageDivide() { return GetBoolExp("DefeatGanondorf_SageExist") && GetBoolExp("MainChallenge_IsAfter_DefeatMonsterArmy_Exp"); }
bool DefeatGanondorf_SageExist() { return GetBoolExp("SageOfSoul_IsCompleted_Exp") || GetBoolExp("SageOfGerudo_IsCompleted_Exp") || GetBoolExp("SageOfZora_IsCompleted_Exp") || GetBoolExp("SageOfFire_IsCompleted_Exp") || GetBoolExp("SageOfWind_IsCompleted_Exp"); }
bool DefeatGanondorfWithAllSage() { return GetBoolExp("SageOfSoul_IsCompleted_Exp") && GetBoolExp("SageOfGerudo_IsCompleted_Exp") && GetBoolExp("SageOfZora_IsCompleted_Exp") && GetBoolExp("SageOfFire_IsCompleted_Exp") && GetBoolExp("SageOfWind_IsCompleted_Exp"); }
bool DefeatHugeEnemy_1_IsAfter_Defeat_Exp() { return GetEnum("Step_DefeatHugeEnemy_1") > Defeat; }
bool DefeatHugeEnemy_1_IsAfter_NotReady_Exp() { return GetEnum("Step_DefeatHugeEnemy_1") > NotReady; }
bool DefeatHugeEnemy_1_IsAfter_Ready_Exp() { return GetEnum("Step_DefeatHugeEnemy_1") > Ready; }
bool DefeatHugeEnemy_1_IsAfter_Report_Exp() { return GetEnum("Step_DefeatHugeEnemy_1") > Report; }
bool DefeatHugeEnemy_1_IsCompleted_Exp() { return GetEnum("Step_DefeatHugeEnemy_1") == Complete; }
bool DefeatHugeEnemy_12() { return GetBoolExp("DefeatHugeEnemy_2_IsCompleted_Exp") && GetBoolExp("DefeatHugeEnemy_1_IsCompleted_Exp"); }
bool DefeatHugeEnemy_13() { return GetBoolExp("DefeatHugeEnemy_3_IsCompleted_Exp") && GetBoolExp("DefeatHugeEnemy_1_IsCompleted_Exp"); }
bool DefeatHugeEnemy_2_IsAfter_Defeat_Exp() { return GetEnum("Step_DefeatHugeEnemy_2") > Defeat; }
bool DefeatHugeEnemy_2_IsAfter_NotReady_Exp() { return GetEnum("Step_DefeatHugeEnemy_2") > NotReady; }
bool DefeatHugeEnemy_2_IsAfter_Ready_Exp() { return GetEnum("Step_DefeatHugeEnemy_2") > Ready; }
bool DefeatHugeEnemy_2_IsAfter_Report_Exp() { return GetEnum("Step_DefeatHugeEnemy_2") > Report; }
bool DefeatHugeEnemy_2_IsCompleted_Exp() { return GetEnum("Step_DefeatHugeEnemy_2") == Complete; }
bool DefeatHugeEnemy_23() { return GetBoolExp("DefeatHugeEnemy_3_IsCompleted_Exp") && GetBoolExp("DefeatHugeEnemy_2_IsCompleted_Exp"); }
bool DefeatHugeEnemy_3_IsAfter_Defeat_Exp() { return GetEnum("Step_DefeatHugeEnemy_3") > Defeat; }
bool DefeatHugeEnemy_3_IsAfter_NotReady_Exp() { return GetEnum("Step_DefeatHugeEnemy_3") > NotReady; }
bool DefeatHugeEnemy_3_IsAfter_Ready_Exp() { return GetEnum("Step_DefeatHugeEnemy_3") > Ready; }
bool DefeatHugeEnemy_3_IsAfter_Report_Exp() { return GetEnum("Step_DefeatHugeEnemy_3") > Report; }
bool DefeatHugeEnemy_3_IsCompleted_Exp() { return GetEnum("Step_DefeatHugeEnemy_3") == Complete; }
bool DefeatHugeEnemy_4_IsAfter_Defeat_Exp() { return GetEnum("Step_DefeatHugeEnemy_4") > Defeat; }
bool DefeatHugeEnemy_4_IsAfter_NotReady_Exp() { return GetEnum("Step_DefeatHugeEnemy_4") > NotReady; }
bool DefeatHugeEnemy_4_IsAfter_Ready_Exp() { return GetEnum("Step_DefeatHugeEnemy_4") > Ready; }
bool DefeatHugeEnemy_4_IsAfter_Report_Exp() { return GetEnum("Step_DefeatHugeEnemy_4") > Report; }
bool DefeatHugeEnemy_4_IsCompleted_Exp() { return GetEnum("Step_DefeatHugeEnemy_4") == Complete; }
bool DefeatHugeEnemy_45() { return GetBoolExp("DefeatHugeEnemy_5_IsCompleted_Exp") && GetBoolExp("DefeatHugeEnemy_4_IsCompleted_Exp"); }
bool DefeatHugeEnemy_46() { return GetBoolExp("DefeatHugeEnemy_6_IsCompleted_Exp") && GetBoolExp("DefeatHugeEnemy_4_IsCompleted_Exp"); }
bool DefeatHugeEnemy_5_IsAfter_Defeat_Exp() { return GetEnum("Step_DefeatHugeEnemy_5") > Defeat; }
bool DefeatHugeEnemy_5_IsAfter_NotReady_Exp() { return GetEnum("Step_DefeatHugeEnemy_5") > NotReady; }
bool DefeatHugeEnemy_5_IsAfter_Ready_Exp() { return GetEnum("Step_DefeatHugeEnemy_5") > Ready; }
bool DefeatHugeEnemy_5_IsAfter_Report_Exp() { return GetEnum("Step_DefeatHugeEnemy_5") > Report; }
bool DefeatHugeEnemy_5_IsCompleted_Exp() { return GetEnum("Step_DefeatHugeEnemy_5") == Complete; }
bool DefeatHugeEnemy_56() { return GetBoolExp("DefeatHugeEnemy_6_IsCompleted_Exp") && GetBoolExp("DefeatHugeEnemy_5_IsCompleted_Exp"); }
bool DefeatHugeEnemy_6_IsAfter_Defeat_Exp() { return GetEnum("Step_DefeatHugeEnemy_6") > Defeat; }
bool DefeatHugeEnemy_6_IsAfter_EventLightSpot_Exp() { return GetEnum("Step_DefeatHugeEnemy_6") > EventLightSpot; }
bool DefeatHugeEnemy_6_IsAfter_NotReady_Exp() { return GetEnum("Step_DefeatHugeEnemy_6") > NotReady; }
bool DefeatHugeEnemy_6_IsAfter_Ready_Exp() { return GetEnum("Step_DefeatHugeEnemy_6") > Ready; }
bool DefeatHugeEnemy_6_IsAfter_Report_Exp() { return GetEnum("Step_DefeatHugeEnemy_6") > Report; }
bool DefeatHugeEnemy_6_IsCompleted_Exp() { return GetEnum("Step_DefeatHugeEnemy_6") == Complete; }
bool Delete_MercenaryTraceTent_01_Exp() { return !GetBool("Watch_MercenaryTraceTent_01") && GetBoolExp("GetCamera_IsCompleted_Exp") && GetBoolExp("Npc_Umii_Kakariko_Scholar_E_IsChioceAll") && GetBool("HaveTalked.Npc_Umii_Kakariko_Scholar_F"); }
bool DevoteSpring_IsAfter_Step1_Exp() { return GetEnum("Step_DevoteSpring") > Step1; }
bool DevoteSpring_IsCompleted_Exp() { return GetEnum("Step_DevoteSpring") == Complete; }
bool DisguiseAssassinLv0() { return (GetEnum("Step_AssassinGerudoBase") == Ready || GetEnum("Step_MinusYiga") == Ready) && !GetBoolExp("DisguiseAssassinLv4") && !GetBoolExp("DisguiseAssassinLv3") && !GetBoolExp("DisguiseAssassinLv2") && !GetBoolExp("DisguiseAssassinLv1"); }
bool DisguiseAssassinLv0_Private01() { return (!GetBool("DisguiseAssassinRandomBool") && GetBoolExp("DisguiseAssassinLv1")) || GetBoolExp("DisguiseAssassinLv0"); }
bool DisguiseAssassinLv1() { return (GetBool("FirstPlateauBase_Invade") || GetBool("CaveBase_Invade") || GetBool("AkkareBase_Invade") || GetEnum("Step_MinusYiga") == Begin) && !GetBoolExp("DisguiseAssassinLv4") && !GetBoolExp("DisguiseAssassinLv3") && !GetBoolExp("DisguiseAssassinLv2"); }
bool DisguiseAssassinLv1_Private01() { return (!GetBool("DisguiseAssassinRandomBool") && GetBoolExp("DisguiseAssassinLv3")) || GetBoolExp("DisguiseAssassinLv2") || (GetBool("DisguiseAssassinRandomBool") && GetBoolExp("DisguiseAssassinLv1")); }
bool DisguiseAssassinLv2() { return (GetEnum("Step_MinusYiga") == Again || (GetBool("FirstPlateauBase_Invade") && GetBool("CaveBase_Invade")) || (GetBool("CaveBase_Invade") && GetBool("AkkareBase_Invade")) || (GetBool("FirstPlateauBase_Invade") && GetBool("AkkareBase_Invade"))) && !GetBoolExp("DisguiseAssassinLv4") && !GetBoolExp("DisguiseAssassinLv3"); }
bool DisguiseAssassinLv2_Private01() { return GetBoolExp("DisguiseAssassinLv4") || (GetBool("DisguiseAssassinRandomBool") && GetBoolExp("DisguiseAssassinLv3")); }
bool DisguiseAssassinLv3() { return ((GetBool("FirstPlateauBase_Invade") && GetBool("CaveBase_Invade") && GetBool("AkkareBase_Invade")) || GetEnum("Step_MinusYiga") == Continue) && !GetBoolExp("DisguiseAssassinLv4"); }
bool DisguiseAssassinLv3A() { return GetBool("DisguiseAssassinRandomBool") && GetBoolExp("DisguiseAssassinLv3"); }
bool DisguiseAssassinLv3B() { return !GetBool("DisguiseAssassinRandomBool") && GetBoolExp("DisguiseAssassinLv3"); }
bool DisguiseAssassinLv4() { return GetEnum("Step_AssassinGerudoBase") == Complete || GetEnum("Step_MinusYiga") == Complete; }
bool DisguiseAssassinLv4A() { return GetBool("DisguiseAssassinRandomBool") && GetBoolExp("DisguiseAssassinLv4"); }
bool DisguiseAssassinLv4B() { return !GetBool("DisguiseAssassinRandomBool") && GetBoolExp("DisguiseAssassinLv4"); }
bool DividedSlate_IsAfter_NotReady_Exp() { return GetEnum("Step_DividedSlate") > NotReady; }
bool DividedSlate_IsAfter_Ready_Exp() { return GetEnum("Step_DividedSlate") > Ready; }
bool DividedSlate_IsAfter_RepairSlate_Exp() { return GetEnum("Step_DividedSlate") > RepairSlate; }
bool DividedSlate_IsCompleted_Exp() { return GetEnum("Step_DividedSlate") == Complete; }
bool DontHaveSeenAnyTips() { return !GetBool("HaveSeenAnyTips"); }
bool Dragon_Light_Pos_For_Map_IsInvalid() { return !GetBoolExp("Unknown_0x5dd0d1ca"); }
bool Unknown_0x5dd0d1ca() { return !GetBool("HaveMasterSword"); }
bool DragonMemoryComplete() { return GetBool("IsGetAdventureMemory.DmT_ZE_QueenDead_PreRender") && GetBool("IsGetAdventureMemory.DmT_ZE_Molduga_PreRender") && GetBool("IsGetAdventureMemory.DmT_ZE_Meet_PreRender") && GetBool("IsGetAdventureMemory.DmT_ZE_LieServant_PreRender") && GetBool("IsGetAdventureMemory.DmT_ZE_Birth_PreRender") && GetBool("IsGetAdventureMemory.DmT_OP_GanonWakeUp_PreRender_Memory") && GetBool("IsGetAdventureMemory.Dm_ZN_0039_PreRender") && GetBool("IsGetAdventureMemory.Dm_ZN_0033_PreRender") && GetBool("IsGetAdventureMemory.Dm_ZE_0011_PreRender") && GetBool("IsGetAdventureMemory.Dm_ZE_0010_PreRender") && GetBool("IsGetAdventureMemory.Dm_ZE_0008_PreRender") && GetBool("IsGetAdventureMemory.Dm_ZE_0007_PreRender") && GetBool("IsGetAdventureMemory.Dm_ZE_0006_PreRender") && GetBool("IsGetAdventureMemory.Dm_ZE_0005_PreRender") && GetBool("IsGetAdventureMemory.Dm_ZE_0004_PreRender") && GetBool("IsGetAdventureMemory.Dm_SK_0003_PreRender") && GetBool("IsGetAdventureMemory.Dm_OT_0015_PreRender") && GetBool("IsGetAdventureMemory.Dm_BZ_0005_PreRender"); }
bool EightHeroStatues_After_IsAfter_Ready_Exp() { return GetEnum("Step_EightHeroStatues_After") > Ready; }
bool EightHeroStatues_After_IsAfter_Step1_Exp() { return GetEnum("Step_EightHeroStatues_After") > Step1; }
bool EightHeroStatues_After_IsAfter_Step1_GoRoom_Exp() { return GetEnum("Step_EightHeroStatues_After") > Step1_GoRoom; }
bool EightHeroStatues_After_IsAfter_Step2_Exp() { return GetEnum("Step_EightHeroStatues_After") > Step2; }
bool EightHeroStatues_After_IsAfter_Step3_Exp() { return GetEnum("Step_EightHeroStatues_After") > Step3; }
bool EightHeroStatues_After_IsAfter_Step4_Exp() { return GetEnum("Step_EightHeroStatues_After") > Step4; }
bool EightHeroStatues_IsCompleted_Exp() { return GetEnum("Step_EightHeroStatues") == Complete; }
bool EightHeroStatues_MoveToAnchor6_Exp() { return !GetBool("EightHeroStatues_After_FirstTalkTmp") && GetBool("EightHeroStatues_After_FirstTalk"); }
bool Unknown_0x664fd4a6() { return GetBool("EightHeroStatues_SwitchStatue_PhotoOK") && GetBool("EightHeroStatues_SwitchStatue"); }
bool Enable_Activate_Golem_Minus0008() { return GetBool("Npc_Assassin_023_Dead") && !GetBool("IsActivated_Minus0008_NPCZonauGolem"); }
bool EveryonesMeal_IsAfter_NotReady_Exp() { return GetEnum("Step_EveryonesMeal") > NotReady; }
bool EveryonesMeal_IsCompleted_Exp() { return GetEnum("Step_EveryonesMeal") == Complete; }
bool ExcavateFosilGerudo_VanishNpc() { return !GetBoolExp("ExcavateFossil3_IsAfter_Ready_Exp"); }
bool ExcavateFossil1_IsAfter_Excavate_Exp() { return GetEnum("Step_ExcavateFossil1") > Excavate; }
bool ExcavateFossil1_IsAfter_GoFossil_Exp() { return GetEnum("Step_ExcavateFossil1") > GoFossil; }
bool ExcavateFossil1_IsAfter_LightPoint_Exp() { return GetEnum("Step_ExcavateFossil1") > LightPoint; }
bool ExcavateFossil1_IsAfter_NextLightPoint_Exp() { return GetEnum("Step_ExcavateFossil1") > NextLightPoint; }
bool ExcavateFossil1_IsAfter_Ready_Exp() { return GetEnum("Step_ExcavateFossil1") > Ready; }
bool ExcavateFossil1_IsCompleted_Exp() { return GetEnum("Step_ExcavateFossil1") == Complete; }
bool ExcavateFossil2_IsAfter_Excavate_Exp() { return GetEnum("Step_ExcavateFossil2") > Excavate; }
bool ExcavateFossil2_IsAfter_GoFossil_Exp() { return GetEnum("Step_ExcavateFossil2") > GoFossil; }
bool ExcavateFossil2_IsAfter_NextLightPoint_Exp() { return GetEnum("Step_ExcavateFossil2") > NextLightPoint; }
bool ExcavateFossil2_IsAfter_Ready_Exp() { return GetEnum("Step_ExcavateFossil2") > Ready; }
bool ExcavateFossil2_IsCompleted_Exp() { return GetEnum("Step_ExcavateFossil2") == Complete; }
bool ExcavateFossil3_IsAfter_Excavate_Exp() { return GetEnum("Step_ExcavateFossil3") > Excavate; }
bool ExcavateFossil3_IsAfter_GoFossil_Exp() { return GetEnum("Step_ExcavateFossil3") > GoFossil; }
bool ExcavateFossil3_IsAfter_Ready_Exp() { return GetEnum("Step_ExcavateFossil3") > Ready; }
bool ExcavateFossil3_IsCompleted_Exp() { return GetEnum("Step_ExcavateFossil3") == Complete; }
bool ExcavateFossilEldin_VanishHatagoNpc() { return GetBool("ExcavateFossilEldin_ExitNpc"); }
bool ExcavateFossilEldin_VanishNpcEldin() { return !GetBool("ExcavateFossilEldin_ExitNpc") || GetBool("ExcavateFossil_ExitNpc_Eldin"); }
bool ExcavateFossilHebra_VanishNpc() { return !GetBool("ExcavateFossil_ExitNpc_Eldin") || GetBool("ExcavateFossil_ExitNpc_Hebra"); }
bool ExcludeChoice_UotoriRevivePlan_PresentStraw_Exp() { return GetBool("ExcludeChoice_UotoriRevivePlan_NotEnoughStraw") || GetBool("ExcludeChoice_UotoriRevivePlan_PresentStraw"); }
bool ExcludeChoice_UotoriRevivePlan_ReviveHouse() { return GetBoolExp("ExcludeChoice_UotoriRevivePlan_RevivePrivateHouse") && GetBoolExp("ExcludeChoice_UotoriRevivePlan_ReviveLeaderHouse"); }
bool ExcludeChoice_UotoriRevivePlan_ReviveInn() { return GetBool("Revive_Inn_Move") || GetBool("Revive_Inn"); }
bool ExcludeChoice_UotoriRevivePlan_ReviveLeaderHouse() { return GetBool("Revive_LeaderHouse_Move") || GetBool("Revive_LeaderHouse"); }
bool ExcludeChoice_UotoriRevivePlan_RevivePrivateHouse() { return GetBool("Revive_PrivateHouse_Move") || GetBool("Revive_PrivateHouse"); }
bool ExcludeChoice_UotoriRevivePlan_ReviveRestaurant() { return GetBool("Revive_Restaurant_Move") || GetBool("Revive_Restaurant"); }
bool ExcludeChoice_UotoriRevivePlan_ReviveShop() { return GetBoolExp("ExcludeChoice_UotoriRevivePlan_ReviveTreasureShop") && GetBoolExp("ExcludeChoice_UotoriRevivePlan_ReviveRestaurant") && GetBoolExp("ExcludeChoice_UotoriRevivePlan_ReviveInn"); }
bool ExcludeChoice_UotoriRevivePlan_ReviveTreasureShop() { return GetBool("Revive_TreasureShop_Move") || GetBool("Revive_TreasureShop"); }
bool Fairy2_IsAfter_CarryNPC_Exp() { return GetEnum("Step_Fairy2") > CarryNPC; }
bool Fairy2_IsAfter_CarryNPC2_Exp() { return GetEnum("Step_Fairy2") > CarryNPC2; }
bool Fairy2_IsAfter_NotReady_Exp() { return GetEnum("Step_Fairy2") > NotReady; }
bool Fairy2_IsAfter_Ready_Exp() { return GetEnum("Step_Fairy2") > Ready; }
bool Fairy2_IsAfter_Report_Exp() { return GetEnum("Step_Fairy2") > Report; }
bool Fairy2_IsAfter_ReturnUmayado_Exp() { return GetEnum("Step_Fairy2") > ReturnUmayado; }
bool Fairy2_IsAfter_Search_Exp() { return GetEnum("Step_Fairy2") > Search; }
bool Fairy2_IsCompleted_Exp() { return GetEnum("Step_Fairy2") == Complete; }
bool Fairy3_IsAfter_Craft_Exp() { return GetEnum("Step_Fairy3") > Craft; }
bool Fairy3_IsAfter_GoToOrchestra_Exp() { return GetEnum("Step_Fairy3") > GoToOrchestra; }
bool Fairy3_IsAfter_NotReady_Exp() { return GetEnum("Step_Fairy3") > NotReady; }
bool Fairy3_IsAfter_Reach_Exp() { return GetEnum("Step_Fairy3") > Reach; }
bool Fairy3_IsAfter_Ready_Exp() { return GetEnum("Step_Fairy3") > Ready; }
bool Fairy3_IsAfter_Search_Exp() { return GetEnum("Step_Fairy3") > Search; }
bool Fairy3_IsCompleted_Exp() { return GetEnum("Step_Fairy3") == Complete; }
bool Fairy3_IsSearch() { return GetEnum("Step_Fairy3") == Search; }
bool Fairy3_OffLight_Fairy() { return !(GetBool("Fairy_OnWagon") && GetBool("Fairy3_IsAlive")); }
bool Fairy3_OffLight_Miroyan() { return GetBool("Fairy_OnWagon") && GetBool("Fairy3_IsAlive"); }
bool Fairy4_IsAfter_CarryNPC_Exp() { return GetEnum("Step_Fairy4") > CarryNPC; }
bool Fairy4_IsAfter_GoToOrchestra_Exp() { return GetEnum("Step_Fairy4") > GoToOrchestra; }
bool Fairy4_IsAfter_Ready_Exp() { return GetEnum("Step_Fairy4") > Ready; }
bool Fairy4_IsCompleted_Exp() { return GetEnum("Step_Fairy4") == Complete; }
bool Fairy4_IsSearch() { return GetEnum("Step_Fairy4") == Search; }
bool Fairy4_OffLight_Fairy() { return !(GetBool("Fairy_OnWagon") && GetBool("Fairy4_IsAlive")); }
bool Fairy4_OffLight_Miroyan() { return GetBool("Fairy_OnWagon") && GetBool("Fairy4_IsAlive"); }
bool FairyAllClear() { return GetEnum("Step_Fairy4") == Complete && GetEnum("Step_Fairy3") == Complete && GetEnum("Step_Fairy2") == Complete; }
bool FindDrefan_IsCompleted_Exp() { return GetEnum("Step_FindDrefan") == Complete; }
bool FindSunaNui_IsAfter_Ready_Exp() { return GetEnum("Step_FindSunaNui") > Ready; }
bool FindSunaNui_IsCompleted_Exp() { return GetEnum("Step_FindSunaNui") == Complete; }
bool FindSunaNui2_IsAfter_Playing_Exp() { return GetEnum("Step_FindSunaNui2") > Playing; }
bool FindSunaNui2_IsAfter_Ready_Exp() { return GetEnum("Step_FindSunaNui2") > Ready; }
bool FindSunaNui2_IsAfter_Result_Exp() { return GetEnum("Step_FindSunaNui2") > Result; }
bool FindSunaNui2_IsAfter_TimeOver_Exp() { return GetEnum("Step_FindSunaNui2") > TimeOver; }
bool FindSunaNui2_IsCompleted_Exp() { return GetEnum("Step_FindSunaNui2") == Complete; }
bool FindWhiteHorse_CanStart_Exp() { return GetBoolExp("Complete_Two_SageChallenges") && GetBoolExp("BuildingMaterialsTutorial_IsCompleted_Exp"); }
bool FindWhiteHorse_IsAfter_NotReady_Exp() { return GetEnum("Step_FindWhiteHorse") > NotReady; }
bool FindWhiteHorse_IsAfter_Ready_Exp() { return GetEnum("Step_FindWhiteHorse") > Ready; }
bool FindWhiteHorse_IsAfter_Step01_Exp() { return GetEnum("Step_FindWhiteHorse") > Step01; }
bool FindWhiteHorse_IsCompleted_Exp() { return GetEnum("Step_FindWhiteHorse") == Complete; }
bool FindWithSensors_IsAfter_Find_Exp() { return GetEnum("Step_FindWithSensors") > Find; }
bool FindWithSensors_IsAfter_NotReady_Exp() { return GetEnum("Step_FindWithSensors") > NotReady; }
bool FindWithSensors_IsAfter_Ready_Exp() { return GetEnum("Step_FindWithSensors") > Ready; }
bool FindWithSensors_IsAfter_Report_Exp() { return GetEnum("Step_FindWithSensors") > Report; }
bool FindWithSensors_IsAfter_Search_Exp() { return GetEnum("Step_FindWithSensors") > Search; }
bool FindWithSensors_IsAfter_TestSensor_Exp() { return GetEnum("Step_FindWithSensors") > TestSensor; }
bool FindWithSensors_IsCompleted_Exp() { return GetEnum("Step_FindWithSensors") == Complete; }
bool FirstIsland_IsClearAllSmallDungeon() { return GetEnum("DungeonState.Dungeon062") == Clear && GetEnum("DungeonState.Dungeon061") == Clear && GetEnum("DungeonState.Dungeon060") == Clear; }
bool FirstIsland_IsClearAnySmallDungeon() { return GetEnum("DungeonState.Dungeon062") == Clear || GetEnum("DungeonState.Dungeon061") == Clear || GetEnum("DungeonState.Dungeon060") == Clear; }
bool FirstIsland_IsClearSmallDungeon60And61() { return GetEnum("DungeonState.Dungeon061") == Clear && GetEnum("DungeonState.Dungeon060") == Clear; }
bool FirstIsland_IsClearSmallDungeon60And62() { return GetEnum("DungeonState.Dungeon062") == Clear && GetEnum("DungeonState.Dungeon060") == Clear; }
bool FirstIsland_IsClearSmallDungeon61And62() { return GetEnum("DungeonState.Dungeon062") == Clear && GetEnum("DungeonState.Dungeon061") == Clear; }
bool FirstIsland_NotTalkedAndCutDownTree() { return !GetBool("HaveTalked.Npc_Zonau_Golem_Servant_FirstIsland_23") && GetBool("Firstskyisland_IsCutDownTree_Tutorial"); }
bool FirstSkyIslandReturns_Activated_Exp() { return !GetBool("DefeatGanondorf_LoadLastBattleSet") && GetBoolExp("Complete_Two_SageChallenges") && GetBool("IsGet.Armor_006_Upper"); }
bool FirstskyislandReturns_IsAfter_BeforeGame_Exp() { return GetEnum("Step_FirstskyislandReturns") > BeforeGame; }
bool FirstskyislandReturns_IsAfter_GameClear_Exp() { return GetEnum("Step_FirstskyislandReturns") > GameClear; }
bool FirstskyislandReturns_IsAfter_Ready_Exp() { return GetEnum("Step_FirstskyislandReturns") > Ready; }
bool FirstskyislandReturns_IsAfter_ReturnReady_Exp() { return GetEnum("Step_FirstskyislandReturns") > ReturnReady; }
bool FullyRipenedFlintstones_Deactivated() { return !GetBoolExp("ResearchEldin_IsCompleted_Exp") || GetBoolExp("FullyRipenedFlintstones_IsCompleted_Exp"); }
bool FullyRipenedFlintstones_IsAfter_GetFlintstones_Exp() { return GetEnum("Step_FullyRipenedFlintstones") > GetFlintstones; }
bool FullyRipenedFlintstones_IsAfter_NotReady_Exp() { return GetEnum("Step_FullyRipenedFlintstones") > NotReady; }
bool FullyRipenedFlintstones_IsAfter_Ready_Exp() { return GetEnum("Step_FullyRipenedFlintstones") > Ready; }
bool FullyRipenedFlintstones_IsCompleted_Exp() { return GetEnum("Step_FullyRipenedFlintstones") == Complete; }
bool gather_Insect_Z_IsCompleted_Exp() { return GetEnum("Step_gather_Insect_Z") == Complete; }
bool GeniusWeapon_Zora_IsCompleted_Exp() { return GetEnum("Step_GeniusWeapon_Zora") == Complete; }
bool Genkos_Kitchen_IsAfter_GetPresent_Exp() { return GetEnum("Step_Genkos_Kitchen") > GetPresent; }
bool Genkos_Kitchen_IsAfter_HaveFish_Exp() { return GetEnum("Step_Genkos_Kitchen") > HaveFish; }
bool Genkos_Kitchen_IsAfter_Ready_Exp() { return GetEnum("Step_Genkos_Kitchen") > Ready; }
bool Gerudo_NpcOasis001_CameGerudo() { return GetBoolExp("AisyaRescue_IsCompleted_Exp") && GetBoolExp("SageOfGerudo_IsAfter_DungeonBossDead_Exp"); }
bool Gerudo_Oasis001_InCity() { return GetBool("NpcOasis001_Talk02") && GetBoolExp("SageOfGerudo_IsAfter_DungeonBossDead_Exp"); }
bool Gerudo_Oasis001_InUG() { return GetBool("NpcOasis001_Talk02") && GetBoolExp("SageOfGerudo_Before_DungeonEnd_Not_DefenseStart_Exp"); }
bool Gerudo_Oasis012_OutUG() { return !GetBoolExp("SageOfGerudo_Before_DungeonEnd_Not_DefenseStart_Exp"); }
bool Gerudo_Oasis024_ChangeFlameThrower() { return GetBoolExp("SageOfGerudo_WeaponAttachStep_Exp"); }
bool Gerudo_Oasis024_ChangeGear() { return !GetBoolExp("MakeChemicalWeapon_IsCompleted_Exp") && GetBoolExp("SageOfGerudo_IsCompleted_Exp"); }
bool Gerudo_Oasis024_ChangeNone() { return !GetBoolExp("Gerudo_Oasis024_ChangeGear") && !GetBoolExp("Gerudo_Oasis024_ChangeRuby") && !GetBoolExp("Gerudo_Oasis024_ChangeFlameThrower"); }
bool Gerudo_Oasis024_ChangeRuby() { return GetBoolExp("MakeChemicalWeapon_IsCompleted_Exp") && GetBoolExp("SageOfGerudo_IsCompleted_Exp"); }
bool Gerudo_UMiiVillage033_CameGerudo() { return GetBoolExp("SageOfGerudo_IsAfter_DungeonBossDead_Exp") && GetBoolExp("IchikaraChallenge01_IsCompleted_Exp"); }
bool Gerudo_UrbosaWeapon_IsAfter_Ready_Exp() { return GetEnum("Step_Gerudo_UrbosaWeapon") > Ready; }
bool Gerudo_UrbosaWeapon_IsCompleted_Exp() { return GetEnum("Step_Gerudo_UrbosaWeapon") == Complete; }
bool GerudoCanyon_24hEnduranceComparison_IsAfter_Prepare_Exp() { return GetEnum("Step_GerudoCanyon_24hEnduranceComparison") > Prepare; }
bool GerudoCanyon_24hEnduranceComparison_IsAfter_Ready_Exp() { return GetEnum("Step_GerudoCanyon_24hEnduranceComparison") > Ready; }
bool GerudoCanyon_24hEnduranceComparison_IsCompleted_Exp() { return GetEnum("Step_GerudoCanyon_24hEnduranceComparison") == Complete; }
bool GerudoCanyon_Adventure_IsAfter_NotReady_Exp() { return GetEnum("Step_GerudoCanyon_Adventure") > NotReady; }
bool GerudoCanyon_Adventure_IsAfter_Ready_Exp() { return GetEnum("Step_GerudoCanyon_Adventure") > Ready; }
bool GerudoCanyon_Adventure_IsAfter_Step1_Exp() { return GetEnum("Step_GerudoCanyon_Adventure") > Step1; }
bool GerudoCanyon_Adventure_IsAfter_Step2_Exp() { return GetEnum("Step_GerudoCanyon_Adventure") > Step2; }
bool GerudoCanyon_Adventure_IsCompleted_Exp() { return GetEnum("Step_GerudoCanyon_Adventure") == Complete; }
bool GerudoCanyon_ColdEnduranceComparison_IsAfter_Prepare_Exp() { return GetEnum("Step_GerudoCanyon_ColdEnduranceComparison") > Prepare; }
bool GerudoCanyon_ColdEnduranceComparison_IsAfter_Ready_Exp() { return GetEnum("Step_GerudoCanyon_ColdEnduranceComparison") > Ready; }
bool GerudoCanyon_ColdEnduranceComparison_IsCompleted_Exp() { return GetEnum("Step_GerudoCanyon_ColdEnduranceComparison") == Complete; }
bool GerudoCanyon_GleeokLiver_IsAfter_Ready_Exp() { return GetEnum("Step_GerudoCanyon_GleeokLiver") > Ready; }
bool GerudoCanyon_TumbleweedSweep_IsAfter_Ready_Exp() { return GetEnum("Step_GerudoCanyon_TumbleweedSweep") > Ready; }
bool GerudoDesertTreasure_IsAfter_NotReady_Exp() { return GetEnum("Step_GerudoDesertTreasure") > NotReady; }
bool GerudoDesertTreasure_IsAfter_Ready_Exp() { return GetEnum("Step_GerudoDesertTreasure") > Ready; }
bool GerudoDesertTreasure_IsAfter_Search_Exp() { return GetEnum("Step_GerudoDesertTreasure") > Search; }
bool GerudoDesertTreasure_IsCompleted_Exp() { return GetEnum("Step_GerudoDesertTreasure") == Complete; }
bool GerudoTown_EnemyBanArea() { return GetBoolExp("SageOfGerudo_IsAfter_PreDefenseStart_Exp") && !(GetEnum("Step_SageOfGerudo") == DefenseStart); }
bool GetCamera_IsAfter_GotoUnderground_Exp() { return GetEnum("Step_GetCamera") > GotoUnderground; }
bool GetCamera_IsAfter_NotReady_Exp() { return GetEnum("Step_GetCamera") > NotReady; }
bool GetCamera_IsAfter_Ready_Exp() { return GetEnum("Step_GetCamera") > Ready; }
bool GetCamera_IsAfter_ReturnBaseCamp_Exp() { return GetEnum("Step_GetCamera") > ReturnBaseCamp; }
bool GetCamera_IsAfter_TakePicture_Exp() { return GetEnum("Step_GetCamera") > TakePicture; }
bool GetCamera_IsCompleted_Exp() { return GetEnum("Step_GetCamera") == Complete; }
bool GetMasterSword_IsAfter_Ready_Exp() { return GetEnum("Step_GetMasterSword") > Ready; }
bool GetMasterSword_IsCompleted_Exp() { return GetEnum("Step_GetMasterSword") == Complete; }
bool GetSensorPlus_IsAfter_NotReady_Exp() { return GetEnum("Step_GetSensorPlus") > NotReady; }
bool GetSensorPlus_IsAfter_Ready_Exp() { return GetEnum("Step_GetSensorPlus") > Ready; }
bool GetSensorPlus_IsAfter_Step01_Exp() { return GetEnum("Step_GetSensorPlus") > Step01; }
bool GetSensorPlus_IsCompleted_Exp() { return GetEnum("Step_GetSensorPlus") == Complete; }
bool GetWalker_IsAfter_NotReady_Exp() { return GetEnum("Step_GetWalker") > NotReady; }
bool GetWalker_IsAfter_Ready_Exp() { return GetEnum("Step_GetWalker") > Ready; }
bool GetWalker_IsAfter_Step01_Exp() { return GetEnum("Step_GetWalker") > Step01; }
bool GetWalker_IsCompleted_Exp() { return GetEnum("Step_GetWalker") == Complete; }
bool GetWarpMarker_IsAfter_EventLightSpot_Exp() { return GetEnum("Step_GetWarpMarker") > EventLightSpot; }
bool GetWarpMarker_IsAfter_NotReady_Exp() { return GetEnum("Step_GetWarpMarker") > NotReady; }
bool GetWarpMarker_IsAfter_Ready_Exp() { return GetEnum("Step_GetWarpMarker") > Ready; }
bool GetWarpMarker_IsAfter_Step01_Exp() { return GetEnum("Step_GetWarpMarker") > Step01; }
bool GetWarpMarker_IsAfter_Step02_Exp() { return GetEnum("Step_GetWarpMarker") > Step02; }
bool GetWarpMarker_IsAfter_Step03_Exp() { return GetEnum("Step_GetWarpMarker") > Step03; }
bool GetWarpMarker_IsAfter_Step04_Exp() { return GetEnum("Step_GetWarpMarker") > Step04; }
bool GetWarpMarker_IsCompleted_Exp() { return GetEnum("Step_GetWarpMarker") == Complete; }
bool GiantHorse_IsAfter_Ready_Exp() { return GetEnum("Step_GiantHorse") > Ready; }
bool GiantHorse_IsAfter_Step2_Exp() { return GetEnum("Step_GiantHorse") > Step2; }
bool GiantHorse_IsAfter_Step3_Exp() { return GetEnum("Step_GiantHorse") > Step3; }
bool GiantHorse_IsCompleted_Exp() { return GetEnum("Step_GiantHorse") == Complete; }
bool GiantHorse_KeyCrystal_Surprised_00() { return !GetBool("GiantHorse_KeyCrystal_FirstTalk_04") && GetBool("CarryToShrine18_Crystal_Start"); }
bool GoddessStatue_CanUpdateSageSoul() { return GetBoolExp("GoddessStatue_CanUpdateSageSoulZora") || GetBoolExp("GoddessStatue_CanUpdateSageSoulZonau") || GetBoolExp("GoddessStatue_CanUpdateSageSoulRito") || GetBoolExp("GoddessStatue_CanUpdateSageSoulGoron") || GetBoolExp("GoddessStatue_CanUpdateSageSoulGerudo"); }
bool GoddessStatue_CanUpdateSageSoulGerudo() { return !GetBool("IsGet.Obj_SageSoulPlus_Gerudo") && GetBool("IsGet.Obj_SageSoul_Gerudo"); }
bool GoddessStatue_CanUpdateSageSoulGoron() { return !GetBool("IsGet.Obj_SageSoulPlus_Goron") && GetBool("IsGet.Obj_SageSoul_Goron"); }
bool GoddessStatue_CanUpdateSageSoulRito() { return !GetBool("IsGet.Obj_SageSoulPlus_Rito") && GetBool("IsGet.Obj_SageSoul_Rito"); }
bool GoddessStatue_CanUpdateSageSoulZonau() { return !GetBool("IsGet.Obj_SageSoulPlus_Zonau") && GetBool("IsGet.Obj_SageSoul_Zonau"); }
bool GoddessStatue_CanUpdateSageSoulZora() { return !GetBool("IsGet.Obj_SageSoulPlus_Zora") && GetBool("IsGet.Obj_SageSoul_Zora"); }
bool GoddessStatue_HasSageSoul() { return GetBool("IsGet.Obj_SageSoul_Zonau") || GetBool("IsGet.Obj_SageSoul_Rito") || GetBool("IsGet.Obj_SageSoul_Gerudo") || GetBool("IsGet.Obj_SageSoul_Goron") || GetBool("IsGet.Obj_SageSoul_Zora"); }
bool GoneSnowQueen_IsAfter_NotReady_Exp() { return GetEnum("Step_GoneSnowQueen") > NotReady; }
bool GoneSnowQueen_IsAfter_Ready_Exp() { return GetEnum("Step_GoneSnowQueen") > Ready; }
bool GoneSnowQueen_IsAfter_Step0_Exp() { return GetEnum("Step_GoneSnowQueen") > Step0; }
bool GoneSnowQueen_IsAfter_Step1_Exp() { return GetEnum("Step_GoneSnowQueen") > Step1; }
bool GoneSnowQueen_IsAfter_Step2_Exp() { return GetEnum("Step_GoneSnowQueen") > Step2; }
bool GoneSnowQueen_IsAfter_Step3_Exp() { return GetEnum("Step_GoneSnowQueen") > Step3; }
bool GoneSnowQueen_IsCompleted_Exp() { return GetEnum("Step_GoneSnowQueen") == Complete; }
bool Goron_MiniGame_01_IsAfter_Craft_Exp() { return GetEnum("Step_Goron_MiniGame_01") > Craft; }
bool Goron_MiniGame_01_IsCompleted_Exp() { return GetEnum("Step_Goron_MiniGame_01") == Complete; }
bool Goron_MiniGame_02_IsAfter_Craft_Exp() { return GetEnum("Step_Goron_MiniGame_02") > Craft; }
bool Goron_MiniGame_02_IsCompleted_Exp() { return GetEnum("Step_Goron_MiniGame_02") == Complete; }
bool Goron_MiniGame_03_IsCompleted_Exp() { return GetEnum("Step_Goron_MiniGame_03") == Complete; }
bool Goron_MiniGame_InMiniGame01() { return GetEnum("Step_Goron_MiniGame_Tutorial_01") == Playing || GetEnum("Step_Goron_MiniGame_01") == Playing || GetEnum("Step_Goron_MiniGame_Tutorial_01") == Craft || GetEnum("Step_Goron_MiniGame_01") == Craft; }
bool Goron_MiniGame_InMiniGame02() { return GetEnum("Step_Goron_MiniGame_Tutorial_02") == Playing || GetEnum("Step_Goron_MiniGame_02") == Playing || GetEnum("Step_Goron_MiniGame_Tutorial_02") == Craft || GetEnum("Step_Goron_MiniGame_02") == Craft; }
bool Goron_MiniGame_Tutorial_01_IsAfter_Craft_Exp() { return GetEnum("Step_Goron_MiniGame_Tutorial_01") > Craft; }
bool Goron_MiniGame_Tutorial_01_IsAfter_Ready_Exp() { return GetEnum("Step_Goron_MiniGame_Tutorial_01") > Ready; }
bool Goron_MiniGame_Tutorial_01_IsCompleted_Exp() { return GetEnum("Step_Goron_MiniGame_Tutorial_01") == Complete; }
bool Goron_MiniGame_Tutorial_02_IsAfter_Craft_Exp() { return GetEnum("Step_Goron_MiniGame_Tutorial_02") > Craft; }
bool Goron_MiniGame_Tutorial_02_IsCompleted_Exp() { return GetEnum("Step_Goron_MiniGame_Tutorial_02") == Complete; }
bool Goron_MiniGame_Tutorial_03_IsCompleted_Exp() { return GetEnum("Step_Goron_MiniGame_Tutorial_03") == Complete; }
bool GoronPond_IsAfter_FindThePond_Exp() { return GetEnum("Step_GoronPond") > FindThePond; }
bool GoronPond_IsAfter_NotReady_Exp() { return GetEnum("Step_GoronPond") > NotReady; }
bool GoronPond_IsAfter_Ready_Exp() { return GetEnum("Step_GoronPond") > Ready; }
bool GoronPond_IsCompleted_Exp() { return GetEnum("Step_GoronPond") == Complete; }
bool GoronReturntoNature_IsAfter_NotReady_Exp() { return GetEnum("Step_GoronReturntoNature") > NotReady; }
bool GoronReturntoNature_IsCompleted_Exp() { return GetEnum("Step_GoronReturntoNature") == Complete; }
bool GotoFironeZonauRemains_IsAfter_DecipherTheIithograph_Exp() { return GetEnum("Step_GotoFironeZonauRemains") > DecipherTheIithograph; }
bool GotoFironeZonauRemains_IsAfter_NotReady_Exp() { return GetEnum("Step_GotoFironeZonauRemains") > NotReady; }
bool GotoFironeZonauRemains_IsAfter_Ready_Exp() { return GetEnum("Step_GotoFironeZonauRemains") > Ready; }
bool GotoFironeZonauRemains_IsAfter_ZonauRemains_AppearsSkyIsland_Exp() { return GetEnum("Step_GotoFironeZonauRemains") > ZonauRemains_AppearsSkyIsland; }
bool GotoFironeZonauRemains_IsAfter_ZonauRemains_ArriveObservatory_Exp() { return GetEnum("Step_GotoFironeZonauRemains") > ZonauRemains_ArriveObservatory; }
bool GotoFironeZonauRemains_IsAfter_ZonauRemains_OpenedTheDoor_Exp() { return GetEnum("Step_GotoFironeZonauRemains") > ZonauRemains_OpenedTheDoor; }
bool GotoFironeZonauRemains_IsAfter_ZonauRemains_TalkResearcher_Exp() { return GetEnum("Step_GotoFironeZonauRemains") > ZonauRemains_TalkResearcher; }
bool GotoFironeZonauRemains_IsAfter_ZonauRemains_TouchTheHead_Exp() { return GetEnum("Step_GotoFironeZonauRemains") > ZonauRemains_TouchTheHead; }
bool GotoFironeZonauRemains_IsCompleted_Exp() { return GetEnum("Step_GotoFironeZonauRemains") == Complete; }
bool GOToTheCastleOfHyrule_IsAfter_MeetPurah_Exp() { return GetEnum("Step_GOToTheCastleOfHyrule") > MeetPurah; }
bool GOToTheCastleOfHyrule_IsAfter_NotReady_Exp() { return GetEnum("Step_GOToTheCastleOfHyrule") > NotReady; }
bool GOToTheCastleOfHyrule_IsAfter_Ready_Exp() { return GetEnum("Step_GOToTheCastleOfHyrule") > Ready; }
bool GOToTheCastleOfHyrule_IsCompleted_Exp() { return GetEnum("Step_GOToTheCastleOfHyrule") == Complete; }
bool GroundPaintingAir01_IsAfter_Carry_Exp() { return GetEnum("Step_GroundPaintingAir01") > Carry; }
bool GroundPaintingAir01_IsAfter_GoToWandererA_Exp() { return GetEnum("Step_GroundPaintingAir01") > GoToWandererA; }
bool GroundPaintingAir01_IsAfter_GoToWandererB_Exp() { return GetEnum("Step_GroundPaintingAir01") > GoToWandererB; }
bool GroundPaintingAir01_IsAfter_Ready_Exp() { return GetEnum("Step_GroundPaintingAir01") > Ready; }
bool GroundPaintingAir01_IsAfter_Search_Exp() { return GetEnum("Step_GroundPaintingAir01") > Search; }
bool GroundPaintingAir01_IsCompleted_Exp() { return GetEnum("Step_GroundPaintingAir01") == Complete; }
bool GuardSoldier_Guarding() { return GetBoolExp("SageOfGerudo_IsAfter_PracticeStart_Exp") || GetBool("SageOfGerudo_UndergroundFirstIn"); }
bool Hack_GuardGoods_IsAfter_Ready_Exp() { return GetEnum("Step_Hack_GuardGoods") > Ready; }
bool Hack_GuardGoods_IsCompleted_Exp() { return GetEnum("Step_Hack_GuardGoods") == Complete; }
bool HammerGong_MiniGame_IsAfter_Finish_Exp() { return GetEnum("Step_HammerGong_MiniGame") > Finish; }
bool HammerGong_MiniGame_IsAfter_Playing_Exp() { return GetEnum("Step_HammerGong_MiniGame") > Playing; }
bool HammerGong_MiniGame_IsAfter_Retry_Exp() { return GetEnum("Step_HammerGong_MiniGame") > Retry; }
bool Hateno_Cheese_IsAfter_Ready_Exp() { return GetEnum("Step_Hateno_Cheese") > Ready; }
bool Hateno_Cheese_IsAfter_Step01_Exp() { return GetEnum("Step_Hateno_Cheese") > Step01; }
bool Hateno_Cheese_IsAfter_Step02_Exp() { return GetEnum("Step_Hateno_Cheese") > Step02; }
bool Hateno_Cheese_IsCompleted_Exp() { return GetEnum("Step_Hateno_Cheese") == Complete; }
bool Hateno_CoolGuy_IsAfter_Finish_Exp() { return GetEnum("Step_Hateno_CoolGuy") > Finish; }
bool Hateno_CoolGuy_IsAfter_NotReady_Exp() { return GetEnum("Step_Hateno_CoolGuy") > NotReady; }
bool Hateno_CoolGuy_IsAfter_Ready_Exp() { return GetEnum("Step_Hateno_CoolGuy") > Ready; }
bool Hateno_CoolGuy_IsAfter_Report_Exp() { return GetEnum("Step_Hateno_CoolGuy") > Report; }
bool Hateno_CoolGuy_IsAfter_Step01_Exp() { return GetEnum("Step_Hateno_CoolGuy") > Step01; }
bool Hateno_CoolGuy_IsCompleted_Exp() { return GetEnum("Step_Hateno_CoolGuy") == Complete; }
bool Hateno_FreshMilk_IsAfter_Ready_Exp() { return GetEnum("Step_Hateno_FreshMilk") > Ready; }
bool Hateno_FreshMilk_IsAfter_Step01_Exp() { return GetEnum("Step_Hateno_FreshMilk") > Step01; }
bool Hateno_FreshMilk_IsCompleted_Exp() { return GetEnum("Step_Hateno_FreshMilk") == Complete; }
bool Hateno_LetUsElection_IsAfter_Ready_Exp() { return GetEnum("Step_Hateno_LetUsElection") > Ready; }
bool Hateno_LetUsElection_IsAfter_Ready1_Exp() { return GetEnum("Step_Hateno_LetUsElection") > Ready1; }
bool Hateno_LetUsElection_IsAfter_Ready2_Exp() { return GetEnum("Step_Hateno_LetUsElection") > Ready2; }
bool Hateno_LetUsElection_IsAfter_Step01_Exp() { return GetEnum("Step_Hateno_LetUsElection") > Step01; }
bool Hateno_LetUsElection_IsCompleted_Exp() { return GetEnum("Step_Hateno_LetUsElection") == Complete; }
bool Hateno_NewCostume_IsAfter_Ready_Exp() { return GetEnum("Step_Hateno_NewCostume") > Ready; }
bool Hateno_NewCostume_IsAfter_Step01_Exp() { return GetEnum("Step_Hateno_NewCostume") > Step01; }
bool Hateno_NewCostume_IsCompleted_Exp() { return GetEnum("Step_Hateno_NewCostume") == Complete; }
bool Hateno_NewSpecialty_IsAfter_NotReady_Exp() { return GetEnum("Step_Hateno_NewSpecialty") > NotReady; }
bool Hateno_NewSpecialty_IsAfter_Ready_Exp() { return GetEnum("Step_Hateno_NewSpecialty") > Ready; }
bool Hateno_NewSpecialty_IsAfter_ReChallenge_Exp() { return GetEnum("Step_Hateno_NewSpecialty") > ReChallenge; }
bool Hateno_NewSpecialty_IsAfter_Step01_Exp() { return GetEnum("Step_Hateno_NewSpecialty") > Step01; }
bool Hateno_NewSpecialty_IsAfter_Step02_Exp() { return GetEnum("Step_Hateno_NewSpecialty") > Step02; }
bool Hateno_NewSpecialty_IsCompleted_Exp() { return GetEnum("Step_Hateno_NewSpecialty") == Complete; }
bool Hateno_NewSpecialty_LittlePumpkin() { return !GetBool("Hateno_NewSpecialty_Pumpkin") && GetBool("HatenoVillage_FinaleEvent"); }
bool Hateno_RevitalizeByNewSpeciality_IsAfter_Ready_Exp() { return GetEnum("Step_Hateno_RevitalizeByNewSpeciality") > Ready; }
bool Hateno_RevitalizeByNewSpeciality_IsCompleted_Exp() { return GetEnum("Step_Hateno_RevitalizeByNewSpeciality") == Complete; }
bool Hateno_SecretLifeOfKusayoshi_IsAfter_Ready_Exp() { return GetEnum("Step_Hateno_SecretLifeOfKusayoshi") > Ready; }
bool Hateno_SecretLifeOfKusayoshi_IsAfter_Step01_Exp() { return GetEnum("Step_Hateno_SecretLifeOfKusayoshi") > Step01; }
bool Hateno_SecretLifeOfKusayoshi_IsAfter_Step02_Exp() { return GetEnum("Step_Hateno_SecretLifeOfKusayoshi") > Step02; }
bool Hateno_SecretLifeOfKusayoshi_IsCompleted_Exp() { return GetEnum("Step_Hateno_SecretLifeOfKusayoshi") == Complete; }
bool Hateno_SecretLifeOfSagono_IsAfter_NotReady_Exp() { return GetEnum("Step_Hateno_SecretLifeOfSagono") > NotReady; }
bool Hateno_SecretLifeOfSagono_IsAfter_Ready_Exp() { return GetEnum("Step_Hateno_SecretLifeOfSagono") > Ready; }
bool Hateno_SecretLifeOfSagono_IsAfter_Step01_Exp() { return GetEnum("Step_Hateno_SecretLifeOfSagono") > Step01; }
bool Hateno_SecretLifeOfSagono_IsAfter_Step02_Exp() { return GetEnum("Step_Hateno_SecretLifeOfSagono") > Step02; }
bool Hateno_SecretLifeOfSagono_IsCompleted_Exp() { return GetEnum("Step_Hateno_SecretLifeOfSagono") == Complete; }
bool Hateno_TellMeTeacher01_IsAfter_NotReady_Exp() { return GetEnum("Step_Hateno_TellMeTeacher01") > NotReady; }
bool Hateno_TellMeTeacher01_IsAfter_Ready_Exp() { return GetEnum("Step_Hateno_TellMeTeacher01") > Ready; }
bool Hateno_TellMeTeacher01_IsAfter_TakeAPicture_Exp() { return GetEnum("Step_Hateno_TellMeTeacher01") > TakeAPicture; }
bool Hateno_TellMeTeacher01_IsCompleted_Exp() { return GetEnum("Step_Hateno_TellMeTeacher01") == Complete; }
bool Hateno_TellMeTeacher02_IsAfter_NotReady_Exp() { return GetEnum("Step_Hateno_TellMeTeacher02") > NotReady; }
bool Hateno_TellMeTeacher02_IsAfter_Ready_Exp() { return GetEnum("Step_Hateno_TellMeTeacher02") > Ready; }
bool Hateno_TellMeTeacher02_IsAfter_Search_Exp() { return GetEnum("Step_Hateno_TellMeTeacher02") > Search; }
bool Hateno_TellMeTeacher02_IsCompleted_Exp() { return GetEnum("Step_Hateno_TellMeTeacher02") == Complete; }
bool Hateno_VillageMayorElection_IsAfter_Ready_Exp() { return GetEnum("Step_Hateno_VillageMayorElection") > Ready; }
bool Hateno_VillageMayorElection_IsAfter_Step01_Exp() { return GetEnum("Step_Hateno_VillageMayorElection") > Step01; }
bool Hateno_VillageMayorElection_IsAfter_Step08_Exp() { return GetEnum("Step_Hateno_VillageMayorElection") > Step08; }
bool Hateno_VillageMayorElection_IsCompleted_Exp() { return GetEnum("Step_Hateno_VillageMayorElection") == Complete; }
bool Hateno_WhatToPlant_IsAfter_Choice_Exp() { return GetEnum("Step_Hateno_WhatToPlant") > Choice; }
bool Hateno_WhatToPlant_IsAfter_NotReady_Exp() { return GetEnum("Step_Hateno_WhatToPlant") > NotReady; }
bool Hateno_WhatToPlant_IsAfter_Ready_Exp() { return GetEnum("Step_Hateno_WhatToPlant") > Ready; }
bool Hateno_WhatToPlant_IsAfter_Report_Exp() { return GetEnum("Step_Hateno_WhatToPlant") > Report; }
bool Hateno_WhatToPlant_IsCompleted_Exp() { return GetEnum("Step_Hateno_WhatToPlant") == Complete; }
bool Hateno_WhatToPlant_IsNotCompleted_Exp() { return !(GetEnum("Step_Hateno_WhatToPlant") == Complete); }
bool HatenoPurchasePicture_IsAfter_NotReady_Exp() { return GetEnum("Step_HatenoPurchasePicture") > NotReady; }
bool HatenoPurchasePicture_IsAfter_Purchase_Exp() { return GetEnum("Step_HatenoPurchasePicture") > Purchase; }
bool HatenoPurchasePicture_IsAfter_Ready_Exp() { return GetEnum("Step_HatenoPurchasePicture") > Ready; }
bool HatenoPurchasePicture_IsCompleted_Exp() { return GetEnum("Step_HatenoPurchasePicture") == Complete; }
bool HavePlayed_FirstBloodyMoon() { return GetBool("HavePlayedEvent.DmF_SY_WorldResetForMemoryShortage") || GetBool("HavePlayedEvent.DmF_SY_WorldReset"); }
bool HavePlayedAllDragonTearEvent() { return GetBool("HavePlayedEvent.Dm_ZE_0011_PreRender") && GetBool("HavePlayedEvent.Dm_ZE_0010_PreRender") && GetBool("HavePlayedEvent.Dm_ZE_0008_PreRender") && GetBool("HavePlayedEvent.Dm_ZE_0007_PreRender") && GetBool("HavePlayedEvent.DmT_ZE_Birth_PreRender") && GetBool("HavePlayedEvent.DmT_ZE_QueenDead_PreRender") && GetBool("HavePlayedEvent.Dm_ZE_0005_PreRender") && GetBool("HavePlayedEvent.DmT_ZE_LieServant_PreRender") && GetBool("HavePlayedEvent.DmT_ZE_Molduga_PreRender") && GetBool("HavePlayedEvent.Dm_ZE_0006_PreRender") && GetBool("HavePlayedEvent.Dm_ZE_0004_PreRender") && GetBool("HavePlayedEvent.DmT_ZE_Meet_PreRender"); }
bool HavePlayedDragonTearEventAboutRaul() { return GetBool("HavePlayedEvent.Dm_ZE_0010_PreRender") || GetBool("HavePlayedEvent.Dm_ZE_0008_PreRender") || GetBool("HavePlayedEvent.Dm_ZE_0007_PreRender") || GetBool("HavePlayedEvent.DmT_ZE_Birth_PreRender") || GetBool("HavePlayedEvent.Dm_ZE_0005_PreRender") || GetBool("HavePlayedEvent.DmT_ZE_LieServant_PreRender") || GetBool("HavePlayedEvent.DmT_ZE_Molduga_PreRender") || GetBool("HavePlayedEvent.Dm_ZE_0006_PreRender") || GetBool("HavePlayedEvent.Dm_ZE_0004_PreRender") || GetBool("HavePlayedEvent.DmT_ZE_Meet_PreRender"); }
bool Hebra_SkyRingChallenge_IsAfter_NotReady_Exp() { return GetEnum("Step_Hebra_SkyRingChallenge") > NotReady; }
bool Hebra_SkyRingChallenge_IsAfter_Playing_Exp() { return GetEnum("Step_Hebra_SkyRingChallenge") > Playing; }
bool Hebra_SkyRingChallenge_IsAfter_Preparation_Exp() { return GetEnum("Step_Hebra_SkyRingChallenge") > Preparation; }
bool Hebra_SkyRingChallenge_IsAfter_Ready_Exp() { return GetEnum("Step_Hebra_SkyRingChallenge") > Ready; }
bool Hebra_SkyRingChallenge_IsAfter_Retry_Exp() { return GetEnum("Step_Hebra_SkyRingChallenge") > Retry; }
bool Hebra_SkyRingChallenge_IsAfter_TimeOver_Exp() { return GetEnum("Step_Hebra_SkyRingChallenge") > TimeOver; }
bool Hebra_SkyRingChallenge_IsCompleted_Exp() { return GetEnum("Step_Hebra_SkyRingChallenge") == Complete; }
bool Hebra_SkyRingChallenge_MiniGame_IsAfter_NotReady_Exp() { return GetEnum("Step_Hebra_SkyRingChallenge_MiniGame") > NotReady; }
bool Hebra_SkyRingChallenge_MiniGame_IsAfter_Playing_Exp() { return GetEnum("Step_Hebra_SkyRingChallenge_MiniGame") > Playing; }
bool Hebra_SkyRingChallenge_MiniGame_IsAfter_Ready_Exp() { return GetEnum("Step_Hebra_SkyRingChallenge_MiniGame") > Ready; }
bool Hebra_SkyRingChallenge_MiniGame_IsAfter_Retry_Exp() { return GetEnum("Step_Hebra_SkyRingChallenge_MiniGame") > Retry; }
bool Hebra_SkyRingChallenge_MiniGame_IsAfter_TimeOver_Exp() { return GetEnum("Step_Hebra_SkyRingChallenge_MiniGame") > TimeOver; }
bool Hebra_SkyRingChallenge_MiniGame_IsCompleted_Exp() { return GetEnum("Step_Hebra_SkyRingChallenge_MiniGame") == Complete; }
bool HeroStatues_BallEnterArea1_Not() { return !GetBool("HeroStatues_BallEnterArea1"); }
bool HeroStatues_BallEnterArea2_Not() { return !GetBool("HeroStatues_BallEnterArea2"); }
bool HeroStatues_BallEnterArea3_Not() { return !GetBool("HeroStatues_BallEnterArea3"); }
bool HeroStatues_BallEnterArea4_Not() { return !GetBool("HeroStatues_BallEnterArea4"); }
bool HeroStatues_BallEnterArea5_Not() { return !GetBool("HeroStatues_BallEnterArea5"); }
bool HeroStatues_BallEnterArea6_Not() { return !GetBool("HeroStatues_BallEnterArea6"); }
bool HeroStatues_BallEnterArea7_Not() { return !GetBool("HeroStatues_BallEnterArea7"); }
bool HeroStatues_InitPosition_Ball1_pedestal() { return !GetBool("HeroStatues_BallEnterPedestal1") || GetBoolExp("EightHeroStatues_After_IsAfter_Step1_Exp"); }
bool HeroStatues_InitPosition_Ball2_pedestal() { return !GetBool("HeroStatues_BallEnterPedestal2") || GetBoolExp("EightHeroStatues_After_IsAfter_Step1_Exp"); }
bool HeroStatues_InitPosition_Ball3_pedestal() { return !GetBool("HeroStatues_BallEnterPedestal3") || GetBoolExp("EightHeroStatues_After_IsAfter_Step1_Exp"); }
bool HeroStatues_InitPosition_Ball4_pedestal() { return !GetBool("HeroStatues_BallEnterPedestal4") || GetBoolExp("EightHeroStatues_After_IsAfter_Step1_Exp"); }
bool HeroStatues_InitPosition_Ball5_pedestal() { return !GetBool("HeroStatues_BallEnterPedestal5") || GetBoolExp("EightHeroStatues_After_IsAfter_Step1_Exp"); }
bool HeroStatues_InitPosition_Ball6_pedestal() { return !GetBool("HeroStatues_BallEnterPedestal6") || GetBoolExp("EightHeroStatues_After_IsAfter_Step1_Exp"); }
bool HeroStatues_InitPosition_Ball7_pedestal() { return !GetBool("HeroStatues_BallEnterPedestal7") || GetBoolExp("EightHeroStatues_After_IsAfter_Step1_Exp"); }
bool Horse_hatago() { return GetBool("IsVisitLocation.FaronHatago002") || GetBool("IsVisitLocation.TabantaHatago") || GetBool("IsVisitLocation.NorthHatelHatago") || GetBool("IsVisitLocation.ForestHatago") || GetBool("IsVisitLocation.NewHyruleWestHatago") || GetBool("IsVisitLocation.HyruleDepthHatago") || GetBool("IsVisitLocation.DeathMountainHatago") || GetBool("IsVisitLocation.FaronHatago000") || GetBool("IsVisitLocation.FaronHatago001") || GetBool("IsVisitLocation.RiverSideHatago") || GetBool("IsVisitLocation.RitoHatago") || GetBool("IsVisitLocation.TamurulHatago_02") || GetBool("IsVisitLocation.TamourHatago") || GetBool("IsVisitLocation.TabantaBridgeHatago") || GetBool("IsVisitLocation.GerudoHatago"); }
bool HorseInnChallenge001_IsAfter_Ready_Exp() { return GetEnum("Step_HorseInnChallenge001") > Ready; }
bool HorseInnChallenge001_IsCompleted_Exp() { return GetEnum("Step_HorseInnChallenge001") == Complete; }
bool HorseInnChallenge002_IsAfter_Ready_Exp() { return GetEnum("Step_HorseInnChallenge002") > Ready; }
bool HorseInnChallenge002_IsAfter_step1_Exp() { return GetEnum("Step_HorseInnChallenge002") > step1; }
bool HorseInnChallenge003_IsAfter_CupsuleDrop_Exp() { return GetEnum("Step_HorseInnChallenge003") > CupsuleDrop; }
bool HorseInnChallenge003_IsAfter_NotReady_Exp() { return GetEnum("Step_HorseInnChallenge003") > NotReady; }
bool HorseInnChallenge003_IsAfter_Ready_Exp() { return GetEnum("Step_HorseInnChallenge003") > Ready; }
bool HorseInnChallenge003_IsCompleted_Exp() { return GetEnum("Step_HorseInnChallenge003") == Complete; }
bool HorseInnChallenge005_IsAfter_Ready_Exp() { return GetEnum("Step_HorseInnChallenge005") > Ready; }
bool HorseInnChallenge005_IsAfter_Report_Exp() { return GetEnum("Step_HorseInnChallenge005") > Report; }
bool HorseInnChallenge005_IsAfter_Search_Exp() { return GetEnum("Step_HorseInnChallenge005") > Search; }
bool HorseInnChallenge007_IsAfter_AfterDefeat_Exp() { return GetEnum("Step_HorseInnChallenge007") > AfterDefeat; }
bool HorseInnChallenge007_IsAfter_GetReward_Exp() { return GetEnum("Step_HorseInnChallenge007") > GetReward; }
bool HorseInnChallenge007_IsAfter_NotReady_Exp() { return GetEnum("Step_HorseInnChallenge007") > NotReady; }
bool HorseInnChallenge007_IsAfter_Ready_Exp() { return GetEnum("Step_HorseInnChallenge007") > Ready; }
bool HorseInnChallenge007_IsAfter_Step1_Exp() { return GetEnum("Step_HorseInnChallenge007") > Step1; }
bool HorseInnChallenge007_IsAfter_Step2_Exp() { return GetEnum("Step_HorseInnChallenge007") > Step2; }
bool HorseInnChallenge007_IsAfter_Step3_Exp() { return GetEnum("Step_HorseInnChallenge007") > Step3; }
bool HorseInnChallenge007_IsCompleted_Exp() { return GetEnum("Step_HorseInnChallenge007") == Complete; }
bool HotSpringEgg_IsAfter_FindHotSpring_Exp() { return GetEnum("Step_HotSpringEgg") > FindHotSpring; }
bool HotSpringEgg_IsAfter_Ready_Exp() { return GetEnum("Step_HotSpringEgg") > Ready; }
bool HotSpringEgg_IsCompleted_Exp() { return GetEnum("Step_HotSpringEgg") == Complete; }
bool HourseInnChallenge004_IsAfter_NotReady_Exp() { return GetEnum("Step_HourseInnChallenge004") > NotReady; }
bool HourseInnChallenge004_IsAfter_Ready_Exp() { return GetEnum("Step_HourseInnChallenge004") > Ready; }
bool HourseInnChallenge004_IsAfter_TryToDestroy_Exp() { return GetEnum("Step_HourseInnChallenge004") > TryToDestroy; }
bool HourseInnChallenge004_IsCompleted_Exp() { return GetEnum("Step_HourseInnChallenge004") == Complete; }
bool HuntSalmon_IsAfter_Report_Exp() { return GetEnum("Step_HuntSalmon") > Report; }
bool HuntSalmon_IsAfter_Step1_Exp() { return GetEnum("Step_HuntSalmon") > Step1; }
bool HyruleCastleIncident_Equal_DefeatBlackZelda_Exp() { return GetEnum("Step_HyruleCastleIncident") == DefeatBlackZelda; }
bool HyruleCastleIncident_IsAfter_CastleSurvey_Exp() { return GetEnum("Step_HyruleCastleIncident") > CastleSurvey; }
bool HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp() { return GetEnum("Step_HyruleCastleIncident") > DefeatBlackZelda; }
bool HyruleCastleIncident_IsAfter_EventLightSpot_Exp() { return GetEnum("Step_HyruleCastleIncident") > EventLightSpot; }
bool HyruleCastleIncident_IsAfter_EventLightSpot2_Exp() { return GetEnum("Step_HyruleCastleIncident") > EventLightSpot2; }
bool HyruleCastleIncident_IsAfter_EventLightSpot3_Exp() { return GetEnum("Step_HyruleCastleIncident") > EventLightSpot3; }
bool HyruleCastleIncident_IsAfter_EventLightSpot4_Exp() { return GetEnum("Step_HyruleCastleIncident") > EventLightSpot4; }
bool HyruleCastleIncident_IsAfter_EventLightSpot5_Exp() { return GetEnum("Step_HyruleCastleIncident") > EventLightSpot5; }
bool HyruleCastleIncident_IsAfter_GoToCannon_Exp() { return GetEnum("Step_HyruleCastleIncident") > GoToCannon; }
bool HyruleCastleIncident_IsAfter_NotReady_Exp() { return GetEnum("Step_HyruleCastleIncident") > NotReady; }
bool HyruleCastleIncident_IsAfter_Ready_Exp() { return GetEnum("Step_HyruleCastleIncident") > Ready; }
bool HyruleCastleIncident_IsAfter_ResearchCastle_Exp() { return GetEnum("Step_HyruleCastleIncident") > ResearchCastle; }
bool HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp() { return GetEnum("Step_HyruleCastleIncident") > ReturnBCAfterBlackZelda; }
bool HyruleCastleIncident_IsAfter_ReturnBCAfterDefeatMonster_Exp() { return GetEnum("Step_HyruleCastleIncident") > ReturnBCAfterDefeatMonster; }
bool HyruleCastleIncident_IsAfter_ToLand_AnotherUseCanon() { return GetBool("HyruleCastleIncident_IsAfter_Another_UseCannon") || GetBoolExp("HyruleCastleIncident_IsAfter_ToLand_Exp"); }
bool HyruleCastleIncident_IsAfter_ToLand_Exp() { return GetEnum("Step_HyruleCastleIncident") > ToLand; }
bool HyruleCastleIncident_IsAfter_UnderFindTheFifthSage_Exp() { return GetEnum("Step_HyruleCastleIncident") > UnderFindTheFifthSage; }
bool HyruleCastleIncident_IsAfter_UnderSurveyOfFourVillages_Exp() { return GetEnum("Step_HyruleCastleIncident") > UnderSurveyOfFourVillages; }
bool HyruleCastleIncident_IsAfter_UseCannon_Exp() { return GetEnum("Step_HyruleCastleIncident") > UseCannon; }
bool HyruleCastleIncident_IsAfter_UseTerminal_Exp() { return GetEnum("Step_HyruleCastleIncident") > UseTerminal; }
bool HyruleCastleIncident_IsCompleted_Exp() { return GetEnum("Step_HyruleCastleIncident") == Complete; }
bool IceMaking_IsAfter_Step1_Exp() { return GetEnum("Step_IceMaking") > Step1; }
bool IceMaking_IsCompleted_Exp() { return GetEnum("Step_IceMaking") == Complete; }
bool IchikaraChallenge01_BeforeBallonCreate() { return !GetBool("IchikaraChallenge01_MammyReport_PaPa") && GetBoolExp("IchikaraChallenge01_IsAfter_GotoRopeway_Exp") && !GetBoolExp("IchikaraChallenge01_IsCompleted_Exp"); }
bool IchikaraChallenge01_IsAfter_Child_Talk_Exp() { return GetEnum("Step_IchikaraChallenge01") > Child_Talk; }
bool IchikaraChallenge01_IsAfter_Cooking_Exp() { return GetEnum("Step_IchikaraChallenge01") > Cooking; }
bool IchikaraChallenge01_IsAfter_GotoRopeway_Exp() { return GetEnum("Step_IchikaraChallenge01") > GotoRopeway; }
bool IchikaraChallenge01_IsAfter_MammyReport_Exp() { return GetEnum("Step_IchikaraChallenge01") > MammyReport; }
bool IchikaraChallenge01_IsAfter_Memory_Exp() { return GetEnum("Step_IchikaraChallenge01") > Memory; }
bool IchikaraChallenge01_IsAfter_NotReady_Exp() { return GetEnum("Step_IchikaraChallenge01") > NotReady; }
bool IchikaraChallenge01_IsAfter_PaPaTalk_Exp() { return GetEnum("Step_IchikaraChallenge01") > PaPaTalk; }
bool IchikaraChallenge01_IsAfter_Quiz2_Exp() { return GetEnum("Step_IchikaraChallenge01") > Quiz2; }
bool IchikaraChallenge01_IsAfter_Ready_Exp() { return GetEnum("Step_IchikaraChallenge01") > Ready; }
bool IchikaraChallenge01_IsAfter_Research_Exp() { return GetEnum("Step_IchikaraChallenge01") > Research; }
bool IchikaraChallenge01_IsCompleted_Exp() { return GetEnum("Step_IchikaraChallenge01") == Complete; }
bool IchikaraChallenge01_IsGoToRopeway_Exp() { return GetEnum("Step_IchikaraChallenge01") == GotoRopeway; }
bool IchikaraChallenge03_IsAfter_NotReady_Exp() { return GetEnum("Step_IchikaraChallenge03") > NotReady; }
bool IchikaraChallenge03_IsAfter_Ready_Exp() { return GetEnum("Step_IchikaraChallenge03") > Ready; }
bool IchikaraChallenge03_IsAfter_Search_Exp() { return GetEnum("Step_IchikaraChallenge03") > Search; }
bool IchikaraChallenge03_IsCompleted_Exp() { return GetEnum("Step_IchikaraChallenge03") == Complete; }
bool IchikaraCircuit_Tutorial_IsAfter_Craft_Exp() { return GetEnum("Step_IchikaraCircuit_Tutorial") > Craft; }
bool IchikaraCircuit_Tutorial_IsAfter_NotReady_Exp() { return GetEnum("Step_IchikaraCircuit_Tutorial") > NotReady; }
bool IchikaraCircuit_Tutorial_IsAfter_Playing_Exp() { return GetEnum("Step_IchikaraCircuit_Tutorial") > Playing; }
bool IchikaraCircuit_Tutorial_IsAfter_Ready_Exp() { return GetEnum("Step_IchikaraCircuit_Tutorial") > Ready; }
bool IchikaraCircuit_Tutorial_IsAfter_Retry_Exp() { return GetEnum("Step_IchikaraCircuit_Tutorial") > Retry; }
bool IchikaraCircuit_Tutorial_IsAfter_TimeOver_Exp() { return GetEnum("Step_IchikaraCircuit_Tutorial") > TimeOver; }
bool IchikaraCircuit_Tutorial_IsCompleted_Exp() { return GetEnum("Step_IchikaraCircuit_Tutorial") == Complete; }
bool IllnessStartsWithFeelings_IsAfter_NotReady_Exp() { return GetEnum("Step_IllnessStartsWithFeelings") > NotReady; }
bool IllnessStartsWithFeelings_IsAfter_Ready_Exp() { return GetEnum("Step_IllnessStartsWithFeelings") > Ready; }
bool IllnessStartsWithFeelings_IsAfter_Step01_Exp() { return GetEnum("Step_IllnessStartsWithFeelings") > Step01; }
bool IllnessStartsWithFeelings_IsCompleted_Exp() { return GetEnum("Step_IllnessStartsWithFeelings") == Complete; }
bool IllnessStartWithFeelings_Completed_NotLeftHouse() { return !GetBool("IllnessStartsWithFeelings_LinkHasLeftHouseAfterComplete") && GetBoolExp("IllnessStartsWithFeelings_IsCompleted_Exp"); }
bool InfiltrationFromTheSky_IsCompleted_Exp() { return GetEnum("Step_InfiltrationFromTheSky") == Complete; }
bool InLargeDungeonThunderAndLoadStep() { return GetBoolExp("SageOfGerudo_IsAfter_DungeonFind_Exp") && GetBool("InLargeDungeonThunder"); }
bool InnNeverReturns_IsAfter_NotReady_Exp() { return GetEnum("Step_InnNeverReturns") > NotReady; }
bool InnNeverReturns_IsAfter_Ready_Exp() { return GetEnum("Step_InnNeverReturns") > Ready; }
bool InnNeverReturns_IsAfter_Report_Exp() { return GetEnum("Step_InnNeverReturns") > Report; }
bool InnNeverReturns_IsAfter_Search_Exp() { return GetEnum("Step_InnNeverReturns") > Search; }
bool InnNeverReturns_IsCompleted_Exp() { return GetEnum("Step_InnNeverReturns") == Complete; }
bool IsActivatedAnyCannon() { return GetBool("IsOpenCannon.Tower15") || GetBool("IsOpenCannon.Tower14") || GetBool("IsOpenCannon.Tower13") || GetBool("IsOpenCannon.Tower12") || GetBool("IsOpenCannon.Tower11") || GetBool("IsOpenCannon.Tower10") || GetBool("IsOpenCannon.Tower09") || GetBool("IsOpenCannon.Tower08") || GetBool("IsOpenCannon.Tower07") || GetBool("IsOpenCannon.Tower06") || GetBool("IsOpenCannon.Tower05") || GetBool("IsOpenCannon.Tower04") || GetBool("IsOpenCannon.Tower03") || GetBool("IsOpenCannon.Tower02") || GetBool("IsOpenCannon.Tower01"); }
bool isActiveBruePrintNews() { return !GetBool("IsVisitLocation.Kakariko") && !GetBool("Npc_AncientAssistant003_K1_RemoveBC_Deephole") && GetBool("BaseCamp_ReturnedAway_01"); }
bool isActiveExtraNews() { return !GetBoolExp("HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp") && GetBoolExp("SurveyOfFourVillages_IsAfter_4thSageClear_Exp"); }
bool IsCheckedAnyLargeDungeonTerminal() { return GetBool("OpenWarpPoint_LargeDungeonSoul") || GetBool("OpenWarpPoint_LargeDungeonThunder") || GetBool("OpenWarpPoint_LargeDungeonWind") || GetBool("OpenWarpPoint_LargeDungeonFire") || GetBool("OpenWarpPoint_LargeDungeonWater"); }
bool IsDeadByStrongShatterWithParasail() { return GetBoolExp("Unknown_0x1a89afba") && GetBool("IsGet.Parasail"); }
bool IsDeadWithoutParasail() { return GetBoolExp("Unknown_0x1a89afba") && !GetBool("IsGet.Parasail"); }
bool Unknown_0x6100de29() { return !GetBool("SageOfSky_IsDestroyedIvy_2nd") && !GetBool("SageOfSky_IsActivateCDungeon"); }
bool IsEnabled_DragonDarkness_Env() { return !GetBool("HavePlayedEvent.Dm_GA_0027") && GetBool("DefeatGanondorf_DragonBattleAppearStone") && GetEnum("Step_MainChallenge") == DefeatBlackDragon; }
bool IsEnabled_FirstIslandRail_For_DragonLight() { return !GetBoolExp("MainChallenge_IsAfter_GoToBackOfTempleOfTimeAfterWD_Exp"); }
bool IsEnabled_HighRail_For_DragonLight() { return !GetBoolExp("IsEnabled_FirstIslandRail_For_DragonLight") && !GetBoolExp("GetMasterSword_IsAfter_Ready_Exp"); }
bool IsEnabled_LowRail_For_DragonLight() { return !GetBoolExp("IsEnabled_FirstIslandRail_For_DragonLight") && !GetBoolExp("IsEnabled_HighRail_For_DragonLight"); }
bool IsEnableUseAmiibo() { return GetBool("OptionData.IsUseAmiibo") && GetBool("IsGet.Obj_AmiiboItem"); }
bool IsExistsMasterSwordLastBattle() { return !GetBool("IsDeleteMasterSwordLastBattle") && !GetBool("IsGet.Weapon_Sword_070"); }
bool isFirstTalk_OrchestraCleared_Exp() { return GetBool("isFirstTalk_Orchestra4Cleared") || GetBool("isFirstTalk_Orchestra3Cleared") || GetBool("isFirstTalk_Orchestra2Cleared"); }
bool IsGetAnyAdventureMemory() { return GetBool("IsGetAdventureMemory.Dm_ZN_0039_PreRender") || GetBool("IsGetAdventureMemory.Dm_ZN_0033_PreRender") || GetBool("IsGetAdventureMemory.Dm_ZE_0011_PreRender") || GetBool("IsGetAdventureMemory.Dm_ZE_0010_PreRender") || GetBool("IsGetAdventureMemory.Dm_ZE_0008_PreRender") || GetBool("IsGetAdventureMemory.Dm_ZE_0007_PreRender") || GetBool("IsGetAdventureMemory.Dm_ZE_0006_PreRender") || GetBool("IsGetAdventureMemory.Dm_ZE_0005_PreRender") || GetBool("IsGetAdventureMemory.Dm_ZE_0004_PreRender") || GetBool("IsGetAdventureMemory.Dm_SK_0003_PreRender") || GetBool("IsGetAdventureMemory.Dm_OT_0015_PreRender") || GetBool("IsGetAdventureMemory.Dm_BZ_0005_PreRender") || GetBool("IsGetAdventureMemory.DmT_ZE_QueenDead_PreRender") || GetBool("IsGetAdventureMemory.DmT_ZE_Molduga_PreRender") || GetBool("IsGetAdventureMemory.DmT_ZE_Meet_PreRender") || GetBool("IsGetAdventureMemory.DmT_ZE_LieServant_PreRender") || GetBool("IsGetAdventureMemory.DmT_ZE_Birth_PreRender") || GetBool("IsGetAdventureMemory.DmT_OP_GanonWakeUp_PreRender_Memory"); }
bool IsGetAnyHorablinHorn() { return GetBool("IsGet.Item_Enemy_103") || GetBool("IsGet.Item_Enemy_102") || GetBool("IsGet.Item_Enemy_101") || GetBool("IsGet.Item_Enemy_100"); }
bool IsGetAnySpecialPower() { return GetBool("IsGet.Obj_AmiiboItem") || GetBool("IsGet.Obj_Camera") || GetBool("IsGet.Obj_AutoBuilder") || GetBool("IsGet.Obj_ReverseRecorder") || GetBool("IsGet.Obj_Tooreroof") || GetBool("IsGet.Obj_OneTouchBond") || GetBool("IsGet.Obj_UltraHand"); }
bool Unknown_0x852ec935() { return GetBool("HavePlayedEvent.DmT_GO_RockDestroy"); }
bool IsLandedOnGround() { return GetBool("IsVisitLocation.HyruleGround"); }
bool IsNeedChangeBatteryCaption() { return GetBoolExp("MainChallenge_IsAfter_GoToBackOfTempleOfTimeAfterWD_Exp") || GetBool("Firstskyisland_IsChanged_CaptionBattery"); }
bool IsOpenCannonAll() { return GetBool("IsOpenCannon.Tower15") && GetBool("IsOpenCannon.Tower14") && GetBool("IsOpenCannon.Tower13") && GetBool("IsOpenCannon.Tower12") && GetBool("IsOpenCannon.Tower11") && GetBool("IsOpenCannon.Tower10") && GetBool("IsOpenCannon.Tower09") && GetBool("IsOpenCannon.Tower08") && GetBool("IsOpenCannon.Tower07") && GetBool("IsOpenCannon.Tower06") && GetBool("IsOpenCannon.Tower05") && GetBool("IsOpenCannon.Tower04") && GetBool("IsOpenCannon.Tower03") && GetBool("IsOpenCannon.Tower02") && GetBool("IsOpenCannon.Tower01"); }
bool Unknown_0x1a89afba() { return GetEnum("PlayerDeadReason") == LifeDepleted_Fall && GetBool("IsPlayerDead"); }
bool IsPlayerDeadByLifeDamage() { return GetEnum("PlayerDeadReason") == LifeDepleted_Normal && GetBool("IsPlayerDead"); }
bool IsPlayerDeadByLightning() { return GetEnum("PlayerDeadReason") == LifeDepleted_Lightning && GetBool("IsPlayerDead"); }
bool IsShopActive_NPCZonauGolem_Minus0012() { return !GetBool("IsNow_KohgaAgain") && GetBool("IsActivated_Minus0012_NPCZonauGolem"); }
bool IsShopActive_NPCZonauGolem_Minus0014() { return !GetBool("IsNow_KohgaContinue") && GetBool("IsActivated_Minus0014_NPCZonauGolem"); }
bool IsShopActive_NPCZonauGolem_Minus0015() { return !GetBool("IsNow_KohgaFinal") && GetBool("IsActivated_Minus0015_NPCZonauGolem"); }
bool IsVisible_DragonLight_SwordBone() { return !GetBool("HavePlayedEvent.Dm_SK_0007") && !GetBool("HaveMasterSword"); }
bool JobSunazarashi_IsAfter_Drive1_Exp() { return GetEnum("Step_JobSunazarashi") > Drive1; }
bool JobSunazarashi_IsAfter_Ready_Exp() { return GetEnum("Step_JobSunazarashi") > Ready; }
bool JobSunazarashi_IsCompleted_Exp() { return GetEnum("Step_JobSunazarashi") == Complete; }
bool Karakara_Npc_SouthernVillage001_Off() { return (!GetBoolExp("SageOfGerudo_IsAfter_PreDefenseStart_Exp") && GetBoolExp("SageOfGerudo_IsAfter_PracticeStart_Exp")) || GetBool("Revive_Inn"); }
bool Know_FourStonePlates_IsAfter_NotReady_Exp() { return GetEnum("Step_Know_FourStonePlates") > NotReady; }
bool Know_FourStonePlates_IsAfter_Ready_Exp() { return GetEnum("Step_Know_FourStonePlates") > Ready; }
bool Know_FourStonePlates_IsAfter_Step01_Exp() { return GetEnum("Step_Know_FourStonePlates") > Step01; }
bool Know_FourStonePlates_IsCompleted_Exp() { return GetEnum("Step_Know_FourStonePlates") == Complete; }
bool KohgaAgain_BeforeDemo() { return !GetBool("HavePlayedEvent.Dm_OT_0011") && GetBool("IsNow_KohgaAgain"); }
bool KohgaContinue_BeforeDemo() { return !GetBool("HavePlayedEvent.Dm_OT_0016") && GetBool("IsNow_KohgaContinue"); }
bool KohgaFinalHint_NoSnow() { return GetBoolExp("SageOfWind_IsCompleted_Exp") && GetBool("IsNow_KohgaFinal"); }
bool KohgaFinalHint_WithSnow() { return !GetBoolExp("SageOfWind_IsCompleted_Exp") && GetBool("IsNow_KohgaFinal"); }
bool Kokko_SouthHatago_TogetherExp() { return GetBool("Kokko_SouthHatago_Together3") || GetBool("Kokko_SouthHatago_Together2") || GetBool("Kokko_SouthHatago_Together"); }
bool KokkoGuidePost_IsAfter_NotReady_Exp() { return GetEnum("Step_KokkoGuidePost") > NotReady; }
bool KokkoGuidePost_IsAfter_Ready_Exp() { return GetEnum("Step_KokkoGuidePost") > Ready; }
bool KokkoGuidePost_IsCompleted_Exp() { return GetEnum("Step_KokkoGuidePost") == Complete; }
bool Korok_CarryToShrine_IsCompleted_Exp() { return GetEnum("Step_Korok_CarryToShrine") == Complete; }
bool LargeDungeonFire_ClearTerminal() { return GetBoolArray("LargeDungeonFire_Terminal_On", [4]) && GetBoolArray("LargeDungeonFire_Terminal_On", [3]) && GetBoolArray("LargeDungeonFire_Terminal_On", [2]) && GetBoolArray("LargeDungeonFire_Terminal_On", [1]) && GetBoolArray("LargeDungeonFire_Terminal_On", [0]); }
bool LargeDungeonFire_Terminal_1() { return GetBoolArray("LargeDungeonFire_Terminal_On", [0]); }
bool LargeDungeonFire_Terminal_2() { return GetBoolArray("LargeDungeonFire_Terminal_On", [1]); }
bool LargeDungeonFire_Terminal_3() { return GetBoolArray("LargeDungeonFire_Terminal_On", [2]); }
bool LargeDungeonFire_Terminal_4() { return GetBoolArray("LargeDungeonFire_Terminal_On", [3]); }
bool LargeDungeonFire_Terminal_5() { return GetBoolArray("LargeDungeonFire_Terminal_On", [4]); }
bool LargeDungeonWater_Exist_CenterChuchu() { return GetBoolExp("SageOfZora_IsAfter_TryOneTank_Exp") && !GetBoolExp("SageOfZora_AllTerminalOn"); }
bool LargeDungeonWind_AppendEnemy() { return GetBool("LargeDungeonWind_AddEnemy") && !GetBool("LargeDungeonWind_ApppearBoss"); }
bool LargeDungeonWind_ClearTerminal() { return GetBoolArray("LargeDungeonWind_Terminal_On", [4]) && GetBoolArray("LargeDungeonWind_Terminal_On", [3]) && GetBoolArray("LargeDungeonWind_Terminal_On", [2]) && GetBoolArray("LargeDungeonWind_Terminal_On", [1]) && GetBoolArray("LargeDungeonWind_Terminal_On", [0]); }
bool LargeDungeonWind_Presence_Boss() { return !GetBoolExp("SageOfWind_IsAfter_DefeatBoss_Exp") && GetBoolExp("LargeDungeonWind_ClearTerminal"); }
bool LargeDungeonWind_Terminal_1() { return GetBoolArray("LargeDungeonWind_Terminal_On", [0]); }
bool LargeDungeonWind_Terminal_2() { return GetBoolArray("LargeDungeonWind_Terminal_On", [1]); }
bool LargeDungeonWind_Terminal_3() { return GetBoolArray("LargeDungeonWind_Terminal_On", [2]); }
bool LargeDungeonWind_Terminal_4() { return GetBoolArray("LargeDungeonWind_Terminal_On", [3]); }
bool LargeDungeonWind_Terminal_5() { return GetBoolArray("LargeDungeonWind_Terminal_On", [4]); }
bool LightBall_HyruleGround() { return GetBoolExp("IsLandedOnGround") && GetBool("IsGet.LightBall_Small"); }
bool Lodge_Chemical001_DefeatedEnemies() { return GetEnum("Step_Lodge_Chemical001") == DefeatedEnemies; }
bool Lodge_Chemical001_IsAfter_GetPresent_Exp() { return GetEnum("Step_Lodge_Chemical001") > GetPresent; }
bool Lodge_Chemical001_IsAfter_Ready_Exp() { return GetEnum("Step_Lodge_Chemical001") > Ready; }
bool Lodge_Chemical001_IsCompleted_Exp() { return GetEnum("Step_Lodge_Chemical001") == Complete; }
bool LookingForLightSpot_IsAfter_GoBackToTempleEntrance_Exp() { return GetEnum("Step_LookingForLightSpot") > GoBackToTempleEntrance; }
bool LookingForLightSpot_IsAfter_GoToLightSpotOfPurahPad_Exp() { return GetEnum("Step_LookingForLightSpot") > GoToLightSpotOfPurahPad; }
bool LookingForLightSpot_IsAfter_Ready_Exp() { return GetEnum("Step_LookingForLightSpot") > Ready; }
bool LookingForTheVoiceLord_IsAfter_NotReady_Exp() { return GetEnum("Step_LookingForTheVoiceLord") > NotReady; }
bool LookingForTheVoiceLord_IsAfter_Ready_Exp() { return GetEnum("Step_LookingForTheVoiceLord") > Ready; }
bool LookingForTheVoiceLord_IsAfter_Step01_Exp() { return GetEnum("Step_LookingForTheVoiceLord") > Step01; }
bool LookingForTheVoiceLord_IsAfter_Step02_Exp() { return GetEnum("Step_LookingForTheVoiceLord") > Step02; }
bool LookingForTheVoiceLord_IsCompleted_Exp() { return GetEnum("Step_LookingForTheVoiceLord") == Complete; }
bool Mack_SecretBase_IsCompleted_Exp() { return GetEnum("Step_Mack_SecretBase") == Complete; }
bool Unknown_0x1fcdb49e() { return GetBool("DefeatGanondorf_SageDown") && GetEnum("Step_MainChallenge") == DefeatGanon2; }
bool MainChallenge_IsAfter_CatchZelda_Exp() { return GetEnum("Step_MainChallenge") > CatchZelda; }
bool MainChallenge_IsAfter_DefeatBlackDragon_Exp() { return GetEnum("Step_MainChallenge") > DefeatBlackDragon; }
bool MainChallenge_IsAfter_DefeatGanon1_Exp() { return GetEnum("Step_MainChallenge") > DefeatGanon1; }
bool MainChallenge_IsAfter_DefeatGanon2_Exp() { return GetEnum("Step_MainChallenge") > DefeatGanon2; }
bool MainChallenge_IsAfter_DefeatMonsterArmy_Exp() { return GetEnum("Step_MainChallenge") > DefeatMonsterArmy; }
bool MainChallenge_IsAfter_GetZonauMajic_Exp() { return GetEnum("Step_MainChallenge") > GetZonauMajic; }
bool MainChallenge_IsAfter_GoToAlterAfterGetRR_Exp() { return GetEnum("Step_MainChallenge") > GoToAlterAfterGetRR; }
bool MainChallenge_IsAfter_GoToBackOfTempleOfTimeAfterWD_Exp() { return GetEnum("Step_MainChallenge") > GoToBackOfTempleOfTimeAfterWD; }
bool MainChallenge_IsAfter_GoToBackToGolemInTemple_Exp() { return GetEnum("Step_MainChallenge") > GoToBackToGolemInTemple; }
bool MainChallenge_IsAfter_GoToDeepHole_Exp() { return GetEnum("Step_MainChallenge") > GoToDeepHole; }
bool MainChallenge_IsAfter_LookingForZelda_Exp() { return GetEnum("Step_MainChallenge") > LookingForZelda; }
bool MainChallenge_IsAfter_NotReady_Exp() { return GetEnum("Step_MainChallenge") > NotReady; }
bool MainChallenge_IsAfter_Ready_Exp() { return GetEnum("Step_MainChallenge") > Ready; }
bool Unknown_0xa022f61b() { return GetEnum("Step_MainChallenge") > WarpToCaveOfAwake; }
bool MainChallenge_IsCompleted_Exp() { return GetEnum("Step_MainChallenge") == Complete; }
bool MainChallenge_IsGatherSages() { return !GetBoolExp("HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp") && GetBoolExp("HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp"); }
bool MainChallenge_IsPurahInTower() { return !GetBoolExp("HyruleCastleIncident_IsAfter_UseCannon_Exp") && GetBoolExp("HyruleCastleIncident_IsAfter_ReturnBCAfterDefeatMonster_Exp"); }
bool MakeAChampionsWeapon_Goron_IsAfter_MakeWeapon_Exp() { return GetEnum("Step_MakeAChampionsWeapon_Goron") > MakeWeapon; }
bool MakeAChampionsWeapon_Goron_IsAfter_NotReady_Exp() { return GetEnum("Step_MakeAChampionsWeapon_Goron") > NotReady; }
bool MakeAChampionsWeapon_Goron_IsAfter_Ready_Exp() { return GetEnum("Step_MakeAChampionsWeapon_Goron") > Ready; }
bool MakeAChampionsWeapon_Goron_IsCompleted_Exp() { return GetEnum("Step_MakeAChampionsWeapon_Goron") == Complete; }
bool MakeChemicalWeapon_IsAfter_Ready_Exp() { return GetEnum("Step_MakeChemicalWeapon") > Ready; }
bool MakeChemicalWeapon_IsCompleted_Exp() { return GetEnum("Step_MakeChemicalWeapon") == Complete; }
bool MaronBed_Priority1st() { return !GetBool("MaronBed_TipsGuidance01") && !GetBool("IsAppear_HorseGod"); }
bool MaronBed_Priority2nd() { return !GetBool("MaronBed_TipsGuidance02") && !GetBoolExp("Tribune16_IsCompleted_Exp"); }
bool MasterSwordClues_IsAfter_NotReady_Exp() { return GetEnum("Step_MasterSwordClues") > NotReady; }
bool MasterSwordClues_IsAfter_Ready_Exp() { return GetEnum("Step_MasterSwordClues") > Ready; }
bool MasterSwordClues_IsAfter_TalKDekuTree_Exp() { return GetEnum("Step_MasterSwordClues") > TalKDekuTree; }
bool MasterSwordClues_IsAfter_TalkOldKorok_Exp() { return GetEnum("Step_MasterSwordClues") > TalkOldKorok; }
bool MasterSwordClues_IsCompleted_Exp() { return GetEnum("Step_MasterSwordClues") == Complete; }
bool MeatRock_IsAfter_CarryARock_Exp() { return GetEnum("Step_MeatRock") > CarryARock; }
bool MeatRock_IsAfter_NotReady_Exp() { return GetEnum("Step_MeatRock") > NotReady; }
bool MeatRock_IsAfter_Ready_Exp() { return GetEnum("Step_MeatRock") > Ready; }
bool MeatRock_IsAfter_Reward_Exp() { return GetEnum("Step_MeatRock") > Reward; }
bool MeatRock_IsCompleted_Exp() { return GetEnum("Step_MeatRock") == Complete; }
bool MemoryOfTheDragon_GoTemple_induction() { return !GetBool("MemoryOfTheDragon_TempleTalk") && GetBool("Complete_DragonTears01") && GetBoolExp("GroundPaintingAir01_IsCompleted_Exp"); }
bool MemoryOfTheDragon_IsAfter_GoTemple_Exp() { return GetEnum("Step_MemoryOfTheDragon") > GoTemple; }
bool MemoryOfTheDragon_IsAfter_GoTemple2_Exp() { return GetEnum("Step_MemoryOfTheDragon") > GoTemple2; }
bool MemoryOfTheDragon_IsAfter_Ready_Exp() { return GetEnum("Step_MemoryOfTheDragon") > Ready; }
bool MemoryOfTheDragon_IsAfter_Step01_Exp() { return GetEnum("Step_MemoryOfTheDragon") > Step01; }
bool MemoryOfTheDragon_IsAfter_Step2_Exp() { return GetEnum("Step_MemoryOfTheDragon") > Step2; }
bool MemoryOfTheDragon_IsCompleted_Exp() { return GetEnum("Step_MemoryOfTheDragon") == Complete; }
bool MemoryOfTheDragon_LastGeoglyphAppear() { return GetBool("Complete_DragonTears11") && GetBool("Complete_DragonTears10") && GetBool("Complete_DragonTears09") && GetBool("Complete_DragonTears08") && GetBool("Complete_DragonTears07") && GetBool("Complete_DragonTears06") && GetBool("Complete_DragonTears05") && GetBool("Complete_DragonTears04") && GetBool("Complete_DragonTears03") && GetBool("Complete_DragonTears02") && GetBool("Complete_DragonTears01"); }
bool MemoryOfTheDragon_RitoVillage_CreateActor() { return !(GetBoolExp("MemoryOfTheDragon_IsAfter_GoTemple2_Exp") && GetBool("Complete_DragonTears05") && GetBool("Complete_DragonTears04") && GetBool("Complete_DragonTears03") && GetBool("Complete_DragonTears02")) && GetBoolExp("MemoryOfTheDragon_IsAfter_Ready_Exp") && GetBoolExp("SageOfWind_IsCompleted_Exp"); }
bool MemoryOfTheDragon_Saw11() { return GetBool("Complete_DragonTears11") && GetBool("Complete_DragonTears10") && GetBool("Complete_DragonTears09") && GetBool("Complete_DragonTears08") && GetBool("Complete_DragonTears07") && GetBool("Complete_DragonTears06") && GetBool("Complete_DragonTears05") && GetBool("Complete_DragonTears04") && GetBool("Complete_DragonTears03") && GetBool("Complete_DragonTears02") && GetBool("Complete_DragonTears01"); }
bool MemoryOfTheDragon_Step2_induction() { return !GetBool("MemoryOfTheDragon_TempleTalk") && !GetBool("Complete_DragonTears12") && GetBool("Complete_DragonTears11") && GetBool("Complete_DragonTears10") && GetBool("Complete_DragonTears09") && GetBool("Complete_DragonTears08") && GetBool("Complete_DragonTears07") && GetBool("Complete_DragonTears06") && GetBool("Complete_DragonTears05") && GetBool("Complete_DragonTears04") && GetBool("Complete_DragonTears03") && GetBool("Complete_DragonTears02") && GetBool("Complete_DragonTears01") && GetBoolExp("GroundPaintingAir01_IsCompleted_Exp"); }
bool Mercenary_Akkare_Bloody_IsAfter_Exterminate_Exp() { return GetEnum("Step_Mercenary_Akkare_Bloody") > Exterminate; }
bool Mercenary_Akkare_Bloody_IsAfter_MeetAgain_Exp() { return GetEnum("Step_Mercenary_Akkare_Bloody") > MeetAgain; }
bool Mercenary_Akkare_Bloody_IsAfter_Move_Exp() { return GetEnum("Step_Mercenary_Akkare_Bloody") > Move; }
bool Mercenary_Akkare_Bloody_IsAfter_NotReady_Exp() { return GetEnum("Step_Mercenary_Akkare_Bloody") > NotReady; }
bool Mercenary_Akkare_Bloody_IsAfter_Ready_Exp() { return GetEnum("Step_Mercenary_Akkare_Bloody") > Ready; }
bool Mercenary_Akkare_Bloody_IsAfter_Report_Exp() { return GetEnum("Step_Mercenary_Akkare_Bloody") > Report; }
bool Mercenary_Akkare_Bloody_IsCompleted_Exp() { return GetEnum("Step_Mercenary_Akkare_Bloody") == Complete; }
bool Unknown_0x69850ae7() { return GetEnum("Step_Mercenary_Eldin_Bloody") > Exterminate; }
bool Mercenary_Eldin_Bloody_IsAfter_Move_Exp() { return GetEnum("Step_Mercenary_Eldin_Bloody") > Move; }
bool Mercenary_Eldin_Bloody_IsAfter_NotReady_Exp() { return GetEnum("Step_Mercenary_Eldin_Bloody") > NotReady; }
bool Mercenary_Eldin_Bloody_IsAfter_Ready_Exp() { return GetEnum("Step_Mercenary_Eldin_Bloody") > Ready; }
bool Mercenary_Eldin_Bloody_IsAfter_Report_Exp() { return GetEnum("Step_Mercenary_Eldin_Bloody") > Report; }
bool Mercenary_Eldin_Bloody_IsCompleted_Exp() { return GetEnum("Step_Mercenary_Eldin_Bloody") == Complete; }
bool Mercenary_Firone_Bloody_IsAfter_Craft_Exp() { return GetEnum("Step_Mercenary_Firone_Bloody") > Craft; }
bool Mercenary_Firone_Bloody_IsAfter_Exterminate_Exp() { return GetEnum("Step_Mercenary_Firone_Bloody") > Exterminate; }
bool Mercenary_Firone_Bloody_IsAfter_NotReady_Exp() { return GetEnum("Step_Mercenary_Firone_Bloody") > NotReady; }
bool Mercenary_Firone_Bloody_IsAfter_Ready_Exp() { return GetEnum("Step_Mercenary_Firone_Bloody") > Ready; }
bool Mercenary_Firone_Bloody_IsAfter_Report_Exp() { return GetEnum("Step_Mercenary_Firone_Bloody") > Report; }
bool Mercenary_Firone_Bloody_IsCompleted_Exp() { return GetEnum("Step_Mercenary_Firone_Bloody") == Complete; }
bool Mercenary_Hateru_Bloody_IsAfter_Craft_Exp() { return GetEnum("Step_Mercenary_Hateru_Bloody") > Craft; }
bool Mercenary_Hateru_Bloody_IsAfter_Exterminate_Exp() { return GetEnum("Step_Mercenary_Hateru_Bloody") > Exterminate; }
bool Mercenary_Hateru_Bloody_IsAfter_MeetAgain_Exp() { return GetEnum("Step_Mercenary_Hateru_Bloody") > MeetAgain; }
bool Mercenary_Hateru_Bloody_IsAfter_NotReady_Exp() { return GetEnum("Step_Mercenary_Hateru_Bloody") > NotReady; }
bool Mercenary_Hateru_Bloody_IsAfter_Report_Exp() { return GetEnum("Step_Mercenary_Hateru_Bloody") > Report; }
bool Mercenary_Hateru_Bloody_IsCompleted_Exp() { return GetEnum("Step_Mercenary_Hateru_Bloody") == Complete; }
bool Mercenary_Hebra_Bloody_IsAfter_Exterminate_Exp() { return GetEnum("Step_Mercenary_Hebra_Bloody") > Exterminate; }
bool Mercenary_Hebra_Bloody_IsAfter_MeetAgain_Exp() { return GetEnum("Step_Mercenary_Hebra_Bloody") > MeetAgain; }
bool Mercenary_Hebra_Bloody_IsAfter_Move_Exp() { return GetEnum("Step_Mercenary_Hebra_Bloody") > Move; }
bool Mercenary_Hebra_Bloody_IsAfter_NotReady_Exp() { return GetEnum("Step_Mercenary_Hebra_Bloody") > NotReady; }
bool Mercenary_Hebra_Bloody_IsAfter_Ready_Exp() { return GetEnum("Step_Mercenary_Hebra_Bloody") > Ready; }
bool Mercenary_Hebra_Bloody_IsAfter_Report_Exp() { return GetEnum("Step_Mercenary_Hebra_Bloody") > Report; }
bool Mercenary_Hebra_Bloody_IsCompleted_Exp() { return GetEnum("Step_Mercenary_Hebra_Bloody") == Complete; }
bool Mercenary_HyrulePlain_Bloody_IsAfter_Exterminate_Exp() { return GetEnum("Step_Mercenary_HyrulePlain_Bloody") > Exterminate; }
bool Mercenary_HyrulePlain_Bloody_IsAfter_Move_Exp() { return GetEnum("Step_Mercenary_HyrulePlain_Bloody") > Move; }
bool Mercenary_HyrulePlain_Bloody_IsAfter_NotReady_Exp() { return GetEnum("Step_Mercenary_HyrulePlain_Bloody") > NotReady; }
bool Mercenary_HyrulePlain_Bloody_IsAfter_Ready_Exp() { return GetEnum("Step_Mercenary_HyrulePlain_Bloody") > Ready; }
bool Mercenary_HyrulePlain_Bloody_IsAfter_Report_Exp() { return GetEnum("Step_Mercenary_HyrulePlain_Bloody") > Report; }
bool Mercenary_HyrulePlain_Bloody_IsCompleted_Exp() { return GetEnum("Step_Mercenary_HyrulePlain_Bloody") == Complete; }
bool MercenaryChallenge_Akkare_BattleStart_BoolExp() { return GetBool("MercenaryChallenge_Akkare_EnemyBattleStart") || GetBool("MercenaryChallenge_Akkare_BattleStart"); }
bool MercenaryChallenge_Akkare_CreateActor() { return (!GetBool("MercenaryChallenge_BloodyMoonStandby_Toryu") && GetBool("MercenaryChallenge_Akkare_Replay")) || (!GetBoolExp("MercenaryChallenge_Akkare_IsCompleted_Exp") && GetBoolExp("MercenaryChallenge_Akkare_IsAfter_Ready_Exp")); }
bool MercenaryChallenge_Akkare_IsAfter_Exterminate_Exp() { return GetEnum("Step_MercenaryChallenge_Akkare") > Exterminate; }
bool MercenaryChallenge_Akkare_IsAfter_MeetAgain_Exp() { return GetEnum("Step_MercenaryChallenge_Akkare") > MeetAgain; }
bool MercenaryChallenge_Akkare_IsAfter_Move_Exp() { return GetEnum("Step_MercenaryChallenge_Akkare") > Move; }
bool MercenaryChallenge_Akkare_IsAfter_NotReady_Exp() { return GetEnum("Step_MercenaryChallenge_Akkare") > NotReady; }
bool MercenaryChallenge_Akkare_IsAfter_Ready_Exp() { return GetEnum("Step_MercenaryChallenge_Akkare") > Ready; }
bool MercenaryChallenge_Akkare_IsAfter_Report_Exp() { return GetEnum("Step_MercenaryChallenge_Akkare") > Report; }
bool MercenaryChallenge_Akkare_IsCompleted_Exp() { return GetEnum("Step_MercenaryChallenge_Akkare") == Complete; }
bool MercenaryChallenge_Eldin_BattleStart_BoolExp() { return GetBool("MercenaryChallenge_Eldin_BattlePositionKeep") || GetBool("MercenaryChallenge_Eldin_EnemyBattleStart") || GetBool("MercenaryChallenge_Eldin_BattleStart"); }
bool MercenaryChallenge_Eldin_Broken_Exp() { return !GetBool("MercenaryChallenge_Eldin_BattlePositionKeep") && GetBool("MercenaryChallenge_Eldin_Broken"); }
bool MercenaryChallenge_Eldin_CreateActor() { return (!GetBool("MercenaryChallenge_BloodyMoonStandby_Toryu") && !GetBool("MercenaryChallenge_Eldin_Broken") && GetBool("MercenaryChallenge_Eldin_Replay")) || (!GetBoolExp("MercenaryChallenge_Eldin_IsCompleted_Exp") && GetBoolExp("HyruleCastleIncident_IsAfter_ReturnBCAfterDefeatMonster_Exp")); }
bool MercenaryChallenge_Eldin_IsAfter_Exterminate_Exp() { return GetEnum("Step_MercenaryChallenge_Eldin") > Exterminate; }
bool MercenaryChallenge_Eldin_IsAfter_Move_Exp() { return GetEnum("Step_MercenaryChallenge_Eldin") > Move; }
bool MercenaryChallenge_Eldin_IsAfter_NotReady_Exp() { return GetEnum("Step_MercenaryChallenge_Eldin") > NotReady; }
bool MercenaryChallenge_Eldin_IsAfter_Ready_Exp() { return GetEnum("Step_MercenaryChallenge_Eldin") > Ready; }
bool MercenaryChallenge_Eldin_IsAfter_Report_Exp() { return GetEnum("Step_MercenaryChallenge_Eldin") > Report; }
bool MercenaryChallenge_Eldin_IsCompleted_Exp() { return GetEnum("Step_MercenaryChallenge_Eldin") == Complete; }
bool MercenaryChallenge_Firone_CreateActor() { return (!GetBool("MercenaryChallenge_BloodyMoonStandby_Amani") && !GetBool("MercenaryChallenge_Firone_Broken") && GetBool("MercenaryChallenge_Firone_Replay")) || (!GetBoolExp("MercenaryChallenge_Firone_IsCompleted_Exp") && GetBoolExp("HyruleCastleIncident_IsAfter_ReturnBCAfterDefeatMonster_Exp")); }
bool MercenaryChallenge_Firone_IsAfter_Craft_Exp() { return GetEnum("Step_MercenaryChallenge_Firone") > Craft; }
bool MercenaryChallenge_Firone_IsAfter_Exterminate_Exp() { return GetEnum("Step_MercenaryChallenge_Firone") > Exterminate; }
bool MercenaryChallenge_Firone_IsAfter_NotReady_Exp() { return GetEnum("Step_MercenaryChallenge_Firone") > NotReady; }
bool MercenaryChallenge_Firone_IsAfter_Ready_Exp() { return GetEnum("Step_MercenaryChallenge_Firone") > Ready; }
bool MercenaryChallenge_Firone_IsAfter_Report_Exp() { return GetEnum("Step_MercenaryChallenge_Firone") > Report; }
bool MercenaryChallenge_Firone_IsCompleted_Exp() { return GetEnum("Step_MercenaryChallenge_Firone") == Complete; }
bool MercenaryChallenge_Hateru_CreateActor() { return (!GetBool("MercenaryChallenge_BloodyMoonStandby_Amani") && GetBool("MercenaryChallenge_Hateru_Replay")) || (!GetBoolExp("MercenaryChallenge_Hateru_IsCompleted_Exp") && GetBoolExp("MercenaryChallenge_Hateru_IsAfter_Ready_Exp")); }
bool MercenaryChallenge_Hateru_IsAfter_Craft_Exp() { return GetEnum("Step_MercenaryChallenge_Hateru") > Craft; }
bool MercenaryChallenge_Hateru_IsAfter_Exterminate_Exp() { return GetEnum("Step_MercenaryChallenge_Hateru") > Exterminate; }
bool MercenaryChallenge_Hateru_IsAfter_MeetAgain_Exp() { return GetEnum("Step_MercenaryChallenge_Hateru") > MeetAgain; }
bool MercenaryChallenge_Hateru_IsAfter_NotReady_Exp() { return GetEnum("Step_MercenaryChallenge_Hateru") > NotReady; }
bool MercenaryChallenge_Hateru_IsAfter_Ready_Exp() { return GetEnum("Step_MercenaryChallenge_Hateru") > Ready; }
bool MercenaryChallenge_Hateru_IsAfter_Report_Exp() { return GetEnum("Step_MercenaryChallenge_Hateru") > Report; }
bool MercenaryChallenge_Hateru_IsCompleted_Exp() { return GetEnum("Step_MercenaryChallenge_Hateru") == Complete; }
bool MercenaryChallenge_Hateru_RemoveBall_BoolExp() { return GetBool("MercenaryChallenge_Hateru_BreakTrapFence") || GetBool("MercenaryChallenge_Hateru_RemoveBall"); }
bool MercenaryChallenge_Hebra_BattleStart_BoolExp() { return GetBool("MercenaryChallenge_Hebra_EnemyBattleStart") || GetBool("MercenaryChallenge_Hebra_BattleStart"); }
bool MercenaryChallenge_Hebra_CreateActor() { return (!GetBool("MercenaryChallenge_BloodyMoonStandby") && GetBool("MercenaryChallenge_Hebra_Replay")) || (!GetBoolExp("MercenaryChallenge_Hebra_IsCompleted_Exp") && GetBoolExp("MercenaryChallenge_Hebra_IsAfter_Ready_Exp")); }
bool MercenaryChallenge_Hebra_IsAfter_Exterminate_Exp() { return GetEnum("Step_MercenaryChallenge_Hebra") > Exterminate; }
bool MercenaryChallenge_Hebra_IsAfter_MeetAgain_Exp() { return GetEnum("Step_MercenaryChallenge_Hebra") > MeetAgain; }
bool MercenaryChallenge_Hebra_IsAfter_Move_Exp() { return GetEnum("Step_MercenaryChallenge_Hebra") > Move; }
bool MercenaryChallenge_Hebra_IsAfter_NotReady_Exp() { return GetEnum("Step_MercenaryChallenge_Hebra") > NotReady; }
bool MercenaryChallenge_Hebra_IsAfter_Ready_Exp() { return GetEnum("Step_MercenaryChallenge_Hebra") > Ready; }
bool MercenaryChallenge_Hebra_IsAfter_Report_Exp() { return GetEnum("Step_MercenaryChallenge_Hebra") > Report; }
bool MercenaryChallenge_Hebra_IsCompleted_Exp() { return GetEnum("Step_MercenaryChallenge_Hebra") == Complete; }
bool MercenaryChallenge_HyrulePlain_BattleStart_BoolExp() { return GetBool("MercenaryChallenge_HyrulePlain_BattlePositionKeep") || GetBool("MercenaryChallenge_HyrulePlain_EnemyBattleStart") || GetBool("MercenaryChallenge_HyrulePlain_BattleStart"); }
bool MercenaryChallenge_HyrulePlain_Broken_Exp() { return !GetBool("MercenaryChallenge_HyrulePlain_BattlePositionKeep") && GetBool("MercenaryChallenge_HyrulePlain_Broken"); }
bool MercenaryChallenge_HyrulePlain_CreateActor() { return (!GetBool("MercenaryChallenge_BloodyMoonStandby") && !GetBool("MercenaryChallenge_HyrulePlain_Broken") && GetBool("MercenaryChallenge_HyrulePlain_Replay")) || (!GetBoolExp("MercenaryChallenge_HyrulePlain_IsCompleted_Exp") && GetBoolExp("HyruleCastleIncident_IsAfter_ReturnBCAfterDefeatMonster_Exp")); }
bool MercenaryChallenge_HyrulePlain_IsAfter_Exterminate_Exp() { return GetEnum("Step_MercenaryChallenge_HyrulePlain") > Exterminate; }
bool MercenaryChallenge_HyrulePlain_IsAfter_Move_Exp() { return GetEnum("Step_MercenaryChallenge_HyrulePlain") > Move; }
bool MercenaryChallenge_HyrulePlain_IsAfter_NotReady_Exp() { return GetEnum("Step_MercenaryChallenge_HyrulePlain") > NotReady; }
bool MercenaryChallenge_HyrulePlain_IsAfter_Ready_Exp() { return GetEnum("Step_MercenaryChallenge_HyrulePlain") > Ready; }
bool MercenaryChallenge_HyrulePlain_IsAfter_Report_Exp() { return GetEnum("Step_MercenaryChallenge_HyrulePlain") > Report; }
bool MercenaryChallenge_HyrulePlain_IsCompleted_Exp() { return GetEnum("Step_MercenaryChallenge_HyrulePlain") == Complete; }
bool Unknown_0x57a8338() { return GetEnum("Step_MessageBottle_SOS") > MessageBottle_SOS_01; }
bool Unknown_0x50753cf4() { return GetEnum("Step_MessageBottle_SOS") > MessageBottle_SOS_02; }
bool MessageBottle_SOS_IsAfter_Ready_Exp() { return GetEnum("Step_MessageBottle_SOS") > Ready; }
bool MessageBottle_SOS_IsCompleted_Exp() { return GetEnum("Step_MessageBottle_SOS") == Complete; }
bool MiniGame_HorseRace_EraseWagon() { return !GetBool("MiniGame_HorseRace_CreateCheckPoint"); }
bool MinusYiga_IsAfter_Again_Exp() { return GetEnum("Step_MinusYiga") > Again; }
bool MinusYiga_IsAfter_Begin_Exp() { return GetEnum("Step_MinusYiga") > Begin; }
bool MinusYiga_IsAfter_BeginBeforeHint_Exp() { return GetEnum("Step_MinusYiga") > BeginBeforeHint; }
bool MinusYiga_IsAfter_Continue_Exp() { return GetEnum("Step_MinusYiga") > Continue; }
bool MinusYiga_IsAfter_Ready_Exp() { return GetEnum("Step_MinusYiga") > Ready; }
bool MinusYiga_IsCompleted_Exp() { return GetEnum("Step_MinusYiga") == Complete; }
bool MinusYigaIsafter_Again_Exp_TalkYiga_01() { return GetBool("Npc_BaseCamp_Assistant_TalkYiga_01") && GetBoolExp("MinusYiga_IsAfter_Again_Exp"); }
bool MinusYigaIsAfter_Begin_Exp_TalkYiga_01() { return GetBool("Npc_BaseCamp_Assistant_TalkYiga_01") && GetBoolExp("MinusYiga_IsAfter_Begin_Exp"); }
bool MinusYigaIsCompleted_Exp_TalkYiga_01() { return GetBool("Npc_BaseCamp_Assistant_TalkYiga_01") && GetBoolExp("MinusYiga_IsCompleted_Exp"); }
bool MonsterFigures01_IsCompleted_Exp() { return GetEnum("Step_MonsterFigures01") == Complete; }
bool MonsterFigures02_IsCompleted_Exp() { return GetEnum("Step_MonsterFigures02") == Complete; }
bool MonsterFigures03_IsCompleted_Exp() { return GetEnum("Step_MonsterFigures03") == Complete; }
bool MonsterFigures04_IsCompleted_Exp() { return GetEnum("Step_MonsterFigures04") == Complete; }
bool MonsterFigures05_IsCompleted_Exp() { return GetEnum("Step_MonsterFigures05") == Complete; }
bool MushroomSisters_1_IsAfter_GetPresent_Exp() { return GetEnum("Step_MushroomSisters_1") > GetPresent; }
bool MushroomSisters_1_IsAfter_NotReady_Exp() { return GetEnum("Step_MushroomSisters_1") > NotReady; }
bool MushroomSisters_1_IsAfter_Ready_Exp() { return GetEnum("Step_MushroomSisters_1") > Ready; }
bool MushroomSisters_1_IsAfter_Step01_Exp() { return GetEnum("Step_MushroomSisters_1") > Step01; }
bool MushroomSisters_1_IsCompleted_Exp() { return GetEnum("Step_MushroomSisters_1") == Complete; }
bool MushroomSisters_2_IsAfter_GetPresent_Exp() { return GetEnum("Step_MushroomSisters_2") > GetPresent; }
bool MushroomSisters_2_IsAfter_NotReady_Exp() { return GetEnum("Step_MushroomSisters_2") > NotReady; }
bool MushroomSisters_2_IsAfter_Ready_Exp() { return GetEnum("Step_MushroomSisters_2") > Ready; }
bool MushroomSisters_2_IsAfter_Step01_Exp() { return GetEnum("Step_MushroomSisters_2") > Step01; }
bool MushroomSisters_2_IsAfter_Step02_Exp() { return GetEnum("Step_MushroomSisters_2") > Step02; }
bool MushroomSisters_2_IsCompleted_Exp() { return GetEnum("Step_MushroomSisters_2") == Complete; }
bool MushroomSisters_3_IsAfter_NotReady_Exp() { return GetEnum("Step_MushroomSisters_3") > NotReady; }
bool MushroomSisters_3_IsAfter_Ready_Exp() { return GetEnum("Step_MushroomSisters_3") > Ready; }
bool MushroomSisters_3_IsAfter_Step01_Exp() { return GetEnum("Step_MushroomSisters_3") > Step01; }
bool MushroomSisters_3_IsAfter_Step02_Exp() { return GetEnum("Step_MushroomSisters_3") > Step02; }
bool MushroomSisters_3_IsCompleted_Exp() { return GetEnum("Step_MushroomSisters_3") == Complete; }
bool MyHomeBuilder_ChaseMode_BoolExp() { return GetBool("MyHomeBuilder_PreviewingMode") || GetBool("MyHomeBuilder_BuildingMode"); }
bool Nazley_DigCave_IsCompleted_Exp() { return GetEnum("Step_Nazley_DigCave") == Complete; }
bool Nazley_ReturnRito() { return (!GetBool("Nazley_Cave_WarpDistant") || GetBool("Nazley_Cave_Distant")) && GetBoolExp("SageOfWind_IsAfter_TouchSecretStone_Exp") && GetBoolExp("Nazley_DigCave_IsCompleted_Exp"); }
bool Neck_IceWaterCave_IsAfter_Defeat_Exp() { return GetEnum("Step_Neck_IceWaterCave") > Defeat; }
bool Neck_IceWaterCave_IsAfter_Ready_Exp() { return GetEnum("Step_Neck_IceWaterCave") > Ready; }
bool Neck_IceWaterCave_IsCompleted_Exp() { return GetEnum("Step_Neck_IceWaterCave") == Complete; }
bool NewCanyonMissingPersonsCase_IsAfter_Ready_Exp() { return GetEnum("Step_NewCanyonMissingPersonsCase") > Ready; }
bool NewsPaper_AllTribuneChallengeClear() { return GetBoolExp("Tribune16_IsCompleted_Exp") && GetBoolExp("Tribune14_IsCompleted_Exp") && GetBoolExp("Tribune13_IsCompleted_Exp") && GetBoolExp("Tribune11_IsCompleted_Exp") && GetBoolExp("Tribune10_IsCompleted_Exp") && GetBoolExp("Tribune09_IsCompleted_Exp") && GetBoolExp("Tribune07_IsCompleted_Exp") && GetBoolExp("Tribune06_IsCompleted_Exp") && GetBoolExp("Tribune05_IsCompleted_Exp") && GetBoolExp("Tribune04_IsCompleted_Exp") && GetBoolExp("Tribune03_IsCompleted_Exp") && GetBoolExp("Tribune02_IsCompleted_Exp"); }
bool NewsPaper_Mitsuba_IsAfter_Finish_Exp() { return GetEnum("Step_NewsPaper_Mitsuba") > Finish; }
bool NewsPaper_Mitsuba_IsAfter_NotReady_Exp() { return GetEnum("Step_NewsPaper_Mitsuba") > NotReady; }
bool NewsPaper_Mitsuba_IsAfter_Ready_Exp() { return GetEnum("Step_NewsPaper_Mitsuba") > Ready; }
bool NewsPaper_Mitsuba_IsAfter_Tribune01_Exp() { return GetEnum("Step_NewsPaper_Mitsuba") > Tribune01; }
bool NewsPaper_Mitsuba_IsCompleted_Exp() { return GetEnum("Step_NewsPaper_Mitsuba") == Complete; }
bool NewsPaperArticle_Tribune02_IsCompleted() { return GetBoolExp("Tribune02_IsCompleted_Exp"); }
bool NewsPaperArticle_Tribune03_IsCompleted() { return GetBoolExp("Tribune03_IsCompleted_Exp"); }
bool NewsPaperArticle_Tribune04_IsCompleted() { return GetBool("NewsPaperWomanStatus.IsDeleteActorAfterChallengeClear.Riverside") && GetBoolExp("Tribune04_IsCompleted_Exp"); }
bool NewsPaperArticle_Tribune05_IsCompleted() { return GetBool("NewsPaperWomanStatus.IsDeleteActorAfterChallengeClear.Shitsugen") && GetBoolExp("Tribune05_IsCompleted_Exp"); }
bool NewsPaperArticle_Tribune06_IsCompleted() { return GetBool("NewsPaperWomanStatus.IsDeleteActorAfterChallengeClear.ShinMaritta") && GetBoolExp("Tribune06_IsCompleted_Exp"); }
bool NewsPaperArticle_Tribune07_IsCompleted() { return GetBoolExp("Tribune07_IsCompleted_Exp"); }
bool NewsPaperArticle_Tribune09_IsCompleted() { return GetBool("NewsPaperWomanStatus.IsDeleteActorAfterChallengeClear.Setsugen") && GetBoolExp("Tribune09_IsCompleted_Exp"); }
bool NewsPaperArticle_Tribune10_IsCompleted() { return GetBoolExp("Tribune10_IsCompleted_Exp"); }
bool NewsPaperArticle_Tribune11_IsCompleted() { return GetBool("NewsPaperWomanStatus.IsDeleteActorAfterChallengeClear.Sanroku") && GetBoolExp("Tribune11_IsCompleted_Exp"); }
bool NewsPaperArticle_Tribune13_IsCompleted() { return GetBoolExp("Tribune13_IsCompleted_Exp"); }
bool NewsPaperArticle_Tribune14_IsCompleted() { return GetBool("NewsPaperWomanStatus.IsDeleteActorAfterChallengeClear.GerudoCanyon") && GetBoolExp("Tribune14_IsCompleted_Exp"); }
bool NewsPaperArticle_Tribune16_IsCompleted() { return GetBoolExp("Tribune16_IsCompleted_Exp"); }
bool NewsPaperMan_AllColumnArticle_Complete() { return GetBool("NewsPaper_Talked_RevivalOrchestra") && GetBool("IsAppear_HorseGod") && GetBool("IsAppear_DressFairy_00") && GetBool("IsAppear_DressFairy_02") && GetBool("IsAppear_DressFairy_01") && GetBool("IsAppear_DressFairy_03") && GetBool("NewsPaper_Talked_BloodyMoon1stTalk") && GetBool("NewsPaper_Talked_PuruaCanon") && GetBoolExp("IsActivatedAnyCannon") && GetBoolExp("NewsPaper_Mitsuba_IsAfter_Ready_Exp") && GetBoolExp("HavePlayed_FirstBloodyMoon"); }
bool NewsPaperWoman_AllColumnArticle_Complete() { return GetBoolExp("Uotori_ResortPlan_IsCompleted_Exp") && GetBoolExp("TauraChallenge001_IsCompleted_Exp") && GetBool("IsVisitLocation.Taura") && GetBool("IsVisitLocation.UMiiVillage") && GetBool("IsVisitLocation.Hateno") && GetBool("IsVisitLocation.Kakariko") && GetBool("NewsPaper_Talked_BloodyMoon1stTalk") && GetBoolExp("NewsPaper_Mitsuba_IsAfter_Ready_Exp") && GetBoolExp("HavePlayed_FirstBloodyMoon"); }
bool NotClear_DefetHugeEnemy1() { return GetBoolExp("DefeatHugeEnemy_1_IsAfter_Ready_Exp") && !GetBoolExp("DefeatHugeEnemy_1_IsCompleted_Exp") && GetBool("DefetHugeEnemy_Defeat_1"); }
bool NotClear_DefetHugeEnemy2() { return GetBoolExp("DefeatHugeEnemy_2_IsAfter_Ready_Exp") && !GetBoolExp("DefeatHugeEnemy_2_IsCompleted_Exp") && GetBool("DefetHugeEnemy_Defeat_2"); }
bool NotClear_DefetHugeEnemy3() { return GetBoolExp("DefeatHugeEnemy_3_IsAfter_Ready_Exp") && !GetBoolExp("DefeatHugeEnemy_3_IsCompleted_Exp") && GetBool("DefetHugeEnemy_Defeat_3"); }
bool NotClear_DefetHugeEnemy4() { return GetBoolExp("DefeatHugeEnemy_4_IsAfter_Ready_Exp") && !GetBoolExp("DefeatHugeEnemy_4_IsCompleted_Exp") && GetBool("DefetHugeEnemy_Defeat_4"); }
bool NotClear_DefetHugeEnemy5() { return GetBoolExp("DefeatHugeEnemy_5_IsAfter_Ready_Exp") && !GetBoolExp("DefeatHugeEnemy_5_IsCompleted_Exp") && GetBool("DefetHugeEnemy_Defeat_5"); }
bool NotClear_DefetHugeEnemy6() { return GetBoolExp("DefeatHugeEnemy_6_IsAfter_Ready_Exp") && !GetBoolExp("DefeatHugeEnemy_6_IsCompleted_Exp") && GetBool("DefetHugeEnemy_Defeat_6"); }
bool Unknown_0x3353d709() { return GetEnum("DungeonState.Dungeon062") < Clear; }
bool Unknown_0x701425d6() { return GetEnum("DungeonState.Dungeon060") < Clear; }
bool NoTrespassing_IsCompleted_Exp() { return GetEnum("Step_NoTrespassing") == Complete; }
bool NowInTheVillageOfLurelin_IsAfter_NotReady_Exp() { return GetEnum("Step_NowInTheVillageOfLurelin") > NotReady; }
bool NowInTheVillageOfLurelin_IsAfter_Ready_Exp() { return GetEnum("Step_NowInTheVillageOfLurelin") > Ready; }
bool NowInTheVillageOfLurelin_IsAfter_Step01_Exp() { return GetEnum("Step_NowInTheVillageOfLurelin") > Step01; }
bool NowInTheVillageOfLurelin_IsAfter_Step02_Exp() { return GetEnum("Step_NowInTheVillageOfLurelin") > Step02; }
bool NowInTheVillageOfLurelin_IsCompleted_Exp() { return GetEnum("Step_NowInTheVillageOfLurelin") == Complete; }
bool Npc_Assassin_023_IsBattle() { return !GetBool("Npc_Assassin_023_Dead") && GetBool("Npc_Assassin_023_Appear"); }
bool Npc_Attacked_001_Exist() { return ((GetBoolExp("SageOfGerudo_IsCompleted_Exp") || GetBoolExp("SageOfWind_IsCompleted_Exp") || GetBoolExp("SageOfZora_IsCompleted_Exp") || GetBoolExp("SageOfFire_IsCompleted_Exp")) && GetBoolExp("GOToTheCastleOfHyrule_IsAfter_MeetPurah_Exp")) || !GetBoolExp("GOToTheCastleOfHyrule_IsAfter_MeetPurah_Exp"); }
bool Npc_Attacked_009_Road_Exist() { return GetBoolExp("MushroomSisters_3_IsCompleted_Exp") && GetBoolExp("SageOfWind_IsCompleted_Exp"); }
bool Npc_Attacked02_002_GotPrize_Firone() { return GetBool("IsGet.Armor_046_Head"); }
bool Npc_Attacked02_002_GotPrize_Gerudo() { return GetBool("IsGet.Armor_171_Upper"); }
bool Npc_Attacked02_002_GotPrize_Goron() { return GetBool("IsGet.Armor_1061_Head"); }
bool Npc_Attacked02_002_GotPrize_Hebra() { return GetBool("IsGet.Armor_1071_Lower"); }
bool Npc_Attacked02_002_GotPrize_Plain() { return GetBool("IsGet.Armor_046_Upper"); }
bool Npc_BaseCamp_AncientAssistant001_Move_Remains() { return GetBool("Npc_BaseCamp_AncientAssistant001002_Move_2") && GetBool("ZonauReliefSearch_Ready"); }
bool Npc_BaseCamp_AncientAssistant001_Move_Remains_BeforeBZ() { return GetBool("Npc_BaseCamp_AncientAssistant001002_Move") && GetBool("ZonauReliefSearch_Ready"); }
bool Npc_BaseCamp_AncientAssistant001_Remains_AfterOrders() { return GetBoolExp("Npc_BaseCamp_AncientAssistant001_Move_Remains") && GetBoolExp("ZonauReliefSearch_IsAfter_Ready_Exp"); }
bool Npc_BaseCamp_AncientAssistant001_Remains_BeforeBZ_AfterOrders() { return GetBoolExp("ZonauReliefSearch_IsAfter_Ready_Exp") && GetBoolExp("Npc_BaseCamp_AncientAssistant001_Move_Remains_BeforeBZ"); }
bool Npc_BaseCamp_AncientAssistant003_IsChioceAll() { return GetBool("Npc_AncientAssistant003_ChangeSchedule_HaveTalked") && GetBool("Npc_BaseCamp_AncientAssistant003_IsChioce2") && GetBool("Npc_BaseCamp_AncientAssistant003_IsChioce1"); }
bool Npc_BaseCamp_Assistant_ReactingStatue_IsAfter_Ready_Exp() { return GetEnum("Step_Npc_BaseCamp_Assistant_ReactingStatue") > Ready; }
bool Npc_BaseCamp001_MoveHyruleCastle_Exp() { return GetBoolExp("HyruleCastleIncident_IsAfter_ReturnBCAfterDefeatMonster_Exp") && !GetBool("Npc_BaseCamp009_ReMove") && GetBoolExp("CookAtBaseCamp_IsCompleted_Exp"); }
bool Npc_BaseCamp003_PosChange() { return GetBoolExp("BaseCamp_ZoraAppear") && GetBoolExp("SageOfZora_IsCompleted_Exp") && GetBool("Npc_BaseCamp003_NoticeLink") && !GetBool("Npc_BaseCamp003_ReMove01"); }
bool Npc_BaseCamp003_PosChange02() { return GetBool("Npc_BaseCamp003_NoticeLink") && GetBoolExp("BaseCamp_ZoraAppear") && !GetBool("Npc_BaseCamp003_ReMove01") && GetBoolExp("SurveyOfFourVillages_IsAfter_4thSageClear_Exp"); }
bool Npc_BaseCamp003_PosChange03() { return GetBoolExp("HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp") && GetBoolExp("BaseCamp_ZoraAppear") && GetBool("Npc_BaseCamp003_NoticeLink") && !GetBool("Npc_BaseCamp003_ReMove01"); }
bool Npc_BaseCamp006_Pos_Remains() { return GetBool("ZonauReliefSearch_Ready") && GetBool("Npc_BaseCamp006_Talk_SecretPassage_Return"); }
bool Npc_BaseCamp012_Have_More_Clothes() { return GetBoolExp("SageOfFire_IsCompleted_Exp") || GetBoolExp("SageOfWind_IsCompleted_Exp") || GetBoolExp("IllnessStartsWithFeelings_IsCompleted_Exp"); }
bool Npc_BaseCamp012_Pos_ZonauReliefSearch_New() { return !GetBoolExp("ZonauReliefSearch_IsAfter_Ready_Exp") && GetBoolExp("BaseCamp_UndergroundPassage_Exp") && !GetBool("Npc_BaseCamp012_NotChangePos"); }
bool Npc_BaseCamp012_Pos_ZonauReliefSearch_ReadyExp() { return GetBool("Npc_BaseCamp012_NotChangePos") && GetBoolExp("ZonauReliefSearch_IsAfter_Ready_Exp"); }
bool Npc_BaseCamp012_Position() { return GetBoolExp("SageOfFire_IsCompleted_Exp") && GetBoolExp("SageOfWind_IsCompleted_Exp"); }
bool Npc_BaseCamp012_Position_01() { return (GetBoolExp("SageOfFire_IsCompleted_Exp") || GetBoolExp("SageOfWind_IsCompleted_Exp")) && GetBoolExp("IllnessStartsWithFeelings_IsCompleted_Exp"); }
bool Npc_BaseCampSoldier_Hylia002_Move_Lively() { return !GetBoolExp("ZonauReliefSearch_IsAfter_Ready_Exp") && GetBoolExp("BaseCamp_UndergroundPassage_Exp") && !GetBool("Npc_BaseCampSoldier_Hylia002_NotChangePos") && (GetBoolExp("GOToTheCastleOfHyrule_IsAfter_MeetPurah_Exp") || GetBool("BaseCamp_GateOpen")); }
bool Npc_BaseCampSoldier_Hylia002_Move_LivelyAfter() { return GetBoolExp("ZonauReliefSearch_IsAfter_Ready_Exp") && GetBoolExp("BaseCamp_UndergroundPassage_Exp") && GetBool("Npc_BaseCampSoldier_Hylia002_NotChangePos") && (GetBoolExp("GOToTheCastleOfHyrule_IsAfter_MeetPurah_Exp") || GetBool("BaseCamp_GateOpen")); }
bool Npc_BaseCampSoldier_Hylia002_ReturnGate() { return !GetBool("Npc_BaseCamp012_NotChangePos") && GetBoolExp("ZonauReliefSearch_IsAfter_Ready_Exp"); }
bool Npc_BaseCampSoldier_Hylia003_SurprisedToSeeGateOpen() { return GetBoolExp("BaseCamp_GateOpen_NotWest") && GetBool("Npc_BaseCampSoldier_Hylia003_SurprisedToSee"); }
bool Npc_BaseCampSoldier_Hylia006_SurprisedToSeeGateOpen() { return GetBoolExp("BaseCamp_GateOpen_NotEast") && GetBool("Npc_BaseCampSoldier_Hylia006_SurprisedToSee"); }
bool Npc_BaseCampSoldier_Hylia013_MeetPurah_HaveTalked() { return GetBool("HaveTalked.Npc_BaseCampSoldier_Hylia013") && GetBoolExp("GOToTheCastleOfHyrule_IsAfter_MeetPurah_Exp"); }
bool Npc_BaseCampSoldier_Hylia013_Talk00() { return !GetBoolExp("SageOfWind_IsCompleted_Exp"); }
bool Npc_BaseCampSoldier_Hylia013_Talk01() { return !GetBoolExp("SageOfFire_IsCompleted_Exp"); }
bool Npc_BaseCampSoldier_Hylia013_Talk02() { return !GetBoolExp("SageOfZora_IsCompleted_Exp"); }
bool Npc_BaseCampSoldier_Hylia013_Talk03() { return !GetBoolExp("SageOfGerudo_IsCompleted_Exp"); }
bool Npc_DeathEastHatago_003_NearDogsNoNaked() { return GetBool("Npc_DeathEastHatago_003_AfterTribune11") && !GetBool("Npc_DeathEastHatago_003_NearDogs"); }
bool Npc_FirstColony004_RiverSideAppear() { return GetBoolExp("InnNeverReturns_IsCompleted_Exp") && GetBoolExp("FairyAllClear"); }
bool Npc_HatenoVillage030_After_DefeatBlackZelda() { return !GetBool("Npc_BaseCampSoldier_Hylia013_Opened") && GetBoolExp("HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp"); }
bool Npc_HatenoVillage030_After_DefeatBlackZelda_HaveTalked() { return GetBool("HaveTalked.Npc_HatenoVillage030") && !GetBool("Npc_BaseCampSoldier_Hylia013_Opened") && GetBoolExp("HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp"); }
bool Npc_HatenoVillage030_After_DefeatBlackZelda_HaveTalked_LogsExist() { return GetBool("HaveTalked.Npc_HatenoVillage030") && GetBool("Npc_HatenoVillage030_LogsExist") && !GetBool("Npc_BaseCampSoldier_Hylia013_Opened") && GetBoolExp("HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp"); }
bool Npc_HatenoVillage030_After_DefeatBlackZelda_LogsExist() { return GetBool("Npc_HatenoVillage030_LogsExist") && !GetBool("Npc_BaseCampSoldier_Hylia013_Opened") && GetBoolExp("HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp"); }
bool Npc_HatenoVillage030_BlackZeldaPos_WithWell() { return (GetBool("Npc_BaseCampSoldier_Hylia013_OpenWithBlackZelda") || !GetBool("Npc_BaseCampSoldier_Hylia013_Opened")) && GetBoolExp("SurveyOfFourVillages_IsAfter_4thSageClear_Exp"); }
bool Npc_HatenoVillage030_MoveAroundAfterBlackZelda_Exp() { return GetBool("BuildingMaterialsTutorial_Built") && GetBool("Npc_BaseCampSoldier_Hylia013_Opened") && GetBoolExp("HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp") && GetBool("IsOpenCannon.Tower01"); }
bool Npc_HatenoVillage030_MoveAroundAfterBuilt_Exp() { return GetBool("IsOpenCannon.Tower01") && GetBool("BuildingMaterialsTutorial_Built"); }
bool Npc_HatenoVillage030_MoveSable() { return GetBool("Npc_BaseCampSoldier_Hylia013_Opened") && GetBoolExp("GOToTheCastleOfHyrule_IsAfter_MeetPurah_Exp"); }
bool Npc_HorseBuyer_01_Run_NormalRoute() { return GetBoolExp("IllnessStartsWithFeelings_IsCompleted_Exp") || !GetBoolExp("IllnessStartsWithFeelings_IsAfter_Ready_Exp"); }
bool Npc_HorseBuyer_01_Run_ShortRoute() { return !GetBoolExp("Npc_HorseBuyer_01_Run_NormalRoute"); }
bool Npc_HorseBuyer_03_Exist() { return (!GetBoolExp("HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp") || GetBoolExp("HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp")) && GetBoolExp("GOToTheCastleOfHyrule_IsAfter_MeetPurah_Exp"); }
bool Npc_IceVillage011_HutRelocation() { return (!GetBool("Npc_IceVillage011_WarpHutDistant") || GetBool("Npc_IceVillage011_HutDistant")) && GetBoolExp("GoneSnowQueen_IsCompleted_Exp"); }
bool Npc_Kakariko003_AwayDemoAreaOn() { return !GetBool("Wakka_BroughtOut_EvenOnce") && GetBool("Npc_Kakariko003_SceneReset") && GetBool("SheikerWakkaCharm_CanReceive") && GetBool("SheikerWakkaCharm_OnTheDesk"); }
bool Npc_Kakariko004_GenerateWell_NarukoOff() { return GetBool("Kakariko_NarukoOff") && GetBool("Npc_Kakariko004_GenerateWell"); }
bool Npc_Kakariko005_ReturnKakariko() { return GetBool("MemoryOfTheDragon_CompleteTalk") && GetBoolExp("GotoFironeZonauRemains_IsCompleted_Exp") && GetBoolExp("SageOfSoul_IsCompleted_Exp") && GetBoolExp("GroundPaintingAir01_IsCompleted_Exp") && GetBoolExp("MemoryOfTheDragon_IsCompleted_Exp"); }
bool Npc_Kakariko007_MoveSchedule_HaveTalked() { return GetBool("HaveTalked.Npc_Kakariko007") && GetBool("Npc_Kakariko007_MoveSchedule"); }
bool Npc_Kakariko007_MoveSchedule_HaveTalked2() { return GetBool("Npc_Kakariko007_MoveSchedule2") && GetBool("HaveTalked.Npc_Kakariko007"); }
bool Npc_Lanayru003_ChallengeComplete() { return GetBool("Npc_Lanayru003_Talked_AfterCarryGoronKid2") && GetBool("Npc_Lanayru003_FirstTalk_HotSpring") && GetBoolExp("HotSpringEgg_IsCompleted_Exp"); }
bool Npc_MiniGame_Crosscountry_Road_Exp() { return GetBoolExp("SageOfWind_IsCompleted_Exp") && GetBool("AkkareBase_Hostage"); }
bool NPC_oasis004_fr03_AvoidSisters() { return !GetBoolExp("MushroomSisters_2_IsCompleted_Exp") && GetBoolExp("MushroomSisters_2_IsAfter_NotReady_Exp"); }
bool NPC_oasis004_fr04_FirstTalkAfterReturnBC() { return GetBoolExp("HyruleCastleIncident_IsAfter_ReturnBCAfterDefeatMonster_Exp") && GetBool("NPC_oasis004_fr04_FirstTalk"); }
bool Npc_oasis027_Ball_ZonauMagicNG() { return (GetBool("SageOfGerudo_Out_UndergroundEntrance") && !GetBool("SageOfGerudo_UndergroundEntrance")) || !GetBool("SageOfGerudo_UndergroundFirstIn"); }
bool Npc_oasis037_OntheTable_BoolExp() { return GetBoolExp("NewsPaper_Mitsuba_IsAfter_Ready_Exp") && GetBool("Npc_oasis037_OntheTable"); }
bool Npc_OasisTeacher_LessonNoon_StudentReady() { return GetBool("Npc_oasis013_Lesson") && GetBool("Npc_oasis017_Lesson") && GetBool("Npc_oasis016_Lesson"); }
bool Npc_OasisWaterChannel_NoThrowBottle() { return GetBool("Npc_OasisWaterChannel_InWellPlayer") || GetBool("SageOfGerudo_UndergroundFirstIn"); }
bool Npc_RidgeRoad_AncientAssistant_Exist() { return GetBoolExp("Tribune11_IsCompleted_Exp") && GetBoolExp("SageOfWind_IsCompleted_Exp"); }
bool Npc_Road_006_CreateGerudo() { return GetBool("Npc_Road_006_Talk01") && GetBoolExp("SageOfGerudo_IsCompleted_Exp"); }
bool Npc_Road_009016_ChangeSchedule() { return (GetBool("Npc_Road_009016_Move") || GetBool("HaveTalked.Npc_Kakariko002")) && GetBool("HaveTalked.Npc_Road_009"); }
bool Npc_Road_011_TalkSel_AboutOrchestra() { return GetBoolExp("CreateOrchestra_DuelingPeeks_Exp") || GetBoolExp("FairyAllClear"); }
bool Npc_Road_013_Reappear() { return !GetBool("Npc_Road_013_ExistAllOverTheWorld"); }
bool Npc_Road_013_Rito_Exist() { return (GetBool("IsVisitLocation.Hateno") || GetBool("IsVisitLocation.Kakariko") || GetBool("IsVisitLocation.UMiiVillage") || GetBool("IsVisitLocation.Taura") || GetBool("IsVisitLocation.Oasis") || GetBool("IsVisitLocation.WhiteZora") || GetBool("IsVisitLocation.Goron") || GetBool("IsVisitLocation.Rito") || GetBoolExp("NewsPaper_Mitsuba_IsAfter_Ready_Exp")) && GetBool("Npc_Road_013_ExistAllOverTheWorld"); }
bool Npc_Road_015_Road_Existed() { return GetBoolExp("AncientIsland13_SucActive") && GetBool("Npc_Bottle_SOS_CharangeClear"); }
bool Npc_Road_015_Road_Hateno() { return !GetBoolExp("AncientIsland13_SucActive") && GetBool("Npc_Bottle_SOS_CharangeClear"); }
bool Npc_Road_029_CanEat() { return GetBoolExp("Step_SageOfFire_VillagersSchedule") && GetBoolExp("ResearchEldin_IsCompleted_Exp"); }
bool Npc_Road_029_Exist() { return !(GetBoolExp("Step_SageOfFire_VillagersSchedule") && !GetBoolExp("ResearchEldin_IsCompleted_Exp")) && !GetBool("ResearchEldin_SceneChange_AfterClear"); }
bool Npc_Road_031_Exist() { return GetBool("Mapin_TamourHatago_DeleteFlag") && !GetBool("JustAfterTalk_Npc_Road_031_TamourHatago"); }
bool Npc_Road_037_Change_Traveller_2() { return GetBoolExp("Tribune10_IsCompleted_Exp") && !GetBool("Npc_Road_037_Presence"); }
bool Npc_Road_045_Road_Exist() { return GetBoolExp("SageOfWind_IsCompleted_Exp") && GetBoolExp("Tribune10_IsCompleted_Exp"); }
bool Npc_SouthernVillage005_Cheese() { return GetBoolExp("Hateno_Cheese_IsCompleted_Exp") && GetBoolExp("Complete_Two_SageChallenges"); }
bool Npc_SouthernVillage005_Milk() { return !GetBoolExp("Hateno_Cheese_IsCompleted_Exp") && GetBoolExp("Complete_Two_SageChallenges"); }
bool Npc_SouthernVillage005_Shop_Left() { return GetBoolExp("SageOfFire_IsCompleted_Exp") || GetBoolExp("SageOfWind_IsCompleted_Exp") || GetBoolExp("IllnessStartsWithFeelings_IsCompleted_Exp"); }
bool Npc_Umii_Kakariko_Scholar_E_IsChioceAll() { return GetBool("Npc_Umii_Kakariko_Scholar_E_IsChioce2") && GetBool("Npc_Umii_Kakariko_Scholar_E_IsChioce1"); }
bool Npc_Zora008_FirstTalkFlagOff01() { return !GetBool("HaveTalked.Npc_Zora008") && GetBool("SageOfZora_StatueSlimeCleaned"); }
bool Npc_Zora008_FirstTalkFlagOff02() { return GetBoolExp("CleanStatue_IsCompleted_Exp") && !GetBool("HaveTalked.Npc_Zora008"); }
bool Npc_Zora010_SkyIslands() { return !GetBool("Npc_Zora010_ClearHuntSalmon") && GetBoolExp("SageOfZora_IsCompleted_Exp"); }
bool Npc_Zora029_ComeBackFromAncientShrine() { return (GetBool("Npc_ZoraFencer_TalkAfterGetHelmet") || !GetBool("Npc_Zora029_First01")) && GetBool("Zora_CreateArmor_GetHelmet"); }
bool Npc_Zora029_ComeBackFromAncientShrine_Moved() { return (GetBool("Npc_Zora029_First02") || GetBool("Npc_Zora029_First01")) && GetBoolExp("Npc_Zora029_ComeBackFromAncientShrine"); }
bool NpcGerudoDesert002_InCity() { return !GetBoolExp("JobSunazarashi_IsAfter_Drive1_Exp") && GetBoolExp("SageOfGerudo_IsCompleted_Exp"); }
bool NpcOasis018_ON() { return GetBoolExp("SageOfGerudo_Equal_DefenseStart_Exp") || !GetBool("SageOfGerudo_UndergroundFirstIn"); }
bool NpcOasis048_OFF() { return !GetBool("SageOfGerudo_UndergroundFirstIn") || GetBoolExp("SageOfGerudo_Equal_DefenseStart_Exp"); }
bool NpcOasis048Hint_OFF() { return !GetBool("Gerudo_TalkedGuardSoldier") || GetBool("SageOfGerudo_UndergroundFirstIn") || GetBool("Gerudo_EscapeGirl_Talk_Second"); }
bool NpcOasisHylia002_AttackZombie() { return !GetBoolExp("SageOfGerudo_IsAfter_Underground_Exp") && GetBool("Gerudo_TalkedGuardSoldier"); }
bool NpcOasisHylia002_Disappear() { return GetBoolExp("SageOfGerudo_IsAfter_PreDefenseStart_Exp") && !GetBoolExp("SageOfGerudo_IsAfter_DefenseStart_Exp"); }
bool NpcOasisWaterChannel_LetterOpen_DungeonBossDead() { return GetBoolExp("SageOfGerudo_IsAfter_DungeonBossDead_Exp") && GetBool("NpcOasisWaterChannel_LetterOpen"); }
bool NushiShop_Challenge00_IsAfter_FindNushiShop_Exp() { return GetEnum("Step_NushiShop_Challenge00") > FindNushiShop; }
bool NushiShop_Challenge00_IsAfter_HeardSpot_Exp() { return GetEnum("Step_NushiShop_Challenge00") > HeardSpot; }
bool NushiShop_Challenge00_IsAfter_Ready_Exp() { return GetEnum("Step_NushiShop_Challenge00") > Ready; }
bool NushiShop_Challenge00_IsCompleted_Exp() { return GetEnum("Step_NushiShop_Challenge00") == Complete; }
bool NushiShop_Tutorial_IsAfter_BringCaveMasterMedal_Exp() { return GetEnum("Step_NushiShop_Tutorial") > BringCaveMasterMedal; }
bool NushiShop_Tutorial_IsAfter_Ready_Exp() { return GetEnum("Step_NushiShop_Tutorial") > Ready; }
bool NushiShop_Tutorial_IsCompleted_Exp() { return GetEnum("Step_NushiShop_Tutorial") == Complete; }
bool Oasis050_ChangeSchedule() { return GetBool("Open_EnokidaDoor") && GetBoolExp("BuildHouse_IsCompleted_Exp"); }
bool OldKorok_TalkAboutAddShopLineup() { return (!GetBool("OldKorok_FirstTalk_AfterGerudo") && GetBoolExp("SageOfGerudo_IsCompleted_Exp")) || (!GetBool("OldKorok_FirstTalk_AfterZora") && GetBoolExp("SageOfZora_IsCompleted_Exp")) || (!GetBool("OldKorok_FirstTalk_AfterEldin") && GetBoolExp("SageOfFire_IsCompleted_Exp")) || (!GetBool("OldKorok_FirstTalk_AfterRito") && GetBoolExp("SageOfWind_IsCompleted_Exp")); }
bool OldKorokHelp_InBaseCamp() { return GetBool("EnemyKilled_AccidentOfDekutree") || GetBoolExp("SageOfGerudo_IsCompleted_Exp") || GetBoolExp("SageOfZora_IsCompleted_Exp") || GetBoolExp("SageOfFire_IsCompleted_Exp") || GetBoolExp("SageOfWind_IsCompleted_Exp"); }
bool OldKorokHelp_IsAfter_Ready_Exp() { return GetEnum("Step_OldKorokHelp") > Ready; }
bool OldKorokHelp_IsAfter_STEP1_Basecamp_Exp() { return GetEnum("Step_OldKorokHelp") > STEP1_Basecamp; }
bool OldKorokHelp_IsAfter_STEP1_Exp() { return GetEnum("Step_OldKorokHelp") > STEP1; }
bool OldKorokHelp_IsAfter_STEP1_Final_Exp() { return GetEnum("Step_OldKorokHelp") > STEP1_Final; }
bool OldKorokHelp_IsAfter_STEP2_Final_Exp() { return GetEnum("Step_OldKorokHelp") > STEP2_Final; }
bool OldKorokHelp_IsCompleted_Exp() { return GetEnum("Step_OldKorokHelp") == Complete; }
bool OldKorokHelp_STEP2_TalkedinBC() { return GetBoolExp("OldKorokHelp_IsAfter_STEP1_Final_Exp") && !GetBool("OldKorok_AtTravel"); }
bool OldKorokHelp_STEP2_TalkedinForest() { return !GetBool("OldKorok_AtFinal") && GetBoolExp("OldKorokHelp_IsAfter_STEP1_Final_Exp"); }
bool OneTouchBond_Rocket() { return GetBool("IsGet.SpObj_Rocket_Capsule_A_01") && GetBool("IsGet.Obj_OneTouchBond"); }
bool OpenTBox_Banzoku_Upper() { return GetBool("IsGet.Armor_048_Upper"); }
bool OpenTBox_Climb_Upper() { return GetBool("IsGet.Armor_014_Upper"); }
bool OpenTBox_Rubber_Upper() { return GetBool("IsGet.Armor_046_Upper"); }
bool Orchestra_AllMember() { return GetBoolExp("Tribune16_IsCompleted_Exp") && GetBoolExp("Orchestra04_IsCompleted_Exp") && GetBoolExp("Orchestra03_IsCompleted_Exp") && GetBoolExp("Orchestra02_IsCompleted_Exp"); }
bool Orchestra_At_Outskirt() { return (GetBoolExp("FairyAllClear") && GetBool("Orchestra_Presence_At_Outskirt")) || GetBool("Orchestra_Presence_At_Outskirt_Fairy"); }
bool Orchestra01_IsAfter_Ready_Exp() { return GetEnum("Step_Orchestra01") > Ready; }
bool Orchestra02_IsAfter_NotReady_Exp() { return GetEnum("Step_Orchestra02") > NotReady; }
bool Orchestra02_IsAfter_Ready_Exp() { return GetEnum("Step_Orchestra02") > Ready; }
bool Orchestra02_IsAfter_Search_Exp() { return GetEnum("Step_Orchestra02") > Search; }
bool Orchestra02_IsCompleted_Exp() { return GetEnum("Step_Orchestra02") == Complete; }
bool Orchestra03_IsAfter_Ready_Exp() { return GetEnum("Step_Orchestra03") > Ready; }
bool Orchestra03_IsAfter_step4_Exp() { return GetEnum("Step_Orchestra03") > step4; }
bool Orchestra03_IsCompleted_Exp() { return GetEnum("Step_Orchestra03") == Complete; }
bool Orchestra04_IsAfter_Carry_Exp() { return GetEnum("Step_Orchestra04") > Carry; }
bool Orchestra04_IsAfter_GetPrize_Exp() { return GetEnum("Step_Orchestra04") > GetPrize; }
bool Orchestra04_IsAfter_Ready_Exp() { return GetEnum("Step_Orchestra04") > Ready; }
bool Orchestra04_IsCompleted_Exp() { return GetEnum("Step_Orchestra04") == Complete; }
bool Our_Treasure_IsCompleted_Exp() { return GetEnum("Step_Our_Treasure") == Complete; }
bool OutsideLargeDungeonThunderAndLoadStep() { return GetBoolExp("SageOfGerudo_IsAfter_DungeonFind_Exp") && !GetBool("HideLargeDungeonThunderFar"); }
bool Parasail_ChuchuDesign_IsAfter_NotReady_Exp() { return GetEnum("Step_Parasail_ChuchuDesign") > NotReady; }
bool Parasail_ChuchuDesign_IsAfter_Ready_Exp() { return GetEnum("Step_Parasail_ChuchuDesign") > Ready; }
bool Parasail_ChuchuDesign_IsAfter_Search_Exp() { return GetEnum("Step_Parasail_ChuchuDesign") > Search; }
bool Parasail_ChuchuDesign_IsCompleted_Exp() { return GetEnum("Step_Parasail_ChuchuDesign") == Complete; }
bool PhotoSpot_Challenge_01_IsAfter_NotReady_Exp() { return GetEnum("Step_PhotoSpot_Challenge_01") > NotReady; }
bool PhotoSpot_Challenge_01_IsAfter_Ready_Exp() { return GetEnum("Step_PhotoSpot_Challenge_01") > Ready; }
bool PhotoSpot_Challenge_01_IsAfter_Step01_Exp() { return GetEnum("Step_PhotoSpot_Challenge_01") > Step01; }
bool PhotoSpot_Challenge_01_IsAfter_Step02_Exp() { return GetEnum("Step_PhotoSpot_Challenge_01") > Step02; }
bool PhotoSpot_Challenge_01_IsCompleted_Exp() { return GetEnum("Step_PhotoSpot_Challenge_01") == Complete; }
bool PhotoSpot_Challenge_02_IsAfter_NotReady_Exp() { return GetEnum("Step_PhotoSpot_Challenge_02") > NotReady; }
bool PhotoSpot_Challenge_02_IsAfter_Ready_Exp() { return GetEnum("Step_PhotoSpot_Challenge_02") > Ready; }
bool PhotoSpot_Challenge_02_IsAfter_Step01_Exp() { return GetEnum("Step_PhotoSpot_Challenge_02") > Step01; }
bool PhotoSpot_Challenge_02_IsAfter_Step02_Exp() { return GetEnum("Step_PhotoSpot_Challenge_02") > Step02; }
bool PhotoSpot_Challenge_02_IsCompleted_Exp() { return GetEnum("Step_PhotoSpot_Challenge_02") == Complete; }
bool PhotoSpot_Challenge_03_IsAfter_NotReady_Exp() { return GetEnum("Step_PhotoSpot_Challenge_03") > NotReady; }
bool PhotoSpot_Challenge_03_IsAfter_Ready_Exp() { return GetEnum("Step_PhotoSpot_Challenge_03") > Ready; }
bool PhotoSpot_Challenge_03_IsAfter_Step01_Exp() { return GetEnum("Step_PhotoSpot_Challenge_03") > Step01; }
bool PhotoSpot_Challenge_03_IsAfter_Step02_Exp() { return GetEnum("Step_PhotoSpot_Challenge_03") > Step02; }
bool PhotoSpot_Challenge_03_IsCompleted_Exp() { return GetEnum("Step_PhotoSpot_Challenge_03") == Complete; }
bool PhotoSpot_Challenge_04_IsAfter_NotReady_Exp() { return GetEnum("Step_PhotoSpot_Challenge_04") > NotReady; }
bool PhotoSpot_Challenge_04_IsAfter_Ready_Exp() { return GetEnum("Step_PhotoSpot_Challenge_04") > Ready; }
bool PhotoSpot_Challenge_04_IsAfter_Step01_Exp() { return GetEnum("Step_PhotoSpot_Challenge_04") > Step01; }
bool PhotoSpot_Challenge_04_IsAfter_Step02_Exp() { return GetEnum("Step_PhotoSpot_Challenge_04") > Step02; }
bool PhotoSpot_Challenge_04_IsCompleted_Exp() { return GetEnum("Step_PhotoSpot_Challenge_04") == Complete; }
bool PhotoSpot_Challenge_05_IsAfter_NotReady_Exp() { return GetEnum("Step_PhotoSpot_Challenge_05") > NotReady; }
bool PhotoSpot_Challenge_05_IsAfter_Ready_Exp() { return GetEnum("Step_PhotoSpot_Challenge_05") > Ready; }
bool PhotoSpot_Challenge_05_IsAfter_Step01_Exp() { return GetEnum("Step_PhotoSpot_Challenge_05") > Step01; }
bool PhotoSpot_Challenge_05_IsAfter_Step02_Exp() { return GetEnum("Step_PhotoSpot_Challenge_05") > Step02; }
bool PhotoSpot_Challenge_05_IsCompleted_Exp() { return GetEnum("Step_PhotoSpot_Challenge_05") == Complete; }
bool PhotoSpot_Challenge_06_IsAfter_NotReady_Exp() { return GetEnum("Step_PhotoSpot_Challenge_06") > NotReady; }
bool PhotoSpot_Challenge_06_IsAfter_Ready_Exp() { return GetEnum("Step_PhotoSpot_Challenge_06") > Ready; }
bool PhotoSpot_Challenge_06_IsAfter_Step01_Exp() { return GetEnum("Step_PhotoSpot_Challenge_06") > Step01; }
bool PhotoSpot_Challenge_06_IsAfter_Step02_Exp() { return GetEnum("Step_PhotoSpot_Challenge_06") > Step02; }
bool PhotoSpot_Challenge_06_IsCompleted_Exp() { return GetEnum("Step_PhotoSpot_Challenge_06") == Complete; }
bool PhotoSpot_Challenge_07_IsAfter_NotReady_Exp() { return GetEnum("Step_PhotoSpot_Challenge_07") > NotReady; }
bool PhotoSpot_Challenge_07_IsAfter_Ready_Exp() { return GetEnum("Step_PhotoSpot_Challenge_07") > Ready; }
bool PhotoSpot_Challenge_07_IsAfter_Step01_Exp() { return GetEnum("Step_PhotoSpot_Challenge_07") > Step01; }
bool PhotoSpot_Challenge_07_IsAfter_Step02_Exp() { return GetEnum("Step_PhotoSpot_Challenge_07") > Step02; }
bool PhotoSpot_Challenge_07_IsCompleted_Exp() { return GetEnum("Step_PhotoSpot_Challenge_07") == Complete; }
bool PhotoSpot_Challenge_08_IsAfter_NotReady_Exp() { return GetEnum("Step_PhotoSpot_Challenge_08") > NotReady; }
bool PhotoSpot_Challenge_08_IsAfter_Ready_Exp() { return GetEnum("Step_PhotoSpot_Challenge_08") > Ready; }
bool PhotoSpot_Challenge_08_IsAfter_Step01_Exp() { return GetEnum("Step_PhotoSpot_Challenge_08") > Step01; }
bool PhotoSpot_Challenge_08_IsAfter_Step02_Exp() { return GetEnum("Step_PhotoSpot_Challenge_08") > Step02; }
bool PhotoSpot_Challenge_08_IsCompleted_Exp() { return GetEnum("Step_PhotoSpot_Challenge_08") == Complete; }
bool PhotoSpot_Challenge_09_2_IsAfter_NotReady_Exp() { return GetEnum("Step_PhotoSpot_Challenge_09_2") > NotReady; }
bool PhotoSpot_Challenge_09_2_IsAfter_Ready_Exp() { return GetEnum("Step_PhotoSpot_Challenge_09_2") > Ready; }
bool PhotoSpot_Challenge_09_2_IsAfter_Step01_Exp() { return GetEnum("Step_PhotoSpot_Challenge_09_2") > Step01; }
bool PhotoSpot_Challenge_09_2_IsCompleted_Exp() { return GetEnum("Step_PhotoSpot_Challenge_09_2") == Complete; }
bool PhotoSpot_Challenge_09_IsAfter_NotReady_Exp() { return GetEnum("Step_PhotoSpot_Challenge_09") > NotReady; }
bool PhotoSpot_Challenge_09_IsAfter_Ready_Exp() { return GetEnum("Step_PhotoSpot_Challenge_09") > Ready; }
bool PhotoSpot_Challenge_09_IsAfter_Step01_Exp() { return GetEnum("Step_PhotoSpot_Challenge_09") > Step01; }
bool PhotoSpot_Challenge_09_IsAfter_Step02_Exp() { return GetEnum("Step_PhotoSpot_Challenge_09") > Step02; }
bool PhotoSpot_Challenge_09_IsCompleted_Exp() { return GetEnum("Step_PhotoSpot_Challenge_09") == Complete; }
bool PhotoSpot_Challenge_10_IsAfter_NotReady_Exp() { return GetEnum("Step_PhotoSpot_Challenge_10") > NotReady; }
bool PhotoSpot_Challenge_10_IsAfter_Ready_Exp() { return GetEnum("Step_PhotoSpot_Challenge_10") > Ready; }
bool PhotoSpot_Challenge_10_IsAfter_Step01_Exp() { return GetEnum("Step_PhotoSpot_Challenge_10") > Step01; }
bool PhotoSpot_Challenge_10_IsAfter_Step02_Exp() { return GetEnum("Step_PhotoSpot_Challenge_10") > Step02; }
bool PhotoSpot_Challenge_10_IsCompleted_Exp() { return GetEnum("Step_PhotoSpot_Challenge_10") == Complete; }
bool PhotoSpot_Challenge_11_IsAfter_NotReady_Exp() { return GetEnum("Step_PhotoSpot_Challenge_11") > NotReady; }
bool PhotoSpot_Challenge_11_IsAfter_Ready_Exp() { return GetEnum("Step_PhotoSpot_Challenge_11") > Ready; }
bool PhotoSpot_Challenge_11_IsAfter_Step01_Exp() { return GetEnum("Step_PhotoSpot_Challenge_11") > Step01; }
bool PhotoSpot_Challenge_11_IsAfter_Step02_Exp() { return GetEnum("Step_PhotoSpot_Challenge_11") > Step02; }
bool PhotoSpot_Challenge_11_IsCompleted_Exp() { return GetEnum("Step_PhotoSpot_Challenge_11") == Complete; }
bool PhotoSpot_Challenge_12_IsAfter_NotReady_Exp() { return GetEnum("Step_PhotoSpot_Challenge_12") > NotReady; }
bool PhotoSpot_Challenge_12_IsAfter_Ready_Exp() { return GetEnum("Step_PhotoSpot_Challenge_12") > Ready; }
bool PhotoSpot_Challenge_12_IsAfter_Step01_Exp() { return GetEnum("Step_PhotoSpot_Challenge_12") > Step01; }
bool PhotoSpot_Challenge_12_IsAfter_Step02_Exp() { return GetEnum("Step_PhotoSpot_Challenge_12") > Step02; }
bool PhotoSpot_Challenge_12_IsCompleted_Exp() { return GetEnum("Step_PhotoSpot_Challenge_12") == Complete; }
bool PhotoSpot_Challenge_13_IsAfter_NotReady_Exp() { return GetEnum("Step_PhotoSpot_Challenge_13") > NotReady; }
bool PhotoSpot_Challenge_13_IsAfter_Ready_Exp() { return GetEnum("Step_PhotoSpot_Challenge_13") > Ready; }
bool PhotoSpot_Challenge_13_IsAfter_Step01_Exp() { return GetEnum("Step_PhotoSpot_Challenge_13") > Step01; }
bool PhotoSpot_Challenge_13_IsAfter_Step02_Exp() { return GetEnum("Step_PhotoSpot_Challenge_13") > Step02; }
bool PhotoSpot_Challenge_13_IsCompleted_Exp() { return GetEnum("Step_PhotoSpot_Challenge_13") == Complete; }
bool PhotoSpot_Challenge_14_IsAfter_NotReady_Exp() { return GetEnum("Step_PhotoSpot_Challenge_14") > NotReady; }
bool PhotoSpot_Challenge_14_IsAfter_Ready_Exp() { return GetEnum("Step_PhotoSpot_Challenge_14") > Ready; }
bool PhotoSpot_Challenge_14_IsAfter_Step01_Exp() { return GetEnum("Step_PhotoSpot_Challenge_14") > Step01; }
bool PhotoSpot_Challenge_14_IsAfter_Step02_Exp() { return GetEnum("Step_PhotoSpot_Challenge_14") > Step02; }
bool PhotoSpot_Challenge_14_IsCompleted_Exp() { return GetEnum("Step_PhotoSpot_Challenge_14") == Complete; }
bool PhotospotChallenge_Is_Available() { return (GetBoolExp("SageOfWind_IsCompleted_Exp") || GetBoolExp("SageOfFire_IsCompleted_Exp") || GetBoolExp("SageOfGerudo_IsCompleted_Exp") || GetBoolExp("SageOfZora_IsCompleted_Exp")) && GetBool("HorseInn_RegisteredAssociation"); }
bool Predefense_NpcOff() { return GetEnum("Step_SageOfGerudo") == PreDefenseStart || GetEnum("Step_SageOfGerudo") == PracticeEnd; }
bool Presence_BluePrintParts2() { return !GetBool("IsNow_KohgaAgain") && GetBool("IsGetReward_BluePrint2"); }
bool Presence_BluePrintParts4() { return !GetBool("IsNow_KohgaContinue") && GetBool("IsGetReward_BluePrint4"); }
bool Presence_BluePrintParts5() { return !GetBool("IsNow_KohgaFinal") && GetBool("IsGetReward_BluePrint5"); }
bool Raise_GoddesStatue_Courage_IsAfter_Ready_Exp() { return GetEnum("Step_Raise_GoddesStatue_Courage") > Ready; }
bool Raise_GoddesStatue_IsAfter_Ready_Exp() { return GetEnum("Step_Raise_GoddesStatue") > Ready; }
bool Raise_GoddesStatue_Power_IsAfter_Ready_Exp() { return GetEnum("Step_Raise_GoddesStatue_Power") > Ready; }
bool Raise_GoddesStatue_Wisdom_IsAfter_Ready_Exp() { return GetEnum("Step_Raise_GoddesStatue_Wisdom") > Ready; }
bool RepairArmor_IsAfter_NotReady_Exp() { return GetEnum("Step_RepairArmor") > NotReady; }
bool RepairArmor_IsAfter_Ready_Exp() { return GetEnum("Step_RepairArmor") > Ready; }
bool RepairArmor_IsAfter_SubmitMaterial_Exp() { return GetEnum("Step_RepairArmor") > SubmitMaterial; }
bool RepairArmor_IsCompleted_Exp() { return GetEnum("Step_RepairArmor") == Complete; }
bool Rescue_All_NewCanyonMissingPersonsCase() { return GetBool("Rescue_HatenoGate003_NewCanyonMissingPersonsCase") && GetBool("Rescue_FaronWoods007_NewCanyonMissingPersonsCase") && GetBool("Rescue_Road_001_NewCanyonMissingPersonsCase"); }
bool RescueHost_IsAfter_Ready_Exp() { return GetEnum("Step_RescueHost") > Ready; }
bool RescueHost_IsAfter_Reward_Exp() { return GetEnum("Step_RescueHost") > Reward; }
bool RescueHost_IsAfter_Step1_Exp() { return GetEnum("Step_RescueHost") > Step1; }
bool RescueHost_IsCompleted_Exp() { return GetEnum("Step_RescueHost") == Complete; }
bool RescueVehicle01_IsAfter_Ready_Exp() { return GetEnum("Step_RescueVehicle01") > Ready; }
bool RescueVehicle01_IsCompleted_Exp() { return GetEnum("Step_RescueVehicle01") == Complete; }
bool RescueVehicle01_OffLight_Goal() { return !((GetBool("RescueVehicle01_IsAlive_Miasma") || GetBool("RescueVehicle01_IsAlive")) && GetBool("RescueVehicle01_OnTrain")); }
bool RescueVehicle01_OffLight_Motta() { return (GetBool("RescueVehicle01_OnTrain") && GetBool("RescueVehicle01_IsAlive")) || !GetBoolExp("SageOfFire_IsCompleted_Exp"); }
bool RescueVehicle01_OffLight_Motta_Miasma() { return (GetBool("RescueVehicle01_OnTrain") && GetBool("RescueVehicle01_IsAlive_Miasma")) || GetBoolExp("SageOfFire_IsCompleted_Exp"); }
bool RescueWell_IsAfter_Ready_Exp() { return GetEnum("Step_RescueWell") > Ready; }
bool RescueWell_IsAfter_Repair_Exp() { return GetEnum("Step_RescueWell") > Repair; }
bool RescueWell_IsCompleted_Exp() { return GetEnum("Step_RescueWell") == Complete; }
bool ResearchEldin_And_SageOfFire_Completed() { return GetBoolExp("ResearchEldin_IsAfter_SolveAProblem_Exp") && GetBoolExp("Step_SageOfFire_VillagersSchedule"); }
bool ResearchEldin_IsAfter_Reward_Exp() { return GetEnum("Step_ResearchEldin") > Reward; }
bool ResearchEldin_IsAfter_SolveAProblem_Exp() { return GetEnum("Step_ResearchEldin") > SolveAProblem; }
bool ResearchEldin_IsCompleted_Exp() { return GetEnum("Step_ResearchEldin") == Complete; }
bool ResearchLanayru_IsAfter_CleanMessenger_Exp() { return GetEnum("Step_ResearchLanayru") > CleanMessenger; }
bool ResearchLanayru_IsAfter_GetPresent_Exp() { return GetEnum("Step_ResearchLanayru") > GetPresent; }
bool ResearchLanayru_IsAfter_GetPresent_Village_Exp() { return GetEnum("Step_ResearchLanayru") > GetPresent_Village; }
bool ResearchLanayru_IsAfter_NotReady_Exp() { return GetEnum("Step_ResearchLanayru") > NotReady; }
bool ResearchLanayru_IsAfter_Ready_Exp() { return GetEnum("Step_ResearchLanayru") > Ready; }
bool ResearchLanayru_IsCompleted_Exp() { return GetEnum("Step_ResearchLanayru") == Complete; }
bool RestaurantInTheWell_IsAfter_MakeFood_Exp() { return GetEnum("Step_RestaurantInTheWell") > MakeFood; }
bool RestaurantInTheWell_IsAfter_Ready_Exp() { return GetEnum("Step_RestaurantInTheWell") > Ready; }
bool RestaurantInTheWell_IsCompleted_Exp() { return GetEnum("Step_RestaurantInTheWell") == Complete; }
bool Revive_Inn_BoolExp() { return GetBool("Revive_Inn_Move") && GetBool("Revive_Inn"); }
bool Revive_LeaderHouse_BoolExp() { return GetBool("Revive_LeaderHouse_Move") && GetBool("Revive_LeaderHouse"); }
bool Revive_LeaderHouse_DeleteBase_BoolExp() { return !GetBool("Revive_LeaderHouse") && GetBool("Uotori_RevivePlan_Groundwork"); }
bool Revive_PrivateHouse_BoolExp() { return GetBool("Revive_PrivateHouse_Move") && GetBool("Revive_PrivateHouse"); }
bool Revive_PrivateHouse_DeleteBase_BoolExp() { return !GetBool("Revive_PrivateHouse") && GetBool("Uotori_RevivePlan_Groundwork"); }
bool Revive_RepairedEvenOnce() { return GetBool("Revive_PrivateHouse") || GetBool("Revive_LeaderHouse") || GetBool("Revive_TreasureShop") || GetBool("Revive_Restaurant") || GetBool("Revive_Inn"); }
bool Revive_Restaurant_BoolExp() { return GetBool("Revive_Restaurant_Move") && GetBool("Revive_Restaurant"); }
bool Revive_Restaurant_DeleteBase_BoolExp() { return GetBool("Uotori_RevivePlan_Groundwork") && !GetBool("Revive_Restaurant"); }
bool Revive_TreasureShop_BoolExp() { return GetBool("Revive_TreasureShop_Move") && GetBool("Revive_TreasureShop"); }
bool Revive_TreasureShop_DeleteBase_BoolExp() { return !GetBool("Revive_TreasureShop") && GetBool("Uotori_RevivePlan_Groundwork"); }
bool Rito_ItemExchange_IsAfter_Collect_Exp() { return GetEnum("Step_Rito_ItemExchange") > Collect; }
bool Rito_ItemExchange_IsAfter_Ready_Exp() { return GetEnum("Step_Rito_ItemExchange") > Ready; }
bool Rito_ItemExchange_IsCompleted_Exp() { return GetEnum("Step_Rito_ItemExchange") == Complete; }
bool Rito_MedoArmor_IsAfter_Ready_Exp() { return GetEnum("Step_Rito_MedoArmor") > Ready; }
bool Rito_MedoArmor_IsAfter_Search_Exp() { return GetEnum("Step_Rito_MedoArmor") > Search; }
bool Rito_MedoArmor_IsCompleted_Exp() { return GetEnum("Step_Rito_MedoArmor") == Complete; }
bool Rito_Npc_AfterSecretStoneOrAfterSong() { return GetBool("Rito_Npc_AfterSong") || GetBoolExp("SageOfWind_IsAfter_TouchSecretStone_Exp"); }
bool Rito_RevaliWeapon_IsAfter_Collect_Exp() { return GetEnum("Step_Rito_RevaliWeapon") > Collect; }
bool Rito_RevaliWeapon_IsAfter_Ready_Exp() { return GetEnum("Step_Rito_RevaliWeapon") > Ready; }
bool Rito_RevaliWeapon_IsCompleted_Exp() { return GetEnum("Step_Rito_RevaliWeapon") == Complete; }
bool Rito_ShadowCave_IsAfter_GetHint_Exp() { return GetEnum("Step_Rito_ShadowCave") > GetHint; }
bool Rito_ShadowCave_IsAfter_Ready_Exp() { return GetEnum("Step_Rito_ShadowCave") > Ready; }
bool Rito_ShadowCave_IsAfter_Search_Exp() { return GetEnum("Step_Rito_ShadowCave") > Search; }
bool Rito_ShadowCave_IsCompleted_Exp() { return GetEnum("Step_Rito_ShadowCave") == Complete; }
bool RitoBridgeRepair_IsAfter_Collect_Exp() { return GetEnum("Step_RitoBridgeRepair") > Collect; }
bool RitoBridgeRepair_IsAfter_NotReady_Exp() { return GetEnum("Step_RitoBridgeRepair") > NotReady; }
bool RitoBridgeRepair_IsAfter_Ready_Exp() { return GetEnum("Step_RitoBridgeRepair") > Ready; }
bool RitoBridgeRepair_IsAfter_Report_Exp() { return GetEnum("Step_RitoBridgeRepair") > Report; }
bool RitoBridgeRepair_IsAfter_Search_Exp() { return GetEnum("Step_RitoBridgeRepair") > Search; }
bool RitoBridgeRepair_IsCompleted_Exp() { return GetEnum("Step_RitoBridgeRepair") == Complete; }
bool Russel_ShopExist_Exp() { return GetBool("ShieldSurfing_FirstPlay") && !(GetEnum("Step_ShieldSurfing_MiniGame") == Playing); }
bool SageOfFire_IsAfter_DefeatBoss_Exp() { return GetEnum("Step_SageOfFire") > DefeatBoss; }
bool SageOfFire_IsAfter_DefeatBossMiddle_Exp() { return GetEnum("Step_SageOfFire") > DefeatBossMiddle; }
bool SageOfFire_IsAfter_Dream_Exp() { return GetEnum("Step_SageOfFire") > Dream; }
bool SageOfFire_IsAfter_Dungeon_Exp() { return GetEnum("Step_SageOfFire") > Dungeon; }
bool SageOfFire_IsAfter_Finale_Exp() { return GetEnum("Step_SageOfFire") > Finale; }
bool SageOfFire_IsAfter_GoCrater_Exp() { return GetEnum("Step_SageOfFire") > GoCrater; }
bool SageOfFire_IsAfter_GoDungeon_Exp() { return GetEnum("Step_SageOfFire") > GoDungeon; }
bool SageOfFire_IsAfter_GoEntranceDungeon_Exp() { return GetEnum("Step_SageOfFire") > GoEntranceDungeon; }
bool SageOfFire_IsAfter_GoMinusField_Exp() { return GetEnum("Step_SageOfFire") > GoMinusField; }
bool SageOfFire_IsAfter_Ready_Exp() { return GetEnum("Step_SageOfFire") > Ready; }
bool SageOfFire_IsAfter_StartBossBattle_Exp() { return GetEnum("Step_SageOfFire") > StartBossBattle; }
bool SageOfFire_IsAfter_TouchSecretStone_Exp() { return GetEnum("Step_SageOfFire") > TouchSecretStone; }
bool SageOfFire_IsCompleted_Exp() { return GetEnum("Step_SageOfFire") == Complete; }
bool SageOfFire_Presence_BossMiddle() { return !GetBool("SageOfFire_Defeat_BossMiddle") && GetBoolExp("SageOfFire_IsAfter_Dream_Exp"); }
bool SageOfFire_Presence_BossMiddle_AirPlane() { return !GetBool("SageOfFire_Defeat_BossMiddle") && GetBool("SageOfFire_Appear_BossMiddleAirPlane"); }
bool SageOfFire_StepToBossBattle() { return GetBool("LargeDungeonFire_FloatUpMiasma") && GetBoolExp("LargeDungeonFire_ClearTerminal"); }
bool SageOfFire_Yunbo_InMinusField() { return !GetBoolExp("SageOfFire_IsAfter_TouchSecretStone_Exp") && GetBoolExp("SageOfFire_IsAfter_DefeatBossMiddle_Exp"); }
bool SageOfFire_YunboGoCrater() { return !GetBool("Unknown_0xea5a91f8") && GetEnum("Step_SageOfFire") == GoCrater; }
bool SageOfGerudo_Before_DungeonEnd_Not_DefenseStart_Exp() { return !(GetEnum("Step_SageOfGerudo") == DefenseStart) && !GetBoolExp("SageOfGerudo_IsAfter_DungeonBossDead_Exp"); }
bool Unknown_0x842b5dc3() { return (!GetBool("DefeatGanondorf_AppearGerudoBoss") && GetBool("DefeatGanondorf_ArmyClear")) || (GetBoolExp("SageOfGerudo_IsAfter_DungeonStart_Exp") && !GetBool("DefeatGanondorf_ArmyClear")); }
bool SageOfGerudo_DeployCannonD_Exp() { return !(GetBool("SageOfGerudo_DeployCannonW") || GetBool("SageOfGerudo_DeployCannonN") || GetBool("SageOfGerudo_DeployCannonE")) && (GetEnum("Step_SageOfGerudo") == DefenseStart || GetEnum("Step_SageOfGerudo") == DefenseReady || GetEnum("Step_SageOfGerudo") == PreDefenseEnd); }
bool SageOfGerudo_DeployCannonE_Exp() { return (GetEnum("Step_SageOfGerudo") == DefenseStart || GetEnum("Step_SageOfGerudo") == DefenseReady || GetEnum("Step_SageOfGerudo") == PreDefenseEnd) && GetBool("SageOfGerudo_DeployCannonE"); }
bool SageOfGerudo_DeployCannonE_InBattle_Exp() { return GetBool("SageOfGerudo_DeployCannonE") && GetBool("SageOfGerudo_InBattle"); }
bool SageOfGerudo_DeployCannonN_Exp() { return (GetEnum("Step_SageOfGerudo") == DefenseStart || GetEnum("Step_SageOfGerudo") == DefenseReady || GetEnum("Step_SageOfGerudo") == PreDefenseEnd) && GetBool("SageOfGerudo_DeployCannonN"); }
bool SageOfGerudo_DeployCannonN_InBattle_Exp() { return GetBool("SageOfGerudo_DeployCannonN") && GetBool("SageOfGerudo_InBattle"); }
bool SageOfGerudo_DeployCannonW_Exp() { return (GetEnum("Step_SageOfGerudo") == DefenseStart || GetEnum("Step_SageOfGerudo") == DefenseReady || GetEnum("Step_SageOfGerudo") == PreDefenseEnd) && GetBool("SageOfGerudo_DeployCannonW"); }
bool SageOfGerudo_DeployCannonW_InBattle_Exp() { return GetBool("SageOfGerudo_DeployCannonW") && GetBool("SageOfGerudo_InBattle"); }
bool SageOfGerudo_Deployed() { return GetBool("SageOfGerudo_DeploySwordN") || GetBool("SageOfGerudo_DeploySwordW") || GetBool("SageOfGerudo_DeploySwordE") || GetBool("SageOfGerudo_DeploySpearN") || GetBool("SageOfGerudo_DeploySpearW") || GetBool("SageOfGerudo_DeploySpearE") || GetBool("SageOfGerudo_DeployCannonN") || GetBool("SageOfGerudo_DeployCannonW") || GetBool("SageOfGerudo_DeployCannonE"); }
bool SageOfGerudo_DeployFenceE_Exp() { return (GetEnum("Step_SageOfGerudo") == DefenseStart || GetEnum("Step_SageOfGerudo") == DefenseReady || GetEnum("Step_SageOfGerudo") == PreDefenseEnd) && GetBool("SageOfGerudo_DeployFenceE"); }
bool SageOfGerudo_DeployFenceN_Exp() { return (GetEnum("Step_SageOfGerudo") == DefenseStart || GetEnum("Step_SageOfGerudo") == DefenseReady || GetEnum("Step_SageOfGerudo") == PreDefenseEnd) && GetBool("SageOfGerudo_DeployFenceN"); }
bool SageOfGerudo_DeployFenceW_Exp() { return (GetEnum("Step_SageOfGerudo") == DefenseStart || GetEnum("Step_SageOfGerudo") == DefenseReady || GetEnum("Step_SageOfGerudo") == PreDefenseEnd) && GetBool("SageOfGerudo_DeployFenceW"); }
bool SageOfGerudo_DeploySpearC_InBattle_Exp() { return GetBool("SageOfGerudo_InBattle") && GetBool("SageOfGerudo_DeploySpearC"); }
bool SageOfGerudo_DeploySpearD_Exp() { return !(GetBool("SageOfGerudo_DeploySpearW") || GetBool("SageOfGerudo_DeploySpearN") || GetBool("SageOfGerudo_DeploySpearE")) && (GetEnum("Step_SageOfGerudo") == DefenseReady || GetEnum("Step_SageOfGerudo") == PreDefenseEnd); }
bool SageOfGerudo_DeploySpearE_Exp() { return (GetEnum("Step_SageOfGerudo") == DefenseReady || GetEnum("Step_SageOfGerudo") == PreDefenseEnd) && GetBool("SageOfGerudo_DeploySpearE"); }
bool SageOfGerudo_DeploySpearE_InBattle_Exp() { return GetBool("SageOfGerudo_InBattle") && GetBool("SageOfGerudo_DeploySpearE"); }
bool SageOfGerudo_DeploySpearN_Exp() { return (GetEnum("Step_SageOfGerudo") == DefenseReady || GetEnum("Step_SageOfGerudo") == PreDefenseEnd) && GetBool("SageOfGerudo_DeploySpearN"); }
bool SageOfGerudo_DeploySpearN_InBattle_Exp() { return GetBool("SageOfGerudo_InBattle") && GetBool("SageOfGerudo_DeploySpearN"); }
bool SageOfGerudo_DeploySpearW_Exp() { return (GetEnum("Step_SageOfGerudo") == DefenseReady || GetEnum("Step_SageOfGerudo") == PreDefenseEnd) && GetBool("SageOfGerudo_DeploySpearW"); }
bool SageOfGerudo_DeploySpearW_InBattle_Exp() { return GetBool("SageOfGerudo_InBattle") && GetBool("SageOfGerudo_DeploySpearW"); }
bool SageOfGerudo_DeploySwordC_InBattle_Exp() { return GetBool("SageOfGerudo_InBattle") && GetBool("SageOfGerudo_DeploySwordC"); }
bool SageOfGerudo_DeploySwordD_Exp() { return !(GetBool("SageOfGerudo_DeploySwordW") || GetBool("SageOfGerudo_DeploySwordN") || GetBool("SageOfGerudo_DeploySwordE")) && (GetEnum("Step_SageOfGerudo") == DefenseReady || GetEnum("Step_SageOfGerudo") == PreDefenseEnd); }
bool SageOfGerudo_DeploySwordE_Exp() { return (GetEnum("Step_SageOfGerudo") == DefenseReady || GetEnum("Step_SageOfGerudo") == PreDefenseEnd) && GetBool("SageOfGerudo_DeploySwordE"); }
bool SageOfGerudo_DeploySwordE_InBattle_Exp() { return GetBool("SageOfGerudo_InBattle") && GetBool("SageOfGerudo_DeploySwordE"); }
bool SageOfGerudo_DeploySwordN_Exp() { return (GetEnum("Step_SageOfGerudo") == DefenseReady || GetEnum("Step_SageOfGerudo") == PreDefenseEnd) && GetBool("SageOfGerudo_DeploySwordN"); }
bool SageOfGerudo_DeploySwordN_InBattle_Exp() { return GetBool("SageOfGerudo_InBattle") && GetBool("SageOfGerudo_DeploySwordN"); }
bool SageOfGerudo_DeploySwordW_Exp() { return (GetEnum("Step_SageOfGerudo") == DefenseReady || GetEnum("Step_SageOfGerudo") == PreDefenseEnd) && GetBool("SageOfGerudo_DeploySwordW"); }
bool SageOfGerudo_DeploySwordW_InBattle_Exp() { return GetBool("SageOfGerudo_InBattle") && GetBool("SageOfGerudo_DeploySwordW"); }
bool SageOfGerudo_Equal_DefenseStart_Exp() { return GetEnum("Step_SageOfGerudo") == DefenseStart; }
bool SageOfGerudo_Equal_DefenseStart_ForKorokPresence_Exp() { return GetBoolExp("SageOfGerudo_Equal_DefenseStart_Exp"); }
bool SageOfGerudo_Equal_DungeonFind_Exp() { return GetEnum("Step_SageOfGerudo") == DungeonFind; }
bool SageOfGerudo_Equal_DungeonSearch_Exp() { return GetEnum("Step_SageOfGerudo") == DungeonSearch; }
bool SageOfGerudo_Equal_PreDefenseStart_Exp() { return GetEnum("Step_SageOfGerudo") == PreDefenseStart; }
bool SageOfGerudo_FieldFollowArea() { return GetEnum("Step_SageOfGerudo") == DungeonStart && !GetBool("SageOfGerudo_DungeonBossFindAgain"); }
bool SageOfGerudo_FieldFollowAreaBoss() { return GetEnum("Step_SageOfGerudo") == DungeonStart && GetBool("SageOfGerudo_DungeonBossFindAgain"); }
bool SageOfGerudo_IsAfter_DefenseEnd_Exp() { return GetEnum("Step_SageOfGerudo") > DefenseEnd; }
bool SageOfGerudo_IsAfter_DefenseReady_Exp() { return GetEnum("Step_SageOfGerudo") > DefenseReady; }
bool SageOfGerudo_IsAfter_DefenseStart_Exp() { return GetEnum("Step_SageOfGerudo") > DefenseStart; }
bool SageOfGerudo_IsAfter_DungeonBossDead_Exp() { return GetEnum("Step_SageOfGerudo") > DungeonBossDead; }
bool SageOfGerudo_IsAfter_DungeonEnd_Exp() { return GetEnum("Step_SageOfGerudo") > DungeonEnd; }
bool SageOfGerudo_IsAfter_DungeonFind_Exp() { return GetEnum("Step_SageOfGerudo") > DungeonFind; }
bool SageOfGerudo_IsAfter_DungeonSearch_Exp() { return GetEnum("Step_SageOfGerudo") > DungeonSearch; }
bool SageOfGerudo_IsAfter_DungeonStart_Exp() { return GetEnum("Step_SageOfGerudo") > DungeonStart; }
bool SageOfGerudo_IsAfter_PracticeEnd_Exp() { return GetEnum("Step_SageOfGerudo") > PracticeEnd; }
bool SageOfGerudo_IsAfter_PracticeStart_Exp() { return GetEnum("Step_SageOfGerudo") > PracticeStart; }
bool SageOfGerudo_IsAfter_PreDefenseEnd_Exp() { return GetEnum("Step_SageOfGerudo") > PreDefenseEnd; }
bool SageOfGerudo_IsAfter_PreDefenseStart_Exp() { return GetEnum("Step_SageOfGerudo") > PreDefenseStart; }
bool SageOfGerudo_IsAfter_Underground_Exp() { return GetEnum("Step_SageOfGerudo") > Underground; }
bool SageOfGerudo_IsCompleted_Exp() { return GetEnum("Step_SageOfGerudo") == Complete; }
bool SageOfGerudo_RougeUnderground_Exp() { return GetEnum("Step_SageOfGerudo") == DungeonSearch || GetEnum("Step_SageOfGerudo") == DefenseEnd; }
bool SageOfGerudo_StrageSetRemovalStep_Exp() { return GetEnum("Step_SageOfGerudo") == DefenseStart || GetEnum("Step_SageOfGerudo") == DefenseReady || GetEnum("Step_SageOfGerudo") == PreDefenseEnd; }
bool SageOfGerudo_WeaponAttachStep_Exp() { return GetEnum("Step_SageOfGerudo") == DefenseStart || GetEnum("Step_SageOfGerudo") == DefenseReady || GetEnum("Step_SageOfGerudo") == PreDefenseEnd; }
bool SageOfSky_IsCompleted_Exp() { return GetEnum("Step_SageOfSky") == Complete; }
bool SageOfSoul_IsAfter_CarryHead_CheckPoint01_Exp() { return GetEnum("Step_SageOfSoul") > CarryHead_CheckPoint01; }
bool SageOfSoul_IsAfter_CarryHead_CheckPoint02_Exp() { return GetEnum("Step_SageOfSoul") > CarryHead_CheckPoint02; }
bool SageOfSoul_IsAfter_CarryHead_CheckPoint04_Exp() { return GetEnum("Step_SageOfSoul") > CarryHead_CheckPoint04; }
bool SageOfSoul_IsAfter_Collected_AllParts_Exp() { return GetEnum("Step_SageOfSoul") > Collected_AllParts; }
bool SageOfSoul_IsAfter_Dungeon_BeforeBossBattle_Exp() { return GetEnum("Step_SageOfSoul") > Dungeon_BeforeBossBattle; }
bool SageOfSoul_IsAfter_Dungeon_DefeatedBoss_Exp() { return GetEnum("Step_SageOfSoul") > Dungeon_DefeatedBoss; }
bool SageOfSoul_IsAfter_Dungeon_DuringDungeonCapture_Exp() { return GetEnum("Step_SageOfSoul") > Dungeon_DuringDungeonCapture; }
bool SageOfSoul_IsAfter_Dungeon_Entrance_Exp() { return GetEnum("Step_SageOfSoul") > Dungeon_Entrance; }
bool SageOfSoul_IsAfter_GolemAppearance_Exp() { return GetEnum("Step_SageOfSoul") > GolemAppearance; }
bool SageOfSoul_IsAfter_LightSpotOn_Exp() { return GetEnum("Step_SageOfSoul") > LightSpotOn; }
bool SageOfSoul_IsAfter_Ready_Exp() { return GetEnum("Step_SageOfSoul") > Ready; }
bool SageOfSoul_IsCompleted_Exp() { return GetEnum("Step_SageOfSoul") == Complete; }
bool SageOfSoul_SatelliteTemple_LightOn_ChangeActor1() { return !GetBool("SageOfSoul_Insert_LeftLeg") && GetBool("SageOfSoul_SatelliteTemple_LightOn_ChangeActor"); }
bool SageOfSoul_SatelliteTemple_LightOn_ChangeActor2() { return !GetBool("SageOfSoul_Insert_RightArm") && GetBool("SageOfSoul_SatelliteTemple_LightOn_ChangeActor"); }
bool SageOfSoul_SatelliteTemple_LightOn_ChangeActor3() { return !GetBool("SageOfSoul_Insert_RightLeg") && GetBool("SageOfSoul_SatelliteTemple_LightOn_ChangeActor"); }
bool SageOfSoul_SatelliteTemple_LightOn_ChangeActor4() { return !GetBool("SageOfSoul_Insert_LeftArm") && GetBool("SageOfSoul_SatelliteTemple_LightOn_ChangeActor"); }
bool SageOfWind_AbnormalWeatherDisappearDemo_Played() { return GetBool("HavePlayedEvent.Dm_RT_0018"); }
bool SageOfWind_CumulonimbusDel() { return GetBoolExp("MainChallenge_IsAfter_DefeatBlackDragon_Exp") || GetBoolExp("SageOfWind_IsAfter_DefeatBoss_Exp"); }
bool SageOfWind_IsAfter_BossBattle_Exp() { return GetEnum("Step_SageOfWind") > BossBattle; }
bool SageOfWind_IsAfter_CheckTerminal_Exp() { return GetEnum("Step_SageOfWind") > CheckTerminal; }
bool SageOfWind_IsAfter_DefeatBoss_Exp() { return GetEnum("Step_SageOfWind") > DefeatBoss; }
bool SageOfWind_IsAfter_DefeatEnemy_Exp() { return GetEnum("Step_SageOfWind") > DefeatEnemy; }
bool SageOfWind_IsAfter_DungeonStart_Exp() { return GetEnum("Step_SageOfWind") > DungeonStart; }
bool SageOfWind_IsAfter_Finish_Exp() { return GetEnum("Step_SageOfWind") > Finish; }
bool SageOfWind_IsAfter_FoundTulin_Exp() { return GetEnum("Step_SageOfWind") > FoundTulin; }
bool SageOfWind_IsAfter_GetBack_Exp() { return GetEnum("Step_SageOfWind") > GetBack; }
bool SageOfWind_IsAfter_GoDungeon_Exp() { return GetEnum("Step_SageOfWind") > GoDungeon; }
bool SageOfWind_IsAfter_GoToCave_Exp() { return GetEnum("Step_SageOfWind") > GoToCave; }
bool SageOfWind_IsAfter_GoToHebra_Exp() { return GetEnum("Step_SageOfWind") > GoToHebra; }
bool SageOfWind_IsAfter_IpponSugi_Exp() { return GetEnum("Step_SageOfWind") > IpponSugi; }
bool SageOfWind_IsAfter_MountainHut_Exp() { return GetEnum("Step_SageOfWind") > MountainHut; }
bool SageOfWind_IsAfter_NotReady_Exp() { return GetEnum("Step_SageOfWind") > NotReady; }
bool SageOfWind_IsAfter_Ready_Exp() { return GetEnum("Step_SageOfWind") > Ready; }
bool SageOfWind_IsAfter_TouchSecretStone_Exp() { return GetEnum("Step_SageOfWind") > TouchSecretStone; }
bool SageOfWind_IsCompleted_Exp() { return GetEnum("Step_SageOfWind") == Complete; }
bool SageOfWind_IsProgress_CheckTerminal_Exp() { return GetEnum("Step_SageOfWind") == CheckTerminal; }
bool SageOfWind_Ready_SquareRelocation() { return (!GetBool("SageOfWind_Ready_WarpDelete") || GetBool("SageOfWind_AfterReadyStep")) && GetBoolExp("SageOfWind_IsAfter_Ready_Exp"); }
bool SageOfWind_SquareRelocation() { return (!GetBool("SageOfWind_WarpDelete") || GetBool("SageOfWind_AfterCompleteStep")) && GetBoolExp("SageOfWind_IsCompleted_Exp"); }
bool SageOfZora_AllTerminalOn() { return GetBool("SageOfZora_CheckTerminal05") && GetBool("SageOfZora_CheckTerminal04") && GetBool("SageOfZora_CheckTerminal03") && GetBool("SageOfZora_CheckTerminal02") && GetBool("SageOfZora_CheckTerminal01"); }
bool SageOfZora_Equal_DefeatBoss_Exp() { return GetEnum("Step_SageOfZora") == DefeatBoss; }
bool SageOfZora_IsAfter_DefeatBoss_Exp() { return GetEnum("Step_SageOfZora") > DefeatBoss; }
bool SageOfZora_IsAfter_DefeatLakeBoss_Exp() { return GetEnum("Step_SageOfZora") > DefeatLakeBoss; }
bool SageOfZora_IsAfter_FindWaterBridge_Exp() { return GetEnum("Step_SageOfZora") > FindWaterBridge; }
bool SageOfZora_IsAfter_Finish_Exp() { return GetEnum("Step_SageOfZora") > Finish; }
bool SageOfZora_IsAfter_GoToBeforeDungeon_00_Exp() { return GetEnum("Step_SageOfZora") > GoToBeforeDungeon_00; }
bool SageOfZora_IsAfter_GoToBeforeDungeon_Exp() { return GetEnum("Step_SageOfZora") > GoToBeforeDungeon; }
bool SageOfZora_IsAfter_GoToBossArea_Exp() { return GetEnum("Step_SageOfZora") > GoToBossArea; }
bool SageOfZora_IsAfter_GoToDungeonStart_Exp() { return GetEnum("Step_SageOfZora") > GoToDungeonStart; }
bool SageOfZora_IsAfter_GoToLakeShido_Exp() { return GetEnum("Step_SageOfZora") > GoToLakeShido; }
bool SageOfZora_IsAfter_GoToUnderLake_Exp() { return GetEnum("Step_SageOfZora") > GoToUnderLake; }
bool SageOfZora_IsAfter_InterimReportToShido_Ex_Exp() { return GetEnum("Step_SageOfZora") > InterimReportToShido_Ex; }
bool SageOfZora_IsAfter_InterimReportToShido_Exp() { return GetEnum("Step_SageOfZora") > InterimReportToShido; }
bool SageOfZora_IsAfter_MeetParkShido_Exp() { return GetEnum("Step_SageOfZora") > MeetParkShido; }
bool SageOfZora_IsAfter_NotReady_Exp() { return GetEnum("Step_SageOfZora") > NotReady; }
bool SageOfZora_IsAfter_Ready_Exp() { return GetEnum("Step_SageOfZora") > Ready; }
bool SageOfZora_IsAfter_ReportToParkShido_Exp() { return GetEnum("Step_SageOfZora") > ReportToParkShido; }
bool SageOfZora_IsAfter_ResearchZora_Exp() { return GetEnum("Step_SageOfZora") > ResearchZora; }
bool SageOfZora_IsAfter_SearchRemains_Exp() { return GetEnum("Step_SageOfZora") > SearchRemains; }
bool SageOfZora_IsAfter_TouchSecretStone_Exp() { return GetEnum("Step_SageOfZora") > TouchSecretStone; }
bool SageOfZora_IsAfter_TryOneTank_Exp() { return GetEnum("Step_SageOfZora") > TryOneTank; }
bool SageOfZora_IsCompleted_Exp() { return GetEnum("Step_SageOfZora") == Complete; }
bool SaihateSubjugation_IsAfter_Ready_Exp() { return GetEnum("Step_SaihateSubjugation") > Ready; }
bool SaihateSubjugation_IsAfter_Step1_Exp() { return GetEnum("Step_SaihateSubjugation") > Step1; }
bool SaihateSubjugation_IsAfter_Step2_Exp() { return GetEnum("Step_SaihateSubjugation") > Step2; }
bool SaihateSubjugation_IsAfter_Step3_Exp() { return GetEnum("Step_SaihateSubjugation") > Step3; }
bool SaihateSubjugation_IsAfter_Step4_Exp() { return GetEnum("Step_SaihateSubjugation") > Step4; }
bool SaihateSubjugation_IsAfter_Step5_Exp() { return GetEnum("Step_SaihateSubjugation") > Step5; }
bool SaihateSubjugation_IsAfter_Step6_Exp() { return GetEnum("Step_SaihateSubjugation") > Step6; }
bool SaihateSubjugation_IsAfter_Step7_Exp() { return GetEnum("Step_SaihateSubjugation") > Step7; }
bool SaihateSubjugation_IsCompleted_Exp() { return GetEnum("Step_SaihateSubjugation") == Complete; }
bool SearchCaravan_IsAfter_Ready_Exp() { return GetEnum("Step_SearchCaravan") > Ready; }
bool SearchCaravan_IsAfter_Step1_Exp() { return GetEnum("Step_SearchCaravan") > Step1; }
bool SearchCaravan_IsAfter_Step1a_Exp() { return GetEnum("Step_SearchCaravan") > Step1a; }
bool SearchCaravan_IsCompleted_Exp() { return GetEnum("Step_SearchCaravan") == Complete; }
bool SecretBase_MiniGame_IsAfter_NotReady_Exp() { return GetEnum("Step_SecretBase_MiniGame") > NotReady; }
bool SecretBase_MiniGame_IsAfter_Play_Exp() { return GetEnum("Step_SecretBase_MiniGame") > Play; }
bool SecretBase_MiniGame_IsAfter_Ready_Exp() { return GetEnum("Step_SecretBase_MiniGame") > Ready; }
bool SecretBase_MiniGame_IsAfter_Retry_Exp() { return GetEnum("Step_SecretBase_MiniGame") > Retry; }
bool SecretBase_MiniGame_IsAfter_TimeOver_Exp() { return GetEnum("Step_SecretBase_MiniGame") > TimeOver; }
bool SecretBase_MiniGame_IsCompleted_Exp() { return GetEnum("Step_SecretBase_MiniGame") == Complete; }
bool ShieldSurfing_MaxPouchNow() { return GetBool("ShieldSurfing_Reward9_MaxPouch") || GetBool("ShieldSurfing_Reward8_MaxPouch") || GetBool("ShieldSurfing_Reward7_MaxPouch") || GetBool("ShieldSurfing_Reward6_MaxPouch") || GetBool("ShieldSurfing_Reward5_MaxPouch") || GetBool("ShieldSurfing_Reward4_MaxPouch") || GetBool("ShieldSurfing_Reward3_MaxPouch") || GetBool("ShieldSurfing_Reward2_MaxPouch") || GetBool("ShieldSurfing_Reward1_MaxPouch"); }
bool ShieldSurfing_MiniGame_IsAfter_NotReady_Exp() { return GetEnum("Step_ShieldSurfing_MiniGame") > NotReady; }
bool ShieldSurfing_MiniGame_IsAfter_Playing_Exp() { return GetEnum("Step_ShieldSurfing_MiniGame") > Playing; }
bool ShieldSurfing_MiniGame_IsAfter_Ready_Exp() { return GetEnum("Step_ShieldSurfing_MiniGame") > Ready; }
bool ShieldSurfing_MiniGame_IsAfter_Retry_Exp() { return GetEnum("Step_ShieldSurfing_MiniGame") > Retry; }
bool ShieldSurfing_MiniGame_IsAfter_TimeOver_Exp() { return GetEnum("Step_ShieldSurfing_MiniGame") > TimeOver; }
bool ShieldSurfing_MiniGame_IsCompleted_Exp() { return GetEnum("Step_ShieldSurfing_MiniGame") == Complete; }
bool ShieldSurfing_RewardComplete() { return GetBool("ShieldSurfing_Reward9_Get") && GetBool("ShieldSurfing_Reward8_Get") && GetBool("ShieldSurfing_Reward7_Get") && GetBool("ShieldSurfing_Reward6_Get") && GetBool("ShieldSurfing_Reward5_Get") && GetBool("ShieldSurfing_Reward4_Get") && GetBool("ShieldSurfing_Reward3_Get") && GetBool("ShieldSurfing_Reward2_Get") && GetBool("ShieldSurfing_Reward1_Get"); }
bool SkyIsland_AfterHeavySnow() { return GetBoolExp("SageOfWind_IsAfter_TouchSecretStone_Exp"); }
bool SkyIsland_MiniGame_01_IsAfter_EasyGamePlaying_Exp() { return GetEnum("Step_SkyIsland_MiniGame_01") > EasyGamePlaying; }
bool SkyIsland_MiniGame_01_IsAfter_Finish_Exp() { return GetEnum("Step_SkyIsland_MiniGame_01") > Finish; }
bool SkyIsland_MiniGame_01_IsAfter_HardGamePlaying_Exp() { return GetEnum("Step_SkyIsland_MiniGame_01") > HardGamePlaying; }
bool SkyIsland_MiniGame_01_IsAfter_Ready_Exp() { return GetEnum("Step_SkyIsland_MiniGame_01") > Ready; }
bool SkyIsland_MiniGame_02_IsAfter_EasyGamePlaying_Exp() { return GetEnum("Step_SkyIsland_MiniGame_02") > EasyGamePlaying; }
bool SkyIsland_MiniGame_02_IsAfter_Finish_Exp() { return GetEnum("Step_SkyIsland_MiniGame_02") > Finish; }
bool SkyIsland_MiniGame_02_IsAfter_HardGamePlaying_Exp() { return GetEnum("Step_SkyIsland_MiniGame_02") > HardGamePlaying; }
bool SkyIsland_MiniGame_02_IsAfter_Ready_Exp() { return GetEnum("Step_SkyIsland_MiniGame_02") > Ready; }
bool SkyIsland_MiniGame_03_IsAfter_EasyGamePlaying_Exp() { return GetEnum("Step_SkyIsland_MiniGame_03") > EasyGamePlaying; }
bool SkyIsland_MiniGame_03_IsAfter_Finish_Exp() { return GetEnum("Step_SkyIsland_MiniGame_03") > Finish; }
bool SkyIsland_MiniGame_03_IsAfter_HardGamePlaying_Exp() { return GetEnum("Step_SkyIsland_MiniGame_03") > HardGamePlaying; }
bool SkyIsland_MiniGame_03_IsAfter_Ready_Exp() { return GetEnum("Step_SkyIsland_MiniGame_03") > Ready; }
bool SnowyMountain_Surfing_IsAfter_Ready_Exp() { return GetEnum("Step_SnowyMountain_Surfing") > Ready; }
bool SnowyMountain_Surfing_IsAfter_Step1_Exp() { return GetEnum("Step_SnowyMountain_Surfing") > Step1; }
bool SnowyMountain_Surfing_IsCompleted_Exp() { return GetEnum("Step_SnowyMountain_Surfing") == Complete; }
bool Start_Any_SageChallenge() { return !(GetEnum("Step_SageOfSoul") == Ready && GetEnum("Step_SageOfZora") == Ready && GetEnum("Step_SageOfWind") == Ready && GetEnum("Step_SageOfFire") == Ready && GetEnum("Step_SageOfGerudo") == Ready); }
bool Step_SageOfFire_VillagersSchedule() { return GetBool("SageOfFire_VanishMiasmaRock") || GetEnum("Step_SageOfFire") == Complete || GetEnum("Step_SageOfFire") == Finale; }
bool SurveyOfFourVillages_IsAfter_1stSageClear_Exp() { return GetEnum("Step_SurveyOfFourVillages") > 1stSageClear; }
bool SurveyOfFourVillages_IsAfter_2ndSageClear_Exp() { return GetEnum("Step_SurveyOfFourVillages") > 2ndSageClear; }
bool SurveyOfFourVillages_IsAfter_3rdSageClear_Exp() { return GetEnum("Step_SurveyOfFourVillages") > 3rdSageClear; }
bool SurveyOfFourVillages_IsAfter_4thSageClear_Exp() { return GetEnum("Step_SurveyOfFourVillages") > 4thSageClear; }
bool SurveyOfFourVillages_IsAfter_EventLightSpot1_Exp() { return GetEnum("Step_SurveyOfFourVillages") > EventLightSpot1; }
bool SurveyOfFourVillages_IsAfter_EventLightSpot2_Exp() { return GetEnum("Step_SurveyOfFourVillages") > EventLightSpot2; }
bool SurveyOfFourVillages_IsAfter_EventLightSpot3_Exp() { return GetEnum("Step_SurveyOfFourVillages") > EventLightSpot3; }
bool SurveyOfFourVillages_IsAfter_EventLightSpot4_Exp() { return GetEnum("Step_SurveyOfFourVillages") > EventLightSpot4; }
bool SurveyOfFourVillages_IsAfter_EventLightSpot5_Exp() { return GetEnum("Step_SurveyOfFourVillages") > EventLightSpot5; }
bool SurveyOfFourVillages_IsAfter_NotReady_Exp() { return GetEnum("Step_SurveyOfFourVillages") > NotReady; }
bool SurveyOfFourVillages_IsAfter_Ready_Exp() { return GetEnum("Step_SurveyOfFourVillages") > Ready; }
bool SurveyOfFourVillages_IsAfter_ReturnBCAfter4Sage_Exp() { return GetEnum("Step_SurveyOfFourVillages") > ReturnBCAfter4Sage; }
bool SurveyOfFourVillages_IsCompleted_Exp() { return GetEnum("Step_SurveyOfFourVillages") == Complete; }
bool TakeAnimals_IsAfter_Ready_Exp() { return GetEnum("Step_TakeAnimals") > Ready; }
bool TakeAnimals_IsAfter_Step01_Exp() { return GetEnum("Step_TakeAnimals") > Step01; }
bool TakeAnimals_IsAfter_Step02_Exp() { return GetEnum("Step_TakeAnimals") > Step02; }
bool TakeOfIce_IsAfter_Ready_Exp() { return GetEnum("Step_TakeOfIce") > Ready; }
bool TakeOfIce_IsCompleted_Exp() { return GetEnum("Step_TakeOfIce") == Complete; }
bool TauraChallenge001_IsAfter_Finale_Exp() { return GetEnum("Step_TauraChallenge001") > Finale; }
bool TauraChallenge001_IsAfter_Ready_Exp() { return GetEnum("Step_TauraChallenge001") > Ready; }
bool TauraChallenge001_IsAfter_Step01_Exp() { return GetEnum("Step_TauraChallenge001") > Step01; }
bool TauraChallenge001_IsCompleted_Exp() { return GetEnum("Step_TauraChallenge001") == Complete; }
bool TheStrongestWeapon_IsAfter_NotReady_Exp() { return GetEnum("Step_TheStrongestWeapon") > NotReady; }
bool TheStrongestWeapon_IsAfter_Ready_Exp() { return GetEnum("Step_TheStrongestWeapon") > Ready; }
bool TheStrongestWeapon_IsAfter_Search_Exp() { return GetEnum("Step_TheStrongestWeapon") > Search; }
bool TheStrongestWeapon_IsCompleted_Exp() { return GetEnum("Step_TheStrongestWeapon") == Complete; }
bool TreasureHunt_kokiri_IsCompleted_Exp() { return GetEnum("Step_TreasureHunt_kokiri") == Complete; }
bool TreasureOfLambda_DuelPeak_GetAllInfo() { return GetBoolExp("TreasureOfLamda_Pirate_IsAfter_Ready_Exp") && GetBoolExp("TreasureOfLamda_Gerudo_IsAfter_Ready_Exp") && GetBoolExp("TreasureOfLamda_DuelPeak_IsAfter_Ready_Exp"); }
bool TreasureOfLambda_DuelPeak_GetInfo() { return GetBoolExp("TreasureOfLamda_DuelPeak_IsAfter_Ready_Exp") || GetBoolExp("TreasureOfLamda_Pirate_IsAfter_Ready_Exp") || GetBoolExp("TreasureOfLamda_Gerudo_IsAfter_Ready_Exp"); }
bool TreasureOfLambda_DuelPeak_GetInfo2() { return (!GetBoolExp("TreasureOfLamda_DuelPeak_IsAfter_Ready_Exp") && GetBoolExp("TreasureOfLamda_Gerudo_IsAfter_Ready_Exp") && GetBoolExp("TreasureOfLamda_Pirate_IsAfter_Ready_Exp")) || (!GetBoolExp("TreasureOfLamda_Gerudo_IsAfter_Ready_Exp") && GetBoolExp("TreasureOfLamda_Pirate_IsAfter_Ready_Exp") && GetBoolExp("TreasureOfLamda_DuelPeak_IsAfter_Ready_Exp")) || (!GetBoolExp("TreasureOfLamda_Pirate_IsAfter_Ready_Exp") && GetBoolExp("TreasureOfLamda_Gerudo_IsAfter_Ready_Exp") && GetBoolExp("TreasureOfLamda_DuelPeak_IsAfter_Ready_Exp")); }
bool TreasureOfLambda_FierceDeity_Get1() { return GetBool("TreasureOfLambda_FierceDeity_GetC") || GetBool("TreasureOfLambda_FierceDeity_GetB") || GetBool("TreasureOfLambda_FierceDeity_GetA"); }
bool TreasureOfLambda_FierceDeity_Get2() { return (GetBool("TreasureOfLambda_FierceDeity_GetC") && GetBool("TreasureOfLambda_FierceDeity_GetB")) || (GetBool("TreasureOfLambda_FierceDeity_GetC") && GetBool("TreasureOfLambda_FierceDeity_GetA")) || (GetBool("TreasureOfLambda_FierceDeity_GetB") && GetBool("TreasureOfLambda_FierceDeity_GetA")); }
bool TreasureOfLambda_FierceDeity_Get3() { return GetBool("TreasureOfLambda_FierceDeity_GetC") && GetBool("TreasureOfLambda_FierceDeity_GetB") && GetBool("TreasureOfLambda_FierceDeity_GetA"); }
bool TreasureOfLambda_IsAfter_NotReady_Exp() { return GetEnum("Step_TreasureOfLambda") > NotReady; }
bool TreasureOfLambda_IsAfter_OpenTreasure_Exp() { return GetEnum("Step_TreasureOfLambda") > OpenTreasure; }
bool TreasureOfLambda_IsAfter_Ready_Exp() { return GetEnum("Step_TreasureOfLambda") > Ready; }
bool TreasureOfLambda_IsCompleted_Exp() { return GetEnum("Step_TreasureOfLambda") == Complete; }
bool TreasureOfLamda_Dream_IsAfter_GetTreasure_Exp() { return GetEnum("Step_TreasureOfLamda_Dream") > GetTreasure; }
bool TreasureOfLamda_Dream_IsAfter_Ready_Exp() { return GetEnum("Step_TreasureOfLamda_Dream") > Ready; }
bool TreasureOfLamda_Dream_IsCompleted_Exp() { return GetEnum("Step_TreasureOfLamda_Dream") == Complete; }
bool TreasureOfLamda_Dream2_IsAfter_GetTreasure_Exp() { return GetEnum("Step_TreasureOfLamda_Dream2") > GetTreasure; }
bool TreasureOfLamda_Dream2_IsAfter_Ready_Exp() { return GetEnum("Step_TreasureOfLamda_Dream2") > Ready; }
bool TreasureOfLamda_Dream2_IsCompleted_Exp() { return GetEnum("Step_TreasureOfLamda_Dream2") == Complete; }
bool TreasureOfLamda_Dream3_IsAfter_GetTreasure_Exp() { return GetEnum("Step_TreasureOfLamda_Dream3") > GetTreasure; }
bool TreasureOfLamda_Dream3_IsAfter_Ready_Exp() { return GetEnum("Step_TreasureOfLamda_Dream3") > Ready; }
bool TreasureOfLamda_Dream3_IsCompleted_Exp() { return GetEnum("Step_TreasureOfLamda_Dream3") == Complete; }
bool TreasureOfLamda_DuelPeak_IsAfter_GetTreasure_Exp() { return GetEnum("Step_TreasureOfLamda_DuelPeak") > GetTreasure; }
bool TreasureOfLamda_DuelPeak_IsAfter_Ready_Exp() { return GetEnum("Step_TreasureOfLamda_DuelPeak") > Ready; }
bool TreasureOfLamda_DuelPeak_IsCompleted_Exp() { return GetEnum("Step_TreasureOfLamda_DuelPeak") == Complete; }
bool TreasureOfLamda_FierceDeity_IsAfter_GetOneTreaure_Exp() { return GetEnum("Step_TreasureOfLamda_FierceDeity") > GetOneTreaure; }
bool TreasureOfLamda_FierceDeity_IsAfter_GetSword_Exp() { return GetEnum("Step_TreasureOfLamda_FierceDeity") > GetSword; }
bool TreasureOfLamda_FierceDeity_IsAfter_GetThreeTreasure_Exp() { return GetEnum("Step_TreasureOfLamda_FierceDeity") > GetThreeTreasure; }
bool TreasureOfLamda_FierceDeity_IsAfter_GetTwoTreasure_Exp() { return GetEnum("Step_TreasureOfLamda_FierceDeity") > GetTwoTreasure; }
bool TreasureOfLamda_FierceDeity_IsAfter_Ready_Exp() { return GetEnum("Step_TreasureOfLamda_FierceDeity") > Ready; }
bool TreasureOfLamda_FierceDeity_IsCompleted_Exp() { return GetEnum("Step_TreasureOfLamda_FierceDeity") == Complete; }
bool TreasureOfLamda_Gerudo_IsAfter_GetTreasure_Exp() { return GetEnum("Step_TreasureOfLamda_Gerudo") > GetTreasure; }
bool TreasureOfLamda_Gerudo_IsAfter_Ready_Exp() { return GetEnum("Step_TreasureOfLamda_Gerudo") > Ready; }
bool TreasureOfLamda_Gerudo_IsCompleted_Exp() { return GetEnum("Step_TreasureOfLamda_Gerudo") == Complete; }
bool TreasureOfLamda_Pirate_IsAfter_GetTreasure_Exp() { return GetEnum("Step_TreasureOfLamda_Pirate") > GetTreasure; }
bool TreasureOfLamda_Pirate_IsAfter_Ready_Exp() { return GetEnum("Step_TreasureOfLamda_Pirate") > Ready; }
bool TreasureOfLamda_Pirate_IsCompleted_Exp() { return GetEnum("Step_TreasureOfLamda_Pirate") == Complete; }
bool Tribune01_DeleteAll_Exp() { return !GetBool("Tribune01_DeletePirateShip") && GetBool("Tribune01_OpenTreasureBox") && GetBoolExp("Tribune01_IsCompleted_Exp"); }
bool Tribune01_IsAfter_Exterminate_Exp() { return GetEnum("Step_Tribune01") > Exterminate; }
bool Tribune01_IsAfter_NotReady_Exp() { return GetEnum("Step_Tribune01") > NotReady; }
bool Tribune01_IsAfter_Ready_Exp() { return GetEnum("Step_Tribune01") > Ready; }
bool Tribune01_IsAfter_Report_Exp() { return GetEnum("Step_Tribune01") > Report; }
bool Tribune01_IsCompleted_Exp() { return GetEnum("Step_Tribune01") == Complete; }
bool Tribune02_IsAfter_Escape_Exp() { return GetEnum("Step_Tribune02") > Escape; }
bool Tribune02_IsAfter_NotReady_Exp() { return GetEnum("Step_Tribune02") > NotReady; }
bool Tribune02_IsAfter_Ready_Exp() { return GetEnum("Step_Tribune02") > Ready; }
bool Tribune02_IsAfter_Report_Exp() { return GetEnum("Step_Tribune02") > Report; }
bool Tribune02_IsAfter_Search_Exp() { return GetEnum("Step_Tribune02") > Search; }
bool Tribune02_IsCompleted_Exp() { return GetEnum("Step_Tribune02") == Complete; }
bool Tribune03_Goat_And_HyrulePinecone_Appear() { return !GetBool("Tribune03_Goat_Comeback") && GetBoolExp("NewsPaper_Mitsuba_IsAfter_Ready_Exp"); }
bool Tribune03_HyrulePinecore_Add_Appear() { return GetBool("Tribune03_HyruleWestHatago006_IsFirstTalked") || GetBoolExp("Tribune03_IsAfter_Ready_Exp"); }
bool Tribune03_IsAfter_Hearing_Exp() { return GetEnum("Step_Tribune03") > Hearing; }
bool Tribune03_IsAfter_NotReady_Exp() { return GetEnum("Step_Tribune03") > NotReady; }
bool Tribune03_IsAfter_Ready_Exp() { return GetEnum("Step_Tribune03") > Ready; }
bool Tribune03_IsAfter_Search_Exp() { return GetEnum("Step_Tribune03") > Search; }
bool Tribune03_IsCompleted_Exp() { return GetEnum("Step_Tribune03") == Complete; }
bool Tribune04_IsAfter_NotReady_Exp() { return GetEnum("Step_Tribune04") > NotReady; }
bool Tribune04_IsAfter_Ready_Exp() { return GetEnum("Step_Tribune04") > Ready; }
bool Tribune04_IsAfter_Search_Exp() { return GetEnum("Step_Tribune04") > Search; }
bool Tribune04_IsCompleted_Exp() { return GetEnum("Step_Tribune04") == Complete; }
bool Tribune04_Presence() { return !GetBool("Tribune04_GoToRiverSide") && GetBoolExp("NewsPaper_Mitsuba_IsAfter_Ready_Exp"); }
bool Tribune05_IsAfter_Carry_Exp() { return GetEnum("Step_Tribune05") > Carry; }
bool Tribune05_IsAfter_Carry2_Exp() { return GetEnum("Step_Tribune05") > Carry2; }
bool Tribune05_IsAfter_NotReady_Exp() { return GetEnum("Step_Tribune05") > NotReady; }
bool Tribune05_IsAfter_Ready_Exp() { return GetEnum("Step_Tribune05") > Ready; }
bool Tribune05_IsAfter_Step1_Exp() { return GetEnum("Step_Tribune05") > Step1; }
bool Tribune05_IsCompleted_Exp() { return GetEnum("Step_Tribune05") == Complete; }
bool Tribune06_IsAfter_NotReady_Exp() { return GetEnum("Step_Tribune06") > NotReady; }
bool Tribune06_IsAfter_Ready_Exp() { return GetEnum("Step_Tribune06") > Ready; }
bool Tribune06_IsAfter_Report_Exp() { return GetEnum("Step_Tribune06") > Report; }
bool Tribune06_IsAfter_Search_Exp() { return GetEnum("Step_Tribune06") > Search; }
bool Tribune06_IsCompleted_Exp() { return GetEnum("Step_Tribune06") == Complete; }
bool Tribune07_IsAfter_NotReady_Exp() { return GetEnum("Step_Tribune07") > NotReady; }
bool Tribune07_IsAfter_Ready_Exp() { return GetEnum("Step_Tribune07") > Ready; }
bool Tribune07_IsAfter_step1_Exp() { return GetEnum("Step_Tribune07") > step1; }
bool Tribune07_IsAfter_step2_Exp() { return GetEnum("Step_Tribune07") > step2; }
bool Tribune07_IsAfter_step4_Exp() { return GetEnum("Step_Tribune07") > step4; }
bool Tribune07_IsAfter_step5_Exp() { return GetEnum("Step_Tribune07") > step5; }
bool Tribune07_IsAfter_step6_Exp() { return GetEnum("Step_Tribune07") > step6; }
bool Tribune07_IsCompleted_Exp() { return GetEnum("Step_Tribune07") == Complete; }
bool Tribune09_IsAfter_HorseTake_Exp() { return GetEnum("Step_Tribune09") > HorseTake; }
bool Tribune09_IsAfter_NotReady_Exp() { return GetEnum("Step_Tribune09") > NotReady; }
bool Tribune09_IsAfter_Ready_Exp() { return GetEnum("Step_Tribune09") > Ready; }
bool Tribune09_IsCompleted_Exp() { return GetEnum("Step_Tribune09") == Complete; }
bool Tribune10_IsAfter_Battle_Exp() { return GetEnum("Step_Tribune10") > Battle; }
bool Tribune10_IsAfter_ClearFirst_Exp() { return GetEnum("Step_Tribune10") > ClearFirst; }
bool Tribune10_IsAfter_ClearSecond_Exp() { return GetEnum("Step_Tribune10") > ClearSecond; }
bool Tribune10_IsAfter_FinishFirstTrial_Exp() { return GetEnum("Step_Tribune10") > FinishFirstTrial; }
bool Tribune10_IsAfter_FirstOracle_Exp() { return GetEnum("Step_Tribune10") > FirstOracle; }
bool Tribune10_IsAfter_NotReady_Exp() { return GetEnum("Step_Tribune10") > NotReady; }
bool Tribune10_IsAfter_Ready_Exp() { return GetEnum("Step_Tribune10") > Ready; }
bool Tribune10_IsAfter_SecondOracle_Exp() { return GetEnum("Step_Tribune10") > SecondOracle; }
bool Tribune10_IsCompleted_Exp() { return GetEnum("Step_Tribune10") == Complete; }
bool Tribune10_IsExist_NpcRoad037() { return !GetBoolExp("Tribune10_IsAfter_Battle_Exp") && GetBoolExp("Tribune10_IsAfter_NotReady_Exp"); }
bool Tribune11_IsAfter_NotReady_Exp() { return GetEnum("Step_Tribune11") > NotReady; }
bool Tribune11_IsAfter_Ready_Exp() { return GetEnum("Step_Tribune11") > Ready; }
bool Tribune11_IsAfter_Step5_Exp() { return GetEnum("Step_Tribune11") > Step5; }
bool Tribune11_IsCompleted_Exp() { return GetEnum("Step_Tribune11") == Complete; }
bool Tribune13_IsAfter_Chase_Exp() { return GetEnum("Step_Tribune13") > Chase; }
bool Tribune13_IsAfter_Discovery_Exp() { return GetEnum("Step_Tribune13") > Discovery; }
bool Tribune13_IsAfter_NotReady_Exp() { return GetEnum("Step_Tribune13") > NotReady; }
bool Tribune13_IsAfter_Ready_Exp() { return GetEnum("Step_Tribune13") > Ready; }
bool Tribune13_IsAfter_Report_Exp() { return GetEnum("Step_Tribune13") > Report; }
bool Tribune13_IsAfter_Search_Exp() { return GetEnum("Step_Tribune13") > Search; }
bool Tribune13_IsCompleted_Exp() { return GetEnum("Step_Tribune13") == Complete; }
bool Tribune14_IsAfter_NotReady_Exp() { return GetEnum("Step_Tribune14") > NotReady; }
bool Tribune14_IsAfter_Ready_Exp() { return GetEnum("Step_Tribune14") > Ready; }
bool Tribune14_IsCompleted_Exp() { return GetEnum("Step_Tribune14") == Complete; }
bool Tribune16_IsAfter_Arrival_Exp() { return GetEnum("Step_Tribune16") > Arrival; }
bool Tribune16_IsAfter_Carry_Exp() { return GetEnum("Step_Tribune16") > Carry; }
bool Tribune16_IsAfter_NotReady_Exp() { return GetEnum("Step_Tribune16") > NotReady; }
bool Tribune16_IsAfter_Ready_Exp() { return GetEnum("Step_Tribune16") > Ready; }
bool Tribune16_IsCompleted_Exp() { return GetEnum("Step_Tribune16") == Complete; }
bool Tribune16_OffLight_Fairy() { return !(GetBool("Fairy_OnWagon") && GetBool("Tribune16_IsAlive")); }
bool Tribune16_OffLight_Miroyan() { return GetBool("Fairy_OnWagon") && GetBool("Tribune16_IsAlive"); }
bool Tulin_Joining() { return GetEnum("PlayerStatus.Companion.Wind.JoiningCondition") == Joining && GetBool("PlayerStatus.Companion.Wind.IsFollowMode"); }
bool Uotori_BreakthePirateBase_IsCompleted_Exp() { return GetEnum("Step_Uotori_BreakthePirateBase") == Complete; }
bool Uotori_DescriptionDressing_Temp() { return GetBool("Uotori_DescriptionItemShop_Temp") && GetBool("Uotori_DescriptionRestaurant_Temp") && GetBool("Uotori_DescriptionInn_Temp"); }
bool Uotori_DescriptionEnjoy_Temp() { return GetBool("Uotori_DescriptionRally_Temp") && GetBool("Uotori_DescriptionTreasureShop_Temp"); }
bool Uotori_Designer_IsAfter_NotReady_Exp() { return GetEnum("Step_Uotori_Designer") > NotReady; }
bool Uotori_Designer_IsAfter_Ready_Exp() { return GetEnum("Step_Uotori_Designer") > Ready; }
bool Uotori_Designer_IsAfter_Step01_Exp() { return GetEnum("Step_Uotori_Designer") > Step01; }
bool Uotori_Designer_IsAfter_Step02_Exp() { return GetEnum("Step_Uotori_Designer") > Step02; }
bool Uotori_Designer_IsCompleted_Exp() { return GetEnum("Step_Uotori_Designer") == Complete; }
bool Uotori_Npc_SouthernVillage006_News_02_Exp() { return !GetBool("Uotori_Npc_SouthernVillage006_News_13") && GetBool("Uotori_Npc_SouthernVillage006_News_10"); }
bool Uotori_Npc_SouthernVillage006_News_04_Exp() { return !GetBool("Uotori_Npc_SouthernVillage006_News_14") && GetBool("Uotori_Npc_SouthernVillage006_News_07"); }
bool Uotori_Npc_SouthernVillage006_News_06_Exp() { return !GetBool("Uotori_Npc_SouthernVillage006_News_15") && GetBool("Uotori_Npc_SouthernVillage006_News_08"); }
bool Uotori_ResortPlan_IsAfter_Challenge_Exp() { return GetEnum("Step_Uotori_ResortPlan") > Challenge; }
bool Uotori_ResortPlan_IsAfter_Contact_Exp() { return GetEnum("Step_Uotori_ResortPlan") > Contact; }
bool Uotori_ResortPlan_IsAfter_NotReady_Exp() { return GetEnum("Step_Uotori_ResortPlan") > NotReady; }
bool Uotori_ResortPlan_IsAfter_Ready_Exp() { return GetEnum("Step_Uotori_ResortPlan") > Ready; }
bool Uotori_ResortPlan_IsAfter_Report_Exp() { return GetEnum("Step_Uotori_ResortPlan") > Report; }
bool Uotori_ResortPlan_IsCompleted_Exp() { return GetEnum("Step_Uotori_ResortPlan") == Complete; }
bool Uotori_ResortPlan_NpcStartCreate_BoolExp() { return GetBool("Revive_FinaleEvent_Finish") && !GetBoolExp("Uotori_ResortPlan_IsAfter_Challenge_Exp"); }
bool Uotori_RevivePlan_IsAfter_CollectWood_Exp() { return GetEnum("Step_Uotori_RevivePlan") > CollectWood; }
bool Uotori_RevivePlan_IsAfter_Finale_Exp() { return GetEnum("Step_Uotori_RevivePlan") > Finale; }
bool Uotori_RevivePlan_IsAfter_NotReady_Exp() { return GetEnum("Step_Uotori_RevivePlan") > NotReady; }
bool Uotori_RevivePlan_IsAfter_Ready_Exp() { return GetEnum("Step_Uotori_RevivePlan") > Ready; }
bool Uotori_RevivePlan_IsAfter_Revive_Exp() { return GetEnum("Step_Uotori_RevivePlan") > Revive; }
bool Uotori_RevivePlan_IsCompleted_Exp() { return GetEnum("Step_Uotori_RevivePlan") == Complete; }
bool Uotori_SignalFireWood_Create_Exp() { return !GetBoolExp("TauraChallenge001_IsCompleted_Exp") && GetBool("Uotori_SignalFireWood_Create"); }
bool Uotori_WhiteLineGame_IsAfter_Ready_Exp() { return GetEnum("Step_Uotori_WhiteLineGame") > Ready; }
bool Uotori_WhiteLineGame_IsAfter_Step01_Exp() { return GetEnum("Step_Uotori_WhiteLineGame") > Step01; }
bool Uotori_WhiteLineGame_IsCompleted_Exp() { return GetEnum("Step_Uotori_WhiteLineGame") == Complete; }
bool UotoriPirateShip_Broken_BoolExp() { return !GetBool("UotoriPirateShip_Broken") && GetBoolExp("TauraChallenge001_IsCompleted_Exp"); }
bool UpgradeOfPurahPad1_IsAfter_NotReady_Exp() { return GetEnum("Step_UpgradeOfPurahPad1") > NotReady; }
bool Valley_ReturnRito() { return (!GetBool("ValleyCave_WarpDistant") || GetBool("ValleyCave_Distant")) && GetBoolExp("SageOfWind_IsAfter_TouchSecretStone_Exp") && GetBoolExp("Neck_IceWaterCave_IsCompleted_Exp"); }
bool Walk_Npc_HyruleDepthHatago006_Road() { return GetBool("CaveBase_Hostage") && GetBoolExp("SageOfGerudo_IsCompleted_Exp"); }
bool Walk_Npc_KarakaraRoad_AncientAssistant() { return !GetBool("SageOfGerudo_InBattle"); }
bool Walk_Npc_TamourHatago2_001() { return !GetBool("SageOfGerudo_InBattle"); }
bool WantedCleaning_IsCompleted_Exp() { return GetEnum("Step_WantedCleaning") == Complete; }
bool WashedAwayBusinessTools_IsAfter_Ready_Exp() { return GetEnum("Step_WashedAwayBusinessTools") > Ready; }
bool WashedAwayBusinessTools_IsAfter_Reward_Exp() { return GetEnum("Step_WashedAwayBusinessTools") > Reward; }
bool WashedAwayBusinessTools_IsAfter_Search_Exp() { return GetEnum("Step_WashedAwayBusinessTools") > Search; }
bool WashedAwayBusinessTools_IsCompleted_Exp() { return GetEnum("Step_WashedAwayBusinessTools") == Complete; }
bool WaterBridgePlace_IsAfter_FindDrefan_Exp() { return GetEnum("Step_WaterBridgePlace") > FindDrefan; }
bool WaterBridgePlace_IsAfter_NotReady_Exp() { return GetEnum("Step_WaterBridgePlace") > NotReady; }
bool WaterBridgePlace_IsAfter_Ready_Exp() { return GetEnum("Step_WaterBridgePlace") > Ready; }
bool WaterBridgePlace_IsAfter_SearchKingScales_Exp() { return GetEnum("Step_WaterBridgePlace") > SearchKingScales; }
bool WaterBridgePlace_IsAfter_SearchWaterBridge_Exp() { return GetEnum("Step_WaterBridgePlace") > SearchWaterBridge; }
bool WaterBridgePlace_IsCompleted_Exp() { return GetEnum("Step_WaterBridgePlace") == Complete; }
bool WellCollection_InHorseWell() { return GetBool("Npc_BaseCampSoldier_Hylia013_Opened") && !GetBool("WellCollection_GoFort") && GetBoolExp("GOToTheCastleOfHyrule_IsAfter_MeetPurah_Exp"); }
bool WellCollection_IsAfter_Ready_Exp() { return GetEnum("Step_WellCollection") > Ready; }
bool WellCollection_IsAfter_Search_Exp() { return GetEnum("Step_WellCollection") > Search; }
bool WellCollection_IsCompleted_Exp() { return GetEnum("Step_WellCollection") == Complete; }
bool WhichIsStronger_IsAfter_NotReady_Exp() { return GetEnum("Step_WhichIsStronger") > NotReady; }
bool WhichIsStronger_IsAfter_Ready_Exp() { return GetEnum("Step_WhichIsStronger") > Ready; }
bool WhichIsStronger_IsAfter_Step01_Exp() { return GetEnum("Step_WhichIsStronger") > Step01; }
bool WhichIsStronger_IsAfter_Step02_Exp() { return GetEnum("Step_WhichIsStronger") > Step02; }
bool WhichIsStronger_IsAfter_Step03_Exp() { return GetEnum("Step_WhichIsStronger") > Step03; }
bool WhichIsStronger_IsAfter_Step04_Exp() { return GetEnum("Step_WhichIsStronger") > Step04; }
bool WhichIsStronger_IsCompleted_Exp() { return GetEnum("Step_WhichIsStronger") == Complete; }
bool WorldMgr_IsBeforeFirstInteractToT() { return !GetBool("HavePlayedEvent.Dm_OP_0035"); }
bool Unknown_0x245546ab() { return !GetBool("HavePlayedEvent.DmF_OP_Title"); }
bool Unknown_0x28d3ff36() { return GetBool("IsGet.Obj_DRStone_Get"); }
bool Unknown_0xbef515a3() { return !GetBool("IsVisitLocation.HyruleGround"); }
bool Yunbo_AfterSage_MiniChallengeComplete() { return GetBoolExp("MercenaryChallenge_Eldin_IsCompleted_Exp") && GetBoolExp("FullyRipenedFlintstones_IsCompleted_Exp") && GetBoolExp("HotSpringEgg_IsCompleted_Exp") && GetBoolExp("MeatRock_IsCompleted_Exp") && GetBoolExp("CarryGoronKid2_IsCompleted_Exp") && GetBoolExp("RescueVehicle01_IsCompleted_Exp") && GetBoolExp("Goron_MiniGame_Tutorial_03_IsCompleted_Exp") && GetBoolExp("AmberCollector_IsCompleted_Exp") && GetBoolExp("GoronReturntoNature_IsCompleted_Exp") && GetBoolExp("MakeAChampionsWeapon_Goron_IsCompleted_Exp"); }
bool Zonau_GeniusWeapon_IsAfter_Ready_Exp() { return GetEnum("Step_Zonau_GeniusWeapon") > Ready; }
bool Zonau_GeniusWeapon_IsCompleted_Exp() { return GetEnum("Step_Zonau_GeniusWeapon") == Complete; }
bool ZonauRelief_PosChange() { return GetBoolExp("ZonauReliefSearch_IsAfter_Ready_Exp") && !GetBool("Npc_BaseCamp002_NotChangePos"); }
bool ZonauRelief_PosChange_Npc_BaseCamp006() { return GetBoolExp("ZonauRelief_PosChange") && GetBoolExp("Npc_BaseCamp006_Pos_Remains"); }
bool ZonauReliefSearch_IsAfter_NotReady_Exp() { return GetEnum("Step_ZonauReliefSearch") > NotReady; }
bool ZonauReliefSearch_IsAfter_Reach_KakarikoVillage_Exp() { return GetEnum("Step_ZonauReliefSearch") > Reach_KakarikoVillage; }
bool ZonauReliefSearch_IsAfter_Ready_Exp() { return GetEnum("Step_ZonauReliefSearch") > Ready; }
bool ZonauReliefSearch_IsAfter_Step1_Exp() { return GetEnum("Step_ZonauReliefSearch") > Step1; }
bool ZonauReliefSearch_IsCompleted_Exp() { return GetEnum("Step_ZonauReliefSearch") == Complete; }
bool Zora_Enemy_hunt_IsAfter_Ready_Exp() { return GetEnum("Step_Zora_Enemy_hunt") > Ready; }
bool Zora_Enemy_hunt_IsCompleted_Exp() { return GetEnum("Step_Zora_Enemy_hunt") == Complete; }
bool Zora_MessageBottle_IsAfter_GetPrize_Exp() { return GetEnum("Step_Zora_MessageBottle") > GetPrize; }
bool Zora_MessageBottle_IsAfter_Ready_Exp() { return GetEnum("Step_Zora_MessageBottle") > Ready; }
bool Zora_MessageBottle_IsAfter_Step0_Exp() { return GetEnum("Step_Zora_MessageBottle") > Step0; }
bool Zora_MessageBottle_IsAfter_Step1_Exp() { return GetEnum("Step_Zora_MessageBottle") > Step1; }
bool Zora_MessageBottle_IsAfter_Step2_Exp() { return GetEnum("Step_Zora_MessageBottle") > Step2; }
bool Zora_MessageBottle_IsCompleted_Exp() { return GetEnum("Step_Zora_MessageBottle") == Complete; }
bool Zora_MessageBottle_Zora026_WaveHands() { return GetBool("Zora_MessageBottle_Boarding") && GetBool("Zora_MessageBottle_Notice") && !GetBoolExp("Zora_MessageBottle_IsAfter_Step2_Exp"); }
bool Zora_RuttaTreasure_IsAfter_NotReady_Exp() { return GetEnum("Step_Zora_RuttaTreasure") > NotReady; }
bool Zora_RuttaTreasure_IsAfter_Ready_Exp() { return GetEnum("Step_Zora_RuttaTreasure") > Ready; }
bool Zora_RuttaTreasure_IsAfter_TreasureHunt_Exp() { return GetEnum("Step_Zora_RuttaTreasure") > TreasureHunt; }
bool Zora_RuttaTreasure_IsCompleted_Exp() { return GetEnum("Step_Zora_RuttaTreasure") == Complete; }
