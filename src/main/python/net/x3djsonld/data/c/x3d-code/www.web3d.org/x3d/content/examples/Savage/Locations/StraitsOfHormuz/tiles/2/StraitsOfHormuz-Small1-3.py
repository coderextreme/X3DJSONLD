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
    GeoViewpoint(description='GeoViewpoint_2_13',geoSystem=['GDC'],position=(26.1214698558067,57.23545039395357,58327.3831173974),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.1214698558067,57.23545039395357,0.0),range=69992.86,child1Url=['../../tiles/3/StraitsOfHormuz-Small2-6.x3d'],child2Url=['../../tiles/3/StraitsOfHormuz-Small2-7.x3d'],child3Url=['../../tiles/3/StraitsOfHormuz-Small3-6.x3d'],child4Url=['../../tiles/3/StraitsOfHormuz-Small3-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/StraitsOfHormuz-Small1-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.8972799768378,56.93416835294592,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.028693527,zDimension=22,zSpacing=0.021351418,height=[1,2,4,2,0,-1,0,-3,0,5,-7,5,1,10,30,22,52,46,75,33,43,46,2,2,-3,0,0,-2,0,3,4,0,-4,5,3,13,61,35,33,42,59,57,133,98,1,1,-2,0,0,0,2,6,1,0,4,2,6,13,59,38,41,56,82,187,79,60,-2,0,-1,-1,0,1,-1,1,1,4,1,4,6,62,134,43,45,66,101,102,94,90,-1,-1,-1,1,0,0,2,2,0,1,-3,42,14,120,55,103,56,65,175,109,240,226,-1,1,0,1,-2,0,0,1,3,3,2,46,15,173,62,60,102,80,133,477,418,516,-2,-1,-2,0,2,0,1,0,2,0,7,13,18,86,55,172,119,89,236,287,315,269,0,0,0,0,-1,3,0,3,0,3,9,26,24,50,49,63,98,120,138,276,287,270,1,0,2,-3,0,1,0,1,3,2,8,31,38,44,45,53,94,143,178,198,227,225,-2,-3,-3,-2,0,1,0,1,3,3,8,99,18,38,41,55,119,117,193,286,244,238,-2,0,0,-8,4,0,0,1,1,2,7,27,26,56,49,60,84,160,243,445,368,343,0,0,0,-7,3,4,0,4,1,2,1,33,96,59,64,72,112,163,337,418,316,301,0,-4,-15,3,0,0,3,0,2,0,4,21,107,76,68,78,155,188,318,390,352,381,20,0,0,0,0,1,2,1,2,0,3,83,128,74,77,93,171,218,298,391,418,454,7,0,0,0,0,5,0,1,0,2,9,41,63,65,85,112,153,191,329,548,823,962,5,1,1,3,3,3,3,1,0,5,10,50,40,67,115,143,159,218,418,662,602,607,0,1,1,-7,-5,2,1,1,2,5,11,94,61,94,104,106,159,356,392,405,622,679,0,0,1,1,0,2,1,2,6,9,13,80,64,67,77,121,172,352,311,527,738,764,0,8,2,0,0,2,0,0,6,13,19,83,51,64,71,84,182,351,329,619,861,807,1,0,-1,0,0,0,1,2,8,15,20,62,35,52,52,122,146,268,521,880,929,992,0,0,4,0,3,3,2,2,8,16,22,30,40,44,47,72,167,294,514,779,1071,1047,0,0,5,0,0,2,1,3,8,17,22,30,40,43,48,72,165,295,499,791,1065,1045],
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
