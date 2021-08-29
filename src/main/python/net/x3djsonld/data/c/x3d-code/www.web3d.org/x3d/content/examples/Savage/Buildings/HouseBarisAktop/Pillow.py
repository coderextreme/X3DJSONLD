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
    meta(content='Pillow.x3d',name='title'),
    meta(content='Pillow for bed.',name='description'),
    meta(content='Baris AKTOP',name='creator'),
    meta(content='11 September 2002',name='created'),
    meta(content='11 October 2002',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/Pillow.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(rotation=(0,0,1,1.57),
        children=[
        Shape(
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)],scale=[(2,0.1),(2.2,0.3),(2.4,0.5),(2.6,0.7),(2.6,0.7),(2.4,0.5),(2.2,0.3),(2,0.1)],solid=False,spine=[(0,0,0),(0,0.1,0),(0,0.2,0),(0,0.6,0),(0,4,0),(0,4.1,0),(0,4.2,0),(0,4.3,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0.9,1))))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Pillow.py")
