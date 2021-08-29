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
    meta(content='HeadsUpDisplayExample.x3d',name='title'),
    meta(content='Generic Heads Up Display (HUD) prototype to keep children on screen.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='9 November 2003',name='created'),
    meta(content='22 February 2010',name='modified'),
    meta(content='HUD Heads Up Display',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='HeadsUpDisplay positions child geometry in screen space, movable by the user',name='HeadsUpDisplay',url=["HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"],
      field=[
      field(accessType='inputOutput',appinfo='Displayed subscene positioned as a HUD.',name='children',type='MFNode'),
      field(accessType='inputOutput',appinfo='Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position.',name='dragChildren',type='MFNode'),
      field(accessType='initializeOnly',appinfo='Modified screen location and distance (for size).',name='locationOffset',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='Enable/disable console output for troubleshooting.',name='traceEnabled',type='SFBool')]),
    ExternProtoDeclare(appinfo='ViewPositionOrientation provides provides console output of local position and orientation as user navigates',name='ViewPositionOrientation',url=["../../Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"],
      field=[
      field(accessType='inputOutput',appinfo='Whether or not ViewPositionOrientation sends output to console.',name='enabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Output internal trace messages for debugging this node - developer use only can be ignored.',name='traceEnabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='Ability to turn output tracing on/off at runtime.',name='set_traceEnabled',type='SFBool'),
      field(accessType='outputOnly',appinfo='Output local position.',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='Output local orientation.',name='orientation_changed',type='SFRotation'),
      field(accessType='outputOnly',appinfo='MFString value of new Viewpoint',name='outputViewpointString',type='MFString')]),
    #  ==================== 
    Inline(DEF='HelloWorld',url=["../../../HelloWorld.x3d","http://www.web3d.org/x3d/content/examples/Basic/HelloWorld.x3d","../../../HelloWorld.wrl","http://www.web3d.org/x3d/content/examples/Basic/HelloWorld.wrl"]),
    ProtoInstance(name='HeadsUpDisplay',
      fieldValue=[
      fieldValue(name='children',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
          geometry=Text(string=["HUD text"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)))]),
      fieldValue(name='dragChildren',
        children=[
        Transform(translation=(0,0,-0.2),
          children=[
          Shape(
            geometry=Box(size=(4,2,0.001)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=0.9)))])]),
      fieldValue(name='locationOffset',value=(-4,-2,0))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HeadsUpDisplayExample.py")
