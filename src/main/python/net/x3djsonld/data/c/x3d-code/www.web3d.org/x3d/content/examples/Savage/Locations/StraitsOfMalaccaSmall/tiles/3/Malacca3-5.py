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
    GeoViewpoint(description='GeoViewpoint_3_35',geoSystem=['GDC'],position=(2.752923424950107,103.38106271813204,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(2.752923424950107,103.38106271813204,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca6-10.x3d'],child2Url=['../../tiles/4/Malacca6-11.x3d'],child3Url=['../../tiles/4/Malacca7-10.x3d'],child4Url=['../../tiles/4/Malacca7-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca3-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.434860909842949,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[49,52,59,203,362,700,581,66,111,152,82,57,59,36,32,19,28,11,34,30,10,30,29,57,76,123,427,477,483,420,451,489,254,124,82,26,25,37,22,11,34,18,9,29,51,80,105,89,532,553,470,338,355,386,483,257,115,57,29,21,15,62,22,33,16,52,49,43,89,70,545,554,469,425,359,345,312,328,32,30,27,17,14,15,27,48,64,28,41,78,126,116,333,606,127,144,656,340,202,569,51,38,32,55,28,13,5,55,32,15,47,49,82,160,565,323,148,206,70,328,259,40,95,65,35,30,15,19,66,50,25,69,62,79,116,302,110,261,219,203,636,248,316,203,69,28,30,10,13,7,37,37,30,34,64,101,91,121,131,524,357,292,258,131,346,61,23,24,8,7,4,12,45,12,4,2,71,85,95,129,135,338,456,546,171,332,48,36,62,32,12,5,10,7,9,5,4,4,70,73,117,134,98,506,608,429,116,240,53,49,56,25,7,4,7,4,4,3,4,4,66,105,136,76,124,200,85,210,115,79,21,35,25,11,10,9,3,3,1,3,4,3,64,84,63,95,107,76,577,405,563,58,25,5,53,6,11,3,3,2,4,4,3,2,87,72,65,96,78,624,146,227,27,14,37,33,11,15,6,5,4,4,3,2,4,3,57,61,125,202,122,197,134,66,41,38,19,17,21,7,5,7,5,5,4,2,4,4,77,109,50,287,182,126,44,33,16,7,7,18,12,6,4,5,5,6,5,5,2,3,85,82,49,51,61,31,26,19,15,10,9,23,6,4,5,4,4,5,5,6,4,2,57,160,27,31,22,21,27,23,19,11,13,13,4,6,5,6,2,3,4,7,5,7,66,61,41,21,46,16,13,29,41,42,37,14,5,4,4,3,6,4,4,4,6,6,48,71,28,33,37,76,36,14,29,27,27,20,5,4,5,4,4,5,5,4,4,7,59,47,12,79,45,64,71,35,31,22,31,18,4,3,5,2,4,4,5,6,4,4,26,38,22,43,49,32,64,30,32,34,13,7,3,4,5,3,4,4,4,6,5,4,34,43,22,37,47,38,65,30,33,35,11,12,3,4,4,4,4,4,4,4,5,4],
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
