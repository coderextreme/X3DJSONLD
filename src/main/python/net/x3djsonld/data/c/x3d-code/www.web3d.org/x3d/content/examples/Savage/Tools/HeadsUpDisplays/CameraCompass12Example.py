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
    meta(content='CameraCompass12Example.x3d',name='title'),
    meta(content='A circular set of 12 compass bearings that follows the active viewpoint. Coordinate axis viewpoint shows that North = +X axis, East = +Z axis, up = +Y axis.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='17 June 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompass12Example.x3d',name='identifier'),
    meta(content='David Colleen',name='inspiration'),
    meta(content='http://www.planet9.com/earth/pearlharbor/vrml/tour.wrl',name='reference'),
    meta(content='http://www.planet9.com/earth/pearlharbor/vrml/compass.wrl',name='reference'),
    meta(content='compass display',name='subject'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='CameraCompass12',url=["CameraCompassPrototypes.x3d#CameraCompass12","../../../Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.x3d#CameraCompass12","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.x3d#CameraCompass12","CameraCompassPrototypes.wrl#CameraCompass12","../../../Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.wrl#CameraCompass12","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.wrl#CameraCompass12"],
      field=[
      field(accessType='inputOutput',name='enabled',type='SFBool'),
      field(accessType='inputOutput',name='positionOffsetFromCamera',type='SFVec3f'),
      field(accessType='inputOutput',name='markerColor',type='SFColor'),
      field(accessType='inputOutput',name='labelColor',type='SFColor')]),
    ExternProtoDeclare(appinfo='ViewPositionOrientation prototype provides local position and orientation as user navigates with optional console output',name='ViewPositionOrientation',url=["../../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"],
      field=[
      field(accessType='inputOutput',appinfo='Whether or not ViewPositionOrientation sends output to console.',name='enabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Output internal trace messages for debugging this node - developer use only can be ignored.',name='traceEnabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='Ability to turn output tracing on/off at runtime.',name='set_traceEnabled',type='SFBool'),
      field(accessType='outputOnly',appinfo='Output local position.',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='Output local orientation.',name='orientation_changed',type='SFRotation'),
      field(accessType='outputOnly',appinfo='MFString value of new Viewpoint for example: <Viewpoint position="20 15 20" orientation="-0.516 0.83 0.212 0.9195"/>',name='outputViewpointString',type='MFString')]),
    #  ======================== 
    Viewpoint(description='walk and rotate to test heads-up display (HUD)',position=(0,0,25)),
    Viewpoint(description='walk and rotate to test heads-up display (HUD)',orientation=(0,1,0,-1.57),position=(-14,0,0)),
    NavigationInfo(speed=10,type=["FLY","ANY"]),
    Background(skyColor=[(0.7,0.7,0.9)]),
    PointLight(location=(0,20,0)),
    #  Put a coordinate axis in to display orientation 
    Transform(translation=(0,-2.5,0),
      children=[
      Inline(DEF='CoordinateAxes',url=["../../../Savage/Tools/Authoring/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]),
      Viewpoint(description='Coordinate axes: x=North, y=Up, z=East',orientation=(0,1,0,-1.4),position=(-3.6,0.2,0.6)),
      ProximitySensor(DEF='AxisProximity',size=(10,10,10)),
      NavigationInfo(DEF='AxisNavigation')]),
    #  Test the compass prototype of interest. 
    ProtoInstance(name='CameraCompass12',
      fieldValue=[
      fieldValue(name='enabled',value=True),
      fieldValue(name='positionOffsetFromCamera',value=(0,5,0)),
      fieldValue(name='markerColor',value=(0.3,0.3,0.8)),
      fieldValue(name='labelColor',value=(1,1,1))]),
    #  Put a coordinate axis in to display orientation 
    #  Open the VRML console to see ViewPositionOrientation output. This demonstrates that more than one ProximitySensor can be active in the scene at a single time. 
    ProtoInstance(name='ViewPositionOrientation',
      fieldValue=[
      fieldValue(name='enabled',value=True)]),
    Transform(DEF='Floor',translation=(0,-5,0),
      children=[
      Shape(
        geometry=Box(size=(5,0.4,5)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.3,0.7,0.3)))),
      Shape(
        geometry=Box(size=(20,0.3,20)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.7,0.7,0.3)))),
      Shape(
        geometry=Box(size=(50,0.2,50)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.8,1)))),
      Shape(
        geometry=Box(size=(100,0.1,100)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.3,1,0.3))))]),
    Transform(DEF='CenterInstructions',translation=(0,0.75,0),
      children=[
      Billboard(
        children=[
        Shape(
          geometry=Text(string=["Walk and rotate to move scene while","compass heads-up display (HUD)","CameraCompass12 stays overhead"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0),emissiveColor=(0.2,0.7,0.2))))])]),
    ROUTE(fromField='isActive',fromNode='AxisProximity',toField='set_bind',toNode='AxisNavigation')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CameraCompass12Example.py")
