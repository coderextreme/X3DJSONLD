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
    meta(content='SoundVisualization.x3d',name='title'),
    meta(content='An example of the Sound node for testing X3D-Edit author-assist visualization',name='description'),
    meta(content='15 November 2009',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='SoundVisualization.png',name='Image'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='Copyright 2009, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter12EnvironmentSensorSound/SoundVisualization.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  Note that navigation mode shifts to WALK when ViewInside is bound, otherwise default is EXAMINE 
    children=[
    WorldInfo(title='SoundVisualization.x3d'),
    Viewpoint(DEF='ViewOutside',description='outside',position=(0,8,40)),
    NavigationInfo(DEF='NavOutside'),
    ROUTE(fromField='isBound',fromNode='ViewOutside',toField='set_bind',toNode='NavOutside'),
    Viewpoint(DEF='ViewInside',description='inside',position=(0,1.6,6)),
    NavigationInfo(DEF='NavInside',type=["WALK","ANY"]),
    ROUTE(fromField='isBound',fromNode='ViewInside',toField='set_bind',toNode='NavInside'),
    Viewpoint(DEF='ViewAbove',description='above',orientation=(1,0,0,-1.57079),position=(0,40,0)),
    Inline(DEF='GridXZ_20x20Fixed',url=["GridXZ_20x20Fixed.x3d","../../../Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d","GridXZ_20x20Fixed.wrl","../../../Savage/Tools/Authoring/GridXZ_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.wrl"]),
    ROUTE(fromField='isBound',fromNode='ViewAbove',toField='set_bind',toNode='NavOutside'),
    #  Sound node example 
    Sound(direction=(1,0,1),location=(-3,1.6,-3),maxBack=6,minBack=5,
      source=AudioClip(DEF='WaterSounds',description='Running Water',url=["aqua.wav","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter12EnvironmentSensorSound/aqua.wav"])),
    #  ================== 
    #  Sound outlines, patterned after http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter12EnvironmentSensorSound/SoundAudioClip.x3d 
    #  Approximate ellipsoidal footprints and envelope using Cylinders and Spheres, respectively 
    #  Sound direction is x axis, so minimum-attenuation minLength = (minBack + minFront) and minRadius = minLength/2 along x axis 
    #  and so width, height dimensions ~= maximum-attenuation halfwidth = maxWidth ~= 45 along y, z axes 
    #  Ellipsoid focus is (0 0 0) but geometric center offset for spheroidal approximation is (-minBack + minRadius) 
    Transform(rotation=(0,1,0,-2.356194490192345),translation=(-3,1.6,-3),
      children=[
      Transform(rotation=(1,0,0,0.0),
        #  here is local center of sound ellipse, with local X axis pointed along direction vector 
        children=[
        Inline(DEF='CoordinateAxes',url=["../Chapter03Grouping/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]),
        Transform(scale=(6.0,2.23606797749979,2.23606797749979),translation=(-2,0,0),
          children=[
          Collision(enabled=False,
            children=[
            Shape(
              geometry=Cylinder(height=0.04,radius=0.5,side=False),
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.6,0.4),emissiveColor=(0.8,0.6,0.4),transparency=0.7))),
            Shape(
              geometry=Sphere(radius=0.5),
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.6,0.4),emissiveColor=(0.8,0.6,0.4),transparency=0.7)))])]),
        Transform(scale=(16.0,7.745966692414834,7.745966692414834),translation=(2,0,0),
          children=[
          Collision(enabled=False,
            children=[
            Shape(
              geometry=Cylinder(height=0.02,radius=0.5,side=False),
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.3,0.2),emissiveColor=(0.4,0.3,0.2),transparency=0.85))),
            Shape(
              geometry=Sphere(radius=0.5),
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.3,0.2),emissiveColor=(0.4,0.3,0.2),transparency=0.85)))])])])])]
    #  ================== 
    )
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SoundVisualization.py")
