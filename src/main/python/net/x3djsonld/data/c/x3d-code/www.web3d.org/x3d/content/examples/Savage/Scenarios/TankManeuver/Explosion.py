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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='Explosion',name='title'),
    meta(content='BMP Explosion',name='description'),
    meta(content='Michael Martin',name='creator'),
    meta(content='10 September 2004',name='created'),
    meta(content='18 October 2004',name='modified'),
    meta(content='Explosion',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/TankManeuver/Explosion.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Transform(scale=(.5,1,.5),
        children=[
        Shape(
          appearance=Appearance(DEF='Yellow',
            material=Material(ambientIntensity=1,diffuseColor=(1,1,0),emissiveColor=(1,1,0),specularColor=(1,1,0))),
          geometry=IndexedFaceSet(DEF='Point',coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1],solid=False,
            coord=Coordinate(point=[(0,3,0),(1,0,1),(1,0,-1),(-1,0,-1),(-1,0,1)])))]),
      Transform(rotation=(1,0,0,1.57),scale=(.5,1,.5),
        children=[
        Shape(
          appearance=Appearance(USE='Yellow'),
          geometry=IndexedFaceSet(USE='Point'))]),
      Transform(rotation=(1,0,0,3.14),scale=(.5,1,.5),
        children=[
        Shape(
          appearance=Appearance(USE='Yellow'),
          geometry=IndexedFaceSet(USE='Point'))]),
      Transform(rotation=(1,0,0,-1.57),scale=(.5,1,.5),
        children=[
        Shape(
          appearance=Appearance(USE='Yellow'),
          geometry=IndexedFaceSet(USE='Point'))]),
      Transform(rotation=(0,0,1,1.57),scale=(.5,1,.5),
        children=[
        Shape(
          appearance=Appearance(USE='Yellow'),
          geometry=IndexedFaceSet(USE='Point'))]),
      Transform(rotation=(0,0,1,-1.57),scale=(.5,1,.5),
        children=[
        Shape(
          appearance=Appearance(USE='Yellow'),
          geometry=IndexedFaceSet(USE='Point'))]),
      Transform(rotation=(0.68,0.68,0.28,1.1),
        children=[
        Transform(scale=(.5,1,.5),
          children=[
          Shape(
            appearance=Appearance(USE='Yellow'),
            geometry=IndexedFaceSet(USE='Point'))]),
        Transform(rotation=(1,0,0,1.57),scale=(.5,1,.5),
          children=[
          Shape(
            appearance=Appearance(USE='Yellow'),
            geometry=IndexedFaceSet(USE='Point'))]),
        Transform(rotation=(1,0,0,3.14),scale=(.5,1,.5),
          children=[
          Shape(
            appearance=Appearance(USE='Yellow'),
            geometry=IndexedFaceSet(USE='Point'))]),
        Transform(rotation=(1,0,0,-1.57),scale=(.5,1,.5),
          children=[
          Shape(
            appearance=Appearance(USE='Yellow'),
            geometry=IndexedFaceSet(USE='Point'))]),
        Transform(rotation=(0,0,1,1.57),scale=(.5,1,.5),
          children=[
          Shape(
            appearance=Appearance(USE='Yellow'),
            geometry=IndexedFaceSet(USE='Point'))]),
        Transform(rotation=(0,0,1,-1.57),scale=(.5,1,.5),
          children=[
          Shape(
            appearance=Appearance(USE='Yellow'),
            geometry=IndexedFaceSet(USE='Point'))])]),
      Transform(rotation=(0.68,-0.28,0.68,1.1),
        children=[
        Transform(scale=(.5,1,.5),
          children=[
          Shape(
            appearance=Appearance(USE='Yellow'),
            geometry=IndexedFaceSet(USE='Point'))]),
        Transform(rotation=(1,0,0,1.57),scale=(.5,1,.5),
          children=[
          Shape(
            appearance=Appearance(USE='Yellow'),
            geometry=IndexedFaceSet(USE='Point'))]),
        Transform(rotation=(1,0,0,3.14),scale=(.5,1,.5),
          children=[
          Shape(
            appearance=Appearance(USE='Yellow'),
            geometry=IndexedFaceSet(USE='Point'))]),
        Transform(rotation=(1,0,0,-1.57),scale=(.5,1,.5),
          children=[
          Shape(
            appearance=Appearance(USE='Yellow'),
            geometry=IndexedFaceSet(USE='Point'))]),
        Transform(rotation=(0,0,1,1.57),scale=(.5,1,.5),
          children=[
          Shape(
            appearance=Appearance(USE='Yellow'),
            geometry=IndexedFaceSet(USE='Point'))]),
        Transform(rotation=(0,0,1,-1.57),scale=(.5,1,.5),
          children=[
          Shape(
            appearance=Appearance(USE='Yellow'),
            geometry=IndexedFaceSet(USE='Point'))])]),
      Transform(scale=(1.3,1.3,1.3),
        children=[
        Transform(scale=(.5,1,.5),
          children=[
          Shape(
            appearance=Appearance(DEF='Red',
              material=Material(ambientIntensity=1,diffuseColor=(1,0,0),emissiveColor=(1,0,0),specularColor=(1,.4,.4),transparency=.5)),
            geometry=IndexedFaceSet(USE='Point'))]),
        Transform(rotation=(1,0,0,1.57),scale=(.5,1,.5),
          children=[
          Shape(
            appearance=Appearance(USE='Red'),
            geometry=IndexedFaceSet(USE='Point'))]),
        Transform(rotation=(1,0,0,3.14),scale=(.5,1,.5),
          children=[
          Shape(
            appearance=Appearance(USE='Red'),
            geometry=IndexedFaceSet(USE='Point'))]),
        Transform(rotation=(1,0,0,-1.57),scale=(.5,1,.5),
          children=[
          Shape(
            appearance=Appearance(USE='Red'),
            geometry=IndexedFaceSet(USE='Point'))]),
        Transform(rotation=(0,0,1,1.57),scale=(.5,1,.5),
          children=[
          Shape(
            appearance=Appearance(USE='Red'),
            geometry=IndexedFaceSet(USE='Point'))]),
        Transform(rotation=(0,0,1,-1.57),scale=(.5,1,.5),
          children=[
          Shape(
            appearance=Appearance(USE='Red'),
            geometry=IndexedFaceSet(USE='Point'))]),
        Transform(rotation=(0.68,0.68,0.28,1.1),
          children=[
          Transform(scale=(.5,1,.5),
            children=[
            Shape(
              appearance=Appearance(USE='Red'),
              geometry=IndexedFaceSet(USE='Point'))]),
          Transform(rotation=(1,0,0,1.57),scale=(.5,1,.5),
            children=[
            Shape(
              appearance=Appearance(USE='Red'),
              geometry=IndexedFaceSet(USE='Point'))]),
          Transform(rotation=(1,0,0,3.14),scale=(.5,1,.5),
            children=[
            Shape(
              appearance=Appearance(USE='Red'),
              geometry=IndexedFaceSet(USE='Point'))]),
          Transform(rotation=(1,0,0,-1.57),scale=(.5,1,.5),
            children=[
            Shape(
              appearance=Appearance(USE='Red'),
              geometry=IndexedFaceSet(USE='Point'))]),
          Transform(rotation=(0,0,1,1.57),scale=(.5,1,.5),
            children=[
            Shape(
              appearance=Appearance(USE='Red'),
              geometry=IndexedFaceSet(USE='Point'))]),
          Transform(rotation=(0,0,1,-1.57),scale=(.5,1,.5),
            children=[
            Shape(
              appearance=Appearance(USE='Red'),
              geometry=IndexedFaceSet(USE='Point'))])]),
        Transform(rotation=(0.68,-0.28,0.68,1.1),
          children=[
          Transform(scale=(.5,1,.5),
            children=[
            Shape(
              appearance=Appearance(USE='Red'),
              geometry=IndexedFaceSet(USE='Point'))]),
          Transform(rotation=(1,0,0,1.57),scale=(.5,1,.5),
            children=[
            Shape(
              appearance=Appearance(USE='Red'),
              geometry=IndexedFaceSet(USE='Point'))]),
          Transform(rotation=(1,0,0,3.14),scale=(.5,1,.5),
            children=[
            Shape(
              appearance=Appearance(USE='Red'),
              geometry=IndexedFaceSet(USE='Point'))]),
          Transform(rotation=(1,0,0,-1.57),scale=(.5,1,.5),
            children=[
            Shape(
              appearance=Appearance(USE='Red'),
              geometry=IndexedFaceSet(USE='Point'))]),
          Transform(rotation=(0,0,1,1.57),scale=(.5,1,.5),
            children=[
            Shape(
              appearance=Appearance(USE='Red'),
              geometry=IndexedFaceSet(USE='Point'))]),
          Transform(rotation=(0,0,1,-1.57),scale=(.5,1,.5),
            children=[
            Shape(
              appearance=Appearance(USE='Red'),
              geometry=IndexedFaceSet(USE='Point'))])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for .py")
