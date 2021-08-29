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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='LineSetComparison.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='2 September 2008',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A simple wireframe cube, comparing two functionally equivalent nodes: IndexedLineSet (per-vertex coloring) with LineSet (per-segment coloring). Keeping track of how each node "connects the dots" is simply a book-keeping problem.',name='description'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter06GeometryPointsLinesPolygons/LineSetComparison.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter13PointsLinesFaces/Figure13.11IndexedLineSetBoxWireframe.x3d',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='LineSetComparison.x3d'),
    Viewpoint(description='8m away - note linewidth is unchanged and perspective is ambiguous',position=(0,0,8)),
    Viewpoint(description='15m away - note linewidth is unchanged and perspective is ambiguous',position=(0,0,15)),
    Transform(translation=(-3,0,0),
      #  Rotating a single cube can help show near/far ambiguity, i.e. the optical illusion for constant-pixel-width line structures 
      children=[
      Viewpoint(description='IndexedLineSet cube close up',position=(0,0,5)),
      Shape(
        #  The IndexedLineSet builds the same cube as the LineSet,but simply uses a different approach to connect the vertices. 
        geometry=IndexedLineSet(colorPerVertex=False,coordIndex=[0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1],
          coord=Coordinate(point=[(-1,1,1),(1,1,1),(1,1,-1),(-1,1,-1),(-1,-1,1),(1,-1,1),(1,-1,-1),(-1,-1,-1)]),
          color=Color(color=[(1,0.058824,0.117647),(0.878431,0.447059,0),(1,0.992157,0.141176),(0.101961,0.721569,0),(0.12549,0,0.901961),(0.878431,0,0.843137),(0.294118,0,0.341176),(1,0.980392,0.992157),(1,1,1)])))]),
    Transform(translation=(3,0,0),
      children=[
      Viewpoint(description='LineSet cube close up',position=(0,0,5)),
      Shape(
        #  Coordinate sequence for the vertexCount='5 5 2 2 2 2' array: 0 1 2 3 0, 4 5 6 7 4, 0 4, 1 5, 2 6, 3 7. This corresponds to the IndexedLineSet coordIndex actually. 
        geometry=LineSet(vertexCount=[5,5,2,2,2,2],
          coord=Coordinate(point=[(-1,1,1),(1,1,1),(1,1,-1),(-1,1,-1),(-1,1,1),(-1,-1,1),(1,-1,1),(1,-1,-1),(-1,-1,-1),(-1,-1,1),(-1,1,1),(-1,-1,1),(1,1,1),(1,-1,1),(1,1,-1),(1,-1,-1),(-1,1,-1),(-1,-1,-1)]),
          color=Color(color=[(1,0,0),(1,0.5,0),(1,1,0),(0,1,0),(1,0,0),(0,0,1),(0.8,0,0.8),(0.3,0,0.3),(1,1,1),(0,0,1),(1,0,0),(0,0,1),(1,0.5,0),(0.8,0,0.8),(1,1,0),(0.3,0,0.3),(0,1,0),(1,1,1)])))]),
    Transform(translation=(-3,2,0),
      children=[
      Shape(
        geometry=Text(string=["IndexedLineSet"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.5)),
        appearance=Appearance(DEF='TextAppearance',
          material=Material(ambientIntensity=0,diffuseColor=(0,0,0),emissiveColor=(0,0.398733,1),shininess=0.05,specularColor=(0.622449,0.622449,0.622449))))]),
    Transform(translation=(3,2,0),
      children=[
      Shape(
        geometry=Text(string=["LineSet"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.5)),
        appearance=Appearance(USE='TextAppearance'))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LineSetComparison.py")
