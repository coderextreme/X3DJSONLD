###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='NTDSExternProtoExamples.x3d',name='title'),
    meta(content='Standard Naval Tactical Display Symbology icons',name='description'),
    meta(content='LT Patrick Sullivan',name='creator'),
    meta(content='11 February 2006',name='created'),
    meta(content='10 October 2015',name='modified'),
    meta(content='NTDSPrototypes.x3d',name='reference'),
    meta(content='Rename to NTDSExamples and modify SavageStudio accordingly',name='TODO'),
    meta(content='https://savage.nps.edu/Savage/Tools/Symbology/NTDSExternProtoExamples.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Unit Symbology Prototype Examples',orientation=(-1,0,0,1.57),position=(0,30,8)),
    #  Common proto to all symbols 
    ExternProtoDeclare(name='SymbolLabel',url=["NTDSPrototypes.x3d#SymbolLabel","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#SymbolLabel","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#SymbolLabel"],
      field=[
      field(accessType='inputOutput',appinfo='Color for labels',name='labelColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='Additional information for the track (i.e. track number entityID entity name)',name='trackLabel',type='MFString')]),
    #  Surface Extern Protos 
    ExternProtoDeclare(name='SurfaceUnknown',url=["NTDSPrototypes.x3d#SurfaceUnknown","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#SurfaceUnknown","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#SurfaceUnknown"],
      field=[
      field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='SFColor')]),
    ExternProtoDeclare(name='SurfaceFriend',url=["NTDSPrototypes.x3d#SurfaceFriend","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#SurfaceFriend","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#SurfaceFriend"],
      field=[
      field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor')]),
    ExternProtoDeclare(name='SurfaceAssumedFriend',url=["NTDSPrototypes.x3d#SurfaceAssumedFriend","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#SurfaceAssumedFriend","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#SurfaceAssumedFriend"],
      field=[
      field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor'),
      field(accessType='inputOutput',appinfo='Color for labels',name='labelColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='Symbol modifier (i.e. unknown suspect)',name='symbolModifier',type='MFString')]),
    ExternProtoDeclare(name='SurfaceNeutral',url=["NTDSPrototypes.x3d#SurfaceNeutral","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#SurfaceNeutral","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#SurfaceNeutral"],
      field=[
      field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor')]),
    ExternProtoDeclare(name='SurfacePending',url=["NTDSPrototypes.x3d#SurfacePending","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#SurfacePending","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#SurfacePending"],
      field=[
      field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='SFColor'),
      field(accessType='inputOutput',appinfo='Color for labels',name='labelColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='Symbol modifier (i.e. unknown suspect)',name='symbolModifier',type='MFString')]),
    ExternProtoDeclare(name='SurfaceHostile',url=["NTDSPrototypes.x3d#SurfaceHostile","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#SurfaceHostile","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#SurfaceHostile"],
      field=[
      field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor')]),
    ExternProtoDeclare(name='SurfaceSuspect',url=["NTDSPrototypes.x3d#SurfaceSuspect","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#SurfaceSuspect","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#SurfaceSuspect"],
      field=[
      field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor'),
      field(accessType='inputOutput',appinfo='Color for labels',name='labelColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='Symbol modifier (i.e. unknown suspect)',name='symbolModifier',type='MFString')]),
    #  Air Extern Protos 
    ExternProtoDeclare(name='AirUnknown',url=["NTDSPrototypes.x3d#AirUnknown","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#AirUnknown","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#AirUnknown"],
      field=[
      field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='SFColor')]),
    ExternProtoDeclare(name='AirFriend',url=["NTDSPrototypes.x3d#AirFriend","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#AirFriend","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#AirFriend"],
      field=[
      field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor')]),
    ExternProtoDeclare(name='AirAssumedFriend',url=["NTDSPrototypes.x3d#AirAssumedFriend","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#AirAssumedFriend","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#AirAssumedFriend"],
      field=[
      field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor'),
      field(accessType='inputOutput',appinfo='Color for labels',name='labelColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='Symbol modifier (i.e. unknown suspect)',name='symbolModifier',type='MFString')]),
    ExternProtoDeclare(name='AirNeutral',url=["NTDSPrototypes.x3d#AirNeutral","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#AirNeutral","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#AirNeutral"],
      field=[
      field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor')]),
    ExternProtoDeclare(name='AirPending',url=["NTDSPrototypes.x3d#AirPending","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#AirPending","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#AirPending"],
      field=[
      field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='SFColor'),
      field(accessType='inputOutput',appinfo='Color for labels',name='labelColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='Symbol modifier (i.e. unknown suspect)',name='symbolModifier',type='MFString')]),
    ExternProtoDeclare(name='AirHostile',url=["NTDSPrototypes.x3d#AirHostile","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#AirHostile","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#AirHostile"],
      field=[
      field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor')]),
    ExternProtoDeclare(name='AirSuspect',url=["NTDSPrototypes.x3d#AirSuspect","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#AirSuspect","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#AirSuspect"],
      field=[
      field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor'),
      field(accessType='inputOutput',appinfo='Color for labels',name='labelColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='Symbol modifier (i.e. unknown suspect)',name='symbolModifier',type='MFString')]),
    #  SubSurface Extern Protos 
    ExternProtoDeclare(name='SubSurfaceUnknown',url=["NTDSPrototypes.x3d#SubSurfaceUnknown","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#SubSurfaceUnknown","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#SubSurfaceUnknown"],
      field=[
      field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='SFColor')]),
    ExternProtoDeclare(name='SubSurfaceFriend',url=["NTDSPrototypes.x3d#SubSurfaceFriend","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#SubSurfaceFriend","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#SubSurfaceFriend"],
      field=[
      field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor')]),
    ExternProtoDeclare(name='SubSurfaceAssumedFriend',url=["NTDSPrototypes.x3d#SubSurfaceAssumedFriend","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#SubSurfaceAssumedFriend","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#SubSurfaceAssumedFriend"],
      field=[
      field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor'),
      field(accessType='inputOutput',appinfo='Color for labels',name='labelColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='Symbol modifier (i.e. unknown suspect)',name='symbolModifier',type='MFString')]),
    ExternProtoDeclare(name='SubSurfaceNeutral',url=["NTDSPrototypes.x3d#SubSurfaceNeutral","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#SubSurfaceNeutral","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#SubSurfaceNeutral"],
      field=[
      field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor')]),
    ExternProtoDeclare(name='SubSurfacePending',url=["NTDSPrototypes.x3d#SubSurfacePending","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#SubSurfacePending","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#SubSurfacePending"],
      field=[
      field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='SFColor'),
      field(accessType='inputOutput',appinfo='Color for labels',name='labelColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='Symbol modifier (i.e. unknown suspect)',name='symbolModifier',type='MFString')]),
    ExternProtoDeclare(name='SubSurfaceHostile',url=["NTDSPrototypes.x3d#SubSurfaceHostile","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#SubSurfaceHostile","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#SubSurfaceHostile"],
      field=[
      field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor')]),
    ExternProtoDeclare(name='SubSurfaceSuspect',url=["NTDSPrototypes.x3d#SubSurfaceSuspect","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#SubSurfaceSuspect","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#SubSurfaceSuspect"],
      field=[
      field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor'),
      field(accessType='inputOutput',appinfo='Color for labels',name='labelColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='Symbol modifier (i.e. unknown suspect)',name='symbolModifier',type='MFString')]),
    #  GroundUnit Extern Protos 
    ExternProtoDeclare(name='GroundEquipmentPending',url=["NTDSPrototypes.x3d#GroundEquipmentPending","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#GroundEquipmentPending","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#GroundEquipmentPending"]),
    ExternProtoDeclare(name='GroundEquipmentUnknown',url=["NTDSPrototypes.x3d#GroundEquipmentUnknown","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#GroundEquipmentUnknown","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#GroundEquipmentUnknown"]),
    ExternProtoDeclare(name='GroundEquipmentFriend',url=["NTDSPrototypes.x3d#GroundEquipmentFriend","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#GroundEquipmentFriend","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#GroundEquipmentFriend"]),
    ExternProtoDeclare(name='GroundEquipmentNeutral',url=["NTDSPrototypes.x3d#GroundEquipmentNeutral","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#GroundEquipmentNeutral","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#GroundEquipmentNeutral"]),
    ExternProtoDeclare(name='GroundEquipmentHostile',url=["NTDSPrototypes.x3d#GroundEquipmentHostile","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#GroundEquipmentHostile","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#GroundEquipmentHostile"]),
    ExternProtoDeclare(name='GroundEquipmentAssumedFriend',url=["NTDSPrototypes.x3d#GroundEquipmentAssumedFriend","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#GroundEquipmentAssumedFriend","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#GroundEquipmentAssumedFriend"]),
    ExternProtoDeclare(name='GroundEquipmentSuspect',url=["NTDSPrototypes.x3d#GroundEquipmentSuspect","../../../Savage/Tools/Symbology/NTDSPrototypes.x3d#GroundEquipmentSuspect","https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d#GroundEquipmentSuspect"]),
    #  Surface Examples 
    Transform(DEF='SurfaceFriendExample',translation=(-15,0,-1),
      children=[
      Viewpoint(description='Surface Friend',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='SurfaceFriend',
        fieldValue=[
        fieldValue(name='color',value=[(0,0,1)])]),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(0,0,1)),
        fieldValue(name='trackLabel',value=["Surface","Friend"])])]),
    Transform(DEF='SurfaceAssumedFriendExample',translation=(-10,0,-1),
      children=[
      Viewpoint(description='Surface Assumed Friend',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='SurfaceAssumedFriend',
        fieldValue=[
        fieldValue(name='color',value=[(0,0,1)]),
        fieldValue(name='labelColor',value=(0,0,1)),
        fieldValue(name='symbolModifier',value=["?"])]),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(0,0,1)),
        fieldValue(name='trackLabel',value=["Surface","Assumed","Friend"])])]),
    Transform(DEF='SurfaceNeutralExample',translation=(-5,0,-1),
      children=[
      Viewpoint(description='Surface Neutral',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='SurfaceNeutral',
        fieldValue=[
        fieldValue(name='color',value=[(0,1,0)])]),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(0,1,0)),
        fieldValue(name='trackLabel',value=["Surface","Neutral"])])]),
    Transform(DEF='SurfacePendingExample',translation=(0,0,-1),
      children=[
      Viewpoint(description='Surface Pending',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='SurfacePending',
        fieldValue=[
        fieldValue(name='color',value=(1,1,0)),
        fieldValue(name='labelColor',value=(1,1,0)),
        fieldValue(name='symbolModifier',value=["?"])]),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(1,1,0)),
        fieldValue(name='trackLabel',value=["Surface","Pending"])])]),
    Transform(DEF='SurfaceHostileExample',translation=(5,0,-1),
      children=[
      Viewpoint(description='Surface Hostile',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='SurfaceHostile',
        fieldValue=[
        fieldValue(name='color',value=[(1,0,0)])]),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(1,0,0)),
        fieldValue(name='trackLabel',value=["Surface","Hostile"])])]),
    Transform(DEF='SurfaceSuspectExample',translation=(10,0,-1),
      children=[
      Viewpoint(description='Surface Suspect',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='SurfaceSuspect',
        fieldValue=[
        fieldValue(name='color',value=[(1,0,0)]),
        fieldValue(name='labelColor',value=(1,0,0)),
        fieldValue(name='symbolModifier',value=["?"])]),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(1,0,0)),
        fieldValue(name='trackLabel',value=["Surface","Suspect"])])]),
    Transform(DEF='SurfaceUnknownExample',translation=(15,0,-1),
      children=[
      Viewpoint(description='Surface Unknown',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='SurfaceUnknown',
        fieldValue=[
        fieldValue(name='color',value=(1,1,0))]),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(1,1,0)),
        fieldValue(name='trackLabel',value=["Surface","Unknown"])])]),
    #  Air Examples 
    Transform(DEF='AirFriendExample',translation=(-15,0,5),
      children=[
      Viewpoint(description='Air Friend',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='AirFriend',
        fieldValue=[
        fieldValue(name='color',value=[(0,0,1)])]),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(0,0,1)),
        fieldValue(name='trackLabel',value=["Air","Friend"])])]),
    Transform(DEF='AirAssumedFriendExample',translation=(-10,0,5),
      children=[
      Viewpoint(description='Air Assumed Friend',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='AirAssumedFriend',
        fieldValue=[
        fieldValue(name='color',value=[(0,0,1)]),
        fieldValue(name='labelColor',value=(0,0,1)),
        fieldValue(name='symbolModifier',value=["?"])]),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(0,0,1)),
        fieldValue(name='trackLabel',value=["Air","Assumed","Friend"])])]),
    Transform(DEF='AirNeutralExample',translation=(-5,0,5),
      children=[
      Viewpoint(description='Air Neutral',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='AirNeutral',
        fieldValue=[
        fieldValue(name='color',value=[(0,1,0)])]),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(0,1,0)),
        fieldValue(name='trackLabel',value=["Air","Neutral"])])]),
    Transform(DEF='AirPendingExample',translation=(0,0,5),
      children=[
      Viewpoint(description='Air Pending',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='AirPending',
        fieldValue=[
        fieldValue(name='color',value=(1,1,0)),
        fieldValue(name='labelColor',value=(1,1,0)),
        fieldValue(name='symbolModifier',value=["?"])]),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(1,1,0)),
        fieldValue(name='trackLabel',value=["Air","Pending"])])]),
    Transform(DEF='AirHostileExample',translation=(5,0,5),
      children=[
      Viewpoint(description='Air Hostile',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='AirHostile',
        fieldValue=[
        fieldValue(name='color',value=[(1,0,0)])]),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(1,0,0)),
        fieldValue(name='trackLabel',value=["Air","Hostile"])])]),
    Transform(DEF='AirSuspectExample',translation=(10,0,5),
      children=[
      Viewpoint(description='Air Suspect',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='AirSuspect',
        fieldValue=[
        fieldValue(name='color',value=[(1,0,0)]),
        fieldValue(name='labelColor',value=(1,0,0)),
        fieldValue(name='symbolModifier',value=["?"])]),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(1,0,0)),
        fieldValue(name='trackLabel',value=["Air","Suspect"])])]),
    Transform(DEF='AirUnknownExample',translation=(15,0,5),
      children=[
      Viewpoint(description='Air Unknown',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='AirUnknown',
        fieldValue=[
        fieldValue(name='color',value=(1,1,0))]),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(1,1,0)),
        fieldValue(name='trackLabel',value=["Air","Unknown"])])]),
    #  Sub-Surface Examples 
    Transform(DEF='SubSurfaceFriendExample',translation=(-15,0,10),
      children=[
      Viewpoint(description='SubSurface Friend',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='SubSurfaceFriend',
        fieldValue=[
        fieldValue(name='color',value=[(0,0,1)])]),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(0,0,1)),
        fieldValue(name='trackLabel',value=["SubSurface","Friend"])])]),
    Transform(DEF='SubSurfaceAssumedFriendExample',translation=(-10,0,10),
      children=[
      Viewpoint(description='SubSurface Assumed Friend',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='SubSurfaceAssumedFriend',
        fieldValue=[
        fieldValue(name='color',value=[(0,0,1)]),
        fieldValue(name='labelColor',value=(0,0,1)),
        fieldValue(name='symbolModifier',value=["?"])]),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(0,0,1)),
        fieldValue(name='trackLabel',value=["SubSurface","Assumed","Friend"])])]),
    Transform(DEF='SubSurfaceNeutralExample',translation=(-5,0,10),
      children=[
      Viewpoint(description='SubSurface Neutral',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='SubSurfaceNeutral',
        fieldValue=[
        fieldValue(name='color',value=[(0,1,0)])]),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(0,1,0)),
        fieldValue(name='trackLabel',value=["SubSurface","Neutral"])])]),
    Transform(DEF='SubSurfacePendingExample',translation=(0,0,10),
      children=[
      Viewpoint(description='SubSurface Pending',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='SubSurfacePending',
        fieldValue=[
        fieldValue(name='color',value=(1,1,0)),
        fieldValue(name='labelColor',value=(1,1,0)),
        fieldValue(name='symbolModifier',value=["?"])]),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(1,1,0)),
        fieldValue(name='trackLabel',value=["SubSurface","Pending"])])]),
    Transform(DEF='SubSurfaceHostileExample',translation=(5,0,10),
      children=[
      Viewpoint(description='SubSurface Hostile',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='SubSurfaceHostile',
        fieldValue=[
        fieldValue(name='color',value=[(1,0,0)])]),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(1,0,0)),
        fieldValue(name='trackLabel',value=["SubSurface","Hostile"])])]),
    Transform(DEF='SubSurfaceSuspectExample',translation=(10,0,10),
      children=[
      Viewpoint(description='SubSurface Suspect',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='SubSurfaceSuspect',
        fieldValue=[
        fieldValue(name='color',value=[(1,0,0)]),
        fieldValue(name='labelColor',value=(1,0,0)),
        fieldValue(name='symbolModifier',value=["?"])]),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(1,0,0)),
        fieldValue(name='trackLabel',value=["SubSurface","Suspect"])])]),
    Transform(DEF='SubSurfaceUnknownExample',translation=(15,0,10),
      children=[
      Viewpoint(description='SubSurface Unknown',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='SubSurfaceUnknown',
        fieldValue=[
        fieldValue(name='color',value=(1,1,0))]),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(1,1,0)),
        fieldValue(name='trackLabel',value=["SubSurface","Unknown"])])]),
    #  GroundEquipment Examples 
    Transform(DEF='GroundEquipmentFriendExample',translation=(-15,0,15),
      children=[
      Viewpoint(description='GroundEquipment Friend',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='GroundEquipmentFriend'),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(0,0,1)),
        fieldValue(name='trackLabel',value=["Ground","Equipment","Friend"])])]),
    Transform(DEF='GroundEquipmentAssumedFriendExample',translation=(-10,0,15),
      children=[
      Viewpoint(description='GroundEquipment Assumed Friend',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='GroundEquipmentAssumedFriend'),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(0,0,1)),
        fieldValue(name='trackLabel',value=["Ground","Equipment","Assumed","Friend"])])]),
    Transform(DEF='GroundEquipmentNeutralExample',translation=(-5,0,15),
      children=[
      Viewpoint(description='GroundEquipment Neutral',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='GroundEquipmentNeutral'),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(0,1,0)),
        fieldValue(name='trackLabel',value=["Ground","Equipment","Neutral"])])]),
    Transform(DEF='GroundEquipmentPendingExample',translation=(0,0,15),
      children=[
      Viewpoint(description='GroundEquipment Pending',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='GroundEquipmentPending'),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(1,1,0)),
        fieldValue(name='trackLabel',value=["Ground","Equipment","Pending"])])]),
    Transform(DEF='GroundEquipmentHostileExample',translation=(5,0,15),
      children=[
      Viewpoint(description='GroundEquipment Hostile',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='GroundEquipmentHostile'),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(1,0,0)),
        fieldValue(name='trackLabel',value=["Ground","Equipment","Hostile"])])]),
    Transform(DEF='GroundEquipmentSuspectExample',translation=(10,0,15),
      children=[
      Viewpoint(description='GroundEquipment Suspect',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='GroundEquipmentSuspect'),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(1,0,0)),
        fieldValue(name='trackLabel',value=["Ground","Equipment","Suspect"])])]),
    Transform(DEF='GroundEquipmentUnknownExample',translation=(15,0,15),
      children=[
      Viewpoint(description='GroundEquipment Unknown',orientation=(-1,0,0,1.57),position=(0,7,1)),
      ProtoInstance(name='GroundEquipmentUnknown'),
      ProtoInstance(name='SymbolLabel',
        fieldValue=[
        fieldValue(name='labelColor',value=(1,1,0)),
        fieldValue(name='trackLabel',value=["Ground","Equipment","Unknown"])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NTDSExternProtoExamples.py")
