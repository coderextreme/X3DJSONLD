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
    GeoViewpoint(description='GeoViewpoint_2_12',geoSystem=['GDC'],position=(2.434860909842949,102.96356269830186,163294.88275609037),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(2.434860909842949,102.96356269830186,0.0),range=195953.86,child1Url=['../../tiles/3/Malacca2-4.x3d'],child2Url=['../../tiles/3/Malacca2-5.x3d'],child3Url=['../../tiles/3/Malacca3-4.x3d'],child4Url=['../../tiles/3/Malacca3-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca1-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.7987358796286328,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.07952382,zDimension=22,zSpacing=0.060583334,height=[2,2,4,5,3,7,2,5,2,4,16,11,14,11,11,60,52,29,43,24,26,27,3,1,5,4,5,6,2,4,5,9,161,12,15,22,19,50,56,40,35,19,263,430,3,4,4,2,4,6,10,8,12,7,15,11,12,19,39,85,91,56,86,55,39,42,2,3,4,4,4,5,12,12,14,8,10,14,13,14,60,72,77,420,79,78,195,55,4,5,3,4,8,-7,8,23,33,83,11,20,16,32,35,49,86,439,269,70,53,37,3,6,3,2,3,12,10,84,14,156,11,31,27,35,28,53,41,186,83,161,57,50,5,7,9,31,14,10,9,7,37,133,44,14,41,70,72,44,211,36,47,51,99,102,6,5,11,26,26,32,17,35,12,33,67,18,45,54,67,25,20,37,104,35,47,54,30,20,56,19,21,43,32,17,30,62,26,32,78,104,60,47,39,32,57,30,61,61,43,20,53,59,70,36,427,32,26,28,22,52,92,605,67,269,29,26,17,25,19,29,55,33,42,97,66,63,100,52,27,38,33,78,493,439,385,189,48,26,16,19,6,25,26,93,98,81,86,99,58,56,21,29,42,90,469,502,364,292,28,18,19,16,47,27,38,525,168,71,52,68,65,38,18,30,52,75,556,130,68,276,214,33,19,44,9,63,229,208,176,150,57,41,46,35,49,53,62,96,131,345,304,369,23,9,4,15,5,0,388,417,147,192,84,63,45,18,24,72,65,128,109,607,92,43,58,7,9,4,5,2,184,162,134,77,87,86,55,40,52,105,91,74,111,535,506,28,20,6,2,3,1,3,317,204,90,68,78,78,58,44,108,51,72,101,102,149,30,18,9,6,5,3,5,3,393,126,105,72,72,69,70,44,46,61,73,52,45,22,26,20,11,4,4,6,4,4,359,149,120,77,68,79,74,64,49,45,58,27,48,11,37,29,4,4,4,4,7,6,146,156,129,90,61,53,52,59,43,64,39,16,120,48,18,19,4,4,3,5,5,5,168,156,133,81,69,69,62,91,84,64,10,33,34,29,33,22,6,4,5,5,5,4,185,171,146,81,64,68,57,84,87,58,17,28,33,20,34,22,5,3,4,3,5,3],
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
