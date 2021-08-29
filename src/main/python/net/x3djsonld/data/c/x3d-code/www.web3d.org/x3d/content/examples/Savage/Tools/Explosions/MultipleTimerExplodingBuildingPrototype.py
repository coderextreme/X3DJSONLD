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
    meta(content='MultipleTimerExplodingBuildingPrototype.x3d',name='title'),
    meta(content='A simple exploding structure, experimenting with the "Hello World" of explosions - click on the silver chimney to trigger the explosion.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='1 January 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='MultipleTimerExplodingBuildingExampleIntermediateAnimation.png',name='Image'),
    meta(content='MultipleTimerExplodingBuildingVideo.mov',name='MovingImage'),
    meta(content='Exploding building schematic layout diagram:',name='reference'),
    meta(content='ExplodingBuildingLayout.pdf',name='reference'),
    meta(content='ExplodingBuildingLargeExample.wrl',name='reference'),
    meta(content='Rotation calculations performed using the Dizzy utility from Vapour Technologies by James Smith.',name='reference'),
    meta(content='http://www.vapourtech.com',name='reference'),
    meta(content='DIS-Java-VRML Working Group',name='reference'),
    meta(content='http://www.web3d.org/WorkingGroups/vrtp/dis-java-vrml',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Explosions/MultipleTimerExplodingBuildingPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='Prototype to explode different pieces and parts in different ways.',name='Exploder',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='geometry node, to be used inside a Shape',name='geometry',type='SFNode',
          #  initialization node (if any) goes here 
          ),
        field(accessType='initializeOnly',appinfo='Material node for this geometry, to be used inside a Shape',name='material',type='SFNode',
          #  initialization node (if any) goes here 
          ),
        field(accessType='initializeOnly',appinfo='starting point',name='initialPosition',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',appinfo='finish point',name='finalPosition',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',appinfo='starting point orientation',name='initialOrientation',type='SFRotation',value=(0,1,0,0)),
        field(accessType='initializeOnly',appinfo='finish point orientation',name='finalOrientation',type='SFRotation',value=(0,1,0,0)),
        field(accessType='inputOnly',appinfo='animation input',name='set_fraction',type='SFFloat'),
        field(accessType='inputOutput',appinfo='animation trigger',name='startTime',type='SFTime',value=0)]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='LocationTransform',
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='initialPosition')]),
          children=[
          Transform(DEF='RotationTransform',
            IS=IS(
              connect=[
              connect(nodeField='rotation',protoField='initialOrientation')]),
            children=[
            Shape(DEF='AnimatedShape',
              IS=IS(
                connect=[
                connect(nodeField='geometry',protoField='geometry')]),
              appearance=Appearance(DEF='AnimatedShapeAppearance',
                IS=IS(
                  connect=[
                  connect(nodeField='material',protoField='material')])))])]),
        Script(DEF='ProtoAnimationScript',
          field=[
          field(accessType='initializeOnly',name='initialPosition',type='SFVec3f'),
          field(accessType='initializeOnly',name='finalPosition',type='SFVec3f'),
          field(accessType='initializeOnly',name='initialOrientation',type='SFRotation'),
          field(accessType='initializeOnly',name='finalOrientation',type='SFRotation'),
          field(accessType='outputOnly',name='runTime',type='SFTime'),
          field(accessType='outputOnly',name='position_changeds',type='MFVec3f'),
          field(accessType='outputOnly',name='rotationValues',type='MFRotation')],
          #  <field accessType='outputOnly' name='fraction_changed' type='SFFloat'/> 
          IS=IS(
            connect=[
            connect(nodeField='initialPosition',protoField='initialPosition'),
            connect(nodeField='finalPosition',protoField='finalPosition'),
            connect(nodeField='initialOrientation',protoField='initialOrientation'),
            connect(nodeField='finalOrientation',protoField='finalOrientation')])),
        TimeSensor(DEF='ProtoTimeSensor',
          IS=IS(
            connect=[
            connect(nodeField='startTime',protoField='startTime')])),
        PositionInterpolator(DEF='ProtoPositionInterpolatorCalculated',key=[0,0.2,0.4,0.6,0.8,1],keyValue=[(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0)],
          IS=IS(
            connect=[
            connect(nodeField='set_fraction',protoField='set_fraction')])),
        OrientationInterpolator(DEF='ProtoOrientationInterpolatorCalculated',key=[0,1],keyValue=[(0,1,0,0),(0,1,0,0)],
          IS=IS(
            connect=[
            connect(nodeField='set_fraction',protoField='set_fraction')])),
        ROUTE(fromField='value_changed',fromNode='ProtoPositionInterpolatorCalculated',toField='translation',toNode='LocationTransform'),
        ROUTE(fromField='value_changed',fromNode='ProtoOrientationInterpolatorCalculated',toField='rotation',toNode='RotationTransform'),
        ROUTE(fromField='position_changeds',fromNode='ProtoAnimationScript',toField='keyValue',toNode='ProtoPositionInterpolatorCalculated'),
        ROUTE(fromField='rotationValues',fromNode='ProtoAnimationScript',toField='keyValue',toNode='ProtoOrientationInterpolatorCalculated'),
        ROUTE(fromField='runTime',fromNode='ProtoAnimationScript',toField='cycleInterval',toNode='ProtoTimeSensor'),
        ROUTE(fromField='fraction_changed',fromNode='ProtoTimeSensor',toField='set_fraction',toNode='ProtoPositionInterpolatorCalculated'),
        ROUTE(fromField='fraction_changed',fromNode='ProtoTimeSensor',toField='set_fraction',toNode='ProtoOrientationInterpolatorCalculated')])),
    #  ==================== 
    Viewpoint(description='Multiple Timer Exploding Building',position=(0,0,12)),
    Background(groundAngle=[1.57],groundColor=[(0.6,0.9,0.6),(0.6,0.9,0.6)],skyColor=[(0.6,0.6,0.9)]),
    Anchor(description='MultipleTimerExplodingBuildingExample',parameter=["target=_blank"],url=["MultipleTimerExplodingBuildingExample.x3d","https://savage.nps.edu/Savage/Tools/Explosions/MultipleTimerExplodingBuildingExample.x3d","MultipleTimerExplodingBuildingExample.wrl","https://savage.nps.edu/Savage/Tools/Explosions/MultipleTimerExplodingBuildingExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["MultipleTimerExplodingBuildingPrototype","is a prototype definition file","","Click this text to see","MultipleTimerExplodingBuildingExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(0.2,0.2,0.8))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MultipleTimerExplodingBuildingPrototype.py")
