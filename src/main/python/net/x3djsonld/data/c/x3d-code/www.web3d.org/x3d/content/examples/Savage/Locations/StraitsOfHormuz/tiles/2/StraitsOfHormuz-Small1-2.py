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
    GeoViewpoint(description='GeoViewpoint_2_12',geoSystem=['GDC'],position=(26.1214698558067,56.632886311938265,58327.3831173974),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.1214698558067,56.632886311938265,0.0),range=69992.86,child1Url=['../../tiles/3/StraitsOfHormuz-Small2-4.x3d'],child2Url=['../../tiles/3/StraitsOfHormuz-Small2-5.x3d'],child3Url=['../../tiles/3/StraitsOfHormuz-Small3-4.x3d'],child4Url=['../../tiles/3/StraitsOfHormuz-Small3-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/StraitsOfHormuz-Small1-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.8972799768378,56.33160427093061,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.028693527,zDimension=22,zSpacing=0.021351418,height=[486,1178,404,5,0,13,-3,1,4,14,5,-10,0,1,-1,-3,-4,2,-1,0,2,1,1085,199,0,-10,0,7,2,3,11,-1,-1,-3,-1,-1,0,-3,-1,0,0,0,1,2,1097,614,174,4,59,5,0,0,3,-1,0,0,-2,-3,0,-2,-2,0,2,1,0,1,1164,664,196,29,-5,0,0,-1,-3,0,0,-3,-2,-6,-8,-3,0,2,2,0,-1,-2,1017,1257,750,0,-4,0,0,-2,0,-2,-2,-2,-1,-3,-1,3,1,3,-1,-1,-1,-1,885,1118,62,533,-1,0,0,-2,-3,-2,-2,-4,-4,-3,-3,7,-4,-1,-2,-4,0,-1,241,253,24,-4,-5,1,-1,-2,-4,-5,-1,0,-3,-1,0,-1,4,-2,-5,-2,0,-2,155,177,263,424,2,-3,-2,-1,-1,0,-3,0,3,1,-3,-6,-3,-4,0,-3,-1,0,135,630,639,629,540,0,0,-4,-1,-1,0,6,-2,-1,0,-4,-5,0,0,-1,0,1,46,230,152,-4,-1,-1,-4,-2,-1,0,2,0,-5,-1,-1,-5,4,-6,-2,-2,-1,-2,164,197,0,0,-8,-7,-6,-3,-1,0,0,-3,-9,0,-9,-1,0,2,9,0,1,-2,131,-1,-1,37,72,67,-2,2,-1,0,-3,-3,-1,-3,-3,-5,-3,0,-3,-5,-6,0,19,16,83,128,17,-25,0,0,-1,-3,-3,1,0,-7,-2,-5,-8,-1,3,1,2,0,109,-7,7,45,20,4,0,-3,-2,-1,-2,0,3,1,-3,2,-8,-2,8,-5,22,20,104,24,19,572,28,31,-3,-3,-6,0,0,-2,-2,-5,-3,-1,0,2,8,8,8,7,282,33,16,189,7,22,-7,-1,-2,0,1,-1,0,-4,-5,-2,2,-2,2,8,6,5,551,36,374,-3,0,0,-7,-11,-5,0,-1,-3,0,-3,-2,-1,-5,15,-3,7,1,0,278,3,453,7,0,-5,8,1,-3,-1,-6,-2,-1,-1,-2,2,-5,0,-6,2,0,0,2,210,410,178,-1,-4,-2,0,-4,1,-2,-2,0,-1,-2,5,3,-5,-4,0,0,0,4,-9,378,398,363,151,189,0,0,-2,0,0,-6,2,0,2,7,-4,-12,6,2,1,2,-2,133,22,5,4,5,-3,0,0,0,-3,-3,0,4,6,0,1,-8,0,1,0,3,-2,143,27,6,1,3,-2,0,0,0,-4,-2,0,3,2,0,0,-4,0,0,0],
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
