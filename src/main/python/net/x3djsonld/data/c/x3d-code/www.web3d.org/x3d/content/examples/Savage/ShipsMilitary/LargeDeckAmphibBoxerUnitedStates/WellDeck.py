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
    meta(content='WellDeck.x3d',name='title'),
    meta(content='LT Patricia Sweat USN',name='creator'),
    meta(content='Large Deck Amphibious Ship: USS BOXER (LHD 4)',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/LargeDeckAmphibBoxerUnitedStates/WellDeck.x3d',name='identifier'),
    meta(content='20 August 2004',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Sterngate',orientation=(0.58,-0.64,-0.504,2.3848),position=(-58.6,14.8,-28.4)),
    Transform(rotation=(0,0,1,1)),
    Group(DEF='Patty_Sweat',
      children=[
      Transform(DEF='WellDeck_Open',
        children=[
        CylinderSensor(DEF='WellDoorSensor1',description='click and drag to rotate',maxAngle=1.57),
        Transform(
          children=[
          Transform(DEF='WellDoorTransform1',
            children=[
            Shape(
              geometry=Extrusion(crossSection=[(-16.5,-10),(16.5,-10),(11.5,-21),(-11.5,-21),(-16.5,-10)],scale=[(1,1),(1,1)],spine=[(-0.4,5,0),(0.1,5,0)]),
              appearance=Appearance(
                material=Material(DEF='GREY',ambientIntensity=1,diffuseColor=(.8,.8,.8))))])])]),
      ROUTE(fromField='rotation_changed',fromNode='WellDoorSensor1',toField='set_rotation',toNode='WellDoorTransform1'),
      Transform(
        children=[
        CylinderSensor(DEF='WellDoorSensor',description='click and drag to rotate',maxAngle=1.57),
        Transform(DEF='WellDoorTransform',
          children=[
          Transform(
            children=[
            Shape(
              geometry=Extrusion(creaseAngle=.7,crossSection=[(-21.3,0),(0,0),(21.3,0),(16.5,-10),(-16.5,-10),(-21.3,0)],scale=[(1,1),(1,1)],solid=False,spine=[(-0.4,5,0),(0.1,5,0)]),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0,0))))])])]),
      ROUTE(fromField='rotation_changed',fromNode='WellDoorSensor',toField='set_rotation',toNode='WellDoorTransform')]),
    ExternProtoDeclare(appinfo='ViewPositionOrientation provides provides console output of local position and orientation as user navigates',name='ViewPositionOrientation',url=["../../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"],
      field=[
      field(accessType='inputOutput',appinfo='Whether or not ViewPositionOrientation sends output to console.',name='enabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Output internal trace messages for debugging this node - developer use only can be ignored.',name='traceEnabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='Ability to turn output tracing on/off at runtime.',name='set_traceEnabled',type='SFBool'),
      field(accessType='outputOnly',appinfo='Output local position.',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='Output local orientation.',name='orientation_changed',type='SFRotation'),
      field(accessType='outputOnly',appinfo='MFString value of new Viewpoint',name='outputViewpointString',type='MFString')]),
    ProtoInstance(name='ViewPositionOrientation',
      fieldValue=[
      fieldValue(name='enabled',value=False)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for WellDeck.py")
