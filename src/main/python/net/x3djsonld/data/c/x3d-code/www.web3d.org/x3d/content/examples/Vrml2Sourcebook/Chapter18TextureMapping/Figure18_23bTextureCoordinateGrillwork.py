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
    meta(content='Figure18_23bTextureCoordinateGrillwork.x3d',name='title'),
    meta(content='Figure 18.23b, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch18/18fig23b.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='4 September 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A small grillwork texture image repeated across a square face using texture-coordinate scaling. Also see Figures 18.23b and 18.24 for comparison.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter18TextureMapping/Figure18_23bTextureCoordinateGrillwork.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure18_23bTextureCoordinateGrillwork.x3d'),
    Viewpoint(description='Transformed texture grillwork'),
    #  Background added to show transaprency, may need to remove it if you reuse this scene 
    Background(groundAngle=[1.57],groundColor=[(0.1,0.1,0),(0.1,0.4,0)],skyAngle=[0.1,0.2,1.57],skyColor=[(1,1,1),(0,0,1),(0,0,1),(0.1,0.1,1)]),
    Group(
      children=[
      Shape(
        appearance=Appearance(
          #  no material, use emissive texturing. Not really a video, just a .jpg image. 
          texture=ImageTexture(url=["grill.png","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter18TextureMapping/grill.png"]),
          textureTransform=TextureTransform(center=(0.5,0.5),scale=(32,8))),
        geometry=IndexedFaceSet(DEF='Screen',coordIndex=[0,1,2,3],solid=False,texCoordIndex=[0,1,2,3],
          coord=Coordinate(point=[(-4,-1,0.1),(4,-1,0.1),(4,1,0.1),(-4,1,0.1)]),
          texCoord=TextureCoordinate(point=[(0,0),(1,0),(1,1),(0,1)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure18_23bTextureCoordinateGrillwork.py")
