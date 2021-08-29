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
    GeoViewpoint(description='GeoViewpoint_3_16',geoSystem=['GDC'],position=(1.4806733645214747,104.21606275779241,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(1.4806733645214747,104.21606275779241,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca2-12.x3d'],child2Url=['../../tiles/4/Malacca2-13.x3d'],child3Url=['../../tiles/4/Malacca3-12.x3d'],child4Url=['../../tiles/4/Malacca3-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca1-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.1626108494143166,103.79856273796223,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[8,7,5,2,6,5,4,-7,6,4,9,13,6,5,28,22,22,24,17,14,2,1,8,9,8,9,9,-2,12,13,15,14,4,19,8,6,0,31,6,5,0,7,3,0,5,5,6,5,6,5,11,10,4,10,6,9,12,7,7,1,1,0,4,19,1,2,0,8,6,4,6,7,-1,9,16,4,9,12,15,11,3,3,1,3,0,2,0,1,7,13,7,-4,16,3,15,17,-11,5,1,10,8,17,3,3,3,1,0,2,2,3,26,33,14,17,2,4,-10,1,6,-5,10,9,17,5,3,4,4,2,1,2,2,2,25,19,15,26,0,-3,11,1,5,4,6,0,9,4,2,5,2,1,0,3,1,2,63,15,24,41,16,3,6,2,35,35,57,0,21,6,4,5,5,3,3,3,3,2,45,10,26,8,0,4,2,8,31,7,24,7,2,2,2,2,4,3,4,2,2,3,28,20,7,21,10,0,12,7,28,13,33,5,3,3,3,3,3,3,2,3,2,2,18,27,10,35,8,8,2,54,35,25,52,8,17,3,2,1,1,1,4,1,2,0,10,8,13,40,27,17,0,14,27,47,43,18,3,2,0,1,2,2,1,2,3,3,15,41,82,30,39,12,22,6,19,43,50,48,2,2,1,0,2,2,3,2,2,3,32,26,41,19,36,7,39,27,15,9,11,29,2,2,0,2,0,3,1,1,1,3,64,46,16,37,43,10,39,67,32,51,27,44,3,1,4,2,2,2,1,1,2,1,36,66,61,29,11,22,58,37,61,29,48,24,2,1,3,2,1,1,2,0,3,2,92,54,58,22,12,35,53,70,44,28,49,10,3,1,1,4,2,3,2,1,0,1,53,70,32,13,27,62,65,89,59,13,24,2,2,1,2,1,3,2,0,0,1,0,33,27,36,6,17,21,59,54,28,18,31,4,3,3,4,2,2,3,3,1,1,4,36,11,12,20,40,43,76,38,14,4,5,5,4,3,2,3,1,1,2,4,2,0,19,19,20,34,86,82,119,32,27,13,5,3,3,4,3,3,5,2,2,3,1,2,19,19,20,37,85,85,109,38,30,14,5,3,3,5,4,2,4,3,3,3,1,3],
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
