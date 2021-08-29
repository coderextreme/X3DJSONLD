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
    meta(content='AuvInBeachTanks.x3d',name='title'),
    meta(content='Example showing DIS EspduTransform interface for physics-animated AUV entities. Example use: mil.navy.nps.auv.AuvPduGenerator.java generates ESPDUs for this scene.',name='description'),
    meta(content='Don Brutzman and Duane Davis',name='creator'),
    meta(content='Miguel Ayala',name='translator'),
    meta(content='5 September 2000',name='created'),
    meta(content='16 February 2002',name='translated'),
    meta(content='23 June 2014',name='modified'),
    meta(content='AUV in tank 2 is currently operational with AUV Workbench.',name='info'),
    meta(content='http://faculty.nps.edu/brutzman/vrtp/demo/auv/AuvInBeachTanks.wrl',name='reference'),
    meta(content='http://faculty.nps.edu/brutzman/vrtp/mil/navy/nps/dis/EspduTransformEXAMPLE.wrl',name='reference'),
    meta(content='NPS Beach Tanks Autonomous Underwater Vehicle (AUV)',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AuvInBeachTanks.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Aries unmanned underwater vehicle with IEEE DIS EspduTransform wrapper bundled together in a single prototype',name='AriesEspdu',url=["AriesEspduPrototype.x3d#AriesEspdu","../../Robots/UnmannedUnderwaterVehicles/AriesEspduPrototype.x3d#AriesEspdu","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesEspduPrototype.x3d#AriesEspdu","AriesEspduPrototype.wrl#AriesEspdu","../../Robots/UnmannedUnderwaterVehicles/AriesEspduPrototype.wrl#AriesEspdu","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesEspduPrototype.wrl#AriesEspdu"],
      field=[
      field(accessType='inputOutput',name='siteID',type='SFInt32'),
      field(accessType='inputOutput',name='applicationID',type='SFInt32'),
      field(accessType='inputOutput',name='entityID',type='SFInt32'),
      field(accessType='inputOutput',appinfo='network read periodicity',name='readInterval',type='SFTime'),
      field(accessType='inputOutput',appinfo='network write periodicity',name='writeInterval',type='SFTime'),
      field(accessType='inputOutput',appinfo='Override default EspduTransform value so that listening occurs by default',name='networkMode',type='SFString'),
      field(accessType='inputOutput',appinfo='multicast address',name='address',type='SFString'),
      field(accessType='inputOutput',appinfo='multicast port',name='port',type='SFInt32'),
      field(accessType='inputOutput',appinfo='initial position prior to first ESPDU receipt',name='translation',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='initial orientation prior to first ESPDU receipt',name='rotation',type='SFRotation'),
      field(accessType='inputOutput',appinfo='Set to 0 to activate EspduTransformTrace',name='traceNodeEnabled',type='SFInt32'),
      field(accessType='inputOutput',appinfo='color for this Aries instance',name='hullColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='up to 11 characters maps to EspduTransform marking',name='hullName',type='SFString')]),
    #  ==================== 
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
      fieldValue(name='description',value='GridXZ for AUV Beach Tanks'),
      fieldValue(name='labelColor',value=(1,1,1)),
      fieldValue(name='scale',value=(1,1,1)),
      fieldValue(name='originLabel',value=["origin","0 0 0"]),
      fieldValue(name='WestLabel',value=["West","-Z"]),
      fieldValue(name='NorthWestLabel',value=["10 0 -10"]),
      fieldValue(name='NorthLabel',value=["North","+X"]),
      fieldValue(name='NorthEastLabel',value=["10 0 10"]),
      fieldValue(name='EastLabel',value=["East","+Z"]),
      fieldValue(name='SouthEastLabel',value=["-10 0 10"]),
      fieldValue(name='SouthLabel',value=["South","-X"]),
      fieldValue(name='SouthWestLabel',value=["-10 0 -10"])]),
    #  ==================== 
    #  Example uses of EspduTransform node to view three remote DIS-capable entities 
    NavigationInfo(speed=2,visibilityLimit=2000),
    WorldInfo(title='AUV examples of EspduTransform use'),
    Group(
      #  Inline file chiseled & gzipped due to extensive CosmoWorlds warnings 
      children=[
      Inline(url=["../../../Basic/DistributedInteractiveSimulation/BeachTanks.x3d","http://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/BeachTanks.x3d","../../../Basic/DistributedInteractiveSimulation/BeachTanks.wrl","http://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/BeachTanks.wrl"]),
      #  "local AUV" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
      ProtoInstance(DEF='NPSHeartBeatAUVEspduTransform',name='AriesEspdu',
        fieldValue=[
        fieldValue(name='hullName',value='NPS-run AUV'),
        fieldValue(name='siteID',value=0),
        fieldValue(name='applicationID',value=1),
        fieldValue(name='entityID',value=1),
        fieldValue(name='readInterval',value=0.5),
        fieldValue(name='translation',value=(5,-2,3)),
        fieldValue(name='traceNodeEnabled',value=-1)]),
      #  
      ProtoInstance(name='AriesEspdu',
        fieldValue=[
        fieldValue(name='translation',value=(5,-1.5,17)),
        fieldValue(name='networkMode',value='networkReader'),
        fieldValue(name='traceNodeEnabled',value=0)]),
      ProtoInstance(DEF='DynamicsAuvEspduTransform',name='AriesEspdu',
        fieldValue=[
        fieldValue(name='hullName',value='dynamicsAUV'),
        fieldValue(name='siteID',value=36),
        fieldValue(name='applicationID',value=1),
        fieldValue(name='entityID',value=1),
        fieldValue(name='readInterval',value=0.05),
        fieldValue(name='translation',value=(4,-1.5,28)),
        fieldValue(name='traceNodeEnabled',value=-1)])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AuvInBeachTanks.py")
