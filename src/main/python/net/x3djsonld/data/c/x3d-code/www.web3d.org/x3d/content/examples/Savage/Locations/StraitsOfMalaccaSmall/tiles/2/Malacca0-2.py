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
    GeoViewpoint(description='GeoViewpoint_2_02',geoSystem=['GDC'],position=(1.1626108494143166,102.96356269830186,163294.88275609037),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(1.1626108494143166,102.96356269830186,0.0),range=195953.86,child1Url=['../../tiles/3/Malacca0-4.x3d'],child2Url=['../../tiles/3/Malacca0-5.x3d'],child3Url=['../../tiles/3/Malacca1-4.x3d'],child4Url=['../../tiles/3/Malacca1-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca0-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.07952382,zDimension=22,zSpacing=0.060583334,height=[29,38,38,21,19,28,29,26,27,23,26,18,5,10,9,15,1,6,6,4,4,4,32,37,35,21,20,21,29,28,27,25,19,9,7,29,6,6,3,5,2,6,4,4,27,14,31,32,23,30,25,28,28,25,23,6,2,7,6,6,10,4,3,2,5,6,33,30,26,26,33,31,24,30,25,22,1,7,7,4,5,13,9,6,6,151,7,3,24,30,26,28,14,10,5,5,3,6,10,19,6,3,4,18,17,24,4,54,4,14,9,27,30,25,27,27,13,32,31,33,15,19,12,2,5,14,18,4,3,7,66,112,22,32,4,0,19,27,7,8,7,25,6,21,17,3,4,4,17,3,5,5,1,7,17,30,-1,5,10,4,11,7,6,9,14,25,4,8,5,2,5,1,4,3,-4,5,7,14,27,19,2,13,5,4,2,14,22,5,3,6,3,10,1,2,3,2,13,8,11,0,35,9,8,10,4,5,18,12,10,4,5,9,12,45,1,0,3,0,7,18,11,5,21,28,6,4,2,2,2,5,2,1,2,3,5,4,1,0,2,6,0,9,1,2,32,31,5,2,1,0,2,2,1,0,4,5,5,5,5,2,2,2,6,-22,21,17,34,22,8,3,3,3,1,1,2,3,3,3,3,6,2,2,-11,10,21,26,8,5,23,2,19,5,2,1,3,2,2,0,2,2,4,1,12,10,14,11,50,37,1,2,5,21,14,6,4,2,8,0,1,3,0,4,2,0,12,12,23,19,50,50,3,25,13,14,9,3,3,5,4,0,2,1,3,1,3,4,21,11,66,15,6,4,34,9,3,9,4,3,3,4,2,1,3,2,1,3,6,8,12,79,23,63,19,22,3,0,5,3,2,0,3,4,0,4,5,4,4,0,11,13,14,389,61,19,69,70,2,3,3,4,3,4,0,3,2,4,4,3,-3,9,8,9,14,28,76,60,58,64,2,2,2,4,1,0,3,6,1,3,6,10,12,13,21,9,30,47,57,50,44,21,4,4,2,2,1,6,1,5,1,3,15,10,14,10,10,61,50,29,45,29,24,26,2,2,4,5,3,7,2,5,2,4,16,11,14,11,11,60,52,29,43,24,26,27],
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
