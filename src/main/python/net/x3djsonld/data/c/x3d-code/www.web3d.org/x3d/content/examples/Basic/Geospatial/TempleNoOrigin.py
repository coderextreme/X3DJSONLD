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
    meta(content='TempleNoOrigin.x3d',name='title'),
    meta(content='Temple without GeoOrigin results in jittery locations due to floating-point roundoff error of geospatial position values.',name='description'),
    meta(content='Martin Reddy SRI authored the original temple scene.',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='22 April 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.geovrml.org/examples',name='reference'),
    meta(content='X3D geospatial example',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/TempleNoOrigin.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TempleNoOrigin.x3d'),
    NavigationInfo(avatarSize=[1.0E-6,1.0E-6,1.0E-6],speed=1.0E-4),
    GeoViewpoint(description='Temple',geoSystem=["UTM","Z11"],orientation=(1.0,0.0,0.0,-1.57),position=(8167782.0,258125.0,45)),
    Background(groundColor=[(1.0,1.0,1.0)],skyColor=[(1.0,1.0,1.0)]),
    GeoLocation(geoCoords=(8167769.0,258115.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Transform(
        children=[
        Shape(DEF='COLUMN',
          appearance=Appearance(
            material=Material(diffuseColor=(1.0,0.9,0.8)),
            texture=ImageTexture(DEF='stone6',url=["images/stone6.png","images/stone6.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone6.png","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone6.gif","http://www.ai.sri.com/~reddy/geovrml/examples/temple/stone6.gif"])),
          geometry=Cylinder(height=5.0,radius=0.6))])]),
    GeoLocation(geoCoords=(8167771.0,258115.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167773.0,258115.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167775.0,258115.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167777.0,258115.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167779.0,258115.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167781.0,258115.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167783.0,258115.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167785.0,258115.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167787.0,258115.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167789.0,258115.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167769.0,258117.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167771.0,258117.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167773.0,258117.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167775.0,258117.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167777.0,258117.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167779.0,258117.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167781.0,258117.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167783.0,258117.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167785.0,258117.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167787.0,258117.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167789.0,258117.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167769.0,258119.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167771.0,258119.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167787.0,258119.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167789.0,258119.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167769.0,258121.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167771.0,258121.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167787.0,258121.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167789.0,258121.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167769.0,258123.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167771.0,258123.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167787.0,258123.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167789.0,258123.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167769.0,258125.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167771.0,258125.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167787.0,258125.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167789.0,258125.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167769.0,258127.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167771.0,258127.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167787.0,258127.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167789.0,258127.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167769.0,258129.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167771.0,258129.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167787.0,258129.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167789.0,258129.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167769.0,258131.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167771.0,258131.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167787.0,258131.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167789.0,258131.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167769.0,258133.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167771.0,258133.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167773.0,258133.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167775.0,258133.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167777.0,258133.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167779.0,258133.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167781.0,258133.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167783.0,258133.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167785.0,258133.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167787.0,258133.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167789.0,258133.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167769.0,258135.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167771.0,258135.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167773.0,258135.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167775.0,258135.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167777.0,258135.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167779.0,258135.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167781.0,258135.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167783.0,258135.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167785.0,258135.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167787.0,258135.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167789.0,258135.0,2.5),geoSystem=["UTM","Z11"],
      children=[
      Shape(USE='COLUMN')]),
    GeoLocation(geoCoords=(8167779.0,258125.0,-0.5),geoSystem=["UTM","Z11"],
      children=[
      Transform(rotation=(0.0,1.0,0.0,0.13),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1.0,1.0,1.0)),
            texture=ImageTexture(DEF='stone5',url=["images/stone5.png","images/stone5.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone5.png","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone5.gif","http://www.ai.sri.com/~reddy/geovrml/examples/temple/stone5.gif"])),
          geometry=Box(size=(22.0,1.0,22.0)))])]),
    GeoLocation(geoCoords=(8167779.0,258125.0,-1.5),geoSystem=["UTM","Z11"],
      children=[
      Transform(rotation=(0.0,1.0,0.0,0.13),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1.0,1.0,1.0)),
            texture=ImageTexture(USE='stone5')),
          geometry=Box(size=(24.0,1.0,24.0)))])]),
    GeoLocation(geoCoords=(8167779.0,258125.0,-2.5),geoSystem=["UTM","Z11"],
      children=[
      Transform(rotation=(0.0,1.0,0.0,0.13),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1.0,1.0,1.0)),
            texture=ImageTexture(USE='stone5')),
          geometry=Box(size=(26.0,1.0,26.0)))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TempleNoOrigin.py")
