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
    component(level=1,name='DIS'),
    component(level=1,name='Geospatial'),
    meta(content='MultipleUnmannedVehiclesOffMonterey.x3d',name='title'),
    meta(content='Contains multiple DIS-enabled robots in a near-shore environment. 4 mission tracks correspond to openWaterMission1, 2, 3, and 4 included with the workbench distribution.',name='description'),
    meta(content='Don Brutzman, Duane Davis and Jeff Weekley, Naval Postgraduate School',name='creator'),
    meta(content='aries auv dis',name='subject'),
    meta(content='18 April 2004',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='AuvInBeachTanks.x3d',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/AuvWorkbench/OperatingAreas/MultipleUnmannedVehiclesOffMonterey.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(DEF='SandyShallowBottom',groundAngle=[0.05,1.52,1.56,1.570796],groundColor=[(0.2,0.2,0),(0.3,0.3,0),(0.5,0.5,0.3),(0.1,0.3,0.4),(0,0.2,0.4)],skyAngle=[0.05,0.1,1.309,1.571],skyColor=[(0.8,0.8,0.2),(0.1,0.1,0.6),(0.1,0.1,0.6),(0.1,0.25,0.8),(0.6,0.6,0.9)]),
    #  <DirectionalLight ambientIntensity='0.1' direction='-3 -3 0'/> 
    Viewpoint(DEF='OverheadViewpoint',description='Monterey Bay Operations Area',fieldOfView=1.0,orientation=(-1.0,0.0,0.0,1.57),position=(0.0,5000.0,2000.0)),
    NavigationInfo(DEF='SlowNI',speed=100.0),
    NavigationInfo(DEF='FastNI',speed=1000.0,type=["FLY","ANY"]),
    ROUTE(fromField='isBound',fromNode='OverheadViewpoint',toField='set_bind',toNode='FastNI'),
    Inline(url=["MontereyBayOpArea.x3d","https://savage.nps.edu/Savage/AuvWorkbench/OperatingAreas/MontereyBayOpArea.x3d","MontereyBayOpArea.wrl","https://savage.nps.edu/Savage/AuvWorkbench/OperatingAreas/MontereyBayOpArea.wrl"]),
    #  <Inline url='"../../../Savage/Locations/MontereyBay/MontereyBayLargeMesh.x3d" "../../../Savage/Locations/MontereyBay/MontereyBayLargeMesh.wrl" "https://savage.nps.edu/Savage/Locations/MontereyBay/MontereyBayLargeMesh.x3d" "https://savage.nps.edu/Savage/Locations/MontereyBay/MontereyBayLargeMesh.wrl"'/> 
    Group(DEF='ExternProtoDeclaresAndGrid',
      children=[
      ExternProtoDeclare(appinfo='Aries unmanned underwater vehicle with IEEE DIS EspduTransform wrapper bundled together in a single prototype',name='AriesEspdu',url=["../../../Savage/Robots/UnmannedUnderwaterVehicles/AriesEspduPrototype.x3d#AriesEspdu","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesEspduPrototype.x3d#AriesEspdu","../../../Savage/Robots/UnmannedUnderwaterVehicles/AriesEspduPrototype.wrl#AriesEspdu","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesEspduPrototype.wrl#AriesEspdu"],
        field=[
        field(accessType='inputOutput',appinfo='up to 11 characters maps to EspduTransform marking',name='hullName',type='SFString'),
        field(accessType='inputOutput',appinfo='color for this Aries instance',name='hullColor',type='SFColor'),
        field(accessType='inputOutput',appinfo='initial position prior to first ESPDU receipt',name='translation',type='SFVec3f'),
        field(accessType='inputOutput',appinfo='initial orientation prior to first ESPDU receipt',name='rotation',type='SFRotation'),
        field(accessType='inputOutput',name='siteID',type='SFInt32'),
        field(accessType='inputOutput',name='applicationID',type='SFInt32'),
        field(accessType='inputOutput',name='entityID',type='SFInt32'),
        field(accessType='inputOutput',appinfo='network read periodicity',name='readInterval',type='SFTime'),
        field(accessType='inputOutput',appinfo='network write periodicity',name='writeInterval',type='SFTime'),
        field(accessType='inputOutput',appinfo='Override default EspduTransform value so that listening occurs by default',name='networkMode',type='SFString'),
        field(accessType='inputOutput',appinfo='multicast address',name='address',type='SFString'),
        field(accessType='inputOutput',appinfo='multicast port',name='port',type='SFInt32'),
        field(accessType='inputOutput',appinfo='Set to 0 to activate EspduTransformTrace',name='traceNodeEnabled',type='SFInt32')]),
      ExternProtoDeclare(appinfo='Predator unmanned air vehicle (UAV) with DIS ESPDU network connections',name='PredatorEspdu',url=["../../../Savage/Robots/UnmannedAirVehicles/PredatorEspduPrototype.x3d#PredatorEspdu","../../../Savage/Robots/UnmannedAirVehicles/PredatorEspduPrototype.wrl#PredatorEspdu","https://savage.nps.edu/Savage/Robots/UnmannedAirVehicles/PredatorEspduPrototype.x3d#PredatorEspdu","https://savage.nps.edu/Savage/Robots/UnmannedAirVehicles/PredatorEspduPrototype.wrl#PredatorEspdu"],
        field=[
        field(accessType='inputOutput',appinfo='default value PredatorUAV',name='marking',type='SFString'),
        field(accessType='inputOutput',appinfo='default value 0 0 0',name='translation',type='SFVec3f'),
        field(accessType='inputOutput',appinfo='default value 0 0 1 0',name='rotation',type='SFRotation'),
        field(accessType='inputOutput',appinfo='default value 0',name='siteID',type='SFInt32'),
        field(accessType='inputOutput',appinfo='default value 1',name='applicationID',type='SFInt32'),
        field(accessType='inputOutput',appinfo='default value 30',name='entityID',type='SFInt32'),
        field(accessType='inputOutput',appinfo='default value 0.1',name='readInterval',type='SFTime'),
        field(accessType='inputOutput',appinfo='default value 1.0',name='writeInterval',type='SFTime'),
        field(accessType='inputOutput',appinfo='Override default EspduTransform value so that listening occurs by default',name='networkMode',type='SFString'),
        field(accessType='inputOutput',appinfo='default value 224.2.181.145',name='address',type='SFString'),
        field(accessType='inputOutput',appinfo='default value 62040',name='port',type='SFInt32')]),
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
      ProtoInstance(name='GridXZ',
        fieldValue=[
        fieldValue(name='description',value='GridXZ for AUV in Open Ocean'),
        fieldValue(name='labelColor',value=(1.0,1.0,1.0)),
        fieldValue(name='scale',value=(50.0,50.0,50.0)),
        fieldValue(name='originLabel',value=["origin","0 0 0"]),
        fieldValue(name='WestLabel',value=["West","-Y"]),
        fieldValue(name='NorthWestLabel',value=["500 0 -500"]),
        fieldValue(name='NorthLabel',value=["North","+X"]),
        fieldValue(name='NorthEastLabel',value=["500 0 500"]),
        fieldValue(name='EastLabel',value=["East","+Y"]),
        fieldValue(name='SouthEastLabel',value=["-500 0 500"]),
        fieldValue(name='SouthLabel',value=["South","-X"]),
        fieldValue(name='SouthWestLabel',value=["-500 0 -500"])])]),
    Group(DEF='RobotEntities',
      children=[
      Group(DEF='UavGroup',
        children=[
        ProtoInstance(DEF='PREDATOR0',name='PredatorEspdu',
          fieldValue=[
          fieldValue(name='marking',value='PREDATOR-0'),
          fieldValue(name='siteID',value=0),
          fieldValue(name='applicationID',value=1),
          fieldValue(name='entityID',value=30),
          fieldValue(name='readInterval',value=0.5),
          fieldValue(name='networkMode',value='networkReader'),
          fieldValue(name='address',value='239.255.5.8'),
          fieldValue(name='translation',value=(15000.0,-10.0,15000.0))])]),
      Group(DEF='UsvGroup',
        children=[
        EspduTransform(address='239.255.5.8',entityID=20,marking='RHIB-0',networkMode='networkReader',readInterval=0.5,translation=(0,-2015,0),
          children=[
          Inline(url=["../../../Savage/ShipsMilitary/RHIBUnitedStates/RHIB.x3d","https://savage.nps.edu/Savage/ShipsMilitary/RHIBUnitedStates/RHIB.x3d","../../../Savage/ShipsMilitary/RHIBUnitedStates/RHIB.wrl","https://savage.nps.edu/Savage/ShipsMilitary/RHIBUnitedStates/RHIB.wrl"])])]),
      Group(DEF='UuvGroup',
        children=[
        ProtoInstance(DEF='ARIES0',name='AriesEspdu',
          fieldValue=[
          fieldValue(name='hullName',value='ARIES-0'),
          fieldValue(name='siteID',value=0),
          fieldValue(name='applicationID',value=1),
          fieldValue(name='entityID',value=0),
          fieldValue(name='readInterval',value=0.5),
          fieldValue(name='networkMode',value='networkReader'),
          fieldValue(name='address',value='239.255.5.8'),
          fieldValue(name='translation',value=(0.0,-2000.0,0.0)),
          fieldValue(name='traceNodeEnabled',value=0)]),
        ProtoInstance(DEF='ARIES1',name='AriesEspdu',
          fieldValue=[
          fieldValue(name='hullName',value='ARIES-1'),
          fieldValue(name='siteID',value=0),
          fieldValue(name='applicationID',value=1),
          fieldValue(name='entityID',value=1),
          fieldValue(name='readInterval',value=0.5),
          fieldValue(name='networkMode',value='networkReader'),
          fieldValue(name='address',value='239.255.5.8'),
          fieldValue(name='translation',value=(0.0,-2005.0,0.0)),
          fieldValue(name='traceNodeEnabled',value=0)]),
        ProtoInstance(DEF='AUV3',name='AriesEspdu',
          fieldValue=[
          fieldValue(name='hullName',value='AUV-3'),
          fieldValue(name='siteID',value=0),
          fieldValue(name='applicationID',value=1),
          fieldValue(name='entityID',value=2),
          fieldValue(name='readInterval',value=0.5),
          fieldValue(name='networkMode',value='networkReader'),
          fieldValue(name='address',value='239.255.5.8'),
          fieldValue(name='translation',value=(0.0,-2010.0,0.0)),
          fieldValue(name='traceNodeEnabled',value=0)]),
        ProtoInstance(DEF='AUV4',name='AriesEspdu',
          fieldValue=[
          fieldValue(name='hullName',value='AUV-4'),
          fieldValue(name='siteID',value=0),
          fieldValue(name='applicationID',value=1),
          fieldValue(name='entityID',value=3),
          fieldValue(name='readInterval',value=0.5),
          fieldValue(name='networkMode',value='networkReader'),
          fieldValue(name='address',value='239.255.5.8'),
          fieldValue(name='translation',value=(0.0,-2015.0,0.0)),
          fieldValue(name='traceNodeEnabled',value=0)])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MultipleUnmannedVehiclesOffMonterey.py")
