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
    GeoViewpoint(description='GeoViewpoint_1_10',geoSystem=['GDC'],position=(4.343236000485898,100.45856257932074,326589.76551218075),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(4.343236000485898,100.45856257932074,0.0),range=391907.72,child1Url=['../../tiles/2/Malacca2-0.x3d'],child2Url=['../../tiles/2/Malacca2-1.x3d'],child3Url=['../../tiles/2/Malacca3-0.x3d'],child4Url=['../../tiles/2/Malacca3-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/Malacca1-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.070985940057265,98.7885625,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.16700001,zDimension=22,zSpacing=0.12116667,height=[707,534,183,94,46,8,7,0,0,2,1,0,0,-2,1,0,10,19,75,852,254,326,140,98,43,14,5,0,3,0,2,1,1,3,0,0,0,118,100,338,784,416,181,65,28,12,2,0,-1,2,2,0,1,0,0,3,1,11,85,692,888,489,107,72,31,7,1,4,1,0,0,0,0,1,1,0,3,3,21,67,71,1247,519,84,20,13,11,2,0,0,1,0,0,0,0,3,1,3,12,21,164,130,1037,90,102,1,-4,0,0,1,2,0,0,-1,3,0,1,1,6,19,18,62,906,878,118,150,0,0,0,0,0,3,0,1,0,-2,0,0,0,4,9,57,49,934,258,365,1533,2,-1,-1,0,0,5,-2,1,1,0,-2,0,5,3,14,33,673,464,124,146,160,0,2,-99,-99,-99,-99,-99,-99,0,0,-6,-3,8,3,13,57,615,886,157,136,267,1,-5,-99,-99,-99,-99,-99,-99,0,1,-3,15,17,53,28,81,1620,397,116,102,78,1,-1,-99,-99,-99,-99,-99,-99,1,0,0,10,25,16,23,1274,1622,348,169,139,145,0,0,-99,-99,-99,-99,-99,-99,0,0,0,4,32,47,49,483,1099,250,207,147,167,1,3,-99,-99,-99,-99,-99,-99,0,0,0,5,750,77,50,735,1688,641,242,327,225,1,2,-99,-99,-99,-99,-99,-99,6,3,0,16,759,68,84,1212,1248,270,237,501,826,1,2,-99,-99,-99,-99,-99,-99,0,3,1,14,701,46,80,991,1001,429,220,109,346,-1,1,-99,-99,-99,-99,-99,-99,0,2,6,6,34,63,75,777,1260,340,175,83,177,-99,-99,-99,-99,-99,-99,-99,-99,2,2,4,7,145,143,521,817,1313,390,288,162,96,-99,-99,-99,-99,-99,-99,-99,-99,0,0,11,32,310,1036,164,776,707,1102,369,688,205,-99,-99,-99,-99,-99,-99,-99,-99,2,26,7,470,500,768,408,320,967,1314,1351,456,232,-99,-99,-99,-99,-99,-99,-99,-99,2,12,7,31,480,381,160,729,868,673,784,246,193,-99,-99,-99,-99,-99,-99,-99,-99,2,3,28,15,53,566,675,591,664,681,669,156,40,-99,-99,-99,-99,-99,-99,-99,-99,3,2,24,18,47,535,704,560,638,687,706,172,49],
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
