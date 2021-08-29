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
    meta(content='RoundedRectangle2D.x3d',name='title'),
    meta(content='RoundedRectangle2D shows and IndexedFaceSet shape for a flat RoundedRectangle.',name='description'),
    meta(content='8 November 2014',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='RoundedRectanglePrimitives.x3d',name='reference'),
    meta(content='RoundedRectangleComparison.x3d',name='reference'),
    meta(content='RoundedRectangleDesign.vsd',name='reference'),
    meta(content='RoundedRectangleDesign.png',name='reference'),
    meta(content='RoundedRectangleDesign.svg',name='reference'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='https://en.wikipedia.org/wiki/Squircle',name='reference'),
    meta(content='https://en.wiktionary.org/wiki/roundrect',name='reference'),
    meta(content='Development of this scene added new features to X3D-Edit.',name='info'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/RoundedRectangle2D.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='RoundedRectangle2D.x3d'),
    Background(skyColor=[(0.95,1,0.6)]),
    Viewpoint(description='RoundedRectangle2D example',position=(0,0,4)),
    Shape(
      #  RoundedRectangle2D with 44 perimeter points + 4 internal points 
      geometry=IndexedFaceSet(coordIndex=[0,1,2,3,0,-1,0,14,15,1,0,-1,1,25,26,2,1,-1,2,36,37,3,2,-1,3,47,4,0,3,-1,0,4,5,6,7,8,9,10,11,12,13,14,0,-1,1,15,16,17,18,19,20,21,22,23,24,25,1,-1,2,26,27,28,29,30,31,32,33,34,35,36,2,-1,3,37,38,39,40,41,42,43,44,45,46,47,3,-1],creaseAngle=6.28,solid=False,
        coord=Coordinate(point=[(0.450,0.900,0.000),(0.450,-0.900,0.000),(-0.450,-0.900,0.000),(-0.450,0.900,0.000),(0.450,1.000,0.000),(0.466,0.999,0.000),(0.481,0.995,0.000),(0.495,0.989,0.000),(0.509,0.981,0.000),(0.521,0.971,0.000),(0.531,0.959,0.000),(0.539,0.945,0.000),(0.545,0.931,0.000),(0.549,0.916,0.000),(0.550,0.900,0.000),(0.550,-0.900,0.000),(0.549,-0.916,0.000),(0.545,-0.931,0.000),(0.539,-0.945,0.000),(0.531,-0.959,0.000),(0.521,-0.971,0.000),(0.509,-0.981,0.000),(0.495,-0.989,0.000),(0.481,-0.995,0.000),(0.466,-0.999,0.000),(0.450,-1.000,0.000),(-0.450,-1.000,0.000),(-0.466,-0.999,0.000),(-0.481,-0.995,0.000),(-0.495,-0.989,0.000),(-0.509,-0.981,0.000),(-0.521,-0.971,0.000),(-0.531,-0.959,0.000),(-0.539,-0.945,0.000),(-0.545,-0.931,0.000),(-0.549,-0.916,0.000),(-0.550,-0.900,0.000),(-0.550,0.900,0.000),(-0.549,0.916,0.000),(-0.545,0.931,0.000),(-0.539,0.945,0.000),(-0.531,0.959,0.000),(-0.521,0.971,0.000),(-0.509,0.981,0.000),(-0.495,0.989,0.000),(-0.481,0.995,0.000),(-0.466,0.999,0.000),(-0.450,1.000,0.000)])),
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

print ("python x3d.py load successful for RoundedRectangle2D.py")
