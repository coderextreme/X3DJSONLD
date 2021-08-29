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
    GeoViewpoint(description='GeoViewpoint_3_26',geoSystem=['GDC'],position=(2.116798394735791,104.21606275779241,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(2.116798394735791,104.21606275779241,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca4-12.x3d'],child2Url=['../../tiles/4/Malacca4-13.x3d'],child3Url=['../../tiles/4/Malacca5-12.x3d'],child4Url=['../../tiles/4/Malacca5-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca2-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.7987358796286328,103.79856273796223,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[19,19,20,37,85,85,109,38,30,14,5,3,3,5,4,2,4,3,3,3,1,3,26,55,29,190,18,39,41,14,4,19,4,4,5,4,6,2,3,2,3,3,2,1,107,70,352,270,31,49,60,13,6,1,4,3,5,6,6,4,4,3,2,3,3,2,129,47,49,37,12,22,23,9,3,3,3,4,5,3,3,2,3,4,5,3,2,4,227,30,43,12,12,8,9,9,2,2,4,3,1,4,4,3,3,4,4,3,2,5,57,29,33,24,61,22,20,7,2,2,2,4,4,3,6,4,4,3,5,3,2,3,132,58,34,15,63,14,16,6,2,3,0,2,3,3,5,5,5,5,4,4,2,5,57,38,20,18,70,30,19,5,0,2,3,1,2,3,4,2,4,3,5,2,2,3,55,28,27,19,36,44,31,21,2,2,1,2,3,3,4,4,4,3,5,5,2,3,51,23,25,69,37,41,9,1,1,0,2,1,2,2,2,4,2,4,3,4,4,2,47,107,42,25,50,27,4,4,1,2,0,0,2,1,3,3,2,4,4,3,4,5,63,39,44,37,58,65,3,3,1,3,2,2,0,1,2,3,2,1,4,3,5,5,50,77,40,19,35,14,1,2,1,3,3,1,0,3,0,1,4,3,2,2,5,2,69,53,73,33,79,3,2,2,2,3,2,1,1,4,1,1,2,2,3,3,2,3,58,59,137,82,41,5,3,21,1,3,2,2,3,3,4,2,3,0,3,1,2,1,79,48,31,69,6,4,5,4,3,4,2,0,2,2,3,4,2,1,3,2,2,4,59,37,94,38,38,4,5,4,4,3,3,3,3,2,3,3,0,4,1,0,4,2,54,188,54,34,2,5,3,5,256,4,3,3,4,3,4,3,2,2,5,4,3,1,42,58,34,14,2,4,3,3,4,3,5,3,2,4,2,2,5,7,5,2,4,4,52,25,21,4,4,4,2,3,5,3,6,4,2,6,5,2,2,4,3,5,3,3,39,37,7,3,5,2,3,4,2,3,3,5,4,4,4,5,6,0,0,3,3,4,30,32,5,2,3,2,3,5,3,5,3,4,4,2,2,6,3,2,0,5,3,3],
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
