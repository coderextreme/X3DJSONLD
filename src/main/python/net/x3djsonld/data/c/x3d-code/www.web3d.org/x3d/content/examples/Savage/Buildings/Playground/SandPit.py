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
    meta(content='SandPit.x3d',name='title'),
    meta(content='This file draw the sandPit in the playground.',name='description'),
    meta(content='Kok Keng Ng',name='creator'),
    meta(content='20 September 2002',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/PlayGround/SandPit.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.9,0.7)),
          texture=ImageTexture(url=["wood.jpg","https://savage.nps.edu/Savage/Buildings/PlayGround/wood.jpg"])),
        geometry=Extrusion(convex=False,creaseAngle=0.785,crossSection=[(0.96,2),(-1,2),(-1,-2),(1,-2),(1,2),(0.96,2),(0.96,-1.96),(-0.96,-1.96),(-0.96,1.96),(0.96,1.96),(0.96,2)],solid=False,spine=[(0,0,0),(0,0.1,0)]))]),
    Transform(translation=(0,0.05,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(url=["sand.jpg","https://savage.nps.edu/Savage/Buildings/PlayGround/sand.jpg"])),
        geometry=Box(size=(1.96,0.04,3.96)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SandPit.py")
