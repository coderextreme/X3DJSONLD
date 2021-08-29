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

newModel=X3D(profile='Interactive',version='3.3',
  head=head(
    children=[
    meta(content='CircleLinesSphereLongitude.x3d',name='title'),
    meta(content='Build a sphere outline by using multiple CircleLine circles as longitude rings, with actual semitransparent Sphere and axes added as a visualization hint.',name='description'),
    meta(content='John Kelly',name='creator'),
    meta(content='21 August 2013',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='CircleLinesExample.x3d',name='reference'),
    meta(content='CircleLinesSphereLatitude.x3d',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter09EventUtilitiesScripting/CircleLinesSphereLongitude.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CircleLinesSphereLongitude.x3d'),
    Viewpoint(description='LongitudeLines Example',position=(0,0,4)),
    Shape(DEF='OuterHullVisualizationHint',
      geometry=Sphere(radius=0.995),
      appearance=Appearance(
        material=Material(diffuseColor=(1,1,1),transparency=0.4))),
    #  CircleLines is an IndexedLineSet made out of 24 line segments 
    Transform(DEF='PrimeMeridian',rotation=(1,0,0,0),
      children=[
      Shape(DEF='CircleLine',
        geometry=IndexedLineSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,-1],
          coord=Coordinate(point=[(0.000,1.000,0.0),(0.259,0.966,0.0),(0.500,0.866,0.0),(0.707,0.707,0.0),(0.866,0.500,0.0),(0.966,0.259,0.0),(1.000,0.000,0.0),(0.966,-0.259,0.0),(0.866,-0.500,0.0),(0.707,-0.707,0.0),(0.500,-0.866,0.0),(0.259,-0.966,0.0),(0.000,-1.000,0.0),(-0.259,-0.966,0.0),(-0.500,-0.866,0.0),(-0.707,-0.707,0.0),(-0.866,-0.500,0.0),(-0.966,-0.259,0.0),(-1.000,-0.000,0.0),(-0.966,0.259,0.0),(-0.866,0.500,0.0),(-0.707,0.707,0.0),(-0.500,0.866,0.0),(-0.259,0.966,0.0),(0,1,0),(0,-1,0),(1,0,0),(-1,0,0)])),
        appearance=Appearance(DEF='CircleAppearance',
          material=Material(emissiveColor=(1,.5,.2))))]),
    #  Each transform below rotates the 'CircleLine' by 30 degrees 
    Transform(rotation=(0,1,0,0.523599),
      #  30 degrees 
      children=[
      Shape(USE='CircleLine')]),
    Transform(rotation=(0,1,0,1.047198),
      #  60 degrees 
      children=[
      Shape(USE='CircleLine')]),
    Transform(rotation=(0,1,0,1.570796),
      #  90 degrees 
      children=[
      Shape(USE='CircleLine')]),
    Transform(rotation=(0,1,0,2.094395),
      #  120 degrees 
      children=[
      Shape(USE='CircleLine')]),
    Transform(rotation=(0,1,0,2.617994),
      #  150 degrees 
      children=[
      Shape(USE='CircleLine')]),
    #  Authoring hint: these axes are aligned within local coordinate system 
    Transform(DEF='CoordinateAxesAdjustedScale',
      children=[
      Transform(DEF='ScaleFeetToMeters',scale=(0.4,0.4,0.4),
        children=[
        Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CircleLinesSphereLongitude.py")
