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
    meta(content='filled_textureIndex.x3d',name='title'),
    meta(content='filled-textureIndex-front.jpg',name='Image'),
    meta(content='filled-textureIndex-rear.jpg',name='Image'),
    meta(content='filled-textureIndex-top.jpg',name='Image'),
    meta(content='filled-textureIndex-bottom.jpg',name='Image'),
    meta(content='filled-textureIndex-left.jpg',name='Image'),
    meta(content='filled-textureIndex-right.jpg',name='Image'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Tese of textCoord field set to valid values (and not NULL), the texCoordIndex field is set to valid values for the texCoord field. Under these conditions the image texture is apply to the vertices in the IndexedFaceSet in the order given by the texCoordIndex field.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Geometry/IndexedFaceSet/filled_textureIndex.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='filled_textureIndex.x3d'),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Shape(
      appearance=Appearance(
        material=Material(),
        texture=ImageTexture(url=["../../vts.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/vts.jpg"])),
      geometry=IndexedFaceSet(colorPerVertex=False,coordIndex=[0,1,2,3,-1,1,7,4,2,-1,7,6,5,4,-1,0,3,5,6,-1,3,2,4,5,-1,0,6,7,1,-1],texCoordIndex=[0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,1,2,3,0,-1,0,1,2,3,-1,3,0,1,2,-1],
        color=Color(color=[(0,1,0),(0,1,0),(0,1,0),(0,1,0),(0,1,0),(0,1,0)]),
        coord=Coordinate(point=[(-3,-2,2),(3,-2,2),(3,2,2),(-3,2,2),(3,2,-2),(-3,2,-2),(-3,-2,-2),(3,-2,-2)]),
        texCoord=TextureCoordinate(point=[(0,0),(1,0),(1,1),(0,1)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for filled_textureIndex.py")
