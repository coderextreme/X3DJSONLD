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
    GeoViewpoint(description='GeoViewpoint_3_66',geoSystem=['GDC'],position=(26.906134432197852,57.084809373449744,29163.6915586987),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.906134432197852,57.084809373449744,0.0),range=34996.43,child1Url=['../../tiles/4/StraitsOfHormuz-Small12-12.x3d'],child2Url=['../../tiles/4/StraitsOfHormuz-Small12-13.x3d'],child3Url=['../../tiles/4/StraitsOfHormuz-Small13-12.x3d'],child4Url=['../../tiles/4/StraitsOfHormuz-Small13-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/StraitsOfHormuz-Small6-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.794039492713402,56.93416835294592,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0143467635,zDimension=22,zSpacing=0.010675709,height=[1,4,2,0,3,2,0,5,25,24,54,31,33,78,77,87,90,165,171,175,216,202,3,1,2,0,0,0,2,10,7,40,30,25,31,52,74,75,81,189,121,131,185,163,2,0,1,2,3,2,1,7,12,29,20,21,31,53,77,130,94,147,116,168,174,163,0,2,1,1,0,1,0,8,9,15,19,23,32,52,87,137,87,100,113,103,162,161,0,0,0,2,1,2,2,10,17,14,20,23,31,63,106,99,76,90,93,85,112,128,1,1,1,0,2,0,12,10,15,13,22,25,34,58,89,82,76,147,126,68,71,78,0,2,0,1,1,2,9,11,11,11,16,27,39,56,80,75,61,91,85,82,61,63,1,3,2,1,1,5,8,12,8,11,15,24,44,71,69,79,88,61,53,48,47,49,2,2,0,0,0,5,7,8,6,8,16,24,48,116,54,86,58,39,39,39,41,40,0,1,1,3,6,8,5,8,7,13,14,22,41,63,49,65,44,32,31,35,37,37,0,2,0,3,5,3,6,7,6,8,14,21,38,58,42,58,33,28,26,32,34,33,2,3,2,3,5,6,7,7,8,9,14,19,28,45,40,39,28,24,29,32,35,34,0,4,4,3,4,5,8,5,8,7,12,17,27,59,33,37,22,26,26,30,32,31,3,3,3,3,1,2,5,7,8,8,12,17,24,40,29,32,21,22,26,29,30,32,1,3,4,0,0,5,5,6,8,10,11,13,20,35,26,20,21,24,25,26,28,28,1,2,4,1,4,5,6,7,7,8,10,12,18,20,19,16,22,23,25,28,29,29,3,2,3,4,4,4,5,8,8,12,11,15,14,21,19,18,20,23,25,26,32,30,6,4,4,4,4,6,7,9,10,11,12,13,14,35,22,20,21,23,27,28,35,35,5,4,10,2,6,6,8,10,14,11,13,10,14,28,31,24,22,25,28,34,38,38,2,4,3,6,5,4,5,17,17,12,11,10,18,21,32,28,25,24,28,32,38,39,2,7,4,-1,6,6,9,32,19,11,9,14,24,25,44,32,29,32,29,33,33,37,2,8,4,3,6,6,8,30,18,11,10,14,24,26,43,33,30,33,29,34,34,35],
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
