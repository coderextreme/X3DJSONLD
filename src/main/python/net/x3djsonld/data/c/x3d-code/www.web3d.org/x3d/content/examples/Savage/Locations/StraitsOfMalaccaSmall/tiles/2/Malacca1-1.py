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
    GeoViewpoint(description='GeoViewpoint_2_11',geoSystem=['GDC'],position=(2.434860909842949,101.29356261898111,163294.88275609037),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(2.434860909842949,101.29356261898111,0.0),range=195953.86,child1Url=['../../tiles/3/Malacca2-2.x3d'],child2Url=['../../tiles/3/Malacca2-3.x3d'],child3Url=['../../tiles/3/Malacca3-2.x3d'],child4Url=['../../tiles/3/Malacca3-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca1-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.7987358796286328,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.07952382,zDimension=22,zSpacing=0.060583334,height=[22,17,33,21,34,25,7,9,27,34,12,0,7,31,30,30,4,1,3,2,2,2,15,27,31,34,31,8,3,23,22,34,5,2,18,28,20,25,3,2,2,2,3,3,13,25,28,14,26,3,5,32,31,32,9,3,33,27,30,18,4,4,1,2,3,3,9,32,29,9,23,3,20,23,27,27,17,0,25,22,4,10,4,3,4,4,4,2,34,33,3,15,14,-1,22,30,29,26,24,-8,20,-12,6,8,4,3,4,6,2,4,31,30,0,8,8,27,20,28,25,17,-1,7,-6,-11,5,5,3,0,6,5,6,3,21,10,1,0,4,26,24,24,17,5,-6,8,-3,1,2,3,3,3,5,5,3,5,10,4,-3,-5,2,14,21,24,-1,-1,0,-5,3,-3,4,2,2,1,5,5,3,6,0,3,-6,4,-2,6,8,-5,0,0,0,17,1,3,4,1,1,3,5,3,58,30,2,0,2,-1,0,0,0,0,-2,2,-1,2,10,2,4,1,1,0,5,8,43,43,0,4,0,0,0,0,-1,-4,0,3,0,5,1,1,1,4,2,11,37,19,56,55,-1,1,4,3,0,2,0,0,-4,-5,1,2,2,0,2,0,6,11,38,105,38,26,-1,-1,1,3,1,0,0,3,0,-1,-2,4,2,3,-1,2,2,54,26,45,43,38,-2,-1,0,4,0,0,-2,2,-12,0,3,3,3,0,0,8,22,14,59,75,197,229,-5,0,1,-5,1,3,-2,5,0,0,-3,2,3,12,11,14,35,81,60,245,506,388,1,-1,-1,0,0,-3,-6,0,-5,2,4,1,8,7,15,12,60,80,61,269,164,184,-2,0,1,-2,3,-3,8,0,-3,1,0,2,10,7,8,7,23,109,232,563,380,317,1,-2,1,1,0,-1,-6,1,3,5,7,8,9,8,4,34,67,48,70,719,258,393,0,2,1,1,-2,-13,4,-1,0,1,0,9,9,18,14,39,77,48,342,242,659,359,0,0,-2,1,0,6,-11,-1,-1,1,8,6,12,21,24,38,30,49,551,204,116,146,0,0,6,-8,5,-2,-2,0,0,0,2,4,7,5,20,44,79,104,709,566,197,168,1,0,2,-10,2,-2,-2,0,0,-1,3,3,8,5,20,46,73,114,695,580,198,185],
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
