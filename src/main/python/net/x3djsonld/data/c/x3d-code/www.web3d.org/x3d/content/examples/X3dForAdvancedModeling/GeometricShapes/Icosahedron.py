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
    meta(content='Icosahedron.x3d',name='title'),
    meta(content='Icosahedron is a polyhedron with 12 vertices and, 20 faces, where a regular icosahedron is a Platonic solid. All faces are regular (equilateral) triangles. In comparison to the other icosahedra examples, this this default Icosahedron can be considered at level 0, meaning that no further subdivision has occurred from the platonic solid.',name='description'),
    meta(content='13 September 2014',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='Icosahedron.ply',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Icosahedron',name='reference'),
    meta(content='https://en.wiktionary.org/wiki/icosahedron',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Platonic_solid',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Geodesic_grid',name='reference'),
    meta(content='http://www.kjmaclean.com/Geometry/Icosahedron.html',name='reference'),
    meta(content='http://polyhedra.org/poly/show/4/icosahedron',name='reference'),
    meta(content='http://www.georgehart.com/virtual-polyhedra/vp.html',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/Icosahedron.x3d',name='identifier'),
    meta(content='Meshlab X3D Exported, http://meshlab.sourceforge.net',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Icosahedron.x3d'),
    Background(skyColor=[(0.5,1,0.9)]),
    Viewpoint(description='Icosahedron',position=(0,0,6)),
    Shape(DEF='Icosahedron',
      geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,1,0,3,-1,4,5,6,-1,5,4,7,-1,2,6,8,-1,6,2,9,-1,3,7,10,-1,7,3,11,-1,9,10,4,-1,10,9,1,-1,8,11,0,-1,11,8,5,-1,1,9,2,-1,1,3,10,-1,0,2,8,-1,0,11,3,-1,4,6,9,-1,4,10,7,-1,5,8,6,-1,5,7,11,-1],solid=False,
        coord=Coordinate(point=[(0,1.61803,-1),(0,1.61803,1),(1.61803,1,0),(-1.61803,1,0),(0,-1.61803,1),(0,-1.61803,-1),(1.61803,-1,0),(-1.61803,-1,0),(1,0,-1.61803),(1,0,1.61803),(-1,0,1.61803),(-1,0,-1.61803)])),
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

print ("python x3d.py load successful for Icosahedron.py")
