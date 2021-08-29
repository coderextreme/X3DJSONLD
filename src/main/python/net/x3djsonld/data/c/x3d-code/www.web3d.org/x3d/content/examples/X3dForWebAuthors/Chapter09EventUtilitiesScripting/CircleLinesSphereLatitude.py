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
    meta(content='CircleLinesSphereLatitude.x3d',name='title'),
    meta(content='Build a sphere outline by using multiple CircleLine circles as latitude rings, with actual semitransparent Sphere and axes added as a visualization hint.',name='description'),
    meta(content='Don Brutzman and Ben Cheng',name='creator'),
    meta(content='12 August 2013',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='CircleLinesSphereCalculations.jpg',name='drawing'),
    meta(content='CircleLinesExample.x3d',name='reference'),
    meta(content='CircleLinesSphereLongitude.x3d',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter09EventUtilitiesScripting/CircleLinesSphereLatitude.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CircleLinesSphereLatitude.x3d'),
    Viewpoint(description='CircleLines Example',position=(0,0,4)),
    Shape(DEF='OuterHullVisualizationHint',
      geometry=Sphere(radius=0.995),
      appearance=Appearance(
        material=Material(diffuseColor=(1,1,1),transparency=0.4))),
    #  CircleLines is an IndexedLineSet made out of 24 line segments 
    Transform(DEF='CircleEquator',rotation=(1,0,0,1.570796),
      children=[
      Shape(DEF='CircleLines',
        geometry=IndexedLineSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,-1],
          coord=Coordinate(point=[(0.000,1.000,0.0),(0.259,0.966,0.0),(0.500,0.866,0.0),(0.707,0.707,0.0),(0.866,0.500,0.0),(0.966,0.259,0.0),(1.000,0.000,0.0),(0.966,-0.259,0.0),(0.866,-0.500,0.0),(0.707,-0.707,0.0),(0.500,-0.866,0.0),(0.259,-0.966,0.0),(0.000,-1.000,0.0),(-0.259,-0.966,0.0),(-0.500,-0.866,0.0),(-0.707,-0.707,0.0),(-0.866,-0.500,0.0),(-0.966,-0.259,0.0),(-1.000,-0.000,0.0),(-0.966,0.259,0.0),(-0.866,0.500,0.0),(-0.707,0.707,0.0),(-0.500,0.866,0.0),(-0.259,0.966,0.0),(0,1,0),(0,-1,0),(1,0,0),(-1,0,0)])),
        appearance=Appearance(DEF='CircleAppearance',
          material=Material(emissiveColor=(1,.5,.2))))]),
    Group(DEF='CircleLatitudes',
      children=[
      Transform(scale=(0.9682,0.9682,0.9682),translation=(0,.25,0),
        children=[
        Transform(USE='CircleEquator')]),
      Transform(scale=(0.8660,0.8660,0.8660),translation=(0,.5,0),
        children=[
        Transform(USE='CircleEquator')]),
      Transform(scale=(0.6614,0.6614,0.6614),translation=(0,.75,0),
        children=[
        Transform(USE='CircleEquator')]),
      Transform(scale=(0.3122,0.3122,0.3122),translation=(0,.95,0),
        children=[
        Transform(USE='CircleEquator')]),
      Shape(DEF='TipTop',
        geometry=PointSet(
          coord=Coordinate(point=[(0,1,0)])),
        appearance=Appearance(USE='CircleAppearance'))]),
    Transform(rotation=(1,0,0,3.141593),
      children=[
      Group(USE='CircleLatitudes')]),
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

print ("python x3d.py load successful for CircleLinesSphereLatitude.py")
