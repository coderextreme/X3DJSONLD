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
    meta(content='TriangleBlackLines.x3d',name='title'),
    meta(content='Simple Triangle with black lines, illustrating default line rendering.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='5 July 2014',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/TriangleBlackLines.x3d',name='identifier'),
    meta(content='X3dTidy setting: replaceBlackEmissiveColor=false',name='info'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TriangleBlackLines.x3d'),
    Background(skyColor=[(1,1,1)]),
    Viewpoint(description='Triangle using black lines',position=(0,0,4)),
    Shape(
      geometry=IndexedLineSet(coordIndex=[0,1,2,0,-1],
        #  equilateral triangle 
        coord=Coordinate(DEF='TriangleCoordinatePoints',point=[(-1,-1,0),(1,-1,0),(0,0.86600254,0)])),
      appearance=Appearance(
        #  default Material emissiveColor='0 0 0' 
        material=Material(emissiveColor=(0.8,0.8,0.8))))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TriangleBlackLines.py")
