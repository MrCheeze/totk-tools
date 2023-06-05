-------- EventFlow: OpenActionGuideScreen --------

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryHasPouchContentByCategory']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void OpenActionGuideScreenWeapon() {

    call Common.OpenActionGuideScreen({'ActionGuideType': 0})

    if !PouchSystemActor.EventQueryHasPouchContentByCategory({'Category': 0, 'Count': 2}) {

        call Common.OpenActionGuideScreen({'ActionGuideType': 7})

        if !PouchSystemActor.EventQueryHasPouchContentByCategory({'Category': 0, 'Count': 7}) {

            call Common.OpenActionGuideScreen({'ActionGuideType': 14})

        }
    }
}

void OpenActionGuideScreenBow() {

    call Common.OpenActionGuideScreen({'ActionGuideType': 2})

    if !PouchSystemActor.EventQueryHasPouchContentByCategory({'Category': 1, 'Count': 2}) {

        call Common.OpenActionGuideScreen({'ActionGuideType': 9})

    }
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Obj_OneTouchBond', 'Index': -1})
    && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FirstIsland_IsGet_Master_OneTouchBond'})
    && GameDataActor.EventQueryIsGameDataInt({'Index': 0, 'GameDataName': 'Pouch.Arrow.Content.StockNum', 'Value': 0}) == 2
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Pouch.Material.IsValid', 'Index': 0}) {

        call OpenActionGuideScreenArrowAttachment()

    }
}

void OpenActionGuideScreenShield() {

    call Common.OpenActionGuideScreen({'ActionGuideType': 1})

    if !PouchSystemActor.EventQueryHasPouchContentByCategory({'Category': 3, 'Count': 2}) {

        call Common.OpenActionGuideScreen({'ActionGuideType': 8})

    }
}

void OpenActionGuideScreenArmor() {

    call Common.OpenActionGuideScreen({'ActionGuideType': 3})

}

void OpenActionGuideScreenArrowAttachment() {

    call Common.OpenActionGuideScreen({'ActionGuideType': 26})

}

void OpenActionGuideScreenThrowMaterial() {

    call Common.OpenActionGuideScreen({'ActionGuideType': 28})

}

void OpenActionGuideScreenMaterialShortCut() {

    call Common.OpenActionGuideScreen({'ActionGuideType': 27})

}
