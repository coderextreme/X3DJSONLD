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
    GeoViewpoint(description='GeoViewpoint_3_00',geoSystem=['GDC'],position=(40.84357772961846,28.585863182492176,40740.95510878033),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.84357772961846,28.585863182492176,0.0),range=48889.145,child1Url=['../../tiles/4/bosphorus0-0.x3d'],child2Url=['../../tiles/4/bosphorus1-0.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.014129827,zDimension=21,zSpacing=0.021867245,height=[0,0,0,-1,0,-1,0,0,0,-1,0,-1,0,0,-1,0,0,-1,-1,-1,0,0,-1,0,-1,0,0,0,-1,-1,0,0,0,0,0,0,0,0,-1,-1,0,0,-2,0,0,-1,0,0,0,0,0,0,0,-1,-1,-1,0,-1,-1,0,0,0,0,0,0,0,-1,-1,-1,-1,0,0,0,-1,-2,-1,0,0,0,-2,0,0,0,-2,0,0,0,0,0,0,0,-1,-1,-1,-1,0,0,0,-1,0,0,0,0,0,-1,0,0,0,0,0,-1,0,-1,-1,-1,0,0,0,-2,0,0,0,0,0,0,0,0,0,0,0,-2,-1,-1,-2,-1,-1,1,0,0,-1,-3,0,0,-1,0,0,0,0,0,0,-1,0,0,-1,0,0,0,-1,0,-1,-1,0,0,0,0,0,0,0,-1,0,-1,-1,-1,0,0,0,0,0,0,0,-1,0,-1,0,0,-1,-1,-1,-3,0,-2,-2,0,0,0,0,-1,0,0,0,-1,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,-2,0,0,-1,0,0,-2,0,-1,-1,0,0,0,0,2,0,0,-1,-2,0,0,-1,0,-2,0,0,-2,-1,1,0,0,0,0,0,0,-3,-1,0,-2,-2,0,0,-1,-1,0,0,-1,-2,0,-2,0,0,-1,0,0,-1,-2,0,0,-1,0,0,0,0,0,0,0,0,0,-1,0,-1,0,0,-2,-2,0,0,0,0,0,0,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,-1,-2,-2,0,-1,-1,0,0,0,0,0,-1,0,0,0,-1,-1,0,-3,0,0,-1,-2,0,0,0,0,0,-1,-1,0,0,-1,-1,0,-1,1,0,-2,-1,-5,0,-1,0,2,0,0,-2,1,0,1,0,-3,-1,18,74,111,61,124,106,57,7,26,54,43,-1,-1,0,0,-1,0,16,47,2,6,-2,3,128,164,113,125,99,22,81,112,55,4,1,-1,2,37,118,127,126,83,15,0,1,17,86,199,187,136,35,122,96,27,3,21,17,47,81,126,114,75,118,23,43,0,1,26,111,193,171,75,113,89,32,3,28,0,18,49,84,126,114,73,114,25,48,2,1,25,106,194,170,75,115,88,29,4,25,1],
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
