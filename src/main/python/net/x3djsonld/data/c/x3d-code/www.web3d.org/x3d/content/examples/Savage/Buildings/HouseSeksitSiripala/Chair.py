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
    meta(content='Chair.x3d',name='title'),
    meta(content='Chair',name='description'),
    meta(content='Seksit Siripala',name='creator'),
    meta(content='8 September 2002',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/HouseSeksitSiripala/Chair.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  
    children=[
    Shape(
      appearance=Appearance(
        material=Material(),),
      geometry=Box(size=(2.0,0.3,2.0))),
    Transform(translation=(-1.0,0.0,1.0),
      children=[
      Shape(DEF='cyl',
        appearance=Appearance(
          material=Material(),),
        geometry=Cylinder(height=0.3,radius=0.1))]),
    Transform(translation=(1.0,0.0,1.0),
      children=[
      Shape(USE='cyl')]),
    Transform(translation=(1.0,0.0,-1.0),
      children=[
      Shape(USE='cyl')]),
    Transform(translation=(-1.0,0.0,-1.0),
      children=[
      Shape(USE='cyl')]),
    Transform(rotation=(0.0,0.0,1.0,-0.122),translation=(-1.1,-1.0,-1.0),
      children=[
      Shape(DEF='leg',
        appearance=Appearance(
          material=Material(),),
        geometry=Cylinder(radius=0.08))]),
    Transform(rotation=(0.0,0.0,1.0,0.122),translation=(1.1,-1.0,-1.0),
      children=[
      Shape(USE='leg')]),
    Transform(rotation=(0.0,0.0,1.0,0.122),translation=(1.1,-1.0,1.0),
      children=[
      Shape(USE='leg')]),
    Transform(rotation=(0.0,0.0,1.0,-0.122),translation=(-1.1,-1.0,1.0),
      children=[
      Shape(USE='leg')]),
    Transform(rotation=(0.0,0.0,1.0,-0.1396),translation=(1.08,0.8,1.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Cylinder(height=1.5,radius=0.08))]),
    Transform(rotation=(1.0,0.0,0.0,-0.785),translation=(1.16,1.7,0.8),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Cylinder(height=0.7,radius=0.08))]),
    Transform(rotation=(1.0,0.0,0.0,1.571),translation=(1.16,1.9,0.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Cylinder(height=1.2,radius=0.08))]),
    Transform(rotation=(1.0,0.0,0.0,0.785),translation=(1.16,1.7,-0.8),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Cylinder(height=0.7,radius=0.08))]),
    Transform(rotation=(0.0,0.0,1.0,-0.1396),translation=(1.08,0.8,-1.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Cylinder(height=1.5,radius=0.08))]),
    Transform(rotation=(0.0,0.0,1.0,-0.1396),translation=(1.08,1.0,-0.6),
      children=[
      Shape(DEF='back',
        appearance=Appearance(
          material=Material(),),
        geometry=Cylinder(height=1.9,radius=0.05))]),
    Transform(rotation=(0.0,0.0,1.0,-0.1396),translation=(1.08,1.0,-0.1),
      children=[
      Shape(USE='back')]),
    Transform(rotation=(0.0,0.0,1.0,-0.1396),translation=(1.08,1.0,0.1),
      children=[
      Shape(USE='back')]),
    Transform(rotation=(0.0,0.0,1.0,-0.1396),translation=(1.08,1.0,0.6),
      children=[
      Shape(USE='back')]),
    Transform(rotation=(0.0,0.0,1.0,1.571),translation=(0.0,-1.0,1.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Cylinder(height=2.3,radius=0.07))]),
    Transform(rotation=(0.0,0.0,1.0,1.571),translation=(0.0,-1.0,-1.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Cylinder(height=2.3,radius=0.07))]),
    Transform(rotation=(1.0,0.0,0.0,1.571),translation=(0.0,-1.0,0.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Cylinder(radius=0.07))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Chair.py")
