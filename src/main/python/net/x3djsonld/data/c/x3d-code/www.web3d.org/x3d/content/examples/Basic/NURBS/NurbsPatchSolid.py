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
    component(level=1,name='NURBS'),
    meta(content='NurbsPatchSolid.x3d',name='title'),
    meta(content='This scene contains a single NurbsPatchSurface rendering one-quarter of a cylindrical segment. The "solid" field of the surface is set true for single-sided rendering, and Nurbs coordinates are oriented so that the outer surface of the cylinder is visible. Surface has semi-transparent material appearance. Scene also contains unit-length line segments defining x-y-z coordinate axes. Defined Viewpoints show the inner and outer sides of the cylindrical surface',name='description'),
    meta(content='NurbsPatchSolid1.jpg',name='Image'),
    meta(content='NurbsPatchSolid2.jpg',name='Image'),
    meta(content='Vincent Marchetti',name='creator'),
    meta(content='10 February 2012',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.kshell.com/pages/nurbs_surface_demo',name='reference'),
    meta(content='confirm NurbsPatchSurface validation of Coordinate child? also containerField handling',name='TODO'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPatchSolid.x3d',name='identifier'),
    meta(content='Python language scripting',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='NurbsPatchSolid.x3d'),
    Background(skyColor=[(0.8,0.8,0.8)]),
    Viewpoint(description='view outer surface',fieldOfView=1.6628e-01,orientation=(0.166,0.465,0.870,2.538),position=(1.0550e+01,1.2855e+01,1.1111e+01)),
    Viewpoint(description='view inner surface',fieldOfView=1.6628e-01,orientation=(0.797,-0.285,-0.533,1.182),position=(-1.0550e+01,-1.2855e+01,1.1111e+01)),
    Shape(
      geometry=NurbsPatchSurface(uDimension=5,uKnot=[0,0,0,0.5,0.5,1,1,1],vDimension=2,vKnot=[0,0,1,1],vOrder=2,weight=[1,0.923879181092,1,0.923879181092,1,1,0.923879181092,1,0.923879181092,1],
        controlPoint=Coordinate(point=[(1.0000e+00,0.0000e+00,0.0000e+00),(9.2388e-01,3.8268e-01,0.0000e+00),(7.0711e-01,7.0711e-01,0.0000e+00),(3.8268e-01,9.2388e-01,0.0000e+00),(0.0000e+00,1.0000e+00,0.0000e+00),(1.0000e+00,0.0000e+00,1.0000e+00),(9.2388e-01,3.8268e-01,9.2388e-01),(7.0711e-01,7.0711e-01,1.0000e+00),(3.8268e-01,9.2388e-01,9.2388e-01),(0.0000e+00,1.0000e+00,1.0000e+00)])),
      appearance=Appearance(
        material=Material(diffuseColor=(1,1,0),transparency=0.2))),
    Group(
      children=[
      Shape(
        geometry=LineSet(vertexCount=[2],
          coord=Coordinate(point=[(0,0,0.0),(1,0,0)])),
        appearance=Appearance(
          material=Material(emissiveColor=(1,0,0)),
          lineProperties=LineProperties(linewidthScaleFactor=2))),
      Shape(
        geometry=LineSet(vertexCount=[2],
          coord=Coordinate(point=[(0,0,0.0),(0,1,0)])),
        appearance=Appearance(
          material=Material(emissiveColor=(0,1,0)),
          lineProperties=LineProperties(linewidthScaleFactor=2))),
      Shape(
        geometry=LineSet(vertexCount=[2],
          coord=Coordinate(point=[(0,0,0.0),(0,0,1)])),
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

print ("python x3d.py load successful for NurbsPatchSolid.py")
