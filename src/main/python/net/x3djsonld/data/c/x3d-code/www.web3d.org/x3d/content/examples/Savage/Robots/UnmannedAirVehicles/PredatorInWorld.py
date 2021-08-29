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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    meta(content='PredatorInWorld.x3d',name='title'),
    meta(content='Contains 3 DIS-enabled Predator UAVs in a generic world.',name='description'),
    meta(content='Duane Davis, Naval Postgraduate School (included Aries model authored by Jeff Weekley, Naval Postgraduate School)',name='creator'),
    meta(content='27 August 2004',name='created'),
    meta(content='23 June 2014',name='modified'),
    meta(content='AuvInBeachTanks.x3d',name='reference'),
    meta(content='predator uav dis',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedAirVehicles/PredatorInWorld.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Predator unmanned air vehicle (UAV)',name='PredatorEspdu',url=["../../Robots/UnmannedAirVehicles/PredatorEspduPrototype.x3d#PredatorEspdu","https://savage.nps.edu/Savage/Robots/UnmannedAirVehicles/PredatorEspduPrototype.x3d#AriesEspdu","../../Robots/UnmannedAirVehicles/PredatorEspduPrototype.wrl#AriesEspdu","https://savage.nps.edu/Savage/Robots/UnmannedAirVehicles/PredatorEspduPrototype.wrl#AriesEspdu"],
      field=[
      field(accessType='inputOutput',appinfo='default value PredatorUAV',name='marking',type='SFString'),
      field(accessType='inputOutput',appinfo='default value 0',name='siteID',type='SFInt32'),
      field(accessType='inputOutput',appinfo='default value 1',name='applicationID',type='SFInt32'),
      field(accessType='inputOutput',appinfo='default value 30',name='entityID',type='SFInt32'),
      field(accessType='inputOutput',appinfo='default value 0.1',name='readInterval',type='SFTime'),
      field(accessType='inputOutput',appinfo='default value 1.0',name='writeInterval',type='SFTime'),
      field(accessType='inputOutput',appinfo='Override default EspduTransform value so that listening occurs by default',name='networkMode',type='SFString'),
      field(accessType='inputOutput',appinfo='default value 224.2.181.145',name='address',type='SFString'),
      field(accessType='inputOutput',appinfo='default value 62040',name='port',type='SFInt32'),
      field(accessType='inputOutput',appinfo='default value 0 0 0',name='translation',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='default value 0 0 1 0',name='rotation',type='SFRotation')]),
    ExternProtoDeclare(appinfo='Line grid authoring tool to enable precise measurement of objects in 3D space - fixed position. Oriented along XZ plane size 20m by 20m.',name='GridXZ',url=["../../../Savage/Tools/Authoring/GridXZPrototype.x3d#GridXZ","https://savage.nps.edu/Savage/Tools/Authoring/GridXZPrototype.x3d#GridXZ","../../../Savage/Tools/Authoring/GridXZPrototype.wrl#GridXZ","https://savage.nps.edu/Savage/Tools/Authoring/GridXZPrototype.wrl#GridXZ"],
      field=[
      field(accessType='initializeOnly',appinfo='Purpose of this grid displayed for overall Viewpoint',name='description',type='SFString'),
      field(accessType='inputOutput',appinfo='color for descriptive labels at grid edges and corners',name='labelColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='default unscaled size: 10m by 10m',name='scale',type='SFVec3f'),
      field(accessType='inputOutput',name='originLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='-X axis',name='WestLabel',type='MFString'),
      field(accessType='inputOutput',name='NorthWestLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='-Z axis',name='NorthLabel',type='MFString'),
      field(accessType='inputOutput',name='NorthEastLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='+X axis',name='EastLabel',type='MFString'),
      field(accessType='inputOutput',name='SouthEastLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='+Z axis',name='SouthLabel',type='MFString'),
      field(accessType='inputOutput',name='SouthWestLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='label location offset (in meters) to improve readability',name='labelsOffset',type='SFVec3f')]),
    #  ==================== 
    ProtoInstance(name='GridXZ',
      fieldValue=[
      fieldValue(name='description',value='GridXZ for AUV in Open Ocean'),
      fieldValue(name='labelColor',value=(1,1,1)),
      fieldValue(name='scale',value=(50,50,50)),
      fieldValue(name='originLabel',value=["origin","0 0 0"]),
      fieldValue(name='WestLabel',value=["West","-Y"]),
      fieldValue(name='NorthWestLabel',value=["500 0 -500"]),
      fieldValue(name='NorthLabel',value=["North","+X"]),
      fieldValue(name='NorthEastLabel',value=["500 0 500"]),
      fieldValue(name='EastLabel',value=["East","+Y"]),
      fieldValue(name='SouthEastLabel',value=["-500 0 500"]),
      fieldValue(name='SouthLabel',value=["South","-X"]),
      fieldValue(name='SouthWestLabel',value=["-500 0 -500"])]),
    Group(DEF='PICKABLES',
      children=[
      Group(
        children=[
        ProtoInstance(DEF='UAV1',name='PredatorEspdu',
          fieldValue=[
          fieldValue(name='marking',value='UAV-1'),
          fieldValue(name='siteID',value=0),
          fieldValue(name='applicationID',value=1),
          fieldValue(name='entityID',value=30),
          fieldValue(name='readInterval',value=0.25),
          fieldValue(name='translation',value=(750,-2,750)),
          fieldValue(name='networkMode',value='networkReader')]),
        ProtoInstance(DEF='UAV2',name='PredatorEspdu',
          fieldValue=[
          fieldValue(name='marking',value='UAV-2'),
          fieldValue(name='siteID',value=0),
          fieldValue(name='applicationID',value=1),
          fieldValue(name='entityID',value=31),
          fieldValue(name='readInterval',value=0.25),
          fieldValue(name='translation',value=(750,-4,750))]),
        ProtoInstance(DEF='UAV3',name='PredatorEspdu',
          fieldValue=[
          fieldValue(name='marking',value='UAV-3'),
          fieldValue(name='siteID',value=0),
          fieldValue(name='applicationID',value=1),
          fieldValue(name='entityID',value=32),
          fieldValue(name='readInterval',value=0.25),
          fieldValue(name='translation',value=(750,-6,750))]),
        ProtoInstance(DEF='UAV4',name='PredatorEspdu',
          fieldValue=[
          fieldValue(name='marking',value='UAV-4'),
          fieldValue(name='siteID',value=0),
          fieldValue(name='applicationID',value=1),
          fieldValue(name='entityID',value=33),
          fieldValue(name='readInterval',value=0.25),
          fieldValue(name='translation',value=(750,-8,750))])]),
      Transform(DEF='TERRAINTRANSFORM',translation=(-15000,0,-15000),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.5,0.0),emissiveColor=(.1,.1,0)),
            texture=ImageTexture(url=["../../../Savage/AuvWorkbench/OperatingAreas/dirt4.gif","https://savage.nps.edu/Savage/AuvWorkbench/OperatingAreas/dirt4.gif"])),
          geometry=ElevationGrid(creaseAngle=3.14,height=[-75,-100,-75,-75,-100,-125,-150,-125,-100,-75,-50,-75,-100,-75,-75,-100,-125,-150,-125,-100,-75,-50,-50,-75,-50,-50,-75,-100,-125,-100,-75,-50,-25,-75,-100,-75,-75,-100,-125,-150,-125,-100,-75,-50,-100,-125,-100,-100,-125,-150,-175,-150,-125,-100,-75,-75,-100,-75,-75,-100,-125,-150,-125,-100,-75,-50,-75,-100,-75,-75,-100,-125,-150,-125,-100,-75,-50,-50,-75,-50,-50,-75,-100,-125,-100,-75,-50,-25,-75,-100,-75,-75,-100,-125,-150,-125,-100,-75,-50,-100,-125,-100,-100,-125,-150,-175,-150,-125,-100,-75,-75,-100,-75,-75,-100,-125,-150,-125,-100,-75,-50],xDimension=11,xSpacing=3000,zDimension=11,zSpacing=3000,
            texCoord=TextureCoordinate(point=[(1,1),(1,2),(1,3),(1,4),(1,5),(1,6),(1,7),(1,8),(1,9),(1,10),(1,11),(2,1),(2,2),(2,3),(2,4),(2,5),(2,6),(2,7),(2,8),(2,9),(2,10),(2,11),(3,1),(3,2),(3,3),(3,4),(3,5),(3,6),(3,7),(3,8),(3,9),(3,10),(3,11),(4,1),(4,2),(4,3),(4,4),(4,5),(4,6),(4,7),(4,8),(4,9),(4,10),(4,11),(5,1),(5,2),(5,3),(5,4),(5,5),(5,6),(5,7),(5,8),(5,9),(5,10),(5,11),(6,1),(6,2),(6,3),(6,4),(6,5),(6,6),(6,7),(6,8),(6,9),(6,10),(6,11),(7,1),(7,2),(7,3),(7,4),(7,5),(7,6),(7,7),(7,8),(7,9),(7,10),(7,11),(8,1),(8,2),(8,3),(8,4),(8,5),(8,6),(8,7),(8,8),(8,9),(8,10),(8,11),(9,1),(9,2),(9,3),(9,4),(9,5),(9,6),(9,7),(9,8),(9,9),(9,10),(9,11),(10,1),(10,2),(10,3),(10,4),(10,5),(10,6),(10,7),(10,8),(10,9),(10,10),(10,11),(11,1),(11,2),(11,3),(11,4),(11,5),(11,6),(11,7),(11,8),(11,9),(11,10),(11,11)])))])]),
    Group(DEF='MISSIONPATHS',
      children=[
      Shape(
        appearance=Appearance(DEF='TRACKMATERIAL',
          material=Material(emissiveColor=(1,1,1))),
        geometry=IndexedLineSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,10,1,0],
          coord=Coordinate(point=[(0,0,0),(-100,-45,-100),(-500,-45,-100),(-500,-45,-200),(-100,-45,-200),(-100,-45,-300),(-500,-45,-300),(-500,-45,-400),(-100,-45,-400),(-100,-45,-500),(-500,-45,-500)]))),
      Shape(
        appearance=Appearance(USE='TRACKMATERIAL'),
        geometry=IndexedLineSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,10,1,0],
          coord=Coordinate(point=[(0,0,0),(100,-45,-100),(500,-45,-100),(500,-45,-200),(100,-45,-200),(100,-45,-300),(500,-45,-300),(500,-45,-400),(100,-45,-400),(100,-45,-500),(500,-45,-500)]))),
      Shape(
        appearance=Appearance(USE='TRACKMATERIAL'),
        geometry=IndexedLineSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,10,1,0],
          coord=Coordinate(point=[(0,0,0),(100,-45,100),(500,-45,100),(500,-45,200),(100,-45,200),(100,-45,300),(500,-45,300),(500,-45,400),(100,-45,400),(100,-45,500),(500,-45,500)]))),
      Shape(
        appearance=Appearance(USE='TRACKMATERIAL'),
        geometry=IndexedLineSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,10,1,0],
          coord=Coordinate(point=[(0,0,0),(-100,-45,100),(-500,-45,100),(-500,-45,200),(-100,-45,200),(-100,-45,300),(-500,-45,300),(-500,-45,400),(-100,-45,400),(-100,-45,500),(-500,-45,500)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PredatorInWorld.py")
