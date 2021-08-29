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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_57',geoSystem=['GDC'],position=(41.22625451557576,29.55022386869132,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.22625451557576,29.55022386869132,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus10-14.x3d'],child2Url=['../../tiles/4/bosphorus10-15.x3d'],child3Url=['../../tiles/4/bosphorus11-14.x3d'],child4Url=['../../tiles/4/bosphorus11-15.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus5-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,29.47604227744523,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[117,127,122,133,75,99,118,111,85,62,48,62,43,74,62,33,3,5,31,14,8,9,133,104,88,99,87,102,123,119,107,105,32,37,26,20,8,1,1,2,3,6,19,38,112,102,68,57,111,78,87,79,48,107,96,66,18,9,2,2,3,2,24,36,81,90,90,52,62,36,80,34,29,55,77,90,98,97,42,24,0,2,3,31,79,74,44,61,111,104,49,57,98,100,42,32,81,86,62,18,4,4,3,0,2,0,0,29,45,27,88,92,73,17,73,38,69,5,9,2,1,5,3,1,1,0,1,-1,1,1,0,0,9,36,31,13,0,5,2,1,0,2,1,0,0,0,0,0,0,1,2,1,1,-1,5,3,4,0,0,0,0,2,0,1,0,-1,7,0,0,0,2,2,0,0,0,0,0,0,0,0,0,1,2,0,0,0,2,1,2,3,0,0,0,1,0,0,0,0,0,0,2,0,0,1,0,1,1,0,0,1,1,0,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1,0,1,3,1,0,0,0,0,1,0,0,0,1,0,0,2,1,2,1,1,0,0,1,1,0,3,1,0,0,1,0,0,1,0,1,0,0,0,1,0,0,1,0,0,0,1,2,0,0,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,1,1,1,1,0,3,0,0,0,0,0,0,0,1,1,1,1,0,0,2,0,0,0,1,2,0,1,1,0,2,2,0,0,2,1,0,1,1,0,0,0,0,0,0,0,0,0,1,3,2,1,1,3,2,0,1,3,0,1,0,0,0,0,2,1,0,2,2,0,4,4,2,2,0,2,1,1,1,3,2,0,0,0,0,1,0,0,2,2,1,1,1,2,2,3,1,1,1,0,1,-1,0,0,1,0,0,0,0,0,2,3,2,1,2,0,0,4,1,0,2,3,0,0,0,2,0,0,0,1,1,0,1,1,1,2,3,3,2,1,1,1,1,0,2,0,0,1,0,1,0,0,0,0,1,1,1,2,3,1,3,3,1,0,0,0,0,0,0,1,0,1,0,1,0,0,2,1,3,1,2,2,2,4,3,0,0,0,0,0,0],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
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
