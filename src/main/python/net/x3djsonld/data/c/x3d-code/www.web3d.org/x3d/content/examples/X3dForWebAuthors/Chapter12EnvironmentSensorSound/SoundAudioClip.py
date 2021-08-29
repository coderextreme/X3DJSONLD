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
    meta(content='SoundAudioClip.x3d',name='title'),
    meta(content='An example of the Sound and AudioClip node showing the effect of the various volume regions',name='description'),
    meta(content='1 May 2006',name='created'),
    meta(content='13 May 2020',name='modified'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='Copyright 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter12EnvironmentSensorSound/SoundAudioClip.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SoundAudioClip.x3d'),
    Viewpoint(description='Sound spheroid approximating ellipsoid volume',orientation=(1,0,0,-0.2),position=(0,40,200)),
    Viewpoint(description='100m distant',orientation=(1,0,0,-0.2),position=(0,20,100)),
    Viewpoint(description='50m distant',orientation=(1,0,0,-0.2),position=(0,10,50)),
    Viewpoint(description='25m distant',orientation=(1,0,0,-0.2),position=(0,5,25)),
    Viewpoint(description='10m distant',orientation=(1,0,0,-0.2),position=(0,2,10)),
    Viewpoint(description='center',orientation=(0,1,0,-1.57),position=(0,2,0)),
    NavigationInfo(speed=10,type=["WALK","ANY"]),
    #  Sound node is positioned and oriented in local coordinate reference frame of scene graph at origin of sound 
    #  Sound location y-value is 1.6 in order to match typical avatar height (in meters) 
    Sound(DEF='Audible',location=(0,1.6,0),maxBack=20,maxFront=100,minBack=10,minFront=10,priority=1,
      source=AudioClip(DEF='WaterSounds',description='Running Water',loop=True,url=["aqua.wav","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter12EnvironmentSensorSound/aqua.wav"])),
    #  minWidth = sqrt (minBack * minFront) = 10 
    #  maxWidth = sqrt (maxBack * maxFront) = 45 
    #  Approximate ellipsoidal footprints and envelope using Cylinders and Spheres, respectively 
    #  Minimum attenuation parameters 10, 10, 10 produce a Cylinder and Sphere with uniform scale 
    Transform(DEF='minShapes',scale=(10,10,10),
      children=[
      Shape(
        geometry=Cylinder(height=0.05),
        appearance=Appearance(
          material=Material(DEF='MinFootprintMaterial',diffuseColor=(0.8,0,0)))),
      Collision(enabled=False,
        children=[
        Shape(
          geometry=Sphere(),
          appearance=Appearance(
            material=Material(DEF='MinSpheroidMaterial',diffuseColor=(0.8,0,0),transparency=0.5)))])]),
    #  Maximum attenuation parameters 20, 100, 45 produce a Cylinder and Sphere with non-uniform scale 
    #  Sound direction is x axis, so maximum-attenuation length = (100 + 20) = 120 and radius = 120 / 2 = 60 along x axis 
    #  and so width, height dimensions ~= maximum-attenuation halfwidth = maxWidth ~= 45 along y, z axes 
    #  Ellipsoid focus is (0 0 0) but geometric center of spheroidal approximation is (-maxBack + x radius) = (-20 + 60) = 40 along x axis 
    Transform(DEF='maxShapes',scale=(60,45,45),translation=(40,0,0),
      children=[
      Shape(
        geometry=Cylinder(height=0.002),
        appearance=Appearance(
          material=Material(DEF='MaxFootprintMaterial',diffuseColor=(1,0.894118,0.341176)))),
      Collision(enabled=False,
        children=[
        Shape(
          geometry=Sphere(),
          appearance=Appearance(
            material=Material(DEF='MaxSpheroidMaterial',diffuseColor=(1,0.5,0),transparency=0.75)))])]),
    #  Author-assist prototype from Savage X3D model archive 
    ExternProtoDeclare(name='GridXZ',url=["../../Savage/Tools/Authoring/GridXZPrototype.x3d#GridXZ","https://savage.nps.edu/Savage/Tools/Authoring/GridXZPrototype.x3d#GridXZ","../../Savage/Tools/Authoring/GridXZPrototype.wrl#GridXZ","https://savage.nps.edu/Savage/Tools/Authoring/GridXZPrototype.wrl#GridXZ"],
      field=[
      field(accessType='initializeOnly',name='description',type='SFString'),
      field(accessType='inputOutput',name='labelColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='default unscaled size: 10m by 10m',name='scale',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='label location offset (in meters) to improve readability',name='labelsOffset',type='SFVec3f'),
      field(accessType='inputOutput',name='originLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='-Z axis',name='WestLabel',type='MFString'),
      field(accessType='inputOutput',name='NorthWestLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='+X axis',name='NorthLabel',type='MFString'),
      field(accessType='inputOutput',name='NorthEastLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='+Z axis',name='EastLabel',type='MFString'),
      field(accessType='inputOutput',name='SouthEastLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='-X axis',name='SouthLabel',type='MFString'),
      field(accessType='inputOutput',name='SouthWestLabel',type='MFString')]),
    #  default values scaled up by factor of 10 in this instance 
    ProtoInstance(name='GridXZ',
      fieldValue=[
      fieldValue(name='description',value='GridXZ'),
      fieldValue(name='labelColor',value=(1,1,1)),
      fieldValue(name='scale',value=(10,10,10)),
      fieldValue(name='labelsOffset',value=(0,-0.5,0)),
      fieldValue(name='originLabel',value=["origin","0 0 0"]),
      fieldValue(name='NorthLabel',value=["North","-Z"]),
      fieldValue(name='NorthEastLabel',value=["100 0 -100"]),
      fieldValue(name='EastLabel',value=["East","+X"]),
      fieldValue(name='SouthEastLabel',value=["100 0 100"]),
      fieldValue(name='SouthLabel',value=["South","+Z"]),
      fieldValue(name='SouthWestLabel',value=["-100 0 100"]),
      fieldValue(name='WestLabel',value=["West","-X"]),
      fieldValue(name='NorthWestLabel',value=["-100 0 -100"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SoundAudioClip.py")
