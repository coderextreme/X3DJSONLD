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
    meta(content='LCAC.x3d',name='title'),
    meta(content='Landing Craft Air Cushioned (LCAC) amphibious assault vehicle. Carrying capacity is 60 to 75 tons.',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='22 June 2001',name='created'),
    meta(content='19 December 2014',name='modified'),
    meta(content='lcac.pdf',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lcac.htm',name='reference'),
    meta(content='lsd-44_990829-N-9593R-002.jpg',name='reference'),
    meta(content='http://www.hazegray.org/features/nato/us/lcac',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lsd-44_990829-N-9593R-002.jpg',name='reference'),
    meta(content='lcac-kb97_8.jpg',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lcac-kb97_8.jpg',name='reference'),
    meta(content='lcac-dvic076.jpg',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lcac-dvic076.jpg',name='reference'),
    meta(content='http://www.surfpac.navy.mil/photorelease/2001/01-008LCAC.htm',name='reference'),
    meta(content='http://www.surfpac.navy.mil/photorelease/2001/UssBoxerApril01.3.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/LCAC.x3d',name='identifier'),
    meta(content='LCAC Pilot House',name='subject'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='LCAC',position=(0,0,50)),
    NavigationInfo(type=["EXAMINE","FLY","ANY"]),
    Background(DEF='OpenOcean',groundAngle=[0.05,1.309,1.570796],groundColor=[(0,0,0),(0,0.2,0.4),(0.05,0.25,0.6),(0.1,0.2,0.4)],skyAngle=[0.05,0.1,1.309,1.571],skyColor=[(0.8,0.8,0.2),(0.1,0.1,0.6),(0.1,0.1,0.6),(0.1,0.25,0.8),(0.6,0.6,0.9)]),
    Background(DEF='SandyShallowBottom',groundAngle=[0.05,1.52,1.56,1.570796],groundColor=[(0.2,0.2,0),(0.3,0.3,0),(0.5,0.5,0.3),(0.1,0.3,0.4),(0,0.2,0.4)],skyAngle=[0.05,0.1,1.309,1.571],skyColor=[(0.8,0.8,0.2),(0.1,0.1,0.6),(0.1,0.1,0.6),(0.1,0.25,0.8),(0.6,0.6,0.9)]),
    #  TODO use ViewpointGroup to achieve LOD effect for Viewpoints 
    Group(DEF='Viewpoints',
      children=[
      Viewpoint(description='LCAC Overhead',orientation=(.546,.632,.549,4.2563),position=(-9.6,53.4,0)),
      Viewpoint(description='LCAC from Above and Slightly Behind',orientation=(-.564,-.816,-.127,.8298),position=(-28.9,22.5,34)),
      Viewpoint(description='Above in Front',orientation=(-.101,.989,.107,1.5603),position=(45.4,11.7,.9)),
      Viewpoint(description='Pilot House',orientation=(-.311,.922,.23,1.1436),position=(18.6,5.4,10.1)),
      Viewpoint(description='Inside Pilot House Looking Forward',orientation=(0,-1,0,1.476),position=(9.9,3.9,5.4)),
      Viewpoint(description='Crew House',orientation=(-.135,.982,.134,.8067),position=(15,3.2,1.6)),
      Viewpoint(description='Life Boat and Mast',orientation=(0.042,.991,.125,3.7877),position=(5.8,5.8,-11.4)),
      Viewpoint(description='Inside Crew House',orientation=(0,1,0,3.5433),position=(11,2.2,-6.3)),
      Viewpoint(description='Above Cargo Area',orientation=(-.249,-.939,-.237,1.5847),position=(2.5,7.8,-.4)),
      Viewpoint(description='Pilot House and Blower',orientation=(0.048,.994,0.098,4.1059),position=(.6,5.4,-.9)),
      Viewpoint(description='Above the LCAC Fan',orientation=(-0.004,-1,-0.013,1.4137),position=(-23.7,7.8,5.9))]),
    LOD(range=[800,2000,20000],
      #  Short range: high resolution 
      children=[
      Group(DEF='LCAC',
        children=[
        Group(DEF='Hull',
          children=[
          Transform(DEF='HullPlatform',
            children=[
            Transform(DEF='PlatformTop',
              children=[
              Shape(
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8,-1],solid=False,
                  coord=Coordinate(point=[(14,0.125,-7.275),(-14,0.125,-7.275),(-14.9,0.125,-7),(-14.9,0.125,7),(-14,0.125,7.275),(14,0.125,7.275),(14.9,0.125,7),(14.9,0.125,-7),(14,0.125,-7.275)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.5,0.55,0.55)))),
              Transform(DEF='PlatformTopStrip',
                children=[
                Shape(
                  geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                    coord=Coordinate(point=[(-14.9,0.127,0.17275),(-14.9,0.127,-0.17275),(14.9,0.127,-0.17275),(14.9,0.127,0.17275),(-14.9,0.127,0.17275)])),
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,1,0))))]),
              Transform(DEF='PlatformPortStrip',
                children=[
                Shape(
                  geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                    coord=Coordinate(point=[(-14.9,0.127,4),(-14.9,0.127,3.875),(14.9,0.127,3.875),(14.9,0.127,4),(-14.9,0.127,4)])),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.66,0.66,0.1))))]),
              Transform(DEF='PlatformStarboardStrip',
                children=[
                Shape(
                  geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                    coord=Coordinate(point=[(-14.9,0.127,-4),(-14.9,0.127,-3.875),(14.9,0.127,-3.875),(14.9,0.127,-4),(-14.9,0.127,-4)])),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.66,0.66,0.1))))])]),
            Transform(DEF='FrontPlatform',
              children=[
              Shape(
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                  coord=Coordinate(point=[(14.9,-0.125,-7),(14.9,0.125,-7),(14.9,0.125,7),(14.9,-0.125,7),(14.9,-0.125,-7)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.5,0.55,0.55))))]),
            Transform(DEF='PlatformBottom',
              children=[
              Shape(
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8,-1],solid=False,
                  coord=Coordinate(point=[(14,-0.125,-7.275),(-14,-0.125,-7.275),(-14.9,-0.125,-7),(-14.9,-0.125,7),(-14,-0.125,7.275),(14,-0.125,7.275),(14.9,-0.125,7),(14.9,-0.125,-7),(14,-0.125,-7.275)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.5,0.55,0.55))))]),
            Transform(DEF='BackPlatform',
              children=[
              Shape(
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                  coord=Coordinate(point=[(-14.9,-0.125,-7),(-14.9,0.125,-7),(-14.9,0.125,7),(-14.9,-0.125,7),(-14.9,-0.125,-7)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.5,0.55,0.55))))]),
            Transform(DEF='StarboardSidePlatform',
              children=[
              Shape(
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                  coord=Coordinate(point=[(14,-0.125,-7.275),(14,0.125,-7.275),(-14,0.125,-7.275),(-14,-0.125,-7.275),(14,-0.125,-7.275)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.8,0.8,1))))]),
            Transform(DEF='PortSidePlatform',
              children=[
              Shape(
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                  coord=Coordinate(point=[(14,-0.125,7.275),(14,0.125,7.275),(-14,0.125,7.275),(-14,-0.125,7.275),(14,-0.125,7.275)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.5,0.55,0.55))))]),
            Transform(DEF='FrontCornerPort',
              children=[
              Shape(
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                  coord=Coordinate(point=[(14.9,-0.125,7),(14,-0.125,7.275),(14,0.125,7.275),(14.9,0.125,7),(14.9,-0.125,7)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.5,0.55,0.55))))]),
            Transform(DEF='FrontCornerStarboard',
              children=[
              Shape(
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                  coord=Coordinate(point=[(14.9,-0.125,-6.75),(14,-0.125,-7.275),(14,0.125,-7.275),(14.9,0.125,-6.75),(14.9,-0.125,-6.75)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.5,0.55,0.55))))]),
            Transform(DEF='AftCornerStarboard',
              children=[
              Shape(
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                  coord=Coordinate(point=[(-14.9,-0.125,-7),(-14,-0.125,-7.275),(-14,0.125,-7.275),(-14.9,0.125,-7),(-14.9,-0.125,-7)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.5,0.55,0.55))))]),
            Transform(DEF='AftCornerPort',
              children=[
              Shape(
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                  coord=Coordinate(point=[(-14.9,-0.125,7),(-14,-0.125,7.275),(-14,0.125,7.275),(-14.9,0.125,7),(-14.9,-0.125,7)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.5,0.55,0.55))))])]),
          Transform(DEF='ForwardRamp',translation=(0.225,-0.125,0),
            children=[
            Transform(DEF='RampTop',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(),),
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                  coord=Coordinate(point=[(14.5,0.5,5.55),(14.5,0.5,-5.55),(14.5,2.75,-5.15),(14.5,2.75,5.15),(14.5,0.5,5.55)])))]),
            Transform(DEF='Bottom',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(),),
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                  coord=Coordinate(point=[(14.75,0.5,5.55),(14.75,0.5,-5.55),(14.5,2.75,-5.15),(14.5,2.75,5.15),(14.75,0.5,5.55)])))]),
            Transform(DEF='PortSide',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(),),
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
                  coord=Coordinate(point=[(14.5,0.5,-5.55),(14.75,0.5,-5.55),(14.5,2.75,-5.15),(14.5,0.5,-5.55)])))]),
            Transform(DEF='StarboardSide',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(),),
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
                  coord=Coordinate(point=[(14.5,0.5,5.55),(14.75,0.5,5.55),(14.5,2.75,5.15),(14.5,0.5,5.55)])))]),
            Transform(rotation=(1,0,0,1.57),translation=(14.625,0.475,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(),),
                geometry=Cylinder(height=11.2,radius=0.125))])])]),
        Group(DEF='PilotHouseGroup',
          children=[
          Transform(rotation=(0,1,0,1.57),scale=(1.2,1.2,1.2),translation=(11,0.125,5.5),
            children=[
            Inline(DEF='PilotHouse',url=["PilotHouse.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/PilotHouse.x3d","PilotHouse.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/PilotHouse.wrl"])])]),
        Group(DEF='Fans',
          children=[
          Transform(DEF='StarboardFan',rotation=(0,-1,0,1.57),translation=(-15,2.6,4.9),
            children=[
            Inline(DEF='Fan',url=["Fan.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/Fan.x3d","Fan.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/Fan.wrl"])]),
          Transform(DEF='PortFan',rotation=(0,-1,0,1.57),translation=(-15,2.6,-4.9),
            children=[
            Inline(USE='Fan')])]),
        Group(DEF='SkirtGroup',
          children=[
          Transform(rotation=(-0,0.71,0.71,3.14),scale=(1,1,0.9),translation=(14.975,-1.95,0),
            children=[
            Inline(DEF='Skirt',url=["Skirt.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/Skirt.x3d","Skirt.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/Skirt.wrl"])])]),
        Group(DEF='BlowerHouses',
          children=[
          Transform(DEF='BlowerHouseTransformStarboard',scale=(1,0.9,0.9),translation=(5.45,4.15,5.5),
            children=[
            Inline(DEF='BlowerHouse',url=["BlowerHouse.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/BlowerHouse.x3d","BlowerHouse.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/BlowerHouse.wrl"])]),
          Transform(DEF='BlowerHouseTransformPort',scale=(1,0.9,0.9),translation=(5.45,4.15,-5.5),
            children=[
            Inline(DEF='PortBlowerHouse',url=["PortBlowerHouse.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/PortBlowerHouse.x3d","PortBlowerHouse.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/PortBlowerHouse.wrl"])])]),
        Group(DEF='Railings',
          children=[
          Group(DEF='StarboardRailings',
            children=[
            Transform(DEF='Corner',translation=(13.5,0.85,6.75),
              children=[
              Shape(
                appearance=Appearance(DEF='Metal',
                  material=Material(diffuseColor=(0.85,0.9,0.85),shininess=1,specularColor=(1,1,1))),
                geometry=Extrusion(creaseAngle=3.14,crossSection=[(0.1,0),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(0,-0.10),(-0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.10,0),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0,0.10),(0.038,0.092),(0.071,0.071),(0.092,0.038),(0.10,0)],scale=[(0.25,0.25),(0.25,0.25),(0.25,0.25),(0.25,0.25),(0.25,0.25),(0.25,0.25),(0.25,0.25),(0.25,0.25),(0.25,0.25)],spine=[(-0.2,0.3,0),(0,0.3,0),(0.1,0.3,0),(0.15,0.29,0),(0.2,0.275,0),(0.275,0.2,0),(0.29,0.15,0),(0.3,0.1,0),(0.3,0,0)]))]),
            Transform(DEF='FirstStarboardRail',translation=(13.8,0.45,6.75),
              children=[
              Shape(
                appearance=Appearance(USE='Metal'),
                geometry=Cylinder(height=0.9,radius=0.025))]),
            Transform(DEF='SecondStarboardRail',translation=(14,0.45,6.75),
              children=[
              Shape(
                appearance=Appearance(USE='Metal'),
                geometry=Cylinder(height=0.9,radius=0.025))]),
            Transform(DEF='ThirdStarboardRail',translation=(14.25,0.45,6.5),
              children=[
              Shape(
                appearance=Appearance(USE='Metal'),
                geometry=Cylinder(height=0.9,radius=0.025))]),
            Transform(DEF='FourthStarboardRail',translation=(14.5,0.45,6.25),
              children=[
              Shape(
                appearance=Appearance(USE='Metal'),
                geometry=Cylinder(height=0.9,radius=0.025))]),
            Transform(DEF='FifthStarboardRail',translation=(14.5,0.45,5.75),
              children=[
              Shape(
                appearance=Appearance(USE='Metal'),
                geometry=Cylinder(height=0.9,radius=0.025))]),
            Transform(DEF='BottomRail',
              children=[
              Shape(
                appearance=Appearance(USE='Metal'),
                geometry=Extrusion(creaseAngle=3.14,crossSection=[(0.1,0),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(0,-0.10),(-0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.10,0),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0,0.10),(0.038,0.092),(0.071,0.071),(0.092,0.038),(0.10,0)],scale=[(0.25,0.25),(0.25,0.25),(0.25,0.25),(0.25,0.25),(0.25,0.25),(0.25,0.25)],spine=[(13.4,0.35,6.75),(13.8,0.35,6.75),(14,0.35,6.75),(14.25,0.35,6.5),(14.5,0.35,6.25),(14.5,0.35,5.745)]))]),
            Transform(DEF='TopRail',
              children=[
              Shape(
                appearance=Appearance(USE='Metal'),
                geometry=Extrusion(creaseAngle=3.14,crossSection=[(0.1,0),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(0,-0.10),(-0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.10,0),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0,0.10),(0.038,0.092),(0.071,0.071),(0.092,0.038),(0.10,0)],scale=[(0.25,0.25),(0.25,0.25),(0.25,0.25),(0.25,0.25),(0.25,0.25),(0.25,0.25)],spine=[(13.4,0.85,6.75),(13.8,0.85,6.75),(14,0.85,6.75),(14.25,0.85,6.5),(14.5,0.85,6.25),(14.5,0.85,5.74)]))]),
            Transform(DEF='StarboardAftGuardRail',rotation=(0,-1,0,0.3),scale=(0.33,0.475,0.33),translation=(-14,0.79,6.8),
              children=[
              Inline(DEF='GuardRail',url=["PortGuardRail.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/PortGuardRail.x3d","PortGuardRail.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/PortGuardRail.wrl"])])]),
          Group(DEF='PortGuardRail',
            children=[
            Transform(rotation=(0,-1,0,0.79),scale=(0.33,0.475,0.33),translation=(13.8,0.79,-6.5),
              children=[
              Inline(USE='GuardRail')]),
            Transform(rotation=(0,1,0,0.3),scale=(0.33,0.475,0.33),translation=(-14,0.79,-6.8),
              children=[
              Inline(USE='GuardRail')])])]),
        Group(DEF='CrewHouseGroup',
          children=[
          Transform(rotation=(0,1,0,1.57),scale=(1.2,1.3,1.2),translation=(10.75,3,-5.6),
            children=[
            Inline(DEF='CrewHouse',url=["CrewHouse.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/CrewHouse.x3d","CrewHouse.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/CrewHouse.wrl"])])]),
        Group(DEF='LadderGroup',
          children=[
          Transform(translation=(-3.8,0.25,-3.75),
            children=[
            Inline(DEF='Ladder',url=["Ladder.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/Ladder.x3d","Ladder.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/Ladder.wrl"])])]),
        Group(DEF='FanEngineHouses',
          children=[
          Transform(scale=(1.35,1.1,1.1),translation=(-7.7,0,-4.25),
            children=[
            Inline(DEF='PortFanEngineHouse',url=["PortFanEngineHouse.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/PortFanEngineHouse.x3d","PortFanEngineHouse.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/PortFanEngineHouse.wrl"])]),
          Transform(scale=(1.35,1.1,1.1),translation=(-7.7,0,7),
            children=[
            Inline(DEF='StarboardFanEngineHouse',url=["StarboardFanEngineHouse.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/StarboardFanEngineHouse.x3d","StarboardFanEngineHouse.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/StarboardFanEngineHouse.wrl"])])]),
        Group(DEF='AftRamp',
          children=[
          Transform(scale=(1,0.6,0.54),translation=(-29.7,-0.1,0),
            children=[
            Transform(USE='ForwardRamp')])]),
        Group(DEF='Cargo',
          children=[
          Transform(translation=(0,1.5,0),
            children=[
            Inline(DEF='AAV',url=["../AAV/AAV.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/AAV.x3d","../AAV/AAV.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/AAV.wrl"])])])]),
      #  Medium range: simple geometry 
      Transform(
        children=[
        Shape(
          geometry=Box(size=(30,3,18)),
          appearance=Appearance(
            material=Material(diffuseColor=(0.25,0.25,0.33)))),
        Transform(translation=(0,3,7),
          children=[
          Shape(
            geometry=Box(size=(24,4,3)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.65,0.65,0.8))))]),
        Transform(translation=(0,3,-7),
          children=[
          Shape(
            geometry=Box(size=(24,4,3)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.65,0.65,0.8))))]),
        Transform(translation=(14,3,0),
          children=[
          Shape(
            geometry=Box(size=(1,3,18)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.5,0.5,0.6))))]),
        Transform(translation=(-13.5,3,0),
          children=[
          Shape(
            geometry=Box(size=(1,3,18)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.5,0.5,0.6))))]),
        Transform(rotation=(0,0,1,1.57),translation=(-14,4,8),
          children=[
          Shape(
            geometry=Cylinder(radius=3),
            appearance=Appearance(
              material=Material(diffuseColor=(0.5,0.5,0.33))))]),
        Transform(rotation=(0,0,1,1.57),translation=(-14,4,-8),
          children=[
          Shape(
            geometry=Cylinder(radius=3),
            appearance=Appearance(
              material=Material(diffuseColor=(0.5,0.5,0.33))))])]),
      #  Long range: tactical symbol 
      Billboard(DEF='LongRangeSymbol',axisOfRotation=(0,0,0),
        children=[
        Transform(translation=(0,30,0),
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(60,60,0),(60,-60,0),(-60,-60,0),(-60,60,0),(60,60,0)])),
            appearance=Appearance(
              texture=ImageTexture(url=["Hovercraft.png","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/Hovercraft.png"])))])]),
      WorldInfo(info=["Out of range: null node"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LCAC.py")
