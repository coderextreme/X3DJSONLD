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
    GeoViewpoint(description='GeoViewpoint_3_25',geoSystem=['GDC'],position=(2.116798394735791,103.38106271813204,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(2.116798394735791,103.38106271813204,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca4-10.x3d'],child2Url=['../../tiles/4/Malacca4-11.x3d'],child3Url=['../../tiles/4/Malacca5-10.x3d'],child4Url=['../../tiles/4/Malacca5-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca2-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.7987358796286328,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[10,6,14,16,11,11,15,9,8,16,29,42,74,48,57,51,45,34,40,29,33,19,21,37,14,7,13,12,10,8,24,27,41,44,47,30,23,35,24,25,36,45,23,26,35,39,11,11,13,11,13,8,19,24,60,48,54,37,39,39,23,68,19,57,40,107,12,21,13,11,14,11,14,28,15,26,47,40,53,53,54,50,53,34,23,57,68,129,13,23,12,7,12,11,26,27,41,52,51,72,74,78,128,47,48,48,74,57,268,227,9,41,15,10,14,6,27,48,44,76,67,83,87,104,63,103,90,75,64,105,84,57,84,31,8,12,8,6,8,31,63,90,72,55,66,107,92,330,342,51,64,188,383,132,10,8,14,28,11,15,17,31,57,60,78,46,81,77,527,171,57,50,48,166,66,57,11,6,11,24,23,14,25,32,41,40,224,60,99,95,99,370,288,58,58,204,55,55,7,15,12,32,28,45,48,39,24,29,64,79,92,79,301,665,337,70,69,66,66,51,6,7,14,28,27,37,43,56,23,30,52,66,51,69,322,301,74,125,107,121,32,47,9,21,21,30,42,46,31,60,25,39,42,51,40,54,55,231,107,74,90,241,65,63,21,18,21,23,47,66,69,54,42,38,28,51,62,29,64,88,35,187,74,71,65,50,83,13,11,28,31,64,55,31,64,39,24,37,100,63,27,40,36,63,75,134,68,69,107,97,18,34,65,55,76,35,67,54,21,78,24,35,19,24,40,71,68,75,51,58,63,22,20,34,39,74,76,63,63,56,36,30,21,15,36,33,65,315,30,20,71,79,66,21,28,38,73,103,95,97,59,65,25,58,25,21,9,28,52,69,66,31,56,59,22,33,38,40,67,67,113,71,81,61,32,30,46,58,27,10,65,74,32,34,75,54,25,38,41,80,77,81,308,148,180,44,51,36,29,47,45,9,14,64,35,42,33,42,33,48,55,114,90,336,577,221,64,62,337,83,67,17,40,30,23,37,39,32,35,52,50,55,63,214,349,684,601,67,98,147,67,49,71,36,31,18,29,13,31,33,10,39,49,52,59,203,362,700,581,66,111,152,82,57,59,36,32,19,28,11,34,30,10,30],
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
