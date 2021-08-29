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
    GeoViewpoint(description='GeoViewpoint_2_31',geoSystem=['GDC'],position=(6.391418833468428,98.87600028804829,448023.77127998625),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(6.391418833468428,98.87600028804829,0.0),range=537628.5,child1Url=['../../tiles/3/Malacca6-2.x3d'],child2Url=['../../tiles/3/Malacca6-3.x3d'],child3Url=['../../tiles/3/Malacca7-2.x3d'],child4Url=['../../tiles/3/Malacca7-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca3-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.376668737772939,96.85450019203219,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.19252382,zDimension=22,zSpacing=0.19188096,height=[2413,979,963,1255,162,26,13,3,2,2,1,-99,-99,-99,-99,-99,2,0,0,8,19,19,1250,888,1018,917,97,47,0,3,2,0,0,-99,-99,-99,-99,-99,0,0,1,9,25,27,1303,888,166,192,82,40,2,1,4,1,0,-99,-99,-99,-99,-99,0,0,1,10,206,140,1387,386,101,44,54,1,2,3,2,2,0,-99,-99,-99,-99,-99,-3,1,8,11,147,106,81,114,10,10,4,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-1,2,3,21,708,743,2,2,0,0,1,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,5,13,36,650,599,3,0,2,2,2,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,7,6,29,1039,1046,1,0,1,1,0,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,4,4,40,108,133,0,0,1,2,2,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,-4,32,84,150,139,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,0,2,2,1,1,4,5,70,137,177,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,3,6,1,3,1,4,66,38,224,299,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,2,3,3,0,1,26,53,82,245,272,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,1,2,21,6,17,121,64,36,88,68,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,6,5,2,5,25,122,66,37,20,67,34,-99,-99,-99,-99,-99,-99,2,3,2,-3,3,4,5,3,4,189,195,30,2,2,0,1,-99,-99,-99,-99,-99,-99,3,2,2,2,3,5,4,8,26,107,41,16,4,2,4,4,-99,-99,-99,-99,-99,-99,1,1,0,5,3,5,7,73,39,596,18,3,1,1,2,2,-99,-99,-99,-99,-99,-99,0,0,4,4,4,8,10,35,102,200,5,2,2,2,2,2,-99,-99,-99,-99,-99,-99,0,8,4,4,6,9,81,150,83,44,5,2,2,3,2,3,-99,3,0,1,2,0,4,5,4,5,88,25,60,100,51,13,3,3,2,2,1,1,-99,1,0,1,3,1,1,5,5,8,336,47,35,45,740,22,6,1,1,1,1,1,-99,4,0,0,4,2,1,4,8,8,281,50,37,43,685,21,5,2,0,2,2,1],
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
