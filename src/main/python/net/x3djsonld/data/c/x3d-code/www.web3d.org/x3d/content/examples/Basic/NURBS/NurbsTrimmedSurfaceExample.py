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
    meta(content='NurbsTrimmedSurfaceExample.x3d',name='title'),
    meta(content='This scene contains a single NurbsTrimmedSurface rendering one-quarter of a cylindrical segment; with a triangular notch cut from one edge. The "solid" field of the surface is set false so surface is visible from both sides. Surface has semi-transparent material appearance. Scene also contains unit-length line segments defining x-y-z coordinate axes. Defined Viewpoints show the inner and outer sides of the cylindrical surface',name='description'),
    meta(content='NurbsTrimmedSurface.jpg',name='Image'),
    meta(content='Vincent Marchetti',name='creator'),
    meta(content='10 February 2012',name='created'),
    meta(content='17 June 2020',name='modified'),
    meta(content='images/NurbsTrimmedSurfaceInstantReality.png',name='Image'),
    meta(content='images/NurbsTrimmedSurfaceXj3D.png',name='Image'),
    meta(content='http://www.kshell.com/pages/nurbs_surface_demo',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsTrimmedSurfaceExample.x3d',name='identifier'),
    meta(content='Python language scripting',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='NurbsTrimmedSurfaceExample.x3d'),
    Background(skyColor=[(0.8,0.8,0.8)]),
    Viewpoint(description='view outer surface',fieldOfView=0.16628,orientation=(0.166,0.465,0.87,2.538),position=(10.55,12.855,11.111)),
    Viewpoint(description='view inner surface',fieldOfView=0.16628,orientation=(0.797,-0.285,-0.533,1.182),position=(-10.55,-12.855,11.111)),
    Shape(
      geometry=NurbsTrimmedSurface(solid=False,uDimension=5,uKnot=[0.0,0.0,0.0,0.5,0.5,1.0,1.0,1.0],vDimension=2,vKnot=[0.0,0.0,1.0,1.0],vOrder=2,weight=[1.0,0.923879181092,1.0,0.923879181092,1.0,1.0,0.923879181092,1.0,0.923879181092,1.0],
        controlPoint=Coordinate(point=[(1,0,0),(0.92388,0.38268,0),(0.70711,0.70711,0),(0.38268,0.92388,0),(-0.000004,1,0),(1,0,1),(0.92388,0.38268,0.92388),(0.70711,0.70711,1),(0.38268,0.92388,0.92388),(-0.000004,1,1)]),
        trimmingContour=[
        Contour2D(
          children=[
          NurbsCurve2D(controlPoint=[(0,0),(1,0),(0.75,0.5),(1,0.5),(1,1),(0,1),(0,0)],knot=[0,0,0.16667,0.33333,0.5,0.66667,0.83333,1,1],order=2,weight=[1,1,1,1,1,1,1])])]),
      appearance=Appearance(
        material=Material(diffuseColor=(1,1,0),transparency=0.2))),
    Group(
      children=[
      Shape(
        geometry=LineSet(vertexCount=[2],
          coord=Coordinate(point=[(0,0,0),(1,0,0)])),
        appearance=Appearance(
          material=Material(emissiveColor=(1,0,0)),
          lineProperties=LineProperties(linewidthScaleFactor=2))),
      Shape(
        geometry=LineSet(vertexCount=[2],
          coord=Coordinate(point=[(0,0,0),(0,1,0)])),
        appearance=Appearance(
          material=Material(emissiveColor=(0,1,0)),
          lineProperties=LineProperties(linewidthScaleFactor=2))),
      Shape(
        geometry=LineSet(vertexCount=[2],
          coord=Coordinate(point=[(0,0,0),(0,0,1)])),
        appearance=Appearance(
          material=Material(emissiveColor=(0,0,1)),
          lineProperties=LineProperties(linewidthScaleFactor=2)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NurbsTrimmedSurfaceExample.py")
