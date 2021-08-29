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
    GeoViewpoint(description='GeoViewpoint_1_01',geoSystem=['GDC'],position=(41.06225017873692,29.327679094953055,81481.91021756065),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.06225017873692,29.327679094953055,0.0),range=97778.29,child1Url=['../../tiles/2/bosphorus0-1.x3d'],child2Url=['../../tiles/2/bosphorus1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/bosphorus0-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,29.030952729968703,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.028259654,zDimension=21,zSpacing=0.04373449,height=[51,273,100,303,151,149,48,40,79,98,56,80,88,99,231,102,118,144,164,183,316,326,0,0,0,0,0,0,1,2,7,-5,5,27,29,154,60,224,24,182,257,266,421,407,-1,0,0,0,-1,0,0,-1,0,1,1,0,1,0,0,-2,3,0,0,7,1,6,-1,-1,-2,0,0,0,1,-1,-1,0,0,15,36,0,4,0,4,1,0,2,0,-2,-2,-1,-1,-1,-2,1,0,0,3,-2,4,7,40,114,186,170,156,13,194,268,297,334,0,0,-2,142,0,0,-2,0,-14,11,89,45,71,205,188,165,81,204,346,303,281,284,0,2,0,-1,0,8,21,40,75,75,29,99,150,253,194,266,198,231,247,283,311,314,0,0,-1,8,83,137,126,254,320,134,99,84,146,213,165,191,196,217,344,278,295,299,0,40,71,96,167,214,140,119,118,208,102,69,110,121,211,176,282,241,262,281,200,201,82,175,119,138,123,133,129,110,101,217,73,79,83,87,165,148,162,222,231,287,254,255,124,123,91,119,127,193,359,209,129,176,70,72,56,181,181,158,151,214,164,79,134,139,130,-4,40,96,173,145,161,120,88,11,131,136,202,123,108,161,96,126,52,87,151,174,34,0,17,51,252,128,88,173,44,139,141,85,137,132,93,151,139,128,32,2,22,31,166,186,1,13,117,68,6,25,65,79,98,76,24,42,24,0,0,1,0,0,0,0,69,88,54,6,1,0,3,0,1,0,0,0,2,1,0,0,0,2,2,4,1,0,0,0,0,2,1,1,2,0,0,0,0,0,0,1,0,0,2,4,0,0,-1,-2,0,0,1,3,2,2,1,2,2,1,0,0,1,0,1,0,0,0,0,0,0,0,0,3,1,3,0,0,1,-1,1,0,0,1,0,0,0,0,0,1,0,0,0,1,1,0,2,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,1,0,0,0,1,0,0,0,0,0,0,0,-1,0,0,0,0,0,0],
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
