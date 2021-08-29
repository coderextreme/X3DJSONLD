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
    meta(content='AxisLinesRGB.x3d',name='title'),
    meta(content='AxisLinesRGB shows 3 red-green-blue (RBB) perpendicular lines suitable as X-Y-Z axes.',name='description'),
    meta(content='30 December 2015',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#CoordinateSystems',name='reference'),
    meta(content='Development of this scene added new features to X3D-Edit',name='info'),
    meta(content='AxisLinesRGB.png',name='Image'),
    meta(content='AxisLinesRgbInterface.png',name='Image'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/AxisLinesRGB.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='AxisLinesRGB.x3d'),
    Background(skyColor=[(1,1,1)]),
    Viewpoint(description='Axis Lines RGB XYZ',position=(0,0,4)),
    Shape(
      geometry=IndexedLineSet(colorIndex=[0,1,2],colorPerVertex=False,coordIndex=[0,1,-1,0,2,-1,0,3,-1],
        coord=Coordinate(point=[(0,0,0),(1,0,0),(0,1,0),(0,0,1)]),
        color=Color(color=[(1,0,0),(0,0.6,0),(0,0,1)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AxisLinesRGB.py")
