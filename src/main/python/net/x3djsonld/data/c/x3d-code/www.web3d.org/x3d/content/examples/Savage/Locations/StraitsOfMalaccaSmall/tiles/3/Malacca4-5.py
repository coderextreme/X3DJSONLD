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
    GeoViewpoint(description='GeoViewpoint_3_45',geoSystem=['GDC'],position=(3.3890484551644233,103.38106271813204,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(3.3890484551644233,103.38106271813204,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca8-10.x3d'],child2Url=['../../tiles/4/Malacca8-11.x3d'],child3Url=['../../tiles/4/Malacca9-10.x3d'],child4Url=['../../tiles/4/Malacca9-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca4-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.070985940057265,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[34,43,22,37,47,38,65,30,33,35,11,12,3,4,4,4,4,4,4,4,5,4,26,53,20,43,37,27,33,29,33,32,14,10,6,2,3,3,4,5,5,4,5,5,29,29,39,42,25,12,30,24,30,33,30,25,7,3,3,3,4,4,3,3,4,4,80,50,30,37,41,25,23,31,37,33,11,27,7,5,5,5,3,5,6,4,3,4,210,94,31,33,38,54,15,34,36,34,11,6,4,5,5,4,5,4,3,4,4,3,259,166,55,71,69,35,27,28,33,34,29,19,5,5,4,6,5,3,2,5,4,3,342,68,41,62,88,27,10,34,35,31,11,10,2,5,5,4,6,6,6,4,4,3,89,75,58,60,37,18,53,31,11,5,29,12,2,7,5,4,4,4,5,6,5,1,73,61,77,68,70,27,30,10,32,32,9,9,6,6,4,5,5,5,5,6,4,4,106,58,80,59,48,32,19,25,33,29,11,9,5,5,4,4,3,6,4,6,4,6,58,35,50,49,15,25,29,26,30,30,29,9,4,6,6,5,5,4,4,6,4,5,34,21,33,297,35,18,29,29,32,29,34,8,5,5,5,6,5,4,5,5,5,2,56,26,29,31,45,16,30,19,34,31,31,13,4,5,5,5,5,3,6,5,5,7,44,21,64,17,119,27,33,28,34,37,31,7,7,5,4,4,6,5,4,5,6,4,63,29,21,26,35,30,31,24,33,32,12,8,4,6,5,5,5,5,6,5,6,5,37,18,25,41,22,35,32,29,36,14,9,6,20,5,6,3,5,5,6,5,6,6,71,50,25,27,25,15,32,10,26,31,14,3,6,5,5,5,4,4,5,5,5,6,162,73,35,13,14,33,18,13,10,6,6,8,4,2,5,6,4,5,4,5,8,1,274,124,72,20,21,8,15,12,17,9,5,12,2,5,4,7,6,5,5,5,6,4,82,60,24,35,22,9,9,15,7,7,10,4,5,3,3,4,3,5,4,6,4,5,93,74,22,40,32,17,9,33,9,6,8,3,6,5,5,2,4,2,4,5,2,1,97,66,23,39,31,18,10,32,7,7,7,3,6,5,4,3,4,5,5,7,2,0],
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
