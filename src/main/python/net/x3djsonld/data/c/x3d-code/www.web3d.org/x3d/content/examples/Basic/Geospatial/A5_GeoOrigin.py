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
    meta(content='A5_GeoOrigin.x3d',name='title'),
    meta(content='Martin Reddy SRI, original example',name='creator'),
    meta(content='Don Brutzman NPS, X3D encoding',name='creator'),
    meta(content='26 June 2000',name='created'),
    meta(content='20 January 2020',name='modified'),
    meta(content='Specification example shows use of GeoOrigin node to provide accurate geospatial positioning. When zooming, removes object jitter from reduced-precision floating point values.',name='description'),
    meta(content='Note that GeoOrigin has been deprecated in version 3.3 of X3D Geospatial component and will no longer be needed in X3D scenes.',name='hint'),
    meta(content='http://www.geovrml.org/1.0/doc/examples.html',name='reference'),
    meta(content='originals/geooriginTest.wrl',name='reference'),
    meta(content='VRML 97 encoding http://www.geovrml.org/1.0/doc/examples/geoorigin.wrl',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/A5_GeoOrigin.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='A5_GeoOrigin.x3d'),
    Background(groundColor=[(0,0,0)],skyColor=[(1,1,1)]),
    NavigationInfo(type=["FLY","ANY"]),
    #  location (0,0,10) 
    GeoViewpoint(description='Adjacent Spheres',geoSystem=["UTM","Z11"],orientation=(1,0,0,-1.57),position=(8167769.0,258117.0,10),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(8167769.0,258117.0,0),geoSystem=["UTM","Z11"]),
      #  location (0,0,0) 
      ),
    GeoLocation(geoCoords=(8167769.0,258115.0,0),geoSystem=["UTM","Z11"],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      #  location (0,-2,0) 
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0))),
        geometry=Sphere(radius=2))]),
    GeoLocation(geoCoords=(8167769.0,258119.0,0),geoSystem=["UTM","Z11"],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      #  location (0,2,0) 
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1))),
        geometry=Sphere(radius=2))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for A5_GeoOrigin.py")
