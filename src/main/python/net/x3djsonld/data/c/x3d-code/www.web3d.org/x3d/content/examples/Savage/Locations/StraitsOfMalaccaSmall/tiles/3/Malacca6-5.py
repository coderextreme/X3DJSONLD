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
    GeoViewpoint(description='GeoViewpoint_3_65',geoSystem=['GDC'],position=(4.661298515593056,103.38106271813204,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(4.661298515593056,103.38106271813204,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca12-10.x3d'],child2Url=['../../tiles/4/Malacca12-11.x3d'],child3Url=['../../tiles/4/Malacca13-10.x3d'],child4Url=['../../tiles/4/Malacca13-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca6-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.343236000485898,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[701,121,51,108,81,143,45,18,22,23,27,9,37,4,6,6,7,7,6,6,7,6,1191,92,136,164,299,79,57,21,105,139,20,12,7,8,8,6,6,6,6,6,6,6,792,103,102,196,192,98,51,19,33,16,22,12,100,8,5,5,5,6,6,6,6,6,277,293,278,174,224,203,131,43,36,25,26,23,9,4,6,7,7,5,6,7,7,8,289,376,324,239,357,211,135,35,32,29,36,13,30,5,6,5,6,7,7,4,8,7,273,387,333,632,282,241,52,32,85,24,33,30,11,5,7,7,6,6,6,3,5,7,342,316,459,238,403,346,54,40,100,46,316,31,9,4,6,5,6,9,7,7,5,7,367,199,192,219,420,156,79,49,584,268,481,10,3,5,4,7,6,6,7,6,6,9,188,207,215,128,386,122,169,38,408,27,118,243,2,3,3,5,5,5,6,6,6,6,91,106,86,130,397,196,34,33,73,64,27,58,5,3,4,4,7,7,5,5,4,7,114,103,81,172,314,99,27,34,348,40,60,16,13,4,4,4,3,6,6,6,6,7,341,65,71,82,272,223,29,24,169,43,43,9,11,7,5,5,2,4,3,5,5,7,552,86,90,211,261,123,36,68,290,41,18,50,4,4,6,6,8,4,4,6,7,5,923,179,135,104,166,107,39,112,249,39,13,9,3,6,7,8,5,7,5,4,4,5,301,340,50,118,140,144,29,15,23,37,6,105,3,6,4,6,7,5,3,2,-1,3,288,77,67,37,64,94,27,66,42,9,25,9,7,5,7,6,4,7,7,7,5,10,796,117,82,67,180,164,21,14,41,49,35,12,5,5,6,5,5,5,6,6,5,6,368,268,40,28,312,27,19,11,49,22,109,4,7,5,6,4,4,3,3,6,7,8,553,70,65,145,125,33,18,16,22,20,8,48,4,7,4,6,4,6,5,8,8,5,327,391,226,68,31,25,17,22,34,32,22,7,6,6,5,6,7,4,5,4,7,4,380,249,77,151,55,39,24,22,26,34,9,5,7,6,3,5,5,5,5,4,3,4,392,233,61,127,62,41,19,24,32,28,9,5,6,7,6,9,6,6,4,8,5,4],
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
