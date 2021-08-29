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
    meta(content='NurbsPatch.x3d',name='title'),
    meta(content='This scene contains a single NurbsPatchSurface rendering one-quarter of a cylindrical segment. The "solid" field of the surface is set false for so that surface is visible from both sides. Surface has semi-transparent material appearance. Scene also contains unit-length line segments defining x-y-z coordinate axes. Defined Viewpoints show the inner and outer sides of the cylindrical surface',name='description'),
    meta(content='NurbsPatch.jpg',name='Image'),
    meta(content='Vincent Marchetti',name='creator'),
    meta(content='10 February 2012',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.kshell.com/pages/nurbs_surface_demo',name='reference'),
    meta(content='images/NurbsPatchH3DViewer.png',name='Image'),
    meta(content='images/NurbsPatchInstantReality.png',name='Image'),
    meta(content='images/NurbsPatchOctagaVS.png',name='Image'),
    meta(content='images/NurbsPatchView3dscene.png',name='Image'),
    meta(content='images/NurbsPatchBSContact.png',name='Image'),
    meta(content='images/NurbsPatchXj3D.png',name='Image'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPatch.x3d',name='identifier'),
    meta(content='Python language scripting',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='NurbsPatch.x3d'),
    Background(skyColor=[(0.8,0.8,0.8)]),
    Viewpoint(description='view outer surface',fieldOfView=0.16628,orientation=(0.166,0.465,0.87,2.538),position=(10.55,12.855,11.111)),
    Viewpoint(description='view inner surface',fieldOfView=0.16628,orientation=(0.797,-0.285,-0.533,1.182),position=(-10.55,-12.855,11.111)),
    Viewpoint(centerOfRotation=(0.7,0.7,0),description='view from above',fieldOfView=0.16628,position=(0.7,0.7,10)),
    Shape(
      geometry=NurbsPatchSurface(solid=False,uDimension=5,uKnot=[0.0,0.0,0.0,0.5,0.5,1.0,1.0,1.0],vDimension=2,vKnot=[0.0,0.0,1.0,1.0],vOrder=2,weight=[1.0,0.923879181092,1.0,0.923879181092,1.0,1.0,0.923879181092,1.0,0.923879181092,1.0],
        controlPoint=Coordinate(point=[(1,0,0),(0.92388,0.38268,0),(0.70711,0.70711,0),(0.38268,0.92388,0),(0,1,0),(1,0,1),(0.92388,0.38268,0.92388),(0.70711,0.70711,1),(0.38268,0.92388,0.92388),(0,1,1)])),
      appearance=Appearance(
        material=Material(diffuseColor=(1,1,0),transparency=0.2))),
    Group(DEF='WorldSpaceCoordinateAxes',
      children=[
      Shape(
        geometry=LineSet(vertexCount=[2],
          coord=Coordinate(point=[(0.0,0.0,0.0),(1.0,0.0,0.0)])),
        appearance=Appearance(
          material=Material(emissiveColor=(1,0,0)),
          lineProperties=LineProperties(linewidthScaleFactor=2))),
      Shape(
        geometry=LineSet(vertexCount=[2],
          coord=Coordinate(point=[(0.0,0.0,0.0),(0.0,1.0,0.0)])),
        appearance=Appearance(
          material=Material(emissiveColor=(0,1,0)),
          lineProperties=LineProperties(linewidthScaleFactor=2))),
      Shape(
        geometry=LineSet(vertexCount=[2],
          coord=Coordinate(point=[(0.0,0.0,0.0),(0.0,0.0,1.0)])),
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

print ("python x3d.py load successful for NurbsPatch.py")
