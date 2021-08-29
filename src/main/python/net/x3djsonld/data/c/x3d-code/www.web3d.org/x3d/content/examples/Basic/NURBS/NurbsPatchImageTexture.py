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
    meta(content='NurbsPatchImageTexture.x3d',name='title'),
    meta(content='A NURBS patch representing a segment of a cylinder. An applied image texture depicts the u-v axes of the parametric coordinate system. Defined Viewpoints show the inner and outer sides of the cylindrical surface',name='description'),
    meta(content='Vincent Marchetti',name='creator'),
    meta(content='31 August 2011',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='NurbsPatchImageTexture1.jpg',name='Image'),
    meta(content='NurbsPatchImageTexture2.jpg',name='Image'),
    meta(content='Currently only Octaga 2.0 properly implements the X3D NURBS component, see the following page for status.',name='warning'),
    meta(content='http://www.kshell.com/pages/nurbs_surface_demo',name='warning'),
    meta(content='images/NurbsPatchImageTextureBSContact.png',name='Image'),
    meta(content='images/NurbsPatchImageTextureH3dViewer.png',name='Image'),
    meta(content='images/NurbsPatchImageTextureInstantReality.png',name='Image'),
    meta(content='images/NurbsPatchImageTextureOctagaVS.png',name='Image'),
    meta(content='images/NurbsPatchImageTextureView3dscene.png',name='Image'),
    meta(content='images/NurbsPatchImageTextureXj3d.png',name='Image'),
    meta(content='http://www.kshell.com/pages/nurbs_surface_demo',name='reference'),
    meta(content='AxesTexture.png',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPatchImageTexture.x3d',name='identifier'),
    meta(content='Python language scripting',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='NurbsPatchImageTexture.x3d'),
    Background(skyColor=[(0.5,0.5,0.5)]),
    Viewpoint(description='view outer surface',fieldOfView=0.16628,orientation=(0.166,0.465,0.87,2.538),position=(10.55,12.855,11.111)),
    Viewpoint(description='view inner surface',fieldOfView=0.16628,orientation=(0.797,-0.285,-0.533,1.182),position=(-10.55,-12.855,11.111)),
    Shape(
      geometry=NurbsPatchSurface(solid=False,uDimension=5,uKnot=[0,0,0,0.5,0.5,1,1,1],vDimension=2,vKnot=[0,0,1,1],vOrder=2,weight=[1,0.92388,1,0.92388,1,1,0.92388,1,0.92388,1],
        controlPoint=Coordinate(point=[(1,0,0),(0.92388,0.38268,0),(0.70711,0.70711,0),(0.38268,0.92388,0),(-0.000004,1,0),(1,0,1),(0.92388,0.38268,0.92388),(0.70711,0.70711,1),(0.38268,0.92388,0.92388),(-0.000004,1,1)])),
      appearance=Appearance(
        texture=ImageTexture(url=["AxesTexture.png","https://www.web3d.org/x3d/content/examples/Basic/NURBS/AxesTexture.png"]))),
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

print ("python x3d.py load successful for NurbsPatchImageTexture.py")
