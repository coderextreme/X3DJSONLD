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
    meta(name='title',content='bubs2.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='description',content='Tour around a prismatic sphere'),
    meta(name='generator',content='X3D-Edit, https://savage.nps.edu/X3D-Edit'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/geo.x3d'),
    meta(name='translated',content='13 March 2016'),
    meta(name='generator',content='X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html')]),
  Scene=Scene(
    children=[
    NavigationInfo(type=["EXAMINE"]),
    Viewpoint(position=(0,0,4),orientation=(1,0,0,0),description='Bubbles in action'),
    Background(backUrl=["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"],bottomUrl=["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"],frontUrl=["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"],leftUrl=["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"],rightUrl=["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"],topUrl=["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"]),
    ProtoDeclare(name='Bubble',
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='transform',
          children=[
          Shape(
            geometry=Sphere(radius=0.25),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0,0),transparency=0.2))),
          Script(DEF='bounce',
            field=[
            field(name='scale',accessType='inputOutput',type='SFVec3f',value=(1,1,1)),
            field(name='translation',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
            field(name='velocity',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
            field(name='scalvel',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
            field(name='set_fraction',accessType='inputOnly',type='SFFloat')]),
          TimeSensor(DEF='bubbleClock',cycleInterval=10,loop=True),
          ROUTE(fromNode='bounce',fromField='translation_changed',toNode='transform',toField='set_translation'),
          ROUTE(fromNode='bounce',fromField='scale_changed',toNode='transform',toField='set_scale'),
          ROUTE(fromNode='bubbleClock',fromField='fraction_changed',toNode='bounce',toField='set_fraction')])])),
    ProtoInstance(name='Bubble',DEF='bubbleA'),
    ProtoInstance(name='Bubble',DEF='bubbleB'),
    ProtoInstance(name='Bubble',DEF='bubbleC'),
    ProtoInstance(name='Bubble',DEF='bubbleD')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if         metaDiagnostics(newModel): # built-in utility method in X3D class
    print (metaDiagnostics(newModel))
print ("python x3d.py load successful for bubs2.py")