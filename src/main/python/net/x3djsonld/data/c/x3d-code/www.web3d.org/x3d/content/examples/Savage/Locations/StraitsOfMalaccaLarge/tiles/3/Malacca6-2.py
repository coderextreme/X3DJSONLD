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
    GeoViewpoint(description='GeoViewpoint_3_62',geoSystem=['GDC'],position=(5.384043785620683,97.86525024004024,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(5.384043785620683,97.86525024004024,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca12-4.x3d'],child2Url=['../../tiles/4/Malacca12-5.x3d'],child3Url=['../../tiles/4/Malacca13-4.x3d'],child4Url=['../../tiles/4/Malacca13-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca6-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.376668737772938,96.85450019203219,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[2185,2303,1078,612,1045,2007,1104,854,222,114,25,37,12,50,4,2,2,2,2,1,2,2,1490,941,737,446,423,1534,612,419,995,91,86,33,15,9,2,3,1,3,2,1,0,0,1308,1614,1009,1084,983,1285,1141,167,116,41,144,5,1,1,1,1,2,3,0,0,1,0,1577,1229,1512,1062,759,826,1671,197,56,36,33,0,1,1,1,2,1,0,1,2,0,1,1319,834,645,750,158,442,205,123,136,20,29,0,1,2,1,2,1,2,1,2,1,0,2335,1406,1628,940,355,174,97,48,51,35,7,0,2,2,2,3,2,0,1,2,1,2,1255,891,484,188,71,38,26,47,68,36,3,1,3,2,3,1,2,0,2,1,0,0,354,445,243,31,18,5,31,101,15,2,1,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,103,321,40,46,8,3,5,6,1,1,2,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,18,15,68,4,5,-32,2,3,1,2,1,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,3,1,2,0,0,0,3,1,0,0,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,2,1,1,0,0,1,1,4,1,2,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,1,1,1,0,0,3,1,2,2,4,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,1,0,0,0,0,1,1,2,0,2,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,0,0,0,0,1,2,2,2,2,1,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,0,0,0,0,1,1,2,1,0,1,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,0,0,0,1,2,1,2,1,2,0,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99],
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
