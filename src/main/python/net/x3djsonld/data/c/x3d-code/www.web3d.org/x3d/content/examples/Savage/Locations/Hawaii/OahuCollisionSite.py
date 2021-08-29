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
    meta(content='OahuCollisionSite.x3d',name='title'),
    meta(content='This program reenacts the collision of the USS Greenville and the Ehime Maru. A previously written, stand-alone reenactment of the collision has been inlined. The islands of Oahu and Molaki (partial) have been inlined as the background.',name='description'),
    meta(content='Capt Mark Lennerton USMC',name='creator'),
    meta(content='Capt Mark Lennerton USMC',name='translator'),
    meta(content='terrain is misaligned 90 degrees with respect to North',name='warning'),
    meta(content='16 January 2014',name='modified'),
    meta(content='24 October 2002',name='modified'),
    meta(content='MakingOahuAreaModelInVRMLX3D.ppt',name='reference'),
    meta(content='Oahu Hawaii collision Greenville Ehime Maru submarine',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Locations/Hawaii/OahuCollisionSite.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='CameraCompass36',url=["../../../Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.wrl#CameraCompass36","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.wrl#CameraCompass36","../../../Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.x3d#CameraCompass36","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.x3d#CameraCompass36"],
      field=[
      field(accessType='inputOutput',name='enabled',type='SFBool'),
      field(accessType='inputOutput',name='positionOffsetFromCamera',type='SFVec3f'),
      field(accessType='inputOutput',name='markerColor',type='SFColor'),
      field(accessType='inputOutput',name='labelColor',type='SFColor')]),
    NavigationInfo(avatarSize=[10,1.6,1],speed=1000,visibilityLimit=1000000),
    Viewpoint(description='Collision_Point_Boresighted',orientation=(1,-1,0,-.401),position=(65000,3000,-8250)),
    Transform(
      children=[
      Viewpoint(description='Turn_to_Mag_North')]),
    Background(DEF='BackgroundCyan-ish',groundAngle=[1.309,1.570796],groundColor=[(0.15,0.15,0.7),(0.2,0.2,0.65),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0.0,0.5,1),(1,1,1)]),
    Background(DEF='BackgroundReddish',groundAngle=[1.309,1.570796],groundColor=[(0.15,0.15,0.7),(0.2,0.2,0.65),(0.6,0.6,0.2)],skyAngle=[1.309,1.571],skyColor=[(1,0,0),(1,0.4,0),(1,1,0)]),
    Transform(rotation=(0,1,0,1.57),translation=(62000,0,-18250),
      children=[
      Inline(url=["CollisionCourses.x3d","https://savage.nps.edu/Savage/Locations/Hawaii/CollisionCourses.x3d","CollisionCourses.wrl","https://savage.nps.edu/Savage/Locations/Hawaii/CollisionCourses.wrl"])]),
    Inline(url=["OahuAndSouthernBathymetry.x3d","https://savage.nps.edu/Savage/Locations/Hawaii/OahuAndSouthernBathymetry.x3d","OahuAndSouthernBathymetry.wrl","https://savage.nps.edu/Savage/Locations/Hawaii/OahuAndSouthernBathymetry.wrl"]),
    ProtoInstance(name='CameraCompass36',
      fieldValue=[
      fieldValue(name='enabled',value=True),
      fieldValue(name='positionOffsetFromCamera',value=(0,5,0)),
      fieldValue(name='markerColor',value=(0.9,0.9,0.9)),
      fieldValue(name='labelColor',value=(0.9,0.9,0.9))]),
    Group(DEF='BackgroundControls',
      children=[
      Transform(DEF='LatLongOn',scale=(2000,2000,2000),translation=(-10000,5000,-120000),
        children=[
        Shape(
          geometry=Sphere(),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0.5,0.8)))),
        TouchSensor(DEF='SensorButton1')]),
      Transform(scale=(2000,2000,2000),translation=(-5000,5000,-120000),
        children=[
        Shape(
          geometry=Sphere(),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.4,0)))),
        TouchSensor(DEF='SensorButton2')]),
      Script(DEF='Filter1',
        field=[
        field(accessType='inputOnly',name='set_boolean',type='SFBool'),
        #  activated: provides a persistent binding value, otherwise isActive events will toggle Background binding on/off. 
        field(accessType='outputOnly',name='activated',type='SFBool'),
        #  count: only used locally, so it is declared for persistence 
        field(accessType='initializeOnly',name='count',type='SFInt32',value=1)]),
      Script(DEF='Filter2',
        field=[
        field(accessType='inputOnly',name='set_boolean',type='SFBool'),
        field(accessType='outputOnly',name='activated',type='SFBool'),
        field(accessType='initializeOnly',name='count',type='SFInt32',value=1)])]),
    ROUTE(fromField='isActive',fromNode='SensorButton1',toField='set_boolean',toNode='Filter1'),
    ROUTE(fromField='activated',fromNode='Filter1',toField='set_bind',toNode='BackgroundCyan-ish'),
    ROUTE(fromField='isActive',fromNode='SensorButton2',toField='set_boolean',toNode='Filter2'),
    ROUTE(fromField='activated',fromNode='Filter2',toField='set_bind',toNode='BackgroundReddish')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for OahuCollisionSite.py")
