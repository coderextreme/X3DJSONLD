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
    meta(content='A1_GeoElevationGrid.x3d',name='title'),
    meta(content='Martin Reddy SRI, original example',name='creator'),
    meta(content='Don Brutzman NPS, X3D encoding',name='creator'),
    meta(content='26 June 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='under revision, not matching spec example. Trying to get Background aligned.',name='warning'),
    meta(content='Specification example shows the use of the GeoElevationGrid and the GeoViewpoint nodes. A flat grid is mapped to the full extent of Earth latitude and longitude.',name='description'),
    meta(content='http://www.geovrml.org/1.0/doc/examples.html',name='reference'),
    meta(content='originals/exagearth.wrl',name='reference'),
    meta(content='VRML 97 encoding http://www.geovrml.org/1.0/doc/examples/exagearth.wrl',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/A1_GeoElevationGrid.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  This scene shows example Geospatial node relationships in a scene graph. 
    children=[
    WorldInfo(title='A1_GeoElevationGrid.x3d'),
    Background(groundColor=[(0.1,0.1,0.8)],skyColor=[(0.1,0.1,0.8)]),
    GeoViewpoint(description='Initial GeoViewpoint',orientation=(1,0,0,-1.57),position=(35.0,70.0,30000000)),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.3,1.0,0.3))),
      geometry=GeoElevationGrid(geoGridOrigin=(-90,-180,0),height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3135,2976,2529,2135,3449,2899,3190,2375,0,0,3086,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,142,792,0,0,0,969,0,0,0,0,0,495,276,0,0,0,0,0,0,0,320,46,60,0,0,0,588,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,301,601,837,627,0,880,0,0,0,0,0,0,0,0,0,202,1,0,0,0,0,1241,385,6,582,468,215,5201,529,0,0,0,0,0,0,0,1304,427,365,374,0,0,0,1977,345,22,132,325,2072,1256,171,0,0,0,0,706,1896,464,134,0,0,2563,0,0,0,143,11,784,88,498,307,108,1707,0,0,0,0,0,0,0,600,378,1378,339,0,0,0,0,0,0,0,0,0,0,0],xDimension=21,xSpacing=18,yScale=200,zDimension=11,zSpacing=18))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for A1_GeoElevationGrid.py")
