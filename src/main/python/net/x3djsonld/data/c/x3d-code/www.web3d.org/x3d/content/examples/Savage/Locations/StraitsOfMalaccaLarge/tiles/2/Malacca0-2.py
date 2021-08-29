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
    GeoViewpoint(description='GeoViewpoint_2_02',geoSystem=['GDC'],position=(-5.69708174070451,102.91900048008048,448023.77127998625),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(-5.69708174070451,102.91900048008048,0.0),range=537628.5,child1Url=['../../tiles/3/Malacca0-4.x3d'],child2Url=['../../tiles/3/Malacca0-5.x3d'],child3Url=['../../tiles/3/Malacca1-4.x3d'],child4Url=['../../tiles/3/Malacca1-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca0-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-7.711831836399999,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.19252382,zDimension=22,zSpacing=0.19188096,height=[-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,2,2,1,1,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,3,2,1,1,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,0,2,3,2,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,1,3,2,2,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,2,4,3,0,1,-99,-99,-99,-99,-99,-99,2,1,0,0,1,1,1,1,2,4,2,2,2,2,1,2,-99,-99,-99,-99,-99,-99,1,1,2,1,2,1,2,3,1,1,2,1,119,1,0,1,-99,-99,-99,-99,-99,-99,2,4,0,0,1,0,2,3,1,1,2,200,6,216,235,286,-99,-99,-99,-99,-99,-99,2,2,2,0,2,3,1,2,2,2,157,232,1142,296,113,136,-99,-99,-99,-99,-99,-99,1,3,2,3,0,1,2,3,3,298,937,1400,1218,420,128,102,-99,0,0,2,2,2,3,0,2,2,0,5,4,1,406,546,1448,965,406,90,64,68,-99,4,2,1,2,2,0,2,2,3,1,1,132,530,1000,630,395,287,151,63,36,34,-99,2,4,2,1,1,3,2,4,4,2,75,301,702,720,172,198,114,62,77,23,23,-99,5,2,0,4,1,2,3,2,5,39,437,2224,1668,950,273,97,94,76,25,48,48,-99,4,1,0,3,3,3,3,5,70,912,951,936,1096,567,297,61,74,71,68,35,38,3,3,1,3,3,3,2,4,227,830,938,702,1086,312,443,147,95,41,43,55,27,27,3,3,0,3,3,2,1,35,160,343,488,124,129,126,78,77,54,48,38,23,19,18,4,3,0,2,3,2,2,37,165,347,471,129,127,130,70,74,53,42,37,25,19,18],
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
