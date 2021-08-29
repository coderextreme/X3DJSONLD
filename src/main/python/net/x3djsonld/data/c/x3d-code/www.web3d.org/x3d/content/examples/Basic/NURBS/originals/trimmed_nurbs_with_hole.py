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

newModel=X3D(profile='Interchange',version='3.2',
  head=head(
    children=[
    component(name='NURBS',level=4),
    meta(content='Vincent Marchetti',name='creator'),
    meta(content='10 February 2012',name='created'),
    meta(content='../license.html',name='license'),
    meta(content='Demonstrates of NurbsTrimmedSurface with outer boundary trimmed and one interior boundary (forming a hole in surface)',name='description')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(1.000000,1.000000,1.000000)]),
    Group(
      children=[
      Shape(
        geometry=LineSet(vertexCount=[2],
          coord=Coordinate(point=[(0.0000e+00,0.0000e+00,0.0000e+00),(1.0000e+00,0.0000e+00,0.0000e+00)])),
        appearance=Appearance(
          material=Material(emissiveColor=(1.000000,0.000000,0.000000)),
          lineProperties=LineProperties(linewidthScaleFactor=2))),
      Shape(
        geometry=LineSet(vertexCount=[2],
          coord=Coordinate(point=[(0.0000e+00,0.0000e+00,0.0000e+00),(0.0000e+00,1.0000e+00,0.0000e+00)])),
        appearance=Appearance(
          material=Material(emissiveColor=(0.000000,1.000000,0.000000)),
          lineProperties=LineProperties(linewidthScaleFactor=2))),
      Shape(
        geometry=LineSet(vertexCount=[2],
          coord=Coordinate(point=[(0.0000e+00,0.0000e+00,0.0000e+00),(0.0000e+00,0.0000e+00,1.0000e+00)])),
        appearance=Appearance(
          material=Material(emissiveColor=(0.000000,0.000000,1.000000)),
          lineProperties=LineProperties(linewidthScaleFactor=2)))]),
    Shape(
      geometry=NurbsTrimmedSurface(vKnot=[0.0,0.0,2.0,2.0],vDimension=2,weight=[1.0,0.946042343528,1.0,1.0,0.946042343528,1.0],uDimension=3,vOrder=2,uKnot=[0.0,0.0,0.0,1.0,1.0,1.0],
        controlPoint=Coordinate(point=[(1.5000e+00,-1.1102e-16,-8.6600e-01),(1.4191e+00,6.4809e-01,-8.1927e-01),(1.0800e+00,1.2262e+00,-8.6600e-01),(5.0000e-01,-5.5511e-17,8.6600e-01),(4.7302e-01,3.2404e-01,8.1927e-01),(2.8999e-01,6.1312e-01,8.6600e-01)]),
        trimmingContour=[
        Contour2D(
          children=[
          NurbsCurve2D(order=2,knot=[0.0,0.0,0.5,1.0,1.0],weight=[1.0,1.0,1.0],controlPoint=[(0.0000e+00,0.0000e+00),(1.0000e+00,0.0000e+00),(1.0000e+00,1.5000e+00)]),
          NurbsCurve2D(knot=[0.0,0.0,0.0,1.0,1.0,1.0],weight=[1.0,0.71,1.0],controlPoint=[(1.0000e+00,1.5000e+00),(7.1000e-01,1.4200e+00),(5.0000e-01,2.0000e+00)]),
          NurbsCurve2D(order=2,knot=[0.0,0.0,0.5,1.0,1.0],weight=[1.0,1.0,1.0],controlPoint=[(5.0000e-01,2.0000e+00),(0.0000e+00,2.0000e+00),(0.0000e+00,0.0000e+00)])]),
        Contour2D(
          children=[
          NurbsCurve2D(knot=[0.0,0.0,0.0,0.25,0.25,0.5,0.5,0.75,0.75,1.0,1.0,1.0],weight=[1.0,0.707106781187,1.0,0.707106781187,1.0,0.707106781187,1.0,0.707106781187,1.0],controlPoint=[(7.5000e-01,1.5000e+00),(5.3033e-01,8.8388e-01),(5.0000e-01,1.2500e+00),(1.7678e-01,8.8388e-01),(2.5000e-01,1.5000e+00),(1.7678e-01,1.2374e+00),(5.0000e-01,1.7500e+00),(5.3033e-01,1.2374e+00),(7.5000e-01,1.5000e+00)])])]),
      appearance=Appearance(DEF='ksh_appearance_1',
        material=Material(diffuseColor=(0.000000,0.000000,1.000000))))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
