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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    component(level=1,name='Geospatial'),
    meta(content='PearlHarborNavigationAids.x3d',name='title'),
    meta(content='Geo-referenced Pearl Harbor Navigation Aids, using Prototypes: Range Light, Lighted Buoy, Light, LightPost, Daybeacon.',name='description'),
    meta(content='Planet 9 Studios, Inc., San Francisco, CA',name='creator'),
    meta(content='Christian Greuel, Director of Art and Production',name='producer'),
    meta(content='http://www.planet9.com',name='reference'),
    meta(content='IHO S-57: http://www.caris.com/s-57',name='reference'),
    meta(content='Xj3D Format Converter',name='translator'),
    meta(content='18 August 2006',name='created'),
    meta(content='18 August 2006',name='translated'),
    meta(content='9 July 2018',name='modified'),
    meta(content='../../license.html',name='license'),
    meta(content='https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/PearlHarborNavigationAids.x3d',name='identifier')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='RangeLight',url=["RangeLightPrototype.x3d#RangeLight","RangeLightPrototype.x3dv#RangeLight","RangeLightPrototype.x3db#RangeLight","RangeLightPrototype.wrl#RangeLight","../../../Savage/HarborEquipment/NavigationAids/RangeLightPrototype.x3d#RangeLight","../../../Savage/HarborEquipment/NavigationAids/RangeLightPrototype.x3dv#RangeLight","../../../Savage/HarborEquipment/NavigationAids/RangeLightPrototype.x3db#RangeLight","../../../Savage/HarborEquipment/NavigationAids/RangeLightPrototype.wrl#RangeLight","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/RangeLightPrototype.x3d#RangeLight","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/RangeLightPrototype.x3dv#RangeLight","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/RangeLightPrototype.x3db#RangeLight","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/RangeLightPrototype.wrl#RangeLight"],
      #  NOTE: Beacon light points due North (+Z) and is only visible from that side. 
      field=[
      field(accessType='inputOutput',name='LightType',type='SFInt32'),
      #  0=LightOff, 1=LightOn, 2=LightFlashing(NotImplemented) 
      field(accessType='inputOutput',name='LightGlow',type='SFVec3f')]
      #  XYZ Scale of Light Glow Effect (suggest Z=1.0) 
      ),
    ExternProtoDeclare(name='LightedBuoy',url=["LightedBuoyPrototype.x3d#LightedBuoy","LightedBuoyPrototype.x3dv#LightedBuoy","LightedBuoyPrototype.x3db#LightedBuoy","LightedBuoyPrototype.wrl#LightedBuoy","../../../Savage/HarborEquipment/NavigationAids/LightedBuoyPrototype.x3d#LightedBuoy","../../../Savage/HarborEquipment/NavigationAids/LightedBuoyPrototype.x3dv#LightedBuoy","../../../Savage/HarborEquipment/NavigationAids/LightedBuoyPrototype.x3db#LightedBuoy","../../../Savage/HarborEquipment/NavigationAids/LightedBuoyPrototype.wrl#LightedBuoy","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/LightedBuoyPrototype.x3d#LightedBuoy","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/LightedBuoyPrototype.x3dv#LightedBuoy","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/LightedBuoyPrototype.x3db#LightedBuoy","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/LightedBuoyPrototype.wrl#LightedBuoy"],
      #  NOTE: CATLAM = Catagory of Lateral Marker (Reference: IHO S-57) 
      field=[
      field(accessType='inputOutput',name='Catlam',type='SFInt32'),
      #  0=None(Unlikely), 1=PortHand(GreenSquare), 2=StarboardHand(RedTriangle), 3=NotImplemented, 4=NotImplemented 
      field(accessType='inputOutput',name='LightType',type='SFInt32'),
      #  0=LightOff, 1=LightOn, 2=LightFlashing(NotImplemented) 
      field(accessType='inputOutput',name='LightGlow',type='SFVec3f'),
      #  XYZ Scale of Light Glow Effect (suggest Z=1.0) 
      field(accessType='inputOutput',name='Number',type='SFInt32')]
      #  Not Implemented 
      ),
    ExternProtoDeclare(name='Light',url=["LightPrototype.x3d#Light","LightPrototype.x3dv#Light","LightPrototype.x3db#Light","LightPrototype.wrl#Light","../../../Savage/HarborEquipment/NavigationAids/LightPrototype.x3d#Light","../../../Savage/HarborEquipment/NavigationAids/LightPrototype.x3dv#Light","../../../Savage/HarborEquipment/NavigationAids/LightPrototype.x3db#Light","../../../Savage/HarborEquipment/NavigationAids/LightPrototype.wrl#Light","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/LightPrototype.x3d#Light","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/LightPrototype.x3dv#Light","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/LightPrototype.x3db#Light","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/LightPrototype.wrl#Light"],
      #  NOTE: CATLAM = Catagory of Lateral Marker (Reference: IHO S-57) 
      field=[
      field(accessType='inputOutput',name='Catlam',type='SFInt32'),
      #  0=None(Unlikely), 1=PortHand(GreenSquare), 2=StarboardHand(RedTriangle), 3=PreferredChannelToStarboard(TopmostBandGreen), 4=PreferredChannelToPort(TopmostBandRed) 
      field(accessType='inputOutput',name='LightType',type='SFInt32'),
      #  0=LightOff, 1=LightOn, 2=LightFlashing(NotImplemented) 
      field(accessType='inputOutput',name='LightGlow',type='SFVec3f'),
      #  XYZ Scale of Light Glow Effect (suggest Z=1.0) 
      field(accessType='inputOutput',name='PileType',type='SFInt32'),
      #  0=NoPile(Unlikely), 1=SinglePile, 2=MultiPile 
      field(accessType='inputOutput',name='Number',type='SFInt32')]
      #  Not Implemented 
      ),
    ExternProtoDeclare(name='LightPost',url=["LightPostPrototype.x3d#LightPost","LightPostPrototype.x3dv#LightPost","LightPostPrototype.x3db#LightPost","LightPostPrototype.wrl#LightPost","../../../Savage/HarborEquipment/NavigationAids/LightPostPrototype.x3d#LightPost","../../../Savage/HarborEquipment/NavigationAids/LightPostPrototype.x3dv#LightPost","../../../Savage/HarborEquipment/NavigationAids/LightPostPrototype.x3db#LightPost","../../../Savage/HarborEquipment/NavigationAids/LightPostPrototype.wrl#LightPost","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/LightPostPrototype.x3d#LightPost","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/LightPostPrototype.x3dv#LightPost","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/LightPostPrototype.x3db#LightPost","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/LightPostPrototype.wrl#LightPost"],
      field=[
      field(accessType='inputOutput',name='LightType',type='SFInt32'),
      #  0=LightOff, 1=LightOn, 2=LightFlashing(NotImplemented) 
      field(accessType='inputOutput',name='LightGlow',type='SFVec3f')]
      #  XYZ Scale of Light Glow Effect (suggest Z=1.0) 
      ),
    ExternProtoDeclare(name='Daybeacon',url=["DaybeaconPrototype.x3d#Daybeacon","DaybeaconPrototype.x3dv#Daybeacon","DaybeaconPrototype.x3db#Daybeacon","DaybeaconPrototype.wrl#Daybeacon","../../../Savage/HarborEquipment/NavigationAids/DaybeaconPrototype.x3d#Daybeacon","../../../Savage/HarborEquipment/NavigationAids/DaybeaconPrototype.x3dv#Daybeacon","../../../Savage/HarborEquipment/NavigationAids/DaybeaconPrototype.x3db#Daybeacon","../../../Savage/HarborEquipment/NavigationAids/DaybeaconPrototype.wrl#Daybeacon","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/DaybeaconPrototype.x3d#Daybeacon","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/DaybeaconPrototype.x3dv#Daybeacon","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/DaybeaconPrototype.x3db#Daybeacon","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/DaybeaconPrototype.wrl#Daybeacon"],
      #  NOTE: CATLAM = Catagory of Lateral Marker (Reference: IHO S-57) 
      field=[
      field(accessType='inputOutput',name='Catlam',type='SFInt32'),
      #  0=None(Unlikely), 1=PortHand(GreenSquare), 2=StarboardHand(RedTriangle), 3=PreferredChannelToStarboard(TopmostBandGreen), 4=PreferredChannelToPort(TopmostBandRed) 
      field(accessType='inputOutput',name='Number',type='SFInt32')]
      #  Not Implemented 
      ),
    GeoLocation(geoCoords=(2362714,608354,0),geoSystem=["UTM","Z4"],
      geoOrigin=GeoOrigin(geoCoords=(2362714,608354,0),geoSystem=["UTM","Z4"]),
      #  Range Lights 
      children=[
      Transform(DEF='PearlHarborEntranceRangeFrontLight',rotation=(0.0,-1.0,0.0,2.680832),translation=(-1637.90,1.0,4068.20),
        #  Rotate to heading 153.6 
        children=[
        ProtoInstance(name='RangeLight',
          fieldValue=[
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(4.0,4.0,1.0))]
          #  Glow effect scaled four times wide (XY only) 
          )]),
      Transform(DEF='PearlHarborEntranceRangeRearLight',rotation=(0.0,-1.0,0.0,2.680832),translation=(-1945.68,1.0,3447.72),
        #  Rotate to heading 153.6 
        children=[
        ProtoInstance(name='RangeLight',
          fieldValue=[
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(4.0,4.0,1.0))]
          #  Glow effect scaled four times wide (XY only) 
          )]),
      Transform(DEF='PearlHarborWestLochEntranceRangeFrontLight',rotation=(0.0,-1.0,0.0,2.495826667),translation=(-2931.49,3.5,1270.43),
        #  Rotate to heading 143.0 
        children=[
        ProtoInstance(name='RangeLight',
          fieldValue=[
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(4.0,4.0,1.0))]
          #  Glow effect scaled four times wide (XY only) 
          )]),
      Transform(DEF='PearlHarborWestLochEntranceRangeRearLight',rotation=(0.0,-1.0,0.0,2.495826667),translation=(-3109.04,3.7,1038.89),
        #  Rotate to heading 143.0 
        children=[
        ProtoInstance(name='RangeLight',
          fieldValue=[
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(4.0,4.0,1.0))]
          #  Glow effect scaled four times wide (XY only) 
          )]),
      #  Daybeacons 
      Transform(DEF='ADocksBasinDaybeacon2',translation=(-1062.23,0.0,4047.53),
        children=[
        ProtoInstance(name='Daybeacon',
          fieldValue=[
          fieldValue(name='Catlam',value=2)]
          #  Starboard-Hand (Red Triangle) 
          )]),
      Transform(DEF='PearlHarborWestLochDaybeacon1',translation=(-2014.14,0.0,2663.59),
        children=[
        ProtoInstance(name='Daybeacon',
          fieldValue=[
          fieldValue(name='Catlam',value=1)]
          #  Port-Hand (Green Square) 
          )]),
      Transform(DEF='PearlHarborWestLochDaybeacon11',translation=(-5092.60,0.0,988.92),
        children=[
        ProtoInstance(name='Daybeacon',
          fieldValue=[
          fieldValue(name='Catlam',value=1)]
          #  Port-Hand (Green Square) 
          )]),
      #  Danger Daybeacons (inlined) 
      Transform(DEF='PearlHarborEastLochDangerDaybeacon',translation=(-555.64,0.0,-2334.89),
        children=[
        Inline(url=["DangerDaybeacon.x3d","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/DangerDaybeacon.x3d","DangerDaybeacon.wrl","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/DangerDaybeacon.wrl"])]),
      #  Lights 
      Transform(DEF='FordislandJunctionLightF',translation=(-1143.05,0.0,963.44),
        children=[
        ProtoInstance(name='Light',
          fieldValue=[
          fieldValue(name='Catlam',value=3),
          #  Preferred Channel To Starboard (Topmost Band Green) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(2.0,2.0,2.0)),
          #  Glow effect scaled two times (XYZ) 
          fieldValue(name='PileType',value=2)]
          #  Multi Pile 
          )]),
      Transform(DEF='PearlHarborEastLochDaybeacon2',translation=(1648.54,0.0,-1007.17),
        children=[
        ProtoInstance(name='Light',
          fieldValue=[
          fieldValue(name='Catlam',value=2),
          #  Starboard-Hand (Red Triangle) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(2.0,2.0,2.0)),
          #  Glow effect scaled two times (XYZ) 
          fieldValue(name='PileType',value=1)]
          #  Single Pile 
          )]),
      Transform(DEF='PearlHarborEastLochLight4',translation=(1881.85,0.0,-1215.58),
        children=[
        ProtoInstance(name='Light',
          fieldValue=[
          fieldValue(name='Catlam',value=2),
          #  Starboard-Hand (Red Triangle) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(2.0,2.0,2.0)),
          #  Glow effect scaled two times (XYZ) 
          fieldValue(name='PileType',value=1)]
          #  Single Pile 
          )]),
      Transform(DEF='PearlHarborLight6',translation=(-1026.54,0.0,4942.25),
        children=[
        ProtoInstance(name='Light',
          fieldValue=[
          fieldValue(name='Catlam',value=2),
          #  Starboard-Hand (Red Triangle) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(2.0,2.0,2.0)),
          #  Glow effect scaled two times (XYZ) 
          fieldValue(name='PileType',value=1)]
          #  Single Pile 
          )]),
      Transform(DEF='PearlHarborLight9',translation=(-1652.74,0.0,3936.05),
        children=[
        ProtoInstance(name='Light',
          fieldValue=[
          fieldValue(name='Catlam',value=1),
          #  Port-Hand (Green Square) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(2.0,2.0,2.0)),
          #  Glow effect scaled two times (XYZ) 
          fieldValue(name='PileType',value=1)]
          #  Single Pile 
          )]),
      Transform(DEF='PearlHarborLight15',translation=(-1670.35,0.0,1811.14),
        children=[
        ProtoInstance(name='Light',
          fieldValue=[
          fieldValue(name='Catlam',value=1),
          #  Port-Hand (Green Square) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(2.0,2.0,2.0)),
          #  Glow effect scaled two times (XYZ) 
          fieldValue(name='PileType',value=2)]
          #  Multi Pile 
          )]),
      Transform(DEF='PearlHarborLight16',translation=(-1351.59,0.0,1550.51),
        children=[
        ProtoInstance(name='Light',
          fieldValue=[
          fieldValue(name='Catlam',value=2),
          #  Starboard-Hand (Red Triangle) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(2.0,2.0,2.0)),
          #  Glow effect scaled two times (XYZ) 
          fieldValue(name='PileType',value=2)]
          #  Multi Pile 
          )]),
      Transform(DEF='PearlHarborLight17',translation=(-1713.90,0.0,1419.63),
        children=[
        ProtoInstance(name='Light',
          fieldValue=[
          fieldValue(name='Catlam',value=1),
          #  Port-Hand (Green Square) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(2.0,2.0,2.0)),
          #  Glow effect scaled two times (XYZ) 
          fieldValue(name='PileType',value=1)]
          #  Single Pile 
          )]),
      Transform(DEF='PearlHarborLight18',translation=(-1150.63,0.0,1369.20),
        children=[
        ProtoInstance(name='Light',
          fieldValue=[
          fieldValue(name='Catlam',value=2),
          #  Starboard-Hand (Red Triangle) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(2.0,2.0,2.0)),
          #  Glow effect scaled two times (XYZ) 
          fieldValue(name='PileType',value=1)]
          #  Single Pile 
          )]),
      Transform(DEF='PearlHarborLight19',translation=(-1628.48,0.0,1091.92),
        children=[
        ProtoInstance(name='Light',
          fieldValue=[
          fieldValue(name='Catlam',value=1),
          #  Port-Hand (Green Square) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(2.0,2.0,2.0)),
          #  Glow effect scaled two times (XYZ) 
          fieldValue(name='PileType',value=2)]
          #  Multi Pile 
          )]),
      Transform(DEF='PearlHarborLight20',translation=(-939.30,0.0,1207.72),
        children=[
        ProtoInstance(name='Light',
          fieldValue=[
          fieldValue(name='Catlam',value=2),
          #  Starboard-Hand (Red Triangle) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(2.0,2.0,2.0)),
          #  Glow effect scaled two times (XYZ) 
          fieldValue(name='PileType',value=1)]
          #  Single Pile 
          )]),
      Transform(DEF='PearlHarborLight23',translation=(747.88,0.0,-445.24),
        children=[
        ProtoInstance(name='Light',
          fieldValue=[
          fieldValue(name='Catlam',value=1),
          #  Port-Hand (Green Square) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(2.0,2.0,2.0)),
          #  Glow effect scaled two times (XYZ) 
          fieldValue(name='PileType',value=1)]
          #  Single Pile 
          )]),
      Transform(DEF='PearlHarborNorthChannelLight2',translation=(-1515.12,0.0,477.63),
        children=[
        ProtoInstance(name='Light',
          fieldValue=[
          fieldValue(name='Catlam',value=2),
          #  Starboard-Hand (Red Triangle) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(2.0,2.0,2.0)),
          #  Glow effect scaled two times (XYZ) 
          fieldValue(name='PileType',value=2)]
          #  Multi Pile 
          )]),
      Transform(DEF='PearlHarborNorthChannelLight4',translation=(-1551.41,0.0,200.43),
        children=[
        ProtoInstance(name='Light',
          fieldValue=[
          fieldValue(name='Catlam',value=2),
          #  Starboard-Hand (Red Triangle) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(2.0,2.0,2.0)),
          #  Glow effect scaled two times (XYZ) 
          fieldValue(name='PileType',value=2)]
          #  Multi Pile 
          )]),
      Transform(DEF='PearlHarborWestLochLight3',translation=(-2752.69,0.0,1691.89),
        children=[
        ProtoInstance(name='Light',
          fieldValue=[
          fieldValue(name='Catlam',value=1),
          #  Port-Hand (Green Square) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(2.0,2.0,2.0)),
          #  Glow effect scaled two times (XYZ) 
          fieldValue(name='PileType',value=1)]
          #  Single Pile 
          )]),
      Transform(DEF='PearlHarborWestLochLight5',translation=(-2921.80,0.0,1615.42),
        children=[
        ProtoInstance(name='Light',
          fieldValue=[
          fieldValue(name='Catlam',value=1),
          #  Port-Hand (Green Square) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(2.0,2.0,2.0)),
          #  Glow effect scaled two times (XYZ) 
          fieldValue(name='PileType',value=1)]
          #  Single Pile 
          )]),
      Transform(DEF='PearlHarborWestLochLight9',translation=(-4208.15,0.0,1055.89),
        children=[
        ProtoInstance(name='Light',
          fieldValue=[
          fieldValue(name='Catlam',value=1),
          #  Port-Hand (Green Square) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(2.0,2.0,2.0)),
          #  Glow effect scaled two times (XYZ) 
          fieldValue(name='PileType',value=2)]
          #  Multi Pile 
          )]),
      Transform(DEF='PearlHarborWestLochLight10',translation=(-4642.00,0.0,801.1),
        children=[
        ProtoInstance(name='Light',
          fieldValue=[
          fieldValue(name='Catlam',value=2),
          #  Starboard-Hand (Red Triangle) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(2.0,2.0,2.0)),
          #  Glow effect scaled two times (XYZ) 
          fieldValue(name='PileType',value=2)]
          #  Multi Pile 
          )]),
      Transform(DEF='WestLochJunctionLightW',translation=(-1702.88,0.0,2393.07),
        children=[
        ProtoInstance(name='Light',
          fieldValue=[
          fieldValue(name='Catlam',value=3),
          #  Preferred Channel To Starboard (Topmost Band Green) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(2.0,2.0,2.0)),
          #  Glow effect scaled two times (XYZ) 
          fieldValue(name='PileType',value=1)]
          #  Single Pile 
          )]),
      #  Light Posts 
      Transform(DEF='MerryPointLight',rotation=(0.0,1.0,0.0,1.57),translation=(1190.34,0.0,1221.4),
        children=[
        ProtoInstance(name='LightPost',
          fieldValue=[
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(2.0,2.0,2.0))]
          #  Glow effect scaled two times (XYZ) 
          )]),
      #  Cans 
      #  NOTE: Temporarily using green Lighted Buoy with Light Off, for lack of proper Can model 
      Transform(DEF='PearlHarborNorthChannelBuoy9',translation=(932.94,0.0,-1184.33),
        children=[
        ProtoInstance(name='LightedBuoy',
          fieldValue=[
          fieldValue(name='Catlam',value=1),
          #  Port-Hand (Green Square) 
          fieldValue(name='LightType',value=0)]
          #  Light Off 
          )]),
      #  Lighted Buoys 
      Transform(DEF='PearlHarborLightedBuoy1',translation=(-1771.66,0.0,562.84),
        children=[
        ProtoInstance(name='LightedBuoy',
          fieldValue=[
          fieldValue(name='Catlam',value=1),
          #  Port-Hand (Green Square) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(1.0,1.0,1.0))]
          #  Glow effect standard scale 
          )]),
      Transform(DEF='PearlHarborLightedBuoy11',translation=(-1728.88,0.0,2976.95),
        children=[
        ProtoInstance(name='LightedBuoy',
          fieldValue=[
          fieldValue(name='Catlam',value=1),
          #  Port-Hand (Green Square) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(1.0,1.0,1.0))]
          #  Glow effect standard scale 
          )]),
      Transform(DEF='PearlHarborNorthChannelLightedBuoy6',translation=(-95.90,0.0,-1126.75),
        children=[
        ProtoInstance(name='LightedBuoy',
          fieldValue=[
          fieldValue(name='Catlam',value=2),
          #  Starboard-Hand (Red Triangle) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(1.0,1.0,1.0))]
          #  Glow effect standard scale 
          )]),
      Transform(DEF='PearlHarborNorthChannelLightedBuoy8',translation=(577.31,0.0,-1018.87),
        children=[
        ProtoInstance(name='LightedBuoy',
          fieldValue=[
          fieldValue(name='Catlam',value=2),
          #  Starboard-Hand (Red Triangle) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(1.0,1.0,1.0))]
          #  Glow effect standard scale 
          )]),
      Transform(DEF='PearlHarborWestLochLightedBuoy6',translation=(-3551.35,0.0,1355.96),
        children=[
        ProtoInstance(name='LightedBuoy',
          fieldValue=[
          fieldValue(name='Catlam',value=2),
          #  Starboard-Hand (Red Triangle) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(1.0,1.0,1.0))]
          #  Glow effect standard scale 
          )]),
      Transform(DEF='PearlHarborWestLochLightedBuoy7',translation=(-3923.21,0.0,1183.34),
        children=[
        ProtoInstance(name='LightedBuoy',
          fieldValue=[
          fieldValue(name='Catlam',value=1),
          #  Port-Hand (Green Square) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(1.0,1.0,1.0))]
          #  Glow effect standard scale 
          )]),
      Transform(DEF='PearlHarborWestLochLightedBuoy8',translation=(-3958.03,0.0,838.50),
        children=[
        ProtoInstance(name='LightedBuoy',
          fieldValue=[
          fieldValue(name='Catlam',value=2),
          #  Starboard-Hand (Red Triangle) 
          fieldValue(name='LightType',value=1),
          #  Light On 
          fieldValue(name='LightGlow',value=(1.0,1.0,1.0))]
          #  Glow effect standard scale 
          )])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PearlHarborNavigationAids.py")
