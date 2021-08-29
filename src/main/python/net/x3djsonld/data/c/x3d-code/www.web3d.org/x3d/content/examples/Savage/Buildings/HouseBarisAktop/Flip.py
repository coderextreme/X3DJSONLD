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
    meta(content='Flip.x3d',name='title'),
    meta(content='Flip lid.',name='description'),
    meta(content='Baris AKTOP',name='creator'),
    meta(content='12 September 2002',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/Flip.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(rotation=(0,0,1,-1.57),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.9,0.95,0.95))),
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-1,1),(-0.92,1.38),(-0.71,1.71),(-0.38,1.92),(0,2),(0.38,1.92),(0.71,1.71),(0.92,1.38),(1,1),(1,0.001),(1.2,0.001),(1.2,1),(1.104,1.456),(0.852,1.852),(0.456,2.104),(0,2.2),(-0.456,2.104),(-0.852,1.852),(-1.104,1.456),(-1.2,1),(-1.2,0),(-1.104,-0.456),(-0.852,-0.852),(-0.456,-1.104),(0,-1.2),(0.456,-1.104),(0.852,-0.852),(1.104,-0.456),(1.2,0),(1,0)],scale=[(1,1),(0.95,0.95),(0.9,0.9)],solid=False,spine=[(0,0,0),(0,0.05,0),(0,0.1,0)]))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Flip.py")
