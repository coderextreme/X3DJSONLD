from x3d import *
print(
X3D(
  profile="Interchange", version="3.0", head=head(  children=[
      
          meta(name="title", content="indexedfaceset_pixeltexture_entire.x3d"),
          meta(name="reference", content="http://www.nist.gov/vrml.html"),
          meta(name="reference", content="http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"),
          meta(name="creator", content="http://www.itl.nist.gov/div897/ctg/vrml/members.html"),
          meta(name="disclaimer", content="This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."),
          meta(name="info", content="Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"),
          meta(name="translator", content="Michael Kass NIST, Don Brutzman NPS"),
          meta(name="translated", content="21 January 2001"),
          meta(name="modified", content="13 January 2014"),
          meta(name="description", content="Test browser ability to completely map one PixelTexture onto the surface of an IndexedFaceSet geometry. Four colored squares should map onto each face of the IndexedFaceSet. The PixelTexture consists of red quarter (lower left), green quarter (lower right), white quarter (upper left) and yellow quarter (upper right). PixelTexture should map once onto the surface of the IndexedFaceSet, with the S (horizontal) axis of the texture corresponding to the X axis of the geometry."),
          meta(name="identifier", content="https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entire.x3d"),
          meta(name="generator", content="Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"),
          meta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
          meta(name="license", content="../../license.html"),
          meta(name="translated", content="16 January 2022"),
          meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
          meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")]), Scene=Scene(
    children=[
        Viewpoint(
          description="Front View"),
        Viewpoint(
          description="Rear View", orientation=(0,1,0,3.14), position=(0,0,-10)),
        Viewpoint(
          description="Top View", orientation=(1,0,0,-1.57), position=(0,10,0)),
        Viewpoint(
          description="Bottom View", orientation=(1,0,0,1.57), position=(0,-10,0)),
        Viewpoint(
          description="Right View", orientation=(0,1,0,1.57), position=(10,0,0)),
        Viewpoint(
          description="Left View", orientation=(0,1,0,-1.57), position=(-10,0,0)),
        NavigationInfo(
          type="\"EXAMINE\" \"WALK\" \"FLY\" \"ANY\""),
        Shape(
          appearance=Appearance(
              material=Material(
                  ), texture=PixelTexture(
                  image=(2,2,4,4278190335,16711935,4294967295,4294902015), repeatS=False, repeatT=False)), geometry=IndexedFaceSet(
              coordIndex=(0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1), coord(
                Coordinate(
                  point=(-2,1.5,1,-2,-1.5,1,2,1.5,1,2,-1.5,1,2,1.5,-1,2,-1.5,-1,-2,1.5,-1,-2,-1.5,-1)))))]))
.XML())
