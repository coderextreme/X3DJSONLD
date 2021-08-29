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
    meta(content='Desk.x3d',name='title'),
    meta(content='desk',name='description'),
    meta(content='Seksit Siripala',name='creator'),
    meta(content='9 September 2002',name='created'),
    meta(content='11 October 2002',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/HouseSeksitSiripala/Desk.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='view',orientation=(0,1,0,2.8),position=(-1.4,1,-22)),
    Transform(translation=(0.0,1.0,0.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.7,0.7,0.7))),
        geometry=Box(size=(5.0,0.3,2.0)))]),
    Transform(translation=(0.0,0.0,0.7),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.7,0.8,0.7))),
        geometry=Box(size=(4.8,2.0,0.3)))]),
    Transform(translation=(-2.2,0.0,0.0),
      children=[
      Shape(DEF='side',
        appearance=Appearance(
          material=Material(diffuseColor=(0.7,0.8,0.7))),
        geometry=Box(size=(0.2,2.0,1.6)))]),
    Transform(translation=(2.2,0.0,0.0),
      children=[
      Shape(USE='side')]),
    Transform(translation=(1.2,0.0,0.0),
      children=[
      Shape(USE='side')]),
    Transform(translation=(-1.2,0.0,0.0),
      children=[
      Shape(USE='side')]),
    Transform(translation=(-1.7,0.0,0.0),
      children=[
      Shape(DEF='drawer',
        appearance=Appearance(
          material=Material(diffuseColor=(0.2,0.1,0.0))),
        geometry=Box(size=(1.0,0.1,1.4)))]),
    Transform(translation=(1.7,0.2,0.0),
      children=[
      Shape(USE='drawer')]),
    Transform(translation=(1.7,-0.3,0.0),
      children=[
      Shape(USE='drawer')]),
    Transform(translation=(0.0,0.45,0.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.2,0.1,0.0))),
        geometry=Box(size=(2.2,0.1,1.5)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Desk.py")
