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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    component(level=4,name='NURBS'),
    meta(content='TrimmingContourExample.x3d',name='title'),
    meta(content='Simple example demonstrating NURBS trimming contour content model.',name='description'),
    meta(content='Andrew Grieve, Vince Marchetti',name='creator'),
    meta(content='Don Brutzman',name='contributor'),
    meta(content='16 October 2005',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='TrimmingContourExample.png',name='Image'),
    meta(content='TrimmingContourExampleSideView.png',name='Image'),
    meta(content='images/TrimmingContourExampleInstantReality.png',name='Image'),
    meta(content='images/TrimmingContourExampleXj3d.png',name='Image'),
    meta(content='NURBS trimming contour',name='subject'),
    meta(content='https://www.web3d.org/x3d/specifications/ISO-IEC-19775-X3DAbstractSpecification/Part01/components/nurbs.html#NurbsTrimmedSurface',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/NURBS/TrimmingContourExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TrimmingContourExample.x3d'),
    NavigationInfo(type=["EXAMINE"]),
    Background(skyColor=[(1,1,1)]),
    Transform(scale=(2,2,2),
      children=[
      Viewpoint(centerOfRotation=(233,0,-135),description='Overhead View',fieldOfView=0.16628,orientation=(-1,-0,-0,1.57),position=(233,1500,-133.809998)),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0),emissiveColor=(0,1,0))),
        geometry=NurbsTrimmedSurface(solid=False,uDimension=6,uKnot=[0.00980377,0.00980377,0.00980377,0.00980377,0.5,0.5,0.990196,0.990196,0.990196,0.990196],uOrder=4,vDimension=6,vKnot=[0.00980377,0.00980377,0.00980377,0.00980377,0.5,0.5,0.990196,0.990196,0.990196,0.990196],vOrder=4,
          controlPoint=Coordinate(point=[(123.01589,0.00000,-70.25446),(123.01589,0.00000,-91.89685),(123.01589,30.00000,-113.53923),(123.01589,40.00000,-156.82400),(123.01589,20.00000,-178.46638),(123.01589,0.00000,-200.10876),(159.68731,0.00000,-70.25446),(159.68731,0.00000,-91.89685),(159.68731,0.00000,-113.53923),(159.68731,0.00000,-156.82400),(159.68731,0.00000,-178.46638),(159.68731,16.00000,-200.10876),(196.35873,0.00000,-70.25446),(196.35873,0.00000,-91.89685),(196.35873,21.00000,-113.53923),(196.35873,0.00000,-156.82400),(196.35873,24.00000,-178.46638),(196.35873,28.00000,-200.10876),(269.70158,16.00000,-70.25446),(269.70158,0.00000,-91.89685),(269.70158,0.00000,-113.53923),(269.70158,0.00000,-156.82400),(269.70158,0.00000,-178.46638),(269.70158,0.00000,-200.10876),(306.37300,0.00000,-70.25446),(306.37300,0.00000,-91.89685),(306.37300,0.00000,-113.53923),(306.37300,34.00000,-156.82400),(306.37300,0.00000,-178.46638),(306.37300,0.00000,-200.10876),(343.04443,0.00000,-70.25446),(343.04443,0.00000,-91.89685),(343.04443,-32.00000,-113.53923),(343.04443,0.00000,-156.82400),(343.04443,0.00000,-178.46638),(343.04443,0.00000,-200.10876)]),
          trimmingContour=[
          Contour2D(
            children=[
            NurbsCurve2D(controlPoint=[(0.9901960784313720,0.0098039215686275),(0.9901960784313720,0.9901960784313720),(0.0098039215686275,0.9901960784313720),(0.0098039215686275,0.0098039215686275),(0.9901960784313720,0.0098039215686275)],knot=[0,0,0.25,0.5,0.75,1,1],order=2)]),
          Contour2D(
            children=[
            ContourPolyline2D(controlPoint=[(.2,.2),(.2,.6)]),
            NurbsCurve2D(controlPoint=[(.2,.6),(.4,.4),(.6,.6)],knot=[2,2,2,3,3,3]),
            ContourPolyline2D(controlPoint=[(.6,.6),(.6,.2),(.2,.2)])]),
          Contour2D(
            children=[
            ContourPolyline2D(controlPoint=[(.75,.75),(.85,.85),(.95,.75),(.75,.75)])])]))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TrimmingContourExample.py")
