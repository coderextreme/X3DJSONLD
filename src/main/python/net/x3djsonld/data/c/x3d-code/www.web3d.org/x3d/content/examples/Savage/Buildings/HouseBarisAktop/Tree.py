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
    meta(content='Tree.x3d',name='title'),
    meta(content='Tree derived from VRML Sourcebook example.',name='description'),
    meta(content='20 July 2002',name='created'),
    meta(content='2 June 2012',name='modified'),
    meta(content='Baris Aktop',name='creator'),
    meta(content='https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/Tree.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(rotation=(0.0,1.0,0.0,1.2),translation=(6.0,4.0,2.0)),
    Group(
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(url=["tree1.png","http://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/tree1.png"])),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3],solid=False,
          coord=Coordinate(point=[(3,0.0,0.0),(7,0.0,0.0),(7,4.0,0.0),(3,4.0,0.0)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Tree.py")
