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
    GeoViewpoint(description='GeoViewpoint_3_72',geoSystem=['GDC'],position=(27.130324311166753,55.87968120941913,29163.6915586987),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(27.130324311166753,55.87968120941913,0.0),range=34996.43,child1Url=['../../tiles/4/StraitsOfHormuz-Small14-4.x3d'],child2Url=['../../tiles/4/StraitsOfHormuz-Small14-5.x3d'],child3Url=['../../tiles/4/StraitsOfHormuz-Small15-4.x3d'],child4Url=['../../tiles/4/StraitsOfHormuz-Small15-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/StraitsOfHormuz-Small7-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.018229371682303,55.729040188915306,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0143467635,zDimension=22,zSpacing=0.010675709,height=[1,5,2,-6,6,-12,6,3,19,3,3,6,3,0,0,0,16,7,1,0,5,5,2,8,6,3,8,0,3,0,10,0,1,-1,8,0,0,16,10,1,1,7,1,1,13,4,8,-1,14,3,1,0,15,5,7,18,8,6,1,4,2,14,9,0,0,0,16,9,3,2,4,6,5,-6,-4,3,-4,9,0,3,4,5,12,9,5,0,0,0,23,10,2,3,6,7,7,7,4,5,-1,6,13,8,0,7,8,5,-9,0,0,0,32,11,5,5,5,2,2,8,0,14,3,4,9,-2,2,0,5,4,2,0,0,0,376,238,8,8,5,4,6,2,7,8,6,0,0,8,7,4,-11,-12,50,0,0,0,616,254,15,5,5,6,5,7,5,4,2,-2,3,5,7,7,5,2,50,0,4,5,422,149,27,5,5,5,7,6,8,4,3,7,15,60,33,54,21,3,5,1,4,5,522,94,33,5,8,7,6,7,7,6,7,10,24,70,123,76,59,54,4,7,11,6,436,95,17,7,9,7,7,7,7,9,11,22,110,125,141,148,88,31,27,7,3,3,242,119,7,7,9,10,9,5,6,11,10,53,79,116,154,169,103,36,38,13,6,3,90,28,8,9,11,6,9,8,12,15,15,44,75,124,148,131,147,91,18,7,7,3,23,9,10,11,12,10,10,11,14,16,17,26,50,65,101,110,166,31,14,11,10,10,14,11,11,17,17,15,13,17,18,25,24,24,51,76,95,203,77,21,12,16,16,16,12,12,10,21,24,19,23,26,28,28,32,23,27,36,37,42,45,40,15,23,15,18,14,10,12,33,63,29,28,32,34,35,43,27,28,30,32,42,81,50,52,45,29,26,13,14,14,18,19,37,27,35,44,45,49,35,35,36,32,172,210,120,84,45,33,31,16,14,14,19,20,23,31,33,46,54,57,54,38,47,86,218,165,330,337,76,77,73,16,15,12,16,17,27,28,39,46,66,71,76,65,90,90,58,63,51,229,327,90,86,20,15,14,15,26,33,38,53,48,70,67,78,98,76,37,32,38,31,54,151,321,364,21,14,12,17,24,35,39,53,48,70,66,78,100,74,38,33,36,30,51,146,316,362],
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
