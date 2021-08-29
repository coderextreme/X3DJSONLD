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
    GeoViewpoint(description='GeoViewpoint_0_00',geoSystem=['GDC'],position=(0.3471685463819618,100.89750038406439,1792095.085119945),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(0.3471685463819618,100.89750038406439,0.0),range=2150514.0,child1Url=['../../tiles/1/Malacca0-0.x3d'],child2Url=['../../tiles/1/Malacca0-1.x3d'],child3Url=['../../tiles/1/Malacca1-0.x3d'],child4Url=['../../tiles/1/Malacca1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/0/Malacca0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-7.7118318363999965,92.8115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.7700953,zDimension=22,zSpacing=0.7675238,height=[-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,0,0,143,6,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,2,5,566,734,531,8,10,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,1,1,6,4,0,2,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,2,260,137,37,1,0,1,0,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,4,3,293,216,31,10,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,3,3,278,116,67,15,6,2,2,0,2,3,-99,-99,-99,-99,-99,-99,-99,-99,9,4,2,206,271,25,24,8,11,5,23,17,0,0,-99,-99,-99,-99,-99,-99,-99,-99,7,2,9,971,61,64,23,7,2,3,4,3,1,0,-99,-99,-99,-99,-99,-99,-99,6,2,7,1256,134,97,39,11,5,1,2,-99,2,4,4,-99,-99,-99,-99,-99,-99,2,109,0,123,539,55,10,3,1,4,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,6,1,178,233,65,33,25,7,4,3,-99,1,1,1,3,12,-99,-99,-99,-99,-99,-99,118,0,372,95,33,38,3,5,13,2,-99,3,0,1,1,2,-99,-99,-99,-99,-99,-99,4,0,1281,36,8,6,3,70,3,0,-99,0,1,-1,3,3,-99,-99,-99,3,83,2,18,1390,279,0,0,17,69,92,16,3,2,3,0,1,2,2,-99,-99,-99,0,0,3,824,62,1,0,1,466,62,13,-99,-99,2,1,1,2,-1,0,-99,-99,-99,0,26,1703,299,4,-99,2,21,249,386,22,-99,-99,-99,-99,2,1,-1,1,-99,-99,1,-3,495,40,1,-99,-99,0,131,395,457,7,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,2,0,0,1,-99,-99,4,580,256,5,7,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,-99,3,-99,-99,-99,-99,3,74,36,4,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,-99,-99,-99,-99,-99,2,1,12,2,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,4,-99,-99,-99,-99,3,7,42,5,0,-99,-99,-99,1,3,3,2,-99,-99,-99,-99,3,3,-99,-99,-99,-99,3,8,44,4,1,-99,-99,-99,1,4,3,2,-99,-99,-99,-99],
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
