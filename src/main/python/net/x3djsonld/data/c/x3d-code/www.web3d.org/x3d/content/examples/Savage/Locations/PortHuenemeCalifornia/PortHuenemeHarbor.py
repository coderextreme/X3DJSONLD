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
    meta(content='PortHuenemeHarbor.x3d',name='title'),
    meta(content='Satellite Image of Port Hueneme Harbor',name='description'),
    meta(content='James Harney',name='creator'),
    meta(content='31 January 2002',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='lay harbor chart horizontal to match Background',name='TODO'),
    meta(content='NIMA chart 18725, 1996 ed.',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/PortHuenemeCalifornia/PortHuenemeHarbor.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    NavigationInfo(type=["EXAMINE","FLY","ANY"]),
    Viewpoint(description='Entire Harbor Satellite View',position=(0,0.1,4.7)),
    Transform(
      children=[
      Shape(
        geometry=Box(size=(5.85,4.27,0.01)),
        appearance=Appearance(
          texture=ImageTexture(url=["PortHueneme.jpg","https://savage.nps.edu/Savage/Locations/PortHuenemeCalifornia/PortHueneme.jpg"])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PortHuenemeHarbor.py")
