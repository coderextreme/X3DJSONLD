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
    GeoViewpoint(description='GeoViewpoint_3_62',geoSystem=['GDC'],position=(26.906134432197852,55.87968120941913,29163.6915586987),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.906134432197852,55.87968120941913,0.0),range=34996.43,child1Url=['../../tiles/4/StraitsOfHormuz-Small12-4.x3d'],child2Url=['../../tiles/4/StraitsOfHormuz-Small12-5.x3d'],child3Url=['../../tiles/4/StraitsOfHormuz-Small13-4.x3d'],child4Url=['../../tiles/4/StraitsOfHormuz-Small13-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/StraitsOfHormuz-Small6-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.794039492713402,55.729040188915306,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0143467635,zDimension=22,zSpacing=0.010675709,height=[8,4,6,4,12,16,22,31,26,5,7,10,13,12,11,17,13,8,8,8,8,8,1,2,4,4,7,3,13,40,20,14,20,23,15,13,14,23,25,15,16,26,18,50,0,1,3,2,1,4,8,10,9,20,36,50,34,22,29,26,25,18,31,117,74,71,3,1,4,54,3,3,4,9,17,44,54,79,72,78,31,44,42,44,71,59,133,122,3,13,-13,3,2,8,0,10,21,26,70,92,86,36,85,39,48,80,29,32,23,24,3,0,-6,5,0,3,4,5,12,40,61,68,104,46,64,30,53,35,47,28,43,44,4,0,-2,1,4,4,5,9,12,22,52,55,87,61,171,50,39,27,28,29,26,25,8,19,-15,0,3,24,8,11,13,25,41,66,49,50,116,88,26,27,24,26,18,18,-8,12,-5,5,2,2,7,15,20,31,37,48,32,67,77,22,20,24,21,23,34,34,6,7,-17,6,0,3,9,18,39,45,54,32,33,70,81,21,13,18,25,28,33,33,7,17,-14,2,1,9,12,27,24,43,21,55,25,100,31,20,15,21,28,32,34,36,36,12,-19,4,35,9,17,25,26,18,5,9,10,9,13,18,14,17,25,38,41,42,3,0,1,9,24,-1,14,70,35,12,3,3,5,7,10,10,9,15,25,55,44,44,13,31,9,22,109,12,3,7,4,0,9,23,5,1,4,3,12,16,66,83,64,65,-3,9,8,33,71,5,8,4,1,-2,2,6,5,2,7,3,14,39,47,113,70,69,0,6,14,27,19,5,-14,0,5,1,5,-3,0,-1,2,5,7,7,10,64,75,112,1,19,16,15,9,-13,15,9,0,1,-1,4,0,1,0,1,15,7,11,3,8,7,-3,6,9,-11,1,-1,4,-2,19,0,0,-6,2,2,0,1,15,-4,14,6,6,5,-11,-2,10,0,-1,-2,5,-6,-5,10,-2,11,8,-11,4,16,-22,17,1,12,3,4,-8,6,-1,-11,9,0,3,0,18,7,4,0,6,5,0,-36,6,14,1,0,9,9,2,0,4,-9,10,-11,8,1,20,4,2,3,6,0,0,-2,17,8,1,0,5,5,1,5,2,-6,6,-12,6,3,19,3,3,6,3,0,0,0,16,7,1,0,5,5],
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
