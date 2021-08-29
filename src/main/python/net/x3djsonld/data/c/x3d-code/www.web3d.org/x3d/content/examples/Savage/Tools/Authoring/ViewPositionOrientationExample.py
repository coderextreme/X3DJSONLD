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
    meta(content='ViewPositionOrientationExample.x3d',name='title'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 November 2000',name='created'),
    meta(content='27 May 2017',name='modified'),
    meta(content='As user navigates, display local position and orientation in the console output window. Various other output formats also available.',name='description'),
    meta(content='ViewPositionOrientationPrototype.x3d',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIExample.x3d',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIPrototype.x3d',name='reference'),
    meta(content='http://www.realism.com/Web3D/Examples#WhereAmI',name='reference'),
    meta(content='http://www.realism.com/vrml/Example/WhereAmI/WhereAmI_Proto.wrl',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Copy the ExternProtoDeclare and ProtoInstance for ViewPositionOrientation at the top of your scene graph to add this functionality into other worlds. 
    children=[
    ExternProtoDeclare(appinfo='ViewPositionOrientation provides provides console output of local position and orientation as user navigates',name='ViewPositionOrientation',url=["ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../../Basic/course/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","../../../Basic/course/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"],
      field=[
      field(accessType='inputOutput',appinfo='Whether or not ViewPositionOrientation sends output to console',name='enabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Output internal trace messages for debugging this node, intended for developer use only',name='traceEnabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='Ability to turn output tracing on/off at runtime',name='set_traceEnabled',type='SFBool'),
      field(accessType='outputOnly',appinfo='Output local position',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='Output local orientation',name='orientation_changed',type='SFRotation'),
      field(accessType='outputOnly',appinfo='MFString value of new Viewpoint, suitable for use in string field of a Text node',name='outputViewpointString',type='MFString')]),
    ProtoInstance(name='ViewPositionOrientation',
      fieldValue=[
      fieldValue(name='enabled',value=True)]),
    #  The rest of this example scene follows. 
    Viewpoint(description='ViewPositionOrientation example',orientation=(-0.6,0.8,0,0.8961),position=(20,15,20)),
    Billboard(
      children=[
      Transform(translation=(0,4,2),
        children=[
        Shape(
          geometry=Text(string=["Open console output window and","navigate to see changing values for","Viewpoint position and orientation"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.8,0.6),shininess=0.8)))]),
      Transform(translation=(0,3.5,1.8),
        children=[
        Shape(
          geometry=Box(size=(14,4,0.1)),
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,1))))])]),
    Inline(url=["../../../Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d","../../../Savage/Tools/Authoring/GridXZ_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.wrl"]),
    Transform(scale=(11,11,11),
      children=[
      Inline(url=["../../../Savage/Tools/Authoring/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ViewPositionOrientationExample.py")
