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
    meta(content='TrimmedNurbsWithHole.x3d',name='title'),
    meta(content='Scene contains a single NurbsTrimmedSurface node which has two Contour2D child nodes, defining a trimmed outer boundary to the patch and an interior hole in the patch. Scene also contains unit-length line segments defining x-y-z coordinate axes.',name='description'),
    meta(content='Vincent Marchetti',name='creator'),
    meta(content='10 February 2012',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='NURBS example NurbsTrimmedSurface Contour2D NurbsCurve2D',name='subject'),
    meta(content='TrimmedNurbsWithHole.jpg',name='Image'),
    meta(content='images/TrimmedNurbsWithHoleXj3d.png',name='Image'),
    meta(content='originals/trimmed_nurbs_with_hole.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/NURBS/TrimmedNurbsWithHole.x3d',name='identifier'),
    meta(content='Python language scripts using Numpy, SciPy libraries http://numpy.scipy.org',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license'),
    meta(content='instantReality Forum Issuehttp://forum.instantreality.org',name='TODO'),
    meta(content='BS Contact BitManagement Bug Report: http://www.bitmanagement.de/en/contact',name='TODO')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TrimmedNurbsWithHole.x3d'),
    Background(skyColor=[(1,1,1)]),
    Viewpoint(description='Trimmed Nurbs With Hole',orientation=(-0.77676,0.60251,0.18337,0.74685),position=(2,3,4)),
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
          lineProperties=LineProperties(linewidthScaleFactor=2)))]),
    Shape(
      #  Instant Reality options: meshGenerationType="dynamic" or advancedStatic or simpleStatic 
      geometry=NurbsTrimmedSurface(solid=False,uDimension=3,uKnot=[0,0,0,1,1,1],vDimension=2,vKnot=[0,0,2,2],vOrder=2,weight=[1,0.946042343528,1,1,0.946042343528,1],
        controlPoint=Coordinate(point=[(1.5,-1.1102e-16,-8.6600e-01),(1.4191e+00,6.4809e-01,-8.1927e-01),(1.0800e+00,1.2262e+00,-8.6600e-01),(5.0000e-01,-5.5511e-17,8.6600e-01),(4.7302e-01,3.2404e-01,8.1927e-01),(2.8999e-01,6.1312e-01,8.6600e-01)]),
        trimmingContour=[
        Contour2D(
          children=[
          NurbsCurve2D(controlPoint=[(0,0),(1,0),(1,1.5)],knot=[0,0,0.5,1,1],order=2,weight=[1,1,1]),
          NurbsCurve2D(controlPoint=[(1,1.5),(7.1000e-01,1.4200e+00),(5.0000e-01,2)],knot=[0,0,0,1,1,1],weight=[1,0.71,1]),
          NurbsCurve2D(controlPoint=[(5.0000e-01,2),(0,2),(0,0)],knot=[0,0,0.5,1,1],order=2,weight=[1,1,1])]),
        Contour2D(
          children=[
          NurbsCurve2D(controlPoint=[(7.5000e-01,1.5),(5.3033e-01,8.8388e-01),(5.0000e-01,1.2500e+00),(1.7678e-01,8.8388e-01),(2.5000e-01,1.5),(1.7678e-01,1.2374e+00),(5.0000e-01,1.7500e+00),(5.3033e-01,1.2374e+00),(7.5000e-01,1.5)],knot=[0,0,0,0.25,0.25,0.5,0.5,0.75,0.75,1,1,1],weight=[1,0.707106781187,1,0.707106781187,1,0.707106781187,1,0.707106781187,1])])]),
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

print ("python x3d.py load successful for TrimmedNurbsWithHole.py")
