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
    meta(content='PhoenixExample.x3d',name='title'),
    meta(content='Example showing NPS Phoenix Unmanned Underwater Vehicle (AUV) prototype.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='28 July 2012',name='created'),
    meta(content='28 July 2012',name='modified'),
    meta(content='AriesExample.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/PhoenixExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Acoustic Radio Interactive Exploratory Server (ARIES) is an operational NPS-designed Unmanned Underwater Vehicle (AUV)',name='Aries',url=["AriesPrototype.x3d#Aries","../../Robots/UnmannedUnderwaterVehicles/AriesPrototype.x3d#Aries","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesPrototype.x3d#Aries","AriesPrototype.wrl#Aries","../../Robots/UnmannedUnderwaterVehicles/AriesPrototype.wrl#Aries","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesPrototype.wrl#Aries"],
      field=[
      field(accessType='inputOutput',appinfo='hull color for this UUV instance',name='hullColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='plane color for this UUV instance',name='planeColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='can be overridden at instantiation time only',name='hullName',type='SFString'),
      field(accessType='inputOutput',name='translation',type='SFVec3f'),
      field(accessType='inputOutput',name='rotation',type='SFRotation'),
      field(accessType='inputOnly',name='set_portRpm',type='SFFloat'),
      field(accessType='inputOnly',name='set_stbdRpm',type='SFFloat'),
      field(accessType='inputOnly',name='set_forwardRudders',type='SFFloat'),
      field(accessType='inputOnly',name='set_afterRudders',type='SFFloat'),
      field(accessType='inputOnly',name='set_forwardPlanes',type='SFFloat'),
      field(accessType='inputOnly',name='set_afterPlanes',type='SFFloat'),
      field(accessType='inputOnly',name='set_forwardVerticalThruster',type='SFFloat'),
      field(accessType='inputOnly',name='set_afterVerticalThruster',type='SFFloat'),
      field(accessType='inputOnly',name='set_forwardLateralThruster',type='SFFloat'),
      field(accessType='inputOnly',name='set_afterLateralThruster',type='SFFloat'),
      field(accessType='inputOnly',appinfo='meters along sonar axis',name='set_ST725Range',type='SFFloat'),
      field(accessType='inputOnly',appinfo='meters along sonar axis',name='set_ST1000Range',type='SFFloat'),
      field(accessType='inputOnly',appinfo='degrees about vertical axis',name='set_ST725Bearing',type='SFFloat'),
      field(accessType='inputOnly',appinfo='degrees about vertical axis',name='set_ST1000Bearing',type='SFFloat'),
      field(accessType='inputOnly',appinfo='signal-to-noise ratio decibels',name='set_ST725Intensity',type='SFFloat'),
      field(accessType='inputOnly',appinfo='signal-to-noise ratio decibels',name='set_ST1000Intensity',type='SFFloat')]),
    Group(
      children=[
      Background(groundAngle=[1.57],groundColor=[(.05,.05,.15),(.05,.05,.15)],skyAngle=[.05,1.4,1.55,1.56,1.57],skyColor=[(1,1,.5),(.4,.4,.6),(.4,.4,.6),(.5,.5,.75),(.6,.6,.8),(.8,.8,.8)]),
      Transform(
        children=[
        ProtoInstance(name='Aries',
          fieldValue=[
          fieldValue(name='hullName',value='Phoenix UUV'),
          fieldValue(name='hullColor',value=(0,0,0.8)),
          fieldValue(name='planeColor',value=(.6,.4,.1))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PhoenixExample.py")
