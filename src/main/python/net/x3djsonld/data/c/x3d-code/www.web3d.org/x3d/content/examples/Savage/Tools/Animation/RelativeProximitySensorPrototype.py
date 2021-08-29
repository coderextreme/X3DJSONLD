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
    meta(content='RelativeProximitySensorPrototype.x3d',name='title'),
    meta(content='Paired object-to-object collision detection using proximity sensor design pattern, implemented as a reusable prototype node.',name='description'),
    meta(content='Don Brutzman and MV4204 class',name='creator'),
    meta(content='3 September 2004',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='Object-to-object collision detection',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/RelativeProximitySensorPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='RelativeProximitySensor measures paired object-to-object collision detection',name='RelativeProximitySensor',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='describe the purpose of this sensor',name='description',type='SFString'),
        field(accessType='initializeOnly',appinfo='where is the primary object',name='locationPrimary',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOnly',appinfo='update location of the primary object',name='set_locationPrimary',type='SFVec3f'),
        field(accessType='initializeOnly',appinfo='where is the secondary object',name='locationSecondary',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOnly',appinfo='update location of the secondary object',name='set_locationSecondary',type='SFVec3f'),
        field(accessType='initializeOnly',appinfo='distance for detecting object-to-object collision',name='proximityRangeThreshold',type='SFFloat',value=10),
        field(accessType='inputOnly',appinfo='change threshold distance for detecting collision',name='set_proximityRangeThreshold',type='SFFloat'),
        field(accessType='outputOnly',appinfo='is object-to-object distance less than proximityRangeThreshold?',name='isInRange',type='SFBool'),
        field(accessType='outputOnly',appinfo='when did object-to-object range meet detection criteria?',name='isInRangeTime',type='SFTime'),
        field(accessType='initializeOnly',appinfo='whether sensor is active',name='enabled',type='SFBool',value=True),
        field(accessType='inputOnly',name='set_enabled',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Script(
            field=[
            field(accessType='inputOutput',appinfo='describe the purpose of this sensor',name='description',type='SFString'),
            field(accessType='initializeOnly',name='locationPrimary',type='SFVec3f'),
            field(accessType='inputOnly',name='set_locationPrimary',type='SFVec3f'),
            field(accessType='initializeOnly',name='locationSecondary',type='SFVec3f'),
            field(accessType='inputOnly',name='set_locationSecondary',type='SFVec3f'),
            field(accessType='initializeOnly',name='proximityRangeThreshold',type='SFFloat'),
            field(accessType='inputOnly',name='set_proximityRangeThreshold',type='SFFloat'),
            field(accessType='outputOnly',name='isInRange',type='SFBool'),
            field(accessType='outputOnly',name='isInRangeTime',type='SFTime'),
            field(accessType='initializeOnly',name='enabled',type='SFBool'),
            field(accessType='inputOnly',name='set_enabled',type='SFBool'),
            #  local Script variables 
            field(accessType='initializeOnly',name='priorDistance',type='SFFloat',value=-1),
            field(accessType='initializeOnly',name='newDistance',type='SFFloat',value=-1),
            field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=True)],
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='description'),
              connect(nodeField='locationPrimary',protoField='locationPrimary'),
              connect(nodeField='set_locationPrimary',protoField='set_locationPrimary'),
              connect(nodeField='locationSecondary',protoField='locationSecondary'),
              connect(nodeField='set_locationSecondary',protoField='set_locationSecondary'),
              connect(nodeField='proximityRangeThreshold',protoField='proximityRangeThreshold'),
              connect(nodeField='set_proximityRangeThreshold',protoField='set_proximityRangeThreshold'),
              connect(nodeField='isInRange',protoField='isInRange'),
              connect(nodeField='isInRangeTime',protoField='isInRangeTime'),
              connect(nodeField='enabled',protoField='enabled'),
              connect(nodeField='set_enabled',protoField='set_enabled')]))])])),
    #  ====================================== 
    #  Example use 
    Anchor(description='RelativeProximitySensor Example',parameter=["target=_blank"],url=["RelativeProximitySensorExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/RelativeProximitySensorExample.x3d","RelativeProximitySensorExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/RelativeProximitySensorExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["RelativeProximitySensorPrototype","defines a prototype","","Click text to see","RelativeProximitySensorExample scene"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.7)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RelativeProximitySensorPrototype.py")
