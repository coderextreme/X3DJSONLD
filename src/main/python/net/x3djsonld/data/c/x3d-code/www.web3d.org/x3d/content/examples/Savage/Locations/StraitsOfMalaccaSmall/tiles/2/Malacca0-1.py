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
    GeoViewpoint(description='GeoViewpoint_2_01',geoSystem=['GDC'],position=(1.1626108494143166,101.29356261898111,163294.88275609037),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(1.1626108494143166,101.29356261898111,0.0),range=195953.86,child1Url=['../../tiles/3/Malacca0-2.x3d'],child2Url=['../../tiles/3/Malacca0-3.x3d'],child3Url=['../../tiles/3/Malacca1-2.x3d'],child4Url=['../../tiles/3/Malacca1-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca0-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.07952382,zDimension=22,zSpacing=0.060583334,height=[111,118,157,57,38,39,83,52,28,23,26,16,20,37,52,42,47,17,21,29,31,29,101,121,61,64,102,45,26,36,27,31,17,14,23,6,25,21,41,27,13,29,32,32,154,75,68,58,55,54,40,27,25,33,13,38,28,24,10,18,32,26,16,21,28,27,82,62,65,53,51,34,26,30,25,27,22,53,65,48,20,19,12,26,16,5,33,33,67,66,61,51,35,26,21,18,21,15,22,56,62,57,27,21,11,19,17,8,8,24,72,125,61,41,41,24,40,15,20,38,73,57,39,13,32,2,35,36,26,5,18,9,58,83,59,52,47,42,55,27,23,57,60,26,25,6,20,19,37,35,35,2,18,22,73,68,48,42,53,55,50,25,18,37,28,10,12,12,42,23,12,36,34,3,5,17,43,38,49,28,31,51,49,46,36,16,7,16,5,49,58,23,35,32,33,34,7,7,43,30,28,35,16,40,44,42,39,27,47,17,15,25,23,30,32,23,23,26,2,11,37,42,22,39,29,40,36,37,22,28,28,15,35,9,24,37,39,43,29,3,2,11,36,32,22,34,39,34,30,20,34,48,31,20,32,5,39,38,32,36,37,38,5,1,32,26,37,35,41,18,34,22,42,26,25,26,30,4,39,37,36,38,31,30,9,21,28,35,35,18,34,23,10,32,25,12,22,19,37,32,39,40,31,34,24,34,10,8,32,30,22,17,17,13,19,17,12,16,26,37,30,21,42,40,33,25,23,20,2,1,17,20,59,31,20,14,19,20,8,30,21,19,27,13,41,38,40,8,6,1,3,3,30,31,13,16,17,13,18,6,18,33,12,11,11,11,31,39,35,19,5,4,33,34,41,28,14,17,8,21,11,22,11,25,7,24,15,5,13,25,33,0,5,10,2,3,55,33,45,25,10,19,18,12,25,35,33,5,3,-7,-1,0,0,0,0,4,2,2,40,47,15,20,26,6,4,11,20,31,12,2,11,7,23,0,0,2,4,2,2,2,19,17,31,21,32,29,5,8,25,32,12,0,7,33,33,27,3,1,2,3,2,4,22,17,33,21,34,25,7,9,27,34,12,0,7,31,30,30,4,1,3,2,2,2],
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
