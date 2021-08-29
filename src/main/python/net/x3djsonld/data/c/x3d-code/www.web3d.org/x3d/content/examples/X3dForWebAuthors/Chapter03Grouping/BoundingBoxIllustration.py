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

newModel=X3D(profile='Interactive',version='3.3',
  head=head(
    children=[
    meta(content='BoundingBoxIllustration.x3d',name='title'),
    meta(content='Simple Inline example illustrating bounding box coverage. Bounding box lines are not typically rendered.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='28 December 2005',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright Don Brutzman and Leonard Daly 2007',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/BoundingBoxIllustration.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='BoundingBoxIllustration.x3d'),
    Background(skyColor=[(1,1,1)]),
    Viewpoint(description='Bounding box illustration',position=(0,0,15)),
    Group(bboxSize=(12,4,4),
      children=[
      Inline(url=["../Chapter02GeometryPrimitives/GeometryPrimitiveNodes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter02GeometryPrimitives/GeometryPrimitiveNodes.x3d","../Chapter02GeometryPrimitives/GeometryPrimitiveNodes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter02GeometryPrimitives/GeometryPrimitiveNodes.wrl"]),
      Shape(
        geometry=IndexedLineSet(coordIndex=[0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1],
          coord=Coordinate(point=[(-6,-2,-2),(-6,-2,2),(6,-2,2),(6,-2,-2),(-6,2,-2),(-6,2,2),(6,2,2),(6,2,-2)])),
        appearance=Appearance(
          #  lines are only lit by emissiveColor 
          material=Material(emissiveColor=(0,0.8,0.8))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BoundingBoxIllustration.py")
