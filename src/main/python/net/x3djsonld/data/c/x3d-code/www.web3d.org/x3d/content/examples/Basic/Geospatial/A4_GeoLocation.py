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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    component(level=1,name='Geospatial'),
    meta(content='A4_GeoLocation.x3d',name='title'),
    meta(content='Martin Reddy SRI, original example',name='creator'),
    meta(content='Don Brutzman NPS, X3D encoding',name='creator'),
    meta(content='26 June 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Specification example georeferencing VRML objects: display standard VRML cone at latitude/longitude location of Lossiemouth, Scotland.',name='description'),
    meta(content='http://www.geovrml.org/1.0/doc/examples.html',name='reference'),
    meta(content='originals/geoloc.wrl',name='reference'),
    meta(content='VRML 97 encoding http://www.geovrml.org/1.0/doc/examples/geoinline.wrl',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/A4_GeoLocation.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='A4_GeoLocation.x3d'),
    Group(
      children=[
      Background(groundColor=[(0,0,0)],skyColor=[(1,1,1)]),
      GeoViewpoint(description='Initial GeoViewpoint',orientation=(1,0,0,-1.57),position=(51.5122,-40.0,10000000)),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,1.0,0.3)),
          texture=ImageTexture(url=["images/earth.gif","images/earth.jpg","images/earth2.gif","images/earth3.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/earth.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/earth.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/earth2.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/earth3.jpg"])),
        geometry=GeoElevationGrid(creaseAngle=1.05,geoGridOrigin=(-90,-180,0),height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],xDimension=11,xSpacing=36,zDimension=11,zSpacing=18)),
      GeoLocation(geoCoords=(57.7174,-3.286119,200000),
        children=[
        Transform(rotation=(1,0,0,3.1415926),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,0))),
            geometry=Cone(bottomRadius=100000,height=500000))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for A4_GeoLocation.py")
