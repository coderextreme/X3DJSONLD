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
    meta(content='ExplodingBuildingExample.x3d',name='title'),
    meta(content='A simple exploding structure, experimenting with the "Hello World" of explosions - click on the silver chimney to trigger the explosion. This prototype demonstrates a simplified and scalable approach for modeling explosions. Each chunk of geometry inside an Exploder prototype is given initial/final position/orientation. Intermediate heights for each polygon are at the same height as the distance traveled over ground.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='16 September 2002',name='created'),
    meta(content='15 April 2011',name='modified'),
    meta(content='Exploding building schematic layout diagram:',name='reference'),
    meta(content='ExplodingBuildingLayout.pdf',name='Image'),
    meta(content='ExplodingBuildingSnapshots.pdf',name='Image'),
    meta(content='ExplodingBuildingMontage.png',name='Image'),
    meta(content='ExplodingBuildingExampleVideo.mov',name='MovingImage'),
    meta(content='ExplodingBuildingLargeExample.wrl',name='reference'),
    meta(content='Rotation calculations performed using the Dizzy utility from Vapour Technologies by James Smith.',name='reference'),
    meta(content='http://www.vapourtech.com',name='reference'),
    meta(content='DIS-Java-VRML Working Group',name='reference'),
    meta(content='http://www.web3d.org/WorkingGroups/vrtp/dis-java-vrml',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Explosions/ExplodingBuildingExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Explode contained geometry through animation on demand',name='Exploder',url=["ExplodingBuildingPrototype.x3d#Exploder","https://savage.nps.edu/Savage/Tools/Explosions/ExplodingBuildingPrototype.x3d#Exploder","ExplodingBuildingPrototype.wrl#Exploder","https://savage.nps.edu/Savage/Tools/Explosions/ExplodingBuildingPrototype.wrl#Exploder"],
      field=[
      field(accessType='initializeOnly',appinfo='geometry node, to be used inside a Shape',name='geometry',type='SFNode'),
      field(accessType='initializeOnly',appinfo='Material node for this geometry, to be used inside a Shape',name='material',type='SFNode'),
      field(accessType='initializeOnly',appinfo='starting point',name='initialPosition',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='finish point',name='finalPosition',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='starting point orientation',name='initialOrientation',type='SFRotation'),
      field(accessType='initializeOnly',appinfo='finish point orientation',name='finalOrientation',type='SFRotation'),
      field(accessType='inputOnly',appinfo='animation input',name='set_fraction',type='SFFloat')]),
    #  Root Transform will be replaced by EspduTransfor when ready to network 
    Transform(DEF='RootEspduTransform',
      children=[
      Viewpoint(description='Hello Exploding Building',orientation=(1,0,0,-0.3),position=(1,20,50)),
      DirectionalLight(direction=(-0.57735,-0.57735,0.57735)),
      Transform(scale=(10,10,10),
        children=[
        Inline(DEF='CoordinateAxes',url=["../../Tools/Authoring/CoordinateAxes.x3d","../../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../Tools/Authoring/CoordinateAxes.wrl","../../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"])]),
      Shape(
        geometry=Box(DEF='Floor',size=(14,0.1,8)),
        appearance=Appearance(
          material=Material(DEF='FloorMaterial',diffuseColor=(0,0.3,0.3),transparency=0.3))),
      ProtoInstance(DEF='FirstFloorCeiling',name='Exploder',
        fieldValue=[
        fieldValue(name='geometry',
          children=[
          Box(USE='Floor')]),
        fieldValue(name='material',
          children=[
          Material(USE='FloorMaterial')]),
        fieldValue(name='initialPosition',value=(0,3,0)),
        fieldValue(name='finalPosition',value=(14,0.05,14)),
        fieldValue(name='finalOrientation',value=(0.48,0,0.88,3.14))]),
      ProtoInstance(DEF='FirstFloorWallEast',name='Exploder',
        fieldValue=[
        fieldValue(name='geometry',
          children=[
          Box(DEF='LongWall',size=(14,3,0.1))]),
        fieldValue(name='material',
          children=[
          Material(DEF='FirstFloorWallMaterial',diffuseColor=(0.4,0.4,0),transparency=0.3)]),
        fieldValue(name='initialPosition',value=(0,1.5,3.95)),
        fieldValue(name='finalPosition',value=(0,0.05,10)),
        fieldValue(name='finalOrientation',value=(0.96,0.2,-0.19,1.61))]),
      ProtoInstance(DEF='FirstFloorWallNorth',name='Exploder',
        fieldValue=[
        fieldValue(name='geometry',
          children=[
          Box(DEF='ShortWall',size=(0.1,3,8))]),
        fieldValue(name='material',
          children=[
          Material(USE='FirstFloorWallMaterial')]),
        fieldValue(name='initialPosition',value=(7,1.5,0)),
        fieldValue(name='finalPosition',value=(15,0.05,2)),
        fieldValue(name='finalOrientation',value=(0,0,1,-1.57))]),
      ProtoInstance(DEF='FirstFloorWallWest',name='Exploder',
        fieldValue=[
        fieldValue(name='geometry',
          children=[
          Box(USE='LongWall')]),
        fieldValue(name='material',
          children=[
          Material(USE='FirstFloorWallMaterial')]),
        fieldValue(name='initialPosition',value=(0,1.5,-3.95)),
        fieldValue(name='finalPosition',value=(0,0.05,-12)),
        fieldValue(name='finalOrientation',value=(0.96,0.2,-0.19,1.61))]),
      ProtoInstance(DEF='FirstFloorWallSouth',name='Exploder',
        fieldValue=[
        fieldValue(name='geometry',
          children=[
          Box(USE='ShortWall')]),
        fieldValue(name='material',
          children=[
          Material(USE='FirstFloorWallMaterial')]),
        fieldValue(name='initialPosition',value=(-7,1.5,0)),
        fieldValue(name='finalPosition',value=(-10,0.05,1)),
        fieldValue(name='finalOrientation',value=(-0.32,-0.32,0.89,1.69))]),
      ProtoInstance(DEF='SecondFloorCeiling',name='Exploder',
        fieldValue=[
        fieldValue(name='geometry',
          children=[
          Box(USE='Floor')]),
        fieldValue(name='material',
          children=[
          Material(USE='FloorMaterial')]),
        fieldValue(name='initialPosition',value=(0,6,0)),
        fieldValue(name='finalPosition',value=(-12,0.05,-10)),
        fieldValue(name='finalOrientation',value=(0.84,0,0.54,3.14))]),
      ProtoInstance(DEF='SecondFloorWallEast',name='Exploder',
        fieldValue=[
        fieldValue(name='geometry',
          children=[
          Box(USE='LongWall')]),
        fieldValue(name='material',
          children=[
          Material(DEF='SecondFloorWallMaterial',diffuseColor=(0.8,0.8,0),transparency=0.3)]),
        fieldValue(name='initialPosition',value=(0,4.5,3.95)),
        fieldValue(name='finalPosition',value=(5,0.05,20)),
        fieldValue(name='finalOrientation',value=(0.89,-0.32,0.32,1.69))]),
      ProtoInstance(DEF='SecondFloorWallNorth',name='Exploder',
        fieldValue=[
        fieldValue(name='geometry',
          children=[
          Box(USE='ShortWall')]),
        fieldValue(name='material',
          children=[
          Material(USE='SecondFloorWallMaterial')]),
        fieldValue(name='initialPosition',value=(7,4.5,0)),
        fieldValue(name='finalPosition',value=(22,0.05,-6)),
        fieldValue(name='finalOrientation',value=(-0.32,-0.32,0.89,1.69))]),
      ProtoInstance(DEF='SecondFloorWallWest',name='Exploder',
        fieldValue=[
        fieldValue(name='geometry',
          children=[
          Box(USE='LongWall')]),
        fieldValue(name='material',
          children=[
          Material(USE='SecondFloorWallMaterial')]),
        fieldValue(name='initialPosition',value=(0,4.5,-3.95)),
        fieldValue(name='finalPosition',value=(5,0.05,-19)),
        fieldValue(name='finalOrientation',value=(0.96,0.2,-0.19,1.61))]),
      ProtoInstance(DEF='SecondFloorWallSouth',name='Exploder',
        fieldValue=[
        fieldValue(name='geometry',
          children=[
          Box(USE='ShortWall')]),
        fieldValue(name='material',
          children=[
          Material(USE='SecondFloorWallMaterial')]),
        fieldValue(name='initialPosition',value=(-7,4.5,0)),
        fieldValue(name='finalPosition',value=(-10,0.05,11)),
        fieldValue(name='finalOrientation',value=(-0.28,0.28,-0.92,1.66))]),
      Group(
        children=[
        ProtoInstance(DEF='SmokeStack',name='Exploder',
          fieldValue=[
          fieldValue(name='geometry',
            children=[
            Cylinder(bottom=False,height=9,radius=0.5)]),
          fieldValue(name='material',
            children=[
            Material(diffuseColor=(0.4,0.4,0.4),shininess=0.8)]),
          fieldValue(name='initialPosition',value=(-4,4.51,2)),
          fieldValue(name='finalPosition',value=(-15,0.4,2)),
          fieldValue(name='finalOrientation',value=(0,0,1,1.57))]),
        TouchSensor(DEF='SmokeStackTouch',description='touch to activate')]),
      TimeSensor(DEF='ExplosionClock')]),
    ROUTE(fromField='touchTime',fromNode='SmokeStackTouch',toField='set_startTime',toNode='ExplosionClock'),
    #  Connect clock to animations 
    ROUTE(fromField='fraction_changed',fromNode='ExplosionClock',toField='set_fraction',toNode='FirstFloorCeiling'),
    ROUTE(fromField='fraction_changed',fromNode='ExplosionClock',toField='set_fraction',toNode='FirstFloorWallEast'),
    ROUTE(fromField='fraction_changed',fromNode='ExplosionClock',toField='set_fraction',toNode='FirstFloorWallNorth'),
    ROUTE(fromField='fraction_changed',fromNode='ExplosionClock',toField='set_fraction',toNode='FirstFloorWallWest'),
    ROUTE(fromField='fraction_changed',fromNode='ExplosionClock',toField='set_fraction',toNode='FirstFloorWallSouth'),
    ROUTE(fromField='fraction_changed',fromNode='ExplosionClock',toField='set_fraction',toNode='SecondFloorCeiling'),
    ROUTE(fromField='fraction_changed',fromNode='ExplosionClock',toField='set_fraction',toNode='SecondFloorWallEast'),
    ROUTE(fromField='fraction_changed',fromNode='ExplosionClock',toField='set_fraction',toNode='SecondFloorWallNorth'),
    ROUTE(fromField='fraction_changed',fromNode='ExplosionClock',toField='set_fraction',toNode='SecondFloorWallWest'),
    ROUTE(fromField='fraction_changed',fromNode='ExplosionClock',toField='set_fraction',toNode='SecondFloorWallSouth'),
    ROUTE(fromField='fraction_changed',fromNode='ExplosionClock',toField='set_fraction',toNode='SmokeStack')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ExplodingBuildingExample.py")
