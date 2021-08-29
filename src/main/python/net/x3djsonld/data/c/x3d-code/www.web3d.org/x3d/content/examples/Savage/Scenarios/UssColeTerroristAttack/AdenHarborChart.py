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
    meta(content='AdenHarborChart.x3d',name='title'),
    meta(content='Chart of Aden Harbor, Yemen.',name='description'),
    meta(content='James Harney',name='creator'),
    meta(content='17 October 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='http://en.wikipedia.org/wiki/Aden',name='reference'),
    meta(content='http://www.foia.navy.mil/usscole/enclosures/enclosure3.pdf',name='reference'),
    meta(content='NIMA chart 62098, 1995 edition',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/AdenHarborChart.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(type=["EXAMINE","FLY","ANY"]),
    Viewpoint(description='Entire Harbor',position=(0,0.1,4)),
    Viewpoint(description='Close Up of Area of Interest',position=(0,.5,2)),
    Transform(
      children=[
      Shape(
        #  TODO: Make into IndexedFaceSet 
        geometry=Box(size=(5,2.9048,0.01)),
        appearance=Appearance(
          texture=ImageTexture(url=["NIMA62098.jpg","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/NIMA62098.jpg"])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AdenHarborChart.py")
