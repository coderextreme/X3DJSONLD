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
    GeoViewpoint(description='GeoViewpoint_3_14',geoSystem=['GDC'],position=(1.4806733645214747,102.54606267847167,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(1.4806733645214747,102.54606267847167,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca2-8.x3d'],child2Url=['../../tiles/4/Malacca2-9.x3d'],child3Url=['../../tiles/4/Malacca3-8.x3d'],child4Url=['../../tiles/4/Malacca3-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca1-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.1626108494143166,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[9,3,6,5,19,31,28,21,7,0,4,4,3,5,2,4,8,0,3,6,0,1,12,0,7,2,21,17,15,16,19,1,5,4,3,5,3,4,1,0,3,2,1,2,2,4,0,9,22,33,23,13,8,2,3,3,5,4,2,1,3,3,1,2,0,1,0,5,4,27,35,33,21,11,10,2,3,4,6,6,4,1,2,2,2,3,0,0,16,0,2,25,31,33,9,11,3,13,3,2,2,3,4,1,2,1,1,2,1,2,9,4,2,30,26,28,13,3,10,10,3,3,3,4,4,3,1,3,1,0,2,3,10,0,2,24,31,21,1,14,19,12,3,5,2,1,3,4,4,1,1,1,1,2,11,0,0,27,22,4,8,14,22,13,2,5,2,3,2,3,4,3,1,0,0,2,2,4,0,24,6,7,24,22,12,3,3,3,2,3,6,3,1,1,0,1,1,0,4,-3,1,4,3,5,20,24,6,7,6,3,3,4,4,1,3,2,4,1,2,1,2,13,23,17,5,9,6,7,3,4,2,3,3,4,1,2,4,1,5,4,3,0,9,23,10,15,9,17,24,11,11,5,3,4,2,3,1,2,2,2,4,3,2,0,28,10,9,5,9,10,9,12,5,2,3,2,4,3,0,2,3,2,5,2,3,2,32,16,5,2,5,7,4,0,4,4,2,2,4,3,1,5,4,2,2,5,4,2,13,2,3,0,1,2,3,3,3,3,2,1,4,3,3,0,0,6,2,6,6,6,4,2,2,3,5,4,4,4,4,3,1,5,0,2,1,0,4,5,4,5,3,3,1,1,4,3,4,3,2,3,1,3,3,1,1,1,0,3,1,1,4,4,4,6,2,3,1,2,4,2,2,5,5,2,0,2,3,0,2,4,3,3,3,6,7,5,3,4,1,3,3,3,3,3,5,2,1,3,7,5,0,1,3,5,4,4,3,4,2,3,3,4,2,3,5,2,2,4,1,2,1,4,2,1,4,6,3,4,3,11,3,4,3,2,3,3,1,1,4,4,3,2,2,-2,1,0,1,3,2,-1,7,8,2,4,3,3,4,3,4,2,1,3,4,4,3,0,1,1,2,6,2,-1,8,10],
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
