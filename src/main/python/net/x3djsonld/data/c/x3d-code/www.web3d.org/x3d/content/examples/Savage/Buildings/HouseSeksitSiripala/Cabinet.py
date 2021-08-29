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
    meta(content='Cabinet.x3d',name='title'),
    meta(content='Cabinet',name='description'),
    meta(content='Seksit Siripala',name='creator'),
    meta(content='11 September 2002',name='created'),
    meta(content='1 September 2003',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/HouseSeksitSiripala/Cabinet.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='table1',
      children=[
      Transform(
        children=[
        Shape(
          geometry=Box(size=(2,1,1)),
          appearance=Appearance(
            material=Material(),))]),
      Transform(translation=(0,0.5,0.05),
        children=[
        Shape(
          geometry=Box(size=(2.10,0.05,1.10)),
          appearance=Appearance(
            material=Material(),))]),
      Transform(translation=(0,0,0.5),
        children=[
        Shape(
          geometry=Box(size=(2,1,0.05)),
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0.5,0)),
            texture=ImageTexture(DEF='wood',url=["wood.jpg","https://savage.nps.edu/Savage/Buildings/HouseSeksitSiripala/wood.jpg"]))),
        Transform(translation=(-0.05,0,0.05),
          children=[
          Shape(DEF='knubOut1',
            geometry=Sphere(DEF='table1knub',radius=0.05),
            appearance=Appearance(DEF='table1knub_ap',
              material=Material(),))]),
        Transform(translation=(0.05,0,0.05),
          children=[
          Shape(DEF='knubOut2',
            geometry=Sphere(DEF='doorKnub',radius=0.05),
            appearance=Appearance(DEF='knub_ap',
              material=Material(),))])]),
      Transform(DEF='sink',translation=(0,0.525,0),
        children=[
        Shape(
          geometry=Box(size=(0.5,0.05,0.5)),
          appearance=Appearance(
            material=Material(diffuseColor=(0.1,0.1,0.1),transparency=0.5)))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Cabinet.py")
