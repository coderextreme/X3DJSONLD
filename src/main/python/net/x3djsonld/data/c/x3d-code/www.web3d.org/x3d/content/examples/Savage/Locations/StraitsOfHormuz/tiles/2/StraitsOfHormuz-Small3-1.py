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
    GeoViewpoint(description='GeoViewpoint_2_31',geoSystem=['GDC'],position=(27.018229371682303,56.03032222992296,58327.3831173974),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(27.018229371682303,56.03032222992296,0.0),range=69992.86,child1Url=['../../tiles/3/StraitsOfHormuz-Small6-2.x3d'],child2Url=['../../tiles/3/StraitsOfHormuz-Small6-3.x3d'],child3Url=['../../tiles/3/StraitsOfHormuz-Small7-2.x3d'],child4Url=['../../tiles/3/StraitsOfHormuz-Small7-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/StraitsOfHormuz-Small3-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.794039492713402,55.729040188915306,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.028693527,zDimension=22,zSpacing=0.021351418,height=[0,2,2,5,8,38,30,37,25,35,93,7,1,1,1,2,0,2,2,2,1,4,2,-26,1,6,20,64,127,62,50,31,20,14,11,2,1,2,3,1,3,1,3,5,-2,-11,2,5,17,41,73,143,37,27,29,57,4,6,5,2,2,1,2,2,39,41,-30,-5,3,8,33,37,33,75,20,21,32,14,14,11,1,1,1,2,2,4,43,49,10,-14,12,11,25,28,63,13,14,33,37,52,131,20,5,0,4,2,2,2,3,6,21,24,48,6,10,4,8,10,9,30,56,44,129,35,62,2,2,2,2,6,2,5,-1,12,22,1,6,1,8,0,3,28,108,16,82,57,10,47,0,0,4,3,5,1,4,11,7,10,4,-2,0,0,17,8,4,10,15,12,43,15,15,87,29,0,7,3,6,-12,0,1,-20,2,15,0,-17,1,0,5,8,8,9,8,9,94,7,3,2,3,0,5,-14,-4,2,-5,1,0,14,1,8,0,2,4,4,1,0,0,1,2,2,0,12,2,1,0,6,17,8,5,4,5,0,0,6,6,2,2,2,1,2,4,4,3,25,6,4,4,2,-15,-1,0,3,-18,0,3,3,5,-1,0,0,2,2,1,2,1,558,14,5,3,5,4,1,3,4,50,0,3,0,5,6,0,6,-2,2,1,3,5,390,33,6,6,7,5,32,91,24,2,7,5,10,4,0,0,-12,0,2,0,3,0,342,9,10,9,8,15,108,156,90,36,4,-1,3,-3,12,-1,1,-4,0,3,0,1,25,10,13,7,11,18,71,124,78,16,4,3,4,13,-6,-1,2,10,-1,2,2,1,14,11,23,20,22,28,26,55,43,13,17,17,11,-4,0,4,4,-4,1,-1,1,1,14,11,31,29,39,46,35,36,205,66,33,30,21,31,68,19,5,6,5,-5,1,-2,17,14,22,30,44,67,48,101,89,295,80,46,39,35,31,26,11,35,10,2,4,6,25,15,20,35,62,41,81,23,31,48,204,417,74,44,35,17,14,10,23,42,47,44,45,31,18,21,39,27,30,30,37,37,40,69,110,143,113,28,26,18,24,102,54,76,45,31,18,22,40,27,31,30,37,36,41,70,106,140,112,26,25,19,30,99,55,77],
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
