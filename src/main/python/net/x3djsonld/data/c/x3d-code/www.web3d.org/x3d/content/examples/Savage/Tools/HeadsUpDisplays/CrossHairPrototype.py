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
    meta(content='CrossHairPrototype.x3d',name='title'),
    meta(content='Prototype for a heads-up display (HUD) crosshair showing center of screen, useful for assessing lookAt point.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='1 February 2003',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='crosshair display',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point',name='CrossHair',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='whether CrossHair prototype is enabled or not',name='enabled',type='SFBool',value=True),
        field(accessType='inputOnly',appinfo='control whether enabled/disabled',name='set_enabled',type='SFBool'),
        field(accessType='inputOutput',appinfo='color of CrossHair marker',name='markerColor',type='SFColor',value=(0.3,0.3,0.8)),
        field(accessType='inputOutput',appinfo='size of CrossHair in meters',name='scale',type='SFVec3f',value=(1,1,1)),
        field(accessType='inputOutput',appinfo='distance in front of HUD viewpoint',name='positionOffsetFromCamera',type='SFVec3f',value=(0,0,-3))]),
      ProtoBody=ProtoBody(
        children=[
        Switch(DEF='ShowSwitch',whichChoice=-1,
          children=[
          Group(
            children=[
            ProximitySensor(DEF='WhereSensor',size=(1000000000,1000000000,1000000000),
              IS=IS(
                connect=[
                connect(nodeField='enabled',protoField='enabled')])),
            Transform(DEF='CameraLocation',
              children=[
              Transform(DEF='CameraOffset',
                IS=IS(
                  connect=[
                  connect(nodeField='translation',protoField='positionOffsetFromCamera'),
                  connect(nodeField='scale',protoField='scale')]),
                children=[
                Shape(
                  geometry=IndexedLineSet(coordIndex=[0,1,-1,2,3,-1],
                    coord=Coordinate(point=[(0,1,0),(0,-1,0),(1,0,0),(-1,0,0)])),
                  appearance=Appearance(
                    material=Material(DEF='CircleMaterial',diffuseColor=(0,0,0),
                      IS=IS(
                        connect=[
                        connect(nodeField='emissiveColor',protoField='markerColor')]))))]),
              Group(
                children=[
                Script(DEF='EnabledScript',
                  field=[
                  field(accessType='initializeOnly',name='enabled',type='SFBool'),
                  field(accessType='inputOnly',name='set_enabled',type='SFBool'),
                  field(accessType='outputOnly',name='whichChoice',type='SFInt32')],
                  IS=IS(
                    connect=[
                    connect(nodeField='enabled',protoField='enabled'),
                    connect(nodeField='set_enabled',protoField='set_enabled')])),
                ROUTE(fromField='isActive',fromNode='WhereSensor',toField='set_enabled',toNode='EnabledScript'),
                ROUTE(fromField='whichChoice',fromNode='EnabledScript',toField='whichChoice',toNode='ShowSwitch')])])])]),
        ROUTE(fromField='position_changed',fromNode='WhereSensor',toField='set_translation',toNode='CameraLocation'),
        ROUTE(fromField='orientation_changed',fromNode='WhereSensor',toField='set_rotation',toNode='CameraLocation')])),
    #  ======================== 
    NavigationInfo(speed=10,type=["FLY","ANY"]),
    ProtoInstance(name='CrossHair',
      fieldValue=[
      fieldValue(name='enabled',value=True),
      fieldValue(name='markerColor',value=(1,0.5,0)),
      fieldValue(name='scale',value=(1,1,1)),
      fieldValue(name='positionOffsetFromCamera',value=(0,0,-3))]),
    Group(DEF='TextMenu',
      children=[
      Transform(
        children=[
        Anchor(description='CrossHair Example',parameter=["target=_blank"],url=["CrossHairExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","CrossHairExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl"],
          children=[
          Shape(
            geometry=Text(string=["CrossHairPrototype is a","prototype definition file.","Click text to see","CrossHairExample"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.4))))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CrossHairPrototype.py")
