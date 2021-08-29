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
    GeoViewpoint(description='GeoViewpoint_3_55',geoSystem=['GDC'],position=(41.22625451557576,29.253497503706967,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.22625451557576,29.253497503706967,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus10-10.x3d'],child2Url=['../../tiles/4/bosphorus10-11.x3d'],child3Url=['../../tiles/4/bosphorus11-10.x3d'],child4Url=['../../tiles/4/bosphorus11-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus5-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,29.17931591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[107,91,47,112,111,179,183,158,149,130,83,112,17,33,61,111,139,154,153,145,151,146,109,143,30,130,132,173,177,113,127,150,158,137,24,17,29,117,133,114,149,107,125,115,93,155,74,27,75,157,138,108,148,138,122,53,41,9,76,136,125,127,140,110,109,133,81,150,136,82,60,144,91,79,104,147,78,49,12,28,79,106,129,119,126,143,92,79,128,55,34,80,16,63,117,40,34,97,87,105,27,11,20,76,108,84,101,135,134,114,157,131,100,30,13,60,98,62,55,61,42,22,79,14,88,86,79,68,94,113,113,106,132,107,114,68,8,19,63,58,16,2,10,4,9,2,48,119,113,75,125,119,100,104,86,90,72,61,42,5,38,49,1,62,11,82,89,68,104,103,72,54,110,94,91,115,88,60,89,43,18,21,5,11,10,73,52,38,60,103,102,86,99,36,99,93,76,75,80,38,88,57,66,48,1,2,28,28,68,73,100,101,96,94,91,89,96,95,99,102,82,27,67,47,87,82,42,2,4,47,81,95,89,83,74,56,43,88,67,68,70,76,89,44,37,31,46,37,1,13,52,77,64,66,41,51,82,83,38,82,58,27,77,73,77,41,49,27,48,5,18,76,60,48,38,38,39,46,59,67,42,68,37,21,7,4,7,2,6,9,0,4,41,54,61,46,23,17,49,31,41,15,0,1,0,1,2,1,1,0,1,2,1,3,34,15,32,20,42,20,51,20,2,2,1,1,0,0,0,2,0,0,0,0,1,2,3,3,4,3,9,6,3,4,0,0,0,1,0,0,0,0,0,0,0,0,1,2,0,0,0,0,0,1,1,-1,1,2,4,0,0,1,1,1,0,0,-1,2,0,0,2,0,0,2,1,2,-2,3,2,1,2,1,2,1,1,0,0,0,0,1,3,2,0,0,4,2,2,2,0,1,0,0,1,2,1,1,3,1,3,0,2,0,1,2,0,0,1,1,1,2,2,0,1,1,1,1,3,0,0,1,2,1,1,1,2,3,0,0,2,0,2,2,0,1,0,0,0,0,0,0,0,0,1,0,0,1,1,1,2,0,2,0,2,2,0,1,0,0,1,0,0,0,0,0],
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
