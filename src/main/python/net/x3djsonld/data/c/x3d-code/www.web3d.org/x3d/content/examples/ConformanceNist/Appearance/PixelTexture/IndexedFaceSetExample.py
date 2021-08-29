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
    meta(content='IndexedFaceSetExample.x3d',name='title'),
    meta(content='IndexedFaceSet-front.jpg',name='Image'),
    meta(content='IndexedFaceSet-rear.jpg',name='Image'),
    meta(content='IndexedFaceSet-top.jpg',name='Image'),
    meta(content='IndexedFaceSet-bottom.jpg',name='Image'),
    meta(content='IndexedFaceSet-left.jpg',name='Image'),
    meta(content='IndexedFaceSet-right.jpg',name='Image'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='16 June 2020',name='modified'),
    meta(content='Test of mapping a PixelTexture image to an IndexedFaceSet with three unequal length bounding box sides. The PixelTexture is RED (lower left quarter), YELLOW (lower right quarter), YELLOW (upper left quarter) and RED (upper right quarter). The PixelTexture should map to an IndexedFaceSet geometry by projecting the image through the geometry bounding box face with the long and second-longest axes, and onto the IndexedFaceSetgeometry. A horizontally reversed PixelTexture is mapped to the opposite side of the IndexedFaceSet. Geometry faces between the front and back are smeared with the projected end-pixels of the PixelTexture. The PixelTextures S axis is scaled to the long horizontal size of the bouding box. Any PixelTexture pixels extending beyond the geometry in the +T direction are removed to prevent image wharping. As a result, the top of the PixelTexture should appear chopped off',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/IndexedFaceSetExample.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='IndexedFaceSet.x3d'),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Shape(
      appearance=Appearance(
        material=Material(),
        texture=PixelTexture(image=[2,2,3,0xFF0000,0xFFFF00,0xFFFF00,0xFF0000])),
      geometry=IndexedFaceSet(colorPerVertex=False,coordIndex=[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1],creaseAngle=0.5,
        color=Color(color=[(1,0,0),(1,0,0),(1,0,0),(1,0,0),(1,0,0),(1,0,0)]),
        coord=Coordinate(point=[(-2,1.5,1),(-2,-1.5,1),(2,1.5,1),(2,-1.5,1),(2,1.5,-1),(2,-1.5,-1),(-2,1.5,-1),(-2,-1.5,-1)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for IndexedFaceSetExample.py")
