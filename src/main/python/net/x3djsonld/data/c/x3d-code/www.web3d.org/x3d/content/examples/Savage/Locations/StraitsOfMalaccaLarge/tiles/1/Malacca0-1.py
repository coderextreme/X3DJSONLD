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
    GeoViewpoint(description='GeoViewpoint_1_01',geoSystem=['GDC'],position=(-3.682331645009019,104.94050057609658,896047.5425599725),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(-3.682331645009019,104.94050057609658,0.0),range=1075257.0,child1Url=['../../tiles/2/Malacca0-2.x3d'],child2Url=['../../tiles/2/Malacca0-3.x3d'],child3Url=['../../tiles/2/Malacca1-2.x3d'],child4Url=['../../tiles/2/Malacca1-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/Malacca0-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-7.711831836399998,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.38504764,zDimension=22,zSpacing=0.3837619,height=[-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,2,0,1,0,1,1,153,1,6,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,1,-1,165,151,1013,1541,428,27,155,188,-99,-99,-99,-99,-99,-99,-99,-99,4,3,1,5,4,1,527,715,617,866,509,236,9,11,-99,-99,-99,-99,-99,-99,-99,-99,0,3,2,2,3,97,594,300,160,56,13,2,1,0,-99,-99,-99,-99,-99,-99,-99,-99,3,3,1,1,2,24,5,3,5,2,3,2,2,2,-99,-99,-99,2,1,2,2,2,2,69,26,4,31,2,2,0,2,1,2,2,1,2,-99,-99,-99,2,0,3,2,2,253,1042,144,62,34,4,1,1,2,2,0,2,0,1,-99,1,1,1,1,2,5,523,1316,349,74,30,27,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,4,-3,2,4,5,228,732,245,52,34,41,17,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,2,3,7,1490,850,570,81,77,49,9,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,5,2,2,311,375,106,67,68,24,17,9,12,4,3,1,2,2,1,0,1,3,2,3,41,259,1341,101,70,64,30,25,7,6,6,2,1,3,1,0,2,1,0,0,2,4,269,1486,210,41,23,13,22,7,9,11,12,1,2,1,25,35,16,0,0,1,4,131,1108,635,134,68,62,60,4,2,6,4,4,16,1,3,3,1,3,3,0,0,8,1402,986,200,66,46,53,5,22,7,5,17,8,2,3,1,2,1,4,3,2,1,332,1996,323,80,44,32,29,24,33,1,1,0,4,2,2,1,-99,-99,3,3,2,0,1186,331,130,91,91,42,47,3,10,2,2,3,3,2,3,1,-99,-99,3,1,3,4,534,172,114,140,254,22,8,1,1,2,4,1,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,488,269,51,43,18,4,4,3,1,33,3,0,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,397,60,93,25,34,21,5,2,2,6,6,3,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,62,29,30,44,25,0,8,0,5,0,4,-99,-99,4,0,2,2,1,0,0,6,9,62,27,30,48,24,3,8,0,4,1,3,-99,-99,3,1,1,1,2,-1,1,6,9],
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
