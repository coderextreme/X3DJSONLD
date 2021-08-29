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
    GeoViewpoint(description='GeoViewpoint_2_03',geoSystem=['GDC'],position=(-5.69708174070451,106.96200067211268,448023.77127998613),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(-5.69708174070451,106.96200067211268,0.0),range=537628.5,child1Url=['../../tiles/3/Malacca0-6.x3d'],child2Url=['../../tiles/3/Malacca0-7.x3d'],child3Url=['../../tiles/3/Malacca1-6.x3d'],child4Url=['../../tiles/3/Malacca1-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca0-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-7.711831836399999,104.94050057609658,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.20215002,zDimension=22,zSpacing=0.19188096,height=[-99,4,3,2,2,1,0,0,1,0,0,0,1,2,1,84,153,108,1,0,6,-99,2,2,2,1,1,1,3,3,1,0,0,0,250,851,772,176,747,45,6,72,-99,2,3,4,2,0,0,2,166,264,146,567,976,1425,1560,1001,425,172,24,22,169,-99,2,4,5,3,2,1,1,657,492,778,1148,1644,882,1023,630,546,693,431,791,45,2,3,5,5,4,3,4,276,513,373,697,425,684,718,842,934,500,1405,201,12,10,1,4,65,9,114,74,475,710,936,1552,1144,532,325,1017,388,337,31,44,1,0,4,2,2,1,2,4,26,111,149,619,149,380,60,107,60,59,31,12,9,3,6,1,1,1,1,1,2,605,154,36,48,46,38,19,12,14,6,10,0,8,2,3,3,1,1,2,2,1,548,27,9,6,1,0,5,6,0,1,1,2,2,2,2,3,2,1,3,1,1,-3,2,1,2,3,0,1,1,1,0,0,0,1,2,1,0,1,267,1,3,22,6,2,1,1,1,1,1,1,0,0,1,3,1,2,0,1,286,662,7,35,11,4,1,1,1,2,2,0,1,1,1,2,2,1,1,2,2,136,92,64,27,51,4,2,0,2,3,0,1,0,0,3,1,1,1,3,2,1,102,52,46,45,16,1,1,1,2,1,1,2,1,2,0,1,2,1,1,3,2,68,42,38,26,25,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,34,24,23,23,27,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,23,34,27,13,3,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,48,28,6,2,4,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,38,27,9,5,0,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,27,8,11,5,4,1,4,3,3,1,3,3,1,2,1,2,2,3,0,0,0,18,11,6,9,6,4,4,2,4,2,2,1,3,4,1,2,2,1,0,3,1,18,12,6,11,6,3,3,3,4,4,1,0,3,4,2,1,4,1,0,1,1],
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
