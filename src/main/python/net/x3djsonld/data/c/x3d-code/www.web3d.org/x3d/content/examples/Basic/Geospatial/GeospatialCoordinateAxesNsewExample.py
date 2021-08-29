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
    meta(content='GeospatialCoordinateAxesNsewExample.x3d',name='title'),
    meta(content='Byounghyun Yoo',name='creator'),
    meta(content='3 June 2008',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='fix background globe',name='TODO'),
    meta(content='X Y Z axis arrows and labels in Geospatial coordinate system.',name='description'),
    meta(content='GeospatialCoordinateAxesNsewExample.png',name='Image'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/GeospatialCoordinateAxesNsewExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  X3D Earth is already geospatially referenced 
    children=[
    WorldInfo(title='GeospatialCoordinateAxesNsewExample.x3d'),
    Inline(DEF='X3D-Earth',url=["http://x3d-earth.nps.edu/d0.x3d"]),
    Group(
      #  Each GeoLocation block shows how to geospatially reference regular nongeospatial shapes 
      children=[
      GeoLocation(
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0,0,-6378137)),
        children=[
        Transform(DEF='ScaledCoordinateAxesNSEW',scale=(1000000,1000000,1000000),
          children=[
          Inline(DEF='CoordinateAxesNSEW',url=["../course/CoordinateAxesNSEW.x3d","CoordinateAxesNSEW.x3d","https://www.web3d.org/x3d/content/examples/Basic/course/CoordinateAxesNSEW.x3d"])])]),
      GeoLocation(geoCoords=(0,45,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(0,89.9,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(0,135,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(0,180,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(0,-45,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(0,-89.9,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(0,-135,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(45,0,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(89.9,0,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(-45,0,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(-89.9,0,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(45,45,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(-45,45,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(45,89.9,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(-45,89.9,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(45,135,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(-45,135,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(45,180,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(-45,180,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(45,-45,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(45,-89.9,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(-45,-89.9,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(45,-135,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(-45,-135,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoLocation(geoCoords=(-45,-45,0),
        geoOrigin=GeoOrigin(USE='ORIGIN'),
        children=[
        Transform(USE='ScaledCoordinateAxesNSEW')]),
      GeoViewpoint(description='0E 0N',fieldOfView=1.05,orientation=(1,0,1,-1.5707),position=(0,0,10000000),
        geoOrigin=GeoOrigin(USE='ORIGIN')),
      GeoViewpoint(description='90E 0N',fieldOfView=1.05,orientation=(1,0,1,-1.5707),position=(0,89.900002,10000000),
        geoOrigin=GeoOrigin(USE='ORIGIN')),
      GeoViewpoint(description='90W 0N',fieldOfView=1.05,orientation=(1,0,1,-1.5707),position=(0,-89.900002,10000000),
        geoOrigin=GeoOrigin(USE='ORIGIN')),
      GeoViewpoint(description='180E 0N',fieldOfView=1.05,orientation=(1.0,0.0,0.0,-1.5707),position=(0,180,10000000),
        geoOrigin=GeoOrigin(USE='ORIGIN')),
      GeoViewpoint(description='North Pole',fieldOfView=1.05,orientation=(1.0,0.0,0.0,-1.5707),position=(90,0,10000000),
        geoOrigin=GeoOrigin(USE='ORIGIN')),
      GeoViewpoint(description='South Pole',fieldOfView=1.05,orientation=(1.0,0.0,0.0,-1.5707),position=(-89.9,0,10000000),
        geoOrigin=GeoOrigin(USE='ORIGIN'))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GeospatialCoordinateAxesNsewExample.py")
