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

newModel=X3D(profile='Interchange',version='3.1',
  head=head(
    children=[
    meta(content='IcosahedronSubdivisionLevel1.x3d',name='title'),
    meta(content='IcosahedronSubdivisionLevel1.ply',name='reference'),
    meta(content='Icosahedron is a polyhedron with twenty faces, subdivided to level 1, where all 42 vertices and 80 faces produce regular (equilateral) triangles.',name='description'),
    meta(content='13 September 2014',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='Icosahedron.x3d',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Icosahedron',name='reference'),
    meta(content='https://en.wiktionary.org/wiki/icosahedron',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Platonic_solid',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Geodesic_grid',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/IcosahedronSubdivisionLevel1.x3d',name='identifier'),
    meta(content='Meshlab X3D Exported, http://meshlab.sourceforge.net',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='IcosahedronSubdivisionLevel1.x3d'),
    Background(skyColor=[(0.5,1,0.9)]),
    Viewpoint(description='Icosahedron, subdivision level 1',position=(0,0,6)),
    Shape(DEF='IcosahedronSubdivisionLevel1',
      geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,0,3,4,-1,5,6,7,-1,5,8,9,-1,10,11,12,-1,10,13,14,-1,15,16,17,-1,15,18,19,-1,20,21,22,-1,20,23,24,-1,25,26,27,-1,25,28,29,-1,23,13,1,-1,4,17,24,-1,2,12,27,-1,26,18,3,-1,7,14,22,-1,21,16,8,-1,28,11,6,-1,9,19,29,-1,30,0,2,-1,0,31,1,-1,2,1,32,-1,31,0,4,-1,0,30,3,-1,4,3,33,-1,34,5,7,-1,5,35,6,-1,7,6,36,-1,35,5,9,-1,5,34,8,-1,9,8,37,-1,32,10,12,-1,10,36,11,-1,12,11,38,-1,36,10,14,-1,10,32,13,-1,14,13,39,-1,33,15,17,-1,15,37,16,-1,17,16,40,-1,37,15,19,-1,15,33,18,-1,19,18,41,-1,39,20,22,-1,20,40,21,-1,22,21,34,-1,40,20,24,-1,20,39,23,-1,24,23,31,-1,38,25,27,-1,25,41,26,-1,27,26,30,-1,41,25,29,-1,25,38,28,-1,29,28,35,-1,31,23,1,-1,23,39,13,-1,1,13,32,-1,31,4,24,-1,4,33,17,-1,24,17,40,-1,30,2,27,-1,2,32,12,-1,27,12,38,-1,30,26,3,-1,26,41,18,-1,3,18,33,-1,34,7,22,-1,7,36,14,-1,22,14,39,-1,34,21,8,-1,21,40,16,-1,8,16,37,-1,35,28,6,-1,28,38,11,-1,6,11,36,-1,35,9,29,-1,9,37,19,-1,29,19,41,-1],solid=False,
        coord=Coordinate(point=[(0,1,0),(0.5,0.809017,0.309017),(0.5,0.809017,-0.309017),(-0.5,0.809017,-0.309017),(-0.5,0.809017,0.309017),(0,-1,0),(0.5,-0.809017,-0.309017),(0.5,-0.809017,0.309017),(-0.5,-0.809017,0.309017),(-0.5,-0.809017,-0.309017),(1,0,0),(0.809017,-0.309017,-0.5),(0.809017,0.309017,-0.5),(0.809017,0.309017,0.5),(0.809017,-0.309017,0.5),(-1,0,0),(-0.809017,-0.309017,0.5),(-0.809017,0.309017,0.5),(-0.809017,0.309017,-0.5),(-0.809017,-0.309017,-0.5),(0,0,1),(-0.309017,-0.5,0.809017),(0.309017,-0.5,0.809017),(0.309017,0.5,0.809017),(-0.309017,0.5,0.809017),(0,0,-1),(-0.309017,0.5,-0.809017),(0.309017,0.5,-0.809017),(0.309017,-0.5,-0.809017),(-0.309017,-0.5,-0.809017),(0,0.850651,-0.525731),(0,0.850651,0.525731),(0.850651,0.525731,0),(-0.850651,0.525731,0),(0,-0.850651,0.525731),(0,-0.850651,-0.525731),(0.850651,-0.525731,0),(-0.850651,-0.525731,0),(0.525731,0,-0.850651),(0.525731,0,0.850651),(-0.525731,0,0.850651),(-0.525731,0,-0.850651)])),
      appearance=Appearance(
        material=Material(diffuseColor=(0.2,0.5,0.8))))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for IcosahedronSubdivisionLevel1.py")
