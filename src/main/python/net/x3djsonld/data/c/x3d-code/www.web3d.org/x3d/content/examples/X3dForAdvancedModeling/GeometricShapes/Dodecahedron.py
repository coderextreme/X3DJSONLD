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
    meta(content='Dodecahedron.x3d',name='title'),
    meta(content='Dodecahedron is a 12-sided polyhedron with 30 edges, 20 vertices and 12 pentagonal faces. A regular dodecahedron is a Platonic solid.',name='description'),
    meta(content='13 September 2014',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Ben Cheng and Don Brutzman',name='creator'),
    meta(content='DodecahedronX3dom.mp4',name='MovingImage'),
    meta(content='https://en.wikipedia.org/wiki/Dodecahedron',name='reference'),
    meta(content='https://en.wiktionary.org/wiki/dodecahedron',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Platonic_solid',name='reference'),
    meta(content='http://polyhedra.org/poly/show/3/dodecahedron',name='reference'),
    meta(content='http://www.mathsisfun.com/geometry/dodecahedron.html',name='reference'),
    meta(content='http://www.bodurov.com/VectorVisualizer/?vectors=-0.94/-2.885/-3.975/-1.52/-4.67/-0.94v-3.035/0/-3.975/-4.91/0/-0.94v3.975/-2.885/-0.94/1.52/-4.67/0.94v1.52/-4.67/0.94/-1.52/-4.67/-0.94v0.94/-2.885/3.975/1.52/-4.67/0.94v-3.975/-2.885/0.94/-1.52/-4.67/-0.94v-3.975/-2.885/0.94/-4.91/0/-0.94v-3.975/2.885/0.94/-4.91/0/-0.94v-3.975/2.885/0.94/-1.52/4.67/-0.94v-2.455/1.785/3.975/-3.975/2.885/0.94v-2.455/-1.785/3.975/-3.975/-2.885/0.94v-1.52/4.67/-0.94/-0.94/2.885/-3.975v4.91/0/0.94/3.975/-2.885/-0.94v3.975/2.885/-0.94/2.455/1.785/-3.975v2.455/-1.785/-3.975/3.975/-2.885/-0.94v1.52/4.67/0.94/-1.52/4.67/-0.94v3.035/0/3.975/0.94/2.885/3.975v0.94/2.885/3.975/-2.455/1.785/3.975v-2.455/1.785/3.975/-2.455/-1.785/3.975v-2.455/-1.785/3.975/0.94/-2.885/3.975v0.94/-2.885/3.975/3.035/0/3.975v2.455/1.785/-3.975/-0.94/2.885/-3.975v-0.94/2.885/-3.975/-3.035/0/-3.975v-3.035/0/-3.975/-0.94/-2.885/-3.975v-0.94/-2.885/-3.975/2.455/-1.785/-3.975v2.455/-1.785/-3.975/2.455/1.785/-3.97v3.035/0/3.975/4.91/0/0.94v4.91/0/0.94/3.975/2.885/-0.94v3.975/2.885/-0.94/1.52/4.67/0.94v1.52/4.67/0.94/0.94/2.885/3.975',name='reference'),
    meta(content='http://www.kjmaclean.com/Geometry/dodecahedron.html',name='reference'),
    meta(content='http://www.georgehart.com/virtual-polyhedra/vp.html',name='reference'),
    meta(content='http://www.georgehart.com/virtual-polyhedra/vrml/dodecahedron.wrl',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/Dodecahedron.x3d',name='identifier'),
    meta(content='Meshlab X3D Exported, http://meshlab.sourceforge.net',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Dodecahedron.x3d'),
    Background(skyColor=[(0.5,1,0.9)]),
    Viewpoint(description='Dodecahedron',position=(0,0,4)),
    Shape(DEF='Dodecahedron',
      geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,1,-1,6,7,8,-1,6,8,9,-1,6,9,4,-1,6,4,3,-1,6,3,7,-1,10,7,3,-1,10,3,2,-1,10,2,11,-1,10,11,12,-1,10,12,7,-1,13,9,14,-1,13,14,15,-1,13,15,5,-1,13,5,4,-1,13,4,9,-1,16,2,1,-1,16,1,17,-1,16,17,18,-1,16,18,11,-1,16,11,2,-1,19,7,12,-1,19,12,20,-1,19,20,21,-1,19,21,8,-1,19,8,7,-1,22,9,8,-1,22,8,21,-1,22,21,23,-1,22,23,14,-1,22,14,9,-1,24,1,5,-1,24,5,15,-1,24,15,25,-1,24,25,17,-1,24,17,1,-1,26,12,11,-1,26,11,18,-1,26,18,27,-1,26,27,20,-1,26,20,12,-1,28,23,29,-1,28,29,25,-1,28,25,15,-1,28,15,14,-1,28,14,23,-1,30,18,17,-1,30,17,25,-1,30,25,29,-1,30,29,27,-1,30,27,18,-1,31,23,21,-1,31,21,20,-1,31,20,27,-1,31,27,29,-1,31,29,23,-1],normalPerVertex=False,solid=False,
        coord=Coordinate(point=[(0.378886,9.53674e-09,0.61305),(0.847214,0,0.323606),(0.523606,0.523606,0.523606),(0,0.323606,0.847214),(0,-0.323606,0.847214),(0.523606,-0.523606,0.523606),(-0.378886,0,0.61305),(-0.523606,0.523606,0.523606),(-0.847214,0,0.323606),(-0.523606,-0.523606,0.523606),(0,0.61305,0.378886),(0.323606,0.847214,0),(-0.323606,0.847214,0),(-9.53674e-09,-0.61305,0.378886),(-0.323606,-0.847214,0),(0.323606,-0.847214,0),(0.61305,0.378886,9.53674e-09),(0.847214,0,-0.323606),(0.523606,0.523606,-0.523606),(-0.61305,0.378886,0),(-0.523606,0.523606,-0.523606),(-0.847214,0,-0.323606),(-0.61305,-0.378886,9.53674e-09),(-0.523606,-0.523606,-0.523606),(0.61305,-0.378886,4.76838e-09),(0.523606,-0.523606,-0.523606),(0,0.61305,-0.378886),(0,0.323606,-0.847214),(0,-0.61305,-0.378886),(0,-0.323606,-0.847214),(0.378886,0,-0.61305),(-0.378886,0,-0.61305)])),
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

print ("python x3d.py load successful for Dodecahedron.py")
