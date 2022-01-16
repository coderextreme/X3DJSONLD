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
    component(level=1,name='Scripting'),
    meta(name='title',content='bubs.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='description',content='Tour around a prismatic sphere'),
    meta(name='generator',content='X3D-Edit, https://savage.nps.edu/X3D-Edit'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/bubs.x3d')]),
  Scene=Scene(
    children=[
    NavigationInfo(type='"EXAMINE"'),
    Viewpoint(position=(0,0,4),orientation=(1,0,0,0),description='Bubbles in action'),
    Background(backUrl=["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"],bottomUrl=["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"],frontUrl=["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"],leftUrl=["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"],rightUrl=["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"],topUrl=["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"]),
    ProtoDeclare(name='Bubble',
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='body_trans',
          children=[
          Shape(
            geometry=Sphere(radius=0.25),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0,0),transparency=0.2))),
          Script(DEF='bounce1',
            field=[
            field(name='scale',accessType='inputOutput',type='SFVec3f',value=(1,1,1)),
            field(name='translation',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
            field(name='velocity',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
            field(name='scalvel',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
            field(name='set_fraction',accessType='inputOnly',type='SFFloat')]
*** TODO x3d.py and X3dToPython.xslt need to handle embedded CDATA source code for Script
),
          TimeSensor(DEF='bubbleClock',cycleInterval=10,loop=True),
          ROUTE(fromNode='bounce1',fromField='translation_changed',toNode='body_trans',toField='set_translation'),
          ROUTE(fromNode='bounce1',fromField='scale_changed',toNode='body_trans',toField='set_scale'),
          ROUTE(fromNode='bubbleClock',fromField='fraction_changed',toNode='bounce1',toField='set_fraction')])])),
    ProtoInstance(name='Bubble',DEF='bubbleA'),
    ProtoInstance(name='Bubble',DEF='bubbleB'),
    ProtoInstance(name='Bubble',DEF='bubbleC'),
    ProtoInstance(name='Bubble',DEF='bubbleD')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful (still testing)")
except BaseException as err:
    print("*** Python-to-VRML export of VRML output failed:", err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (still testing)")
except SyntaxError as err:
    print("*** Python-to-JSON export of JSON output failed:", err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python x3d.py load and self-test complete for bubs.py")
