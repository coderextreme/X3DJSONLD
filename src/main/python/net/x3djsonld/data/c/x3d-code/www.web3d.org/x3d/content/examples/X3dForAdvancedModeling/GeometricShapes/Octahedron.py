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

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(content='Octahedron.x3d',name='title'),
    meta(content='Octahedron is an 8-sided polyhedron with 6 vertices, 8 triangular faces and 12 edges. A regular octahedron contains equilateral triangles and is a Platonic solid. An Octahedron is equivalent to two contiguous Pyramids. The dual of the Octahedron is the cube.',name='description'),
    meta(content='26 September 2014',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='Octahedron.ply',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Octahedron',name='reference'),
    meta(content='https://en.wiktionary.org/wiki/octahedron',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Platonic_solid',name='reference'),
    meta(content='http://polyhedra.org/poly/show/2/octahedron',name='reference'),
    meta(content='http://www.mathsisfun.com/geometry/octahedron.html',name='reference'),
    meta(content='http://www.kjmaclean.com/Geometry/Octahedron.html',name='reference'),
    meta(content='http://www.georgehart.com/virtual-polyhedra/vp.html',name='reference'),
    meta(content='http://www.georgehart.com/virtual-polyhedra/vrml/octahedron.wrl',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/Octahedron.x3d',name='identifier'),
    meta(content='Meshlab X3D Exported, http://meshlab.sourceforge.net',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Octahedron.x3d'),
    Background(skyColor=[(0.5,1,0.9)]),
    Viewpoint(description='Octahedron',position=(0,0,4)),
    Shape(DEF='Octahedron',
      geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,1,4,-1,5,4,3,-1,5,3,2,-1,5,2,1,-1],solid=False,
        coord=Coordinate(point=[(1,0,0),(0,1,0),(0,0,1),(0,-1,0),(0,0,-1),(-1,0,0)])),
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

print ("python x3d.py load successful for Octahedron.py")
