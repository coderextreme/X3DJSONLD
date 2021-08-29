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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    component(level=4,name='NURBS'),
    meta(content='HoleLargeOffset.x3d',name='title'),
    meta(content='A NurbsTrimmedSurface node rendering a square centered on the origin in the x-y plane; with sides 8 units length. A trimming curve is used to cut out a circle of radius 1 unit centered at the point (x,y)=(2,2) . Red (x), Green (y) and Blue (z) line segments represent the x-y-z unit axes.',name='description'),
    meta(content='HoleLargeOffset.jpg',name='Image'),
    meta(content='Vincent Marchetti',name='creator'),
    meta(content='10 February 2012',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='images/HoleLargeOffsetInstantReality.png',name='Image'),
    meta(content='images/HoleLargeOffsetXj3D.png',name='Image'),
    meta(content='http://www.kshell.com/pages/trimmed_nurbs_demo',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/NURBS/HoleLargeOffset.x3d',name='identifier'),
    meta(content='Python language scripting',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='HoleLargeOffset.x3d'),
    Viewpoint(description='Hole Large Offset NurbsTrimmedSurface',position=(0,0,12)),
    Background(skyColor=[(1,1,1)]),
    Group(
      children=[
      Shape(
        geometry=LineSet(vertexCount=[2],
          coord=Coordinate(point=[(0,0,0.01),(1,0,0.01)])),
        appearance=Appearance(
          material=Material(emissiveColor=(1,0,0)),
          lineProperties=LineProperties(linewidthScaleFactor=2))),
      Shape(
        geometry=LineSet(vertexCount=[2],
          coord=Coordinate(point=[(0,0,0.01),(0,1,0.01)])),
        appearance=Appearance(
          material=Material(emissiveColor=(0,1,0)),
          lineProperties=LineProperties(linewidthScaleFactor=2))),
      Shape(
        geometry=LineSet(vertexCount=[2],
          coord=Coordinate(point=[(0,0,0.01),(0,0,1)])),
        appearance=Appearance(
          material=Material(emissiveColor=(0,0,1)),
          lineProperties=LineProperties(linewidthScaleFactor=2)))]),
    Shape(
      geometry=NurbsTrimmedSurface(solid=False,uDimension=2,uKnot=[-4,-4,4,4],uOrder=2,vDimension=2,vKnot=[-4,-4,4,4],vOrder=2,weight=[1,1,1,1],
        controlPoint=Coordinate(point=[(-4,-4,0),(4,-4,0),(-4,4,0),(4,4,0)]),
        trimmingContour=[
        Contour2D(
          children=[
          NurbsCurve2D(controlPoint=[(-4,-4),(4,-4),(4,4),(-4,4),(-4,-4)],knot=[0,0,0.25,0.5,0.75,1,1],order=2,weight=[1,1,1,1,1])]),
        Contour2D(
          children=[
          NurbsCurve2D(controlPoint=[(3,2),(2.1213,0.7071),(2,1),(0.7071,0.7071),(1,2),(0.7071,2.1213),(2,3),(2.1213,2.1213),(3,2)],knot=[0,0,0,0.25,0.25,0.5,0.5,0.75,0.75,1,1,1],weight=[1,0.7071,1,0.7071,1,0.7071,1,0.7071,1])])]),
      appearance=Appearance(DEF='ksh_appearance_1',
        material=Material(diffuseColor=(0,0,1))))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HoleLargeOffset.py")
