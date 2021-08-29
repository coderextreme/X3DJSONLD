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
    meta(content='Tetrahedron.x3d',name='title'),
    meta(content='Tetrahedron is an 8-sided pyramidal polyhedron with 4 vertices, 4 triangular faces and 6 edges. A regular tetrahedron contains equilateral triangles and is a Platonic solid. Tetrahedron is the simplest of all the ordinary convex polyhedra and the only one that has fewer than 5 faces. Tetrahedron is also known as a triangular pyramid.',name='description'),
    meta(content='27 September 2014',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='Tetrahedron.ply',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Tetrahedron',name='reference'),
    meta(content='https://en.wiktionary.org/wiki/tetrahedron',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Platonic_solid',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Pyramid_(geometry)',name='reference'),
    meta(content='http://polyhedra.org/poly/show/0/tetrahedron',name='reference'),
    meta(content='http://www.mathsisfun.com/geometry/tetrahedron.html',name='reference'),
    meta(content='http://www.kjmaclean.com/Geometry/Tetrahedron.html',name='reference'),
    meta(content='http://www.georgehart.com/virtual-polyhedra/vp.html',name='reference'),
    meta(content='http://www.georgehart.com/virtual-polyhedra/vrml/tetrahedron.wrl',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/Tetrahedron.x3d',name='identifier'),
    meta(content='Meshlab X3D Exported, http://meshlab.sourceforge.net',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Tetrahedron.x3d'),
    Background(skyColor=[(0.5,1,0.9)]),
    Viewpoint(description='Tetrahedron from Z axis',position=(0,0,6)),
    Viewpoint(description='Tetrahedron from X axis',orientation=(0,1,0,1.570796),position=(6,0,0)),
    Viewpoint(description='Tetrahedron from above',orientation=(1,0,0,-1.570796),position=(0,6,0)),
    Shape(DEF='Tetrahedron',
      geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,0,2,3,-1,0,3,1,-1,3,2,1,-1],solid=False,
        coord=Coordinate(point=[(1,1,1),(-1,1,-1),(-1,-1,1),(1,-1,-1)])),
      appearance=Appearance(
        material=Material(diffuseColor=(0.2,0.5,0.8)))),
    #  Authoring hint #1: add a semitransparent Shape with a unit Sphere here to see relative Tetrahedron size 
    #  Authoring hint #2: these axes are aligned within local coordinate system, be sure to set X3D profile='Immersive' if uncommented and activated 
    Transform(DEF='CoordinateAxesAdjustedScale',scale=(2,2,2),
      #  <Inline DEF='CoordinateAxes' url='"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d" "https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d" "https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d" "../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl" "https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl" "https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"'/> 
      )])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Tetrahedron.py")
