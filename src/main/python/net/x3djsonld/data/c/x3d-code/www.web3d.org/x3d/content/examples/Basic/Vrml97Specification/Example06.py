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
    meta(content='Example06.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='24 May 2000',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='X3D working group',name='creator'),
    meta(content='VRML 97 specification example: Geometric properties',name='description'),
    meta(content='originals/exampleD_6.wrl',name='reference'),
    meta(content='VRML 97, ISO/IEC 14772-1, Part 1: Functional specification and UTF-8 encoding, D.6 Geometric properties',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.6',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example06.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Example06.x3d'),
    Shape(
      geometry=IndexedFaceSet(coordIndex=[0,1,3,-1,0,2,3,-1],
        coord=Coordinate(point=[(0,0,0),(1,0,0),(1,0,-1),(0.5,1,0)]),
        color=Color(color=[(0.2,0.7,0.8),(0.5,0,0),(0.1,0.8,0.1),(0,0,0.7)]),
        normal=Normal(vector=[(0,0,1),(0,0,1),(0,0,1),(0,0,1)]),
        texCoord=TextureCoordinate(point=[(0,0),(1,0),(1,0.4),(1,1)])),
      appearance=Appearance(
        material=Material(transparency=0.5),
        texture=PixelTexture(image=[2,2,1,0xFF,0x80,0x80,0xFF])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Example06.py")
