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
    GeoViewpoint(description='GeoViewpoint_3_24',geoSystem=['GDC'],position=(2.116798394735791,102.54606267847167,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(2.116798394735791,102.54606267847167,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca4-8.x3d'],child2Url=['../../tiles/4/Malacca4-9.x3d'],child3Url=['../../tiles/4/Malacca5-8.x3d'],child4Url=['../../tiles/4/Malacca5-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca2-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.7987358796286328,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[2,4,3,3,4,3,4,2,1,3,4,4,3,0,1,1,2,6,2,-1,8,10,2,3,3,5,3,3,4,6,2,6,6,7,4,1,1,4,1,6,4,18,72,21,3,3,3,2,3,4,2,4,3,4,3,3,2,4,8,3,3,8,12,5,137,35,3,4,0,3,3,1,3,5,6,5,1,4,0,3,8,8,-6,10,7,6,6,12,3,3,4,4,3,4,3,5,5,2,4,2,1,5,7,8,13,11,6,7,9,13,3,4,4,4,2,4,3,3,3,3,4,-1,5,11,9,11,14,12,5,9,10,9,6,3,4,4,3,5,3,6,2,3,6,2,1,8,15,12,13,12,14,33,17,84,2,4,4,4,4,5,4,6,4,7,-2,7,13,11,25,14,15,14,9,11,8,10,3,3,2,3,4,3,4,2,3,2,12,10,11,36,25,13,19,11,17,36,13,11,3,5,2,4,5,3,4,4,3,7,11,9,8,10,32,22,36,35,192,12,8,7,6,4,4,3,2,4,2,3,3,15,10,10,11,15,48,16,26,18,133,80,14,6,5,8,3,1,3,22,6,3,11,11,10,15,11,17,142,41,7,18,131,549,9,9,5,4,7,4,1,0,9,3,9,7,9,12,16,10,46,13,45,52,91,86,34,21,4,2,2,4,5,5,13,24,21,16,10,9,8,8,11,19,24,157,226,511,152,83,3,6,8,10,6,16,19,28,14,12,30,17,15,9,9,10,9,74,55,374,51,107,6,6,4,7,10,15,27,33,24,10,30,14,12,16,25,30,15,25,54,57,178,63,12,30,6,8,19,14,24,51,31,11,13,34,23,25,10,20,14,9,48,105,241,66,46,60,26,15,62,50,23,56,36,19,32,41,38,31,27,36,36,34,47,75,24,22,38,57,19,27,39,42,44,52,46,31,288,359,55,39,46,32,24,16,51,53,37,25,38,55,29,34,50,44,45,65,74,38,39,709,534,117,37,30,22,6,11,20,26,33,64,68,20,36,56,54,58,88,94,35,32,174,1047,273,59,52,15,15,23,22,23,50,64,72,19,42,57,50,59,99,87,35,37,152,1022,231,60,39,15,15,18,23,23,49],
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
