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
    meta(content='Sofa.x3d',name='title'),
    meta(content='Sofa',name='description'),
    meta(content='Seksit Siripala',name='creator'),
    meta(content='10 September 2002',name='created'),
    meta(content='11 October 2002',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/HouseSeksitSiripala/Sofa.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(translation=(0.0,0.0,3.0),
      children=[
      Shape(DEF='leg',
        appearance=Appearance(
          material=Material(diffuseColor=(0.2,0.1,0.0))),
        geometry=Cylinder(height=0.5,radius=0.2))]),
    Transform(translation=(0.0,0.0,-3.0),
      children=[
      Shape(USE='leg')]),
    Transform(translation=(-2.0,0.0,-3.0),
      children=[
      Shape(USE='leg')]),
    Transform(translation=(-2.0,0.0,3.0),
      children=[
      Shape(USE='leg')]),
    Transform(rotation=(0.0,0.0,1.0,0.1),translation=(-1.0,0.3,0.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.1,0.2,0.5))),
        geometry=Box(size=(2.5,0.5,7.0)))]),
    Transform(rotation=(0.0,0.0,1.0,0.1),translation=(-1.0,0.5,3.5),
      children=[
      Group(DEF='arm',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.1,0.2,0.5))),
          geometry=Box(size=(2.5,0.3,0.3))),
        Transform(rotation=(0.0,0.0,1.0,-1.5),translation=(0.0,0.2,0.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,0.2,0.5))),
            geometry=Cylinder(height=3.0,radius=0.2))])])]),
    Transform(rotation=(0.0,0.0,1.0,-1.4),translation=(-1.0,0.7,3.5),
      children=[
      Shape(DEF='woodarm',
        appearance=Appearance(
          material=Material(diffuseColor=(0.2,0.1,0.0))),
        geometry=Cylinder(height=3.2,radius=0.1))]),
    Transform(rotation=(0.0,0.0,1.0,-1.4),translation=(-1.0,0.7,-3.5),
      children=[
      Shape(USE='woodarm')]),
    Transform(rotation=(0.0,0.0,1.0,0.1),translation=(-1.0,0.5,-3.5),
      children=[
      Group(USE='arm')]),
    Transform(rotation=(0.0,0.0,1.0,0.4),translation=(-2.2,0.8,0.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.1,0.2,0.5))),
        geometry=Box(size=(0.3,1.5,6.5)))]),
    Transform(rotation=(0.0,0.0,1.0,0.1),translation=(-1.0,0.4,0.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.1,0.2,0.5))),
        geometry=Box(size=(2.5,0.5,6.5))),
      Transform(rotation=(1.0,0.0,0.0,1.5707964),translation=(1.15,0.0,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.1,0.2,0.5))),
          geometry=Cylinder(height=6.5,radius=0.25))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Sofa.py")
